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
public class JinOriginalLOA3 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JinOriginalLOA3().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/JinOriginalLOA3.new.java.x3d");
    model.toFileJSON("../data/JinOriginalLOA3.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JinOriginalLOA3.x3d"))
        .addMeta(new meta().setName("creator").setContent("Jin Hoon Lee and Min Joo Lee"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung and Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("31 March 2011"))
        .addMeta(new meta().setName("translated").setContent("1 November 2014"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:33 GMT"))
        .addMeta(new meta().setName("description").setContent("Original version of articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."))
        .addMeta(new meta().setName("warning").setContent("All length values are rescaled from inches to meters, not compatible with other typical motion animation behavior libraries which are based in meters."))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacter00ReadMe.txt"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"))
        .addMeta(new meta().setName("reference").setContent("KoreanCharactersIllustrated.pdf"))
        .addMeta(new meta().setName("reference").setContent("JinLOA3.x3d"))
        .addMeta(new meta().setName("reference").setContent("[h-anim] Rescaling HAnim Jin models, preserving originals in Legacy directory https://web3d.org/mailman/private/h-anim_web3d.org/2024-February/002317.html"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinOriginalLOA3.x3d"))
        .addMeta(new meta().setName("generator").setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"))
        .addMeta(new meta().setName("generator").setContent("Suwon HAnim Converter"))
        .addMeta(new meta().setName("generator").setContent("Gnu Image Manipulation Program, http://www.gimp.org")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("JinOriginalLOA3.x3d"))
        .addChild(new NavigationInfo().setSpeed(1.5f ))
        .addChild(new Viewpoint().setDescription("JinLOA3").setPosition(new float[] {0f ,1f ,3f }).setCenterOfRotation(new float[] {0f ,1f ,0f }))
        .addChild(new HAnimHumanoid().setDEF("hanim_JinLOA3").setName("JinLOA3").setLoa(3).setScale(new float[] {0.0225f ,0.0225f ,0.0225f })
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorName"))
            .setMetadata(new MetadataString().setName("authorEmail"))
            .setMetadata(new MetadataString().setName("creationDate"))
            .setMetadata(new MetadataString().setName("gender"))
            .addValue(new MetadataFloat().setName("height").setValue(new MFFloat0().getArray()))
            .setMetadata(new MetadataString().setName("humanoidVersion").setValue(new MFString1().getArray())))
          .addSkeleton(new HAnimJoint("hanim_JinLOA3").setDEF("hanim_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f ,35.8f ,-0.7076f })
            .addChild(new HAnimSegment("hanim_humanoid_root").setDEF("hanim_sacrum").setName("sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f ,35.8f ,-0.7076f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                    .setTexture(new ImageTexture().setDEF("JinLOA3TextureAtlas").setUrl(new MFString2().getArray())))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt323().getArray()).setCoordIndex(new MFInt324().getArray())
                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f5().getArray()))
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f ,30.53f ,-0.7076f })
              .addChild(new HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new Transform().setTranslation(new float[] {0f ,30.53f ,-0.7076f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt327().getArray()).setCoordIndex(new MFInt328().getArray())
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f9().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray()))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_l_hip").setName("l_hip").setCenter(new float[] {4.207f ,35.83f ,-0.8155f })
                .addChild(new HAnimSegment("hanim_l_hip").setDEF("hanim_l_thigh").setName("l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {4.207f ,35.83f ,-0.8155f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3211().getArray()).setCoordIndex(new MFInt3212().getArray())
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f13().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))))
                .addChild(new HAnimJoint("hanim_l_hip").setDEF("hanim_l_knee").setName("l_knee").setCenter(new float[] {4.116f ,17.26f ,-0.8639f })
                  .addChild(new HAnimSegment("hanim_l_knee").setDEF("hanim_l_calf").setName("l_calf")
                    .addChild(new Transform().setTranslation(new float[] {4.116f ,17.26f ,-0.8639f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3215().getArray()).setCoordIndex(new MFInt3216().getArray())
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f17().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray()))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_talocrural").setName("l_talocrural").setCenter(new float[] {3.854f ,3.939f ,-0.7038f })
                    .addChild(new HAnimSegment("hanim_l_talocrural").setDEF("hanim_l_talus").setName("l_talus")
                      .addChild(new Transform().setTranslation(new float[] {3.854f ,3.939f ,-0.7038f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3219().getArray()).setCoordIndex(new MFInt3220().getArray())
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f21().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray()))))))
                    .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(new float[] {3.854f ,3.336f ,-1.514f })
                      .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsal_2").setName("l_metatarsal_2")
                        .addChild(new Transform().setTranslation(new float[] {3.854f ,3.336f ,-1.514f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3223().getArray()).setCoordIndex(new MFInt3224().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f25().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))))
                      .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(new float[] {3.854f ,3.64f ,0.7402f })
                        .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                          .addChild(new Transform().setTranslation(new float[] {3.854f ,3.64f ,0.7402f })
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3227().getArray()).setCoordIndex(new MFInt3228().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f29().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))))))
                        .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {3.854f ,1.956f ,1.682f })
                          .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_phalanx_2").setName("l_tarsal_distal_phalanx_2")
                            .addChild(new Transform().setTranslation(new float[] {3.854f ,1.956f ,1.682f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3231().getArray()).setCoordIndex(new MFInt3232().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f33().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setCenter(new float[] {-4.207f ,35.83f ,-0.8155f })
                .addChild(new HAnimSegment("hanim_r_hip").setDEF("hanim_r_thigh").setName("r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-4.207f ,35.83f ,-0.8155f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3235().getArray()).setCoordIndex(new MFInt3236().getArray())
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f37().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))))
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setCenter(new float[] {-4.116f ,17.26f ,-0.8639f })
                  .addChild(new HAnimSegment("hanim_r_knee").setDEF("hanim_r_calf").setName("r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-4.116f ,17.26f ,-0.8639f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3239().getArray()).setCoordIndex(new MFInt3240().getArray())
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f41().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray()))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_talocrural").setName("r_talocrural").setCenter(new float[] {-3.854f ,3.939f ,-0.7038f })
                    .addChild(new HAnimSegment("hanim_r_talocrural").setDEF("hanim_r_talus").setName("r_talus")
                      .addChild(new Transform().setTranslation(new float[] {-3.854f ,3.939f ,-0.7038f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3243().getArray()).setCoordIndex(new MFInt3244().getArray())
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f45().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))))))
                    .addChild(new HAnimJoint("hanim_r_talocrural").setDEF("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(new float[] {-3.854f ,3.336f ,-1.514f })
                      .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsal_2").setName("r_metatarsal_2")
                        .addChild(new Transform().setTranslation(new float[] {-3.854f ,3.336f ,-1.514f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3247().getArray()).setCoordIndex(new MFInt3248().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f49().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray()))))))
                      .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setDEF("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(new float[] {-3.854f ,3.64f ,0.7402f })
                        .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                          .addChild(new Transform().setTranslation(new float[] {-3.854f ,3.64f ,0.7402f })
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3251().getArray()).setCoordIndex(new MFInt3252().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f53().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))))))
                        .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-3.854f ,1.956f ,1.682f })
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_phalanx_2").setName("r_tarsal_distal_phalanx_2")
                            .addChild(new Transform().setTranslation(new float[] {-3.854f ,1.956f ,1.682f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3255().getArray()).setCoordIndex(new MFInt3256().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f57().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray())))))))))))))
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_vl5").setName("vl5").setCenter(new float[] {0f ,40.22f ,-0.6117f })
              .addChild(new HAnimSegment("hanim_vl5").setDEF("hanim_l5").setName("l5")
                .addChild(new Transform().setTranslation(new float[] {0f ,40.22f ,-0.6117f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3259().getArray()).setCoordIndex(new MFInt3260().getArray())
                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f61().getArray()))
                      .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray()))))))
              .addChild(new HAnimJoint("hanim_vl5").setDEF("hanim_vl4").setName("vl4").setCenter(new float[] {0f ,41.3f ,-0.6117f })
                .addChild(new HAnimSegment("hanim_vl4").setDEF("hanim_l4").setName("l4")
                  .addChild(new Transform().setTranslation(new float[] {0f ,41.3f ,-0.6117f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3263().getArray()).setCoordIndex(new MFInt3264().getArray())
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f65().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))))))
                .addChild(new HAnimJoint("hanim_vl4").setDEF("hanim_vl3").setName("vl3").setCenter(new float[] {0f ,42.03f ,-0.6117f })
                  .addChild(new HAnimSegment("hanim_vl3").setDEF("hanim_l3").setName("l3")
                    .addChild(new Transform().setTranslation(new float[] {0f ,42.03f ,-0.6117f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                          .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3267().getArray()).setCoordIndex(new MFInt3268().getArray())
                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f69().getArray()))
                          .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))))))
                  .addChild(new HAnimJoint("hanim_vl3").setDEF("hanim_vl2").setName("vl2").setCenter(new float[] {0f ,42.76f ,-0.6117f })
                    .addChild(new HAnimSegment("hanim_vl2").setDEF("hanim_l2").setName("l2")
                      .addChild(new Transform().setTranslation(new float[] {0f ,42.76f ,-0.6117f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                            .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3271().getArray()).setCoordIndex(new MFInt3272().getArray())
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f73().getArray()))
                            .setCoord(new Coordinate().setPoint(new MFVec3f74().getArray()))))))
                    .addChild(new HAnimJoint("hanim_vl2").setDEF("hanim_vl1").setName("vl1").setCenter(new float[] {0f ,43.52f ,-0.6117f })
                      .addChild(new HAnimSegment("hanim_vl1").setDEF("hanim_l1").setName("l1")
                        .addChild(new Transform().setTranslation(new float[] {0f ,43.52f ,-0.6117f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                              .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3275().getArray()).setCoordIndex(new MFInt3276().getArray())
                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f77().getArray()))
                              .setCoord(new Coordinate().setPoint(new MFVec3f78().getArray()))))))
                      .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_vt12").setName("vt12").setCenter(new float[] {0f ,44.57f ,-0.6117f })
                        .addChild(new HAnimSegment("hanim_vt12").setDEF("hanim_t12").setName("t12")
                          .addChild(new Transform().setTranslation(new float[] {0f ,44.57f ,-0.6117f })
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3279().getArray()).setCoordIndex(new MFInt3280().getArray())
                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f81().getArray()))
                                .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray()))))))
                        .addChild(new HAnimJoint("hanim_vt12").setDEF("hanim_vt11").setName("vt11").setCenter(new float[] {0f ,45.61f ,-0.6117f })
                          .addChild(new HAnimSegment("hanim_vt11").setDEF("hanim_t11").setName("t11")
                            .addChild(new Transform().setTranslation(new float[] {0f ,45.61f ,-0.6117f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3283().getArray()).setCoordIndex(new MFInt3284().getArray())
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f85().getArray()))
                                  .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray()))))))
                          .addChild(new HAnimJoint("hanim_vt11").setDEF("hanim_vt10").setName("vt10").setCenter(new float[] {0f ,46.37f ,-0.6127f })
                            .addChild(new HAnimSegment("hanim_vt10").setDEF("hanim_t10").setName("t10")
                              .addChild(new Transform().setTranslation(new float[] {0f ,46.37f ,-0.6127f })
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3287().getArray()).setCoordIndex(new MFInt3288().getArray())
                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f89().getArray()))
                                    .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray()))))))
                            .addChild(new HAnimJoint("hanim_vt10").setDEF("hanim_vt9").setName("vt9").setCenter(new float[] {0f ,47.03f ,-0.6117f })
                              .addChild(new HAnimSegment("hanim_vt9").setDEF("hanim_t9").setName("t9")
                                .addChild(new Transform().setTranslation(new float[] {0f ,47.03f ,-0.6117f })
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3291().getArray()).setCoordIndex(new MFInt3292().getArray())
                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f93().getArray()))
                                      .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray()))))))
                              .addChild(new HAnimJoint("hanim_vt9").setDEF("hanim_vt8").setName("vt8").setCenter(new float[] {0f ,47.68f ,-0.6117f })
                                .addChild(new HAnimSegment("hanim_vt8").setDEF("hanim_t8").setName("t8")
                                  .addChild(new Transform().setTranslation(new float[] {0f ,47.68f ,-0.6117f })
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3295().getArray()).setCoordIndex(new MFInt3296().getArray())
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f97().getArray()))
                                        .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray()))))))
                                .addChild(new HAnimJoint("hanim_vt8").setDEF("hanim_vt7").setName("vt7").setCenter(new float[] {0f ,48.37f ,-0.6117f })
                                  .addChild(new HAnimSegment("hanim_vt7").setDEF("hanim_t7").setName("t7")
                                    .addChild(new Transform().setTranslation(new float[] {0f ,48.37f ,-0.6117f })
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                          .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt3299().getArray()).setCoordIndex(new MFInt32100().getArray())
                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f101().getArray()))
                                          .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray()))))))
                                  .addChild(new HAnimJoint("hanim_vt7").setDEF("hanim_vt6").setName("vt6").setCenter(new float[] {0f ,48.95f ,-0.6117f })
                                    .addChild(new HAnimSegment("hanim_vt6").setDEF("hanim_t6").setName("t6")
                                      .addChild(new Transform().setTranslation(new float[] {0f ,48.95f ,-0.6117f })
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                            .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32103().getArray()).setCoordIndex(new MFInt32104().getArray())
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f105().getArray()))
                                            .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray()))))))
                                    .addChild(new HAnimJoint("hanim_vt6").setDEF("hanim_vt5").setName("vt5").setCenter(new float[] {0f ,49.64f ,-0.6117f })
                                      .addChild(new HAnimSegment("hanim_vt5").setDEF("hanim_t5").setName("t5")
                                        .addChild(new Transform().setTranslation(new float[] {0f ,49.64f ,-0.6117f })
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                              .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32107().getArray()).setCoordIndex(new MFInt32108().getArray())
                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f109().getArray()))
                                              .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray()))))))
                                      .addChild(new HAnimJoint("hanim_vt5").setDEF("hanim_vt4").setName("vt4").setCenter(new float[] {0f ,50.31f ,-0.6117f })
                                        .addChild(new HAnimSegment("hanim_vt4").setDEF("hanim_t4").setName("t4")
                                          .addChild(new Transform().setTranslation(new float[] {0f ,50.31f ,-0.6117f })
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32111().getArray()).setCoordIndex(new MFInt32112().getArray())
                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f113().getArray()))
                                                .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray()))))))
                                        .addChild(new HAnimJoint("hanim_vt4").setDEF("hanim_vt3").setName("vt3").setCenter(new float[] {0f ,51.13f ,-0.6117f })
                                          .addChild(new HAnimSegment("hanim_vt3").setDEF("hanim_t3").setName("t3")
                                            .addChild(new Transform().setTranslation(new float[] {0f ,51.13f ,-0.6117f })
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32115().getArray()).setCoordIndex(new MFInt32116().getArray())
                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f117().getArray()))
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f118().getArray()))))))
                                          .addChild(new HAnimJoint("hanim_vt3").setDEF("hanim_vt2").setName("vt2").setCenter(new float[] {0f ,52.23f ,-0.6127f })
                                            .addChild(new HAnimSegment("hanim_vt2").setDEF("hanim_t2").setName("t2")
                                              .addChild(new Transform().setTranslation(new float[] {0f ,52.23f ,-0.6127f })
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32119().getArray()).setCoordIndex(new MFInt32120().getArray())
                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f121().getArray()))
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f122().getArray()))))))
                                            .addChild(new HAnimJoint("hanim_vt2").setDEF("hanim_vt1").setName("vt1").setCenter(new float[] {0f ,53.29f ,-0.6117f })
                                              .addChild(new HAnimSegment("hanim_vt1").setDEF("hanim_t1").setName("t1")
                                                .addChild(new Transform().setTranslation(new float[] {0f ,53.29f ,-0.6117f })
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32123().getArray()).setCoordIndex(new MFInt32124().getArray())
                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f125().getArray()))
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f126().getArray()))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_vc7").setName("vc7").setCenter(new float[] {0f ,54.45f ,-0.6695f })
                                                .addChild(new HAnimSegment("hanim_vc7").setDEF("hanim_c7").setName("c7")
                                                  .addChild(new Transform().setTranslation(new float[] {0f ,54.45f ,-0.6695f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32127().getArray()).setCoordIndex(new MFInt32128().getArray())
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f129().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f130().getArray()))))))
                                                .addChild(new HAnimJoint("hanim_vc7").setDEF("hanim_vc6").setName("vc6").setCenter(new float[] {0f ,54.98f ,-0.6695f })
                                                  .addChild(new HAnimSegment("hanim_vc6").setDEF("hanim_c6").setName("c6")
                                                    .addChild(new Transform().setTranslation(new float[] {0f ,54.98f ,-0.6695f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32131().getArray()).setCoordIndex(new MFInt32132().getArray())
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f133().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f134().getArray()))))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setDEF("hanim_vc5").setName("vc5").setCenter(new float[] {0f ,55.54f ,-0.6695f })
                                                    .addChild(new HAnimSegment("hanim_vc5").setDEF("hanim_c5").setName("c5")
                                                      .addChild(new Transform().setTranslation(new float[] {0f ,55.54f ,-0.6695f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32135().getArray()).setCoordIndex(new MFInt32136().getArray())
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f137().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f138().getArray()))))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setDEF("hanim_vc4").setName("vc4").setCenter(new float[] {0f ,56.08f ,-0.6695f })
                                                      .addChild(new HAnimSegment("hanim_vc4").setDEF("hanim_c4").setName("c4")
                                                        .addChild(new Transform().setTranslation(new float[] {0f ,56.08f ,-0.6695f })
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32139().getArray()).setCoordIndex(new MFInt32140().getArray())
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f141().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f142().getArray()))))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setDEF("hanim_vc3").setName("vc3").setCenter(new float[] {0f ,56.66f ,-0.6695f })
                                                        .addChild(new HAnimSegment("hanim_vc3").setDEF("hanim_c3").setName("c3")
                                                          .addChild(new Transform().setTranslation(new float[] {0f ,56.66f ,-0.6695f })
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32143().getArray()).setCoordIndex(new MFInt32144().getArray())
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f145().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f146().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setDEF("hanim_vc2").setName("vc2").setCenter(new float[] {0f ,57.17f ,-0.6695f })
                                                          .addChild(new HAnimSegment("hanim_vc2").setDEF("hanim_c2").setName("c2")
                                                            .addChild(new Transform().setTranslation(new float[] {0f ,57.17f ,-0.6695f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32147().getArray()).setCoordIndex(new MFInt32148().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f149().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f150().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setDEF("hanim_vc1").setName("vc1").setCenter(new float[] {0f ,57.69f ,-0.6695f })
                                                            .addChild(new HAnimSegment("hanim_vc1").setDEF("hanim_c1").setName("c1")
                                                              .addChild(new Transform().setTranslation(new float[] {0f ,57.69f ,-0.6695f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32151().getArray()).setCoordIndex(new MFInt32152().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f153().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setDEF("hanim_skullbase").setName("skullbase").setCenter(new float[] {0f ,57.43f ,-0.6863f })
                                                              .addChild(new HAnimSegment("hanim_skullbase").setDEF("hanim_skull").setName("skull")
                                                                .addChild(new Transform().setTranslation(new float[] {0f ,57.43f ,-0.6863f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32155().getArray().append(new MFInt32156().getArray()).append(new MFInt32157().getArray())).setCoordIndex(new MFInt32158().getArray().append(new MFInt32159().getArray()).append(new MFInt32160().getArray()))
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f161().getArray().append(new MFVec2f162().getArray())))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f163().getArray().append(new MFVec3f164().getArray())))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {2.245f ,62.4f ,1.464f })
                                                                .addChild(new HAnimSegment("hanim_l_eyelid_joint").setDEF("hanim_l_eyelid").setName("l_eyelid")
                                                                  .addChild(new Transform().setTranslation(new float[] {2.245f ,62.4f ,1.464f }).setRotation(new float[] {1f ,0f ,0f ,-0.5236f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32165().getArray()).setCoordIndex(new MFInt32166().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f167().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f168().getArray())))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(new float[] {-2.245f ,62.4f ,1.464f })
                                                                .addChild(new HAnimSegment("hanim_r_eyelid_joint").setDEF("hanim_r_eyelid").setName("r_eyelid")
                                                                  .addChild(new Transform().setTranslation(new float[] {-2.245f ,62.4f ,1.464f }).setRotation(new float[] {1f ,0f ,0f ,-0.5236f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32169().getArray()).setCoordIndex(new MFInt32170().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f171().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f172().getArray())))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {2.139f ,61.53f ,3.691f })
                                                                .addChild(new HAnimSegment("hanim_l_eyeball_joint").setDEF("hanim_l_eyeball").setName("l_eyeball")
                                                                  .addChild(new Transform().setTranslation(new float[] {2.139f ,61.53f ,3.691f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32173().getArray()).setCoordIndex(new MFInt32174().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f175().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f176().getArray())))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(new float[] {-2.139f ,61.53f ,3.691f })
                                                                .addChild(new HAnimSegment("hanim_r_eyeball_joint").setDEF("hanim_r_eyeball").setName("r_eyeball")
                                                                  .addChild(new Transform().setTranslation(new float[] {-2.139f ,61.53f ,3.691f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32177().getArray()).setCoordIndex(new MFInt32178().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f179().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f180().getArray())))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {0.9666f ,61.93f ,4.753f })
                                                                .addChild(new HAnimSegment("hanim_l_eyebrow_joint").setDEF("hanim_l_eyebrow").setName("l_eyebrow")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.9666f ,61.93f ,4.753f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32181().getArray()).setCoordIndex(new MFInt32182().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f183().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f184().getArray())))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(new float[] {-0.9666f ,61.93f ,4.753f })
                                                                .addChild(new HAnimSegment("hanim_r_eyebrow_joint").setDEF("hanim_r_eyebrow").setName("r_eyebrow")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.9666f ,61.93f ,4.753f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32185().getArray()).setCoordIndex(new MFInt32186().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f187().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f188().getArray())))))))
                                                              .addChild(new HAnimJoint("hanim_skullbase").setDEF("hanim_temporomandibular").setName("temporomandibular").setCenter(new float[] {0f ,57.45f ,0.6835f })
                                                                .addChild(new HAnimSegment("hanim_temporomandibular").setDEF("hanim_jaw").setName("jaw")
                                                                  .addChild(new Transform().setTranslation(new float[] {0f ,57.45f ,0.6835f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32189().getArray()).setCoordIndex(new MFInt32190().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f191().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f192().getArray())))))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(new float[] {1.71f ,52.82f ,-0.6127f })
                                                .addChild(new HAnimSegment("hanim_l_sternoclavicular").setDEF("hanim_l_clavicle").setName("l_clavicle")
                                                  .addChild(new Transform().setTranslation(new float[] {1.71f ,52.82f ,-0.6127f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32193().getArray()).setCoordIndex(new MFInt32194().getArray())
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f195().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f196().getArray()))))))
                                                .addChild(new HAnimJoint("hanim_l_sternoclavicular").setDEF("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(new float[] {5.464f ,52.06f ,-0.5732f })
                                                  .addChild(new HAnimSegment("hanim_l_acromioclavicular").setDEF("hanim_l_scapula").setName("l_scapula")
                                                    .addChild(new Transform().setTranslation(new float[] {5.464f ,52.06f ,-0.5732f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32197().getArray()).setCoordIndex(new MFInt32198().getArray())
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f199().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f200().getArray()))))))
                                                  .addChild(new HAnimJoint("hanim_l_acromioclavicular").setDEF("hanim_l_shoulder").setName("l_shoulder").setCenter(new float[] {7.336f ,51.48f ,-0.1452f })
                                                    .addChild(new HAnimSegment("hanim_l_shoulder").setDEF("hanim_l_upperarm").setName("l_upperarm")
                                                      .addChild(new Transform().setTranslation(new float[] {7.336f ,51.48f ,-0.1452f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32201().getArray()).setCoordIndex(new MFInt32202().getArray())
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f203().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f204().getArray()))))))
                                                    .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setCenter(new float[] {8.093f ,40.38f ,-0.2502f })
                                                      .addChild(new HAnimSegment("hanim_l_elbow").setDEF("hanim_l_forearm").setName("l_forearm")
                                                        .addChild(new Transform().setTranslation(new float[] {8.093f ,40.38f ,-0.2502f })
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32205().getArray()).setCoordIndex(new MFInt32206().getArray())
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f207().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f208().getArray()))))))
                                                      .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(new float[] {7.899f ,31.43f ,-0.3809f })
                                                        .addChild(new HAnimSegment("hanim_l_radiocarpal").setDEF("hanim_l_carpal").setName("l_carpal")
                                                          .addChild(new Transform().setTranslation(new float[] {7.899f ,31.43f ,-0.3809f })
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32209().getArray()).setCoordIndex(new MFInt32210().getArray())
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f211().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f212().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(new float[] {8.205f ,29.6f ,1.302f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpal_1").setName("l_metacarpal_1")
                                                            .addChild(new Transform().setTranslation(new float[] {8.205f ,29.6f ,1.302f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32213().getArray()).setCoordIndex(new MFInt32214().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f215().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f216().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setDEF("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(new float[] {8.08f ,28.73f ,1.55f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_proximal_phalanx_1")
                                                              .addChild(new Transform().setTranslation(new float[] {8.08f ,28.73f ,1.55f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32217().getArray()).setCoordIndex(new MFInt32218().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f219().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f220().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(new float[] {7.832f ,27.85f ,1.735f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_distal_phalanx_1").setName("l_carpal_distal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new float[] {7.832f ,27.85f ,1.735f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32221().getArray()).setCoordIndex(new MFInt32222().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f223().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f224().getArray())))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(new float[] {8.376f ,28.55f ,0.5997f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpal_2").setName("l_metacarpal_2")
                                                            .addChild(new Transform().setTranslation(new float[] {8.376f ,28.55f ,0.5997f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32225().getArray()).setCoordIndex(new MFInt32226().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f227().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f228().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setDEF("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(new float[] {8.52f ,27.24f ,0.6551f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_proximal_phalanx_2")
                                                              .addChild(new Transform().setTranslation(new float[] {8.52f ,27.24f ,0.6551f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32229().getArray()).setCoordIndex(new MFInt32230().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f231().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f232().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(new float[] {8.45f ,26.1f ,0.6956f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_middle_phalanx_2")
                                                                .addChild(new Transform().setTranslation(new float[] {8.45f ,26.1f ,0.6956f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32233().getArray()).setCoordIndex(new MFInt32234().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f235().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(new float[] {8.192f ,25.17f ,0.7315f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_phalanx_2").setName("l_carpal_distal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {8.192f ,25.17f ,0.7315f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32237().getArray()).setCoordIndex(new MFInt32238().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f239().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f240().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(new float[] {8.344f ,28.65f ,-0.194f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpal_3").setName("l_metacarpal_3")
                                                            .addChild(new Transform().setTranslation(new float[] {8.344f ,28.65f ,-0.194f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32241().getArray()).setCoordIndex(new MFInt32242().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f243().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f244().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setDEF("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(new float[] {8.52f ,27.26f ,-0.1959f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_proximal_phalanx_3")
                                                              .addChild(new Transform().setTranslation(new float[] {8.52f ,27.26f ,-0.1959f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32245().getArray()).setCoordIndex(new MFInt32246().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f247().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f248().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(new float[] {8.477f ,26.07f ,-0.2214f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_middle_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new float[] {8.477f ,26.07f ,-0.2214f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32249().getArray()).setCoordIndex(new MFInt32250().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f251().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f252().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(new float[] {8.25f ,25.03f ,-0.2187f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_phalanx_3").setName("l_carpal_distal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {8.25f ,25.03f ,-0.2187f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32253().getArray()).setCoordIndex(new MFInt32254().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f255().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f256().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(new float[] {8.339f ,28.57f ,-0.9243f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpal_4").setName("l_metacarpal_4")
                                                            .addChild(new Transform().setTranslation(new float[] {8.339f ,28.57f ,-0.9243f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32257().getArray()).setCoordIndex(new MFInt32258().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f259().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setDEF("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(new float[] {8.428f ,27.3f ,-0.9985f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_proximal_phalanx_4")
                                                              .addChild(new Transform().setTranslation(new float[] {8.428f ,27.3f ,-0.9985f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32261().getArray()).setCoordIndex(new MFInt32262().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f263().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f264().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(new float[] {8.428f ,26.29f ,-1.034f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_middle_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new float[] {8.428f ,26.29f ,-1.034f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32265().getArray()).setCoordIndex(new MFInt32266().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f267().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(new float[] {8.192f ,25.31f ,-1.124f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_phalanx_4").setName("l_carpal_distal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {8.192f ,25.31f ,-1.124f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32269().getArray()).setCoordIndex(new MFInt32270().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f271().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f272().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_l_radiocarpal").setDEF("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(new float[] {8.197f ,28.37f ,-1.528f })
                                                          .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpal_5").setName("l_metacarpal_5")
                                                            .addChild(new Transform().setTranslation(new float[] {8.197f ,28.37f ,-1.528f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32273().getArray()).setCoordIndex(new MFInt32274().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f275().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setDEF("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(new float[] {8.334f ,27.5f ,-1.701f })
                                                            .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_phalanx_5").setName("l_carpal_proximal_phalanx_5")
                                                              .addChild(new Transform().setTranslation(new float[] {8.334f ,27.5f ,-1.701f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32277().getArray()).setCoordIndex(new MFInt32278().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f279().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f280().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(new float[] {8.338f ,26.78f ,-1.768f })
                                                              .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_middle_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {8.338f ,26.78f ,-1.768f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32281().getArray()).setCoordIndex(new MFInt32282().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f283().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(new float[] {8.153f ,26.04f ,-1.886f })
                                                                .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_phalanx_5").setName("l_carpal_distal_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {8.153f ,26.04f ,-1.886f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32285().getArray()).setCoordIndex(new MFInt32286().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f287().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f288().getArray())))))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-1.71f ,52.82f ,-0.6127f })
                                                .addChild(new HAnimSegment("hanim_r_sternoclavicular").setDEF("hanim_r_clavicle").setName("r_clavicle")
                                                  .addChild(new Transform().setTranslation(new float[] {-1.71f ,52.82f ,-0.6127f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32289().getArray()).setCoordIndex(new MFInt32290().getArray())
                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f291().getArray()))
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f292().getArray()))))))
                                                .addChild(new HAnimJoint("hanim_r_sternoclavicular").setDEF("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-5.464f ,52.06f ,-0.5732f })
                                                  .addChild(new HAnimSegment("hanim_r_acromioclavicular").setDEF("hanim_r_scapula").setName("r_scapula")
                                                    .addChild(new Transform().setTranslation(new float[] {-5.464f ,52.06f ,-0.5732f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                          .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32293().getArray()).setCoordIndex(new MFInt32294().getArray())
                                                          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f295().getArray()))
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray()))))))
                                                  .addChild(new HAnimJoint("hanim_r_acromioclavicular").setDEF("hanim_r_shoulder").setName("r_shoulder").setCenter(new float[] {-7.336f ,51.48f ,-0.1452f })
                                                    .addChild(new HAnimSegment("hanim_r_shoulder").setDEF("hanim_r_upperarm").setName("r_upperarm")
                                                      .addChild(new Transform().setTranslation(new float[] {-7.336f ,51.48f ,-0.1452f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                            .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32297().getArray()).setCoordIndex(new MFInt32298().getArray())
                                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f299().getArray()))
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f300().getArray()))))))
                                                    .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setCenter(new float[] {-8.093f ,40.38f ,-0.2502f })
                                                      .addChild(new HAnimSegment("hanim_r_elbow").setDEF("hanim_r_forearm").setName("r_forearm")
                                                        .addChild(new Transform().setTranslation(new float[] {-8.093f ,40.38f ,-0.2502f })
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                              .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32301().getArray()).setCoordIndex(new MFInt32302().getArray())
                                                              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f303().getArray()))
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f304().getArray()))))))
                                                      .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(new float[] {-7.899f ,31.43f ,-0.3809f })
                                                        .addChild(new HAnimSegment("hanim_r_radiocarpal").setDEF("hanim_r_carpal").setName("r_carpal")
                                                          .addChild(new Transform().setTranslation(new float[] {-7.899f ,31.43f ,-0.3809f })
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32305().getArray()).setCoordIndex(new MFInt32306().getArray())
                                                                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f307().getArray()))
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f308().getArray()))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(new float[] {-8.205f ,29.6f ,1.302f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpal_1").setName("r_metacarpal_1")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.205f ,29.6f ,1.302f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32309().getArray()).setCoordIndex(new MFInt32310().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f311().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f312().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(new float[] {-8.08f ,28.73f ,1.55f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_proximal_phalanx_1")
                                                              .addChild(new Transform().setTranslation(new float[] {-8.08f ,28.73f ,1.55f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32313().getArray()).setCoordIndex(new MFInt32314().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f315().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f316().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(new float[] {-7.832f ,27.85f ,1.735f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_distal_phalanx_1").setName("r_carpal_distal_phalanx_1")
                                                                .addChild(new Transform().setTranslation(new float[] {-7.832f ,27.85f ,1.735f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32317().getArray()).setCoordIndex(new MFInt32318().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f319().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f320().getArray())))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(new float[] {-8.376f ,28.55f ,0.5997f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpal_2").setName("r_metacarpal_2")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.376f ,28.55f ,0.5997f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32321().getArray()).setCoordIndex(new MFInt32322().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f323().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f324().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(new float[] {-8.52f ,27.24f ,0.6551f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_phalanx_2").setName("r_carpal_proximal_phalanx_2")
                                                              .addChild(new Transform().setTranslation(new float[] {-8.52f ,27.24f ,0.6551f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32325().getArray()).setCoordIndex(new MFInt32326().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f327().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f328().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-8.45f ,26.1f ,0.6956f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_middle_phalanx_2")
                                                                .addChild(new Transform().setTranslation(new float[] {-8.45f ,26.1f ,0.6956f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32329().getArray()).setCoordIndex(new MFInt32330().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f331().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f332().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(new float[] {-8.192f ,25.17f ,0.7315f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_phalanx_2").setName("r_carpal_distal_phalanx_2")
                                                                  .addChild(new Transform().setTranslation(new float[] {-8.192f ,25.17f ,0.7315f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32333().getArray()).setCoordIndex(new MFInt32334().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f335().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f336().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(new float[] {-8.344f ,28.65f ,-0.194f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpal_3").setName("r_metacarpal_3")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.344f ,28.65f ,-0.194f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32337().getArray()).setCoordIndex(new MFInt32338().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f339().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f340().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(new float[] {-8.52f ,27.26f ,-0.1959f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_phalanx_3").setName("r_carpal_proximal_phalanx_3")
                                                              .addChild(new Transform().setTranslation(new float[] {-8.52f ,27.26f ,-0.1959f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32341().getArray()).setCoordIndex(new MFInt32342().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f343().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f344().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-8.477f ,26.07f ,-0.2214f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_middle_phalanx_3")
                                                                .addChild(new Transform().setTranslation(new float[] {-8.477f ,26.07f ,-0.2214f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32345().getArray()).setCoordIndex(new MFInt32346().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f347().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(new float[] {-8.25f ,25.03f ,-0.2187f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_phalanx_3").setName("r_carpal_distal_phalanx_3")
                                                                  .addChild(new Transform().setTranslation(new float[] {-8.25f ,25.03f ,-0.2187f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32349().getArray()).setCoordIndex(new MFInt32350().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f351().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f352().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(new float[] {-8.339f ,28.57f ,-0.9243f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpal_4").setName("r_metacarpal_4")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.339f ,28.57f ,-0.9243f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32353().getArray()).setCoordIndex(new MFInt32354().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f355().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(new float[] {-8.428f ,27.3f ,-0.9985f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_phalanx_4").setName("r_carpal_proximal_phalanx_4")
                                                              .addChild(new Transform().setTranslation(new float[] {-8.428f ,27.3f ,-0.9985f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32357().getArray()).setCoordIndex(new MFInt32358().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f359().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f360().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-8.428f ,26.29f ,-1.034f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_middle_phalanx_4")
                                                                .addChild(new Transform().setTranslation(new float[] {-8.428f ,26.29f ,-1.034f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32361().getArray()).setCoordIndex(new MFInt32362().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f363().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f364().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(new float[] {-8.192f ,25.31f ,-1.124f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_phalanx_4").setName("r_carpal_distal_phalanx_4")
                                                                  .addChild(new Transform().setTranslation(new float[] {-8.192f ,25.31f ,-1.124f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32365().getArray()).setCoordIndex(new MFInt32366().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f367().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray()))))))))))
                                                        .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(new float[] {-8.197f ,28.37f ,-1.528f })
                                                          .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpal_5").setName("r_metacarpal_5")
                                                            .addChild(new Transform().setTranslation(new float[] {-8.197f ,28.37f ,-1.528f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                  .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32369().getArray()).setCoordIndex(new MFInt32370().getArray())
                                                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f371().getArray()))
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f372().getArray()))))))
                                                          .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(new float[] {-8.334f ,27.5f ,-1.701f })
                                                            .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_phalanx_5").setName("r_carpal_proximal_phalanx_5")
                                                              .addChild(new Transform().setTranslation(new float[] {-8.334f ,27.5f ,-1.701f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                    .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32373().getArray()).setCoordIndex(new MFInt32374().getArray())
                                                                    .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f375().getArray()))
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f376().getArray()))))))
                                                            .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-8.338f ,26.78f ,-1.768f })
                                                              .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_middle_phalanx_5").setName("r_carpal_middle_phalanx_5")
                                                                .addChild(new Transform().setTranslation(new float[] {-8.338f ,26.78f ,-1.768f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                      .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32377().getArray()).setCoordIndex(new MFInt32378().getArray())
                                                                      .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f379().getArray()))
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))))))
                                                              .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(new float[] {-8.153f ,26.04f ,-1.886f })
                                                                .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_phalanx_5").setName("r_carpal_distal_phalanx_5")
                                                                  .addChild(new Transform().setTranslation(new float[] {-8.153f ,26.04f ,-1.886f })
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance()
                                                                        .setMaterial(new Material().setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }))
                                                                        .setTexture(new ImageTexture().setUSE("JinLOA3TextureAtlas")))
                                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159f ).setTexCoordIndex(new MFInt32381().getArray()).setCoordIndex(new MFInt32382().getArray())
                                                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f383().getArray()))
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f384().getArray())))))))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt12"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt11"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt9"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt8"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt7"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vc7"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vc6"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vc5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_temporomandibular"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_acromioclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_eyeball_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_eyebrow_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_eyelid_joint"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_sternoclavicular"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_JinLOA3").setUSE("hanim_r_tarsometatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t12"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t11"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t10"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t9"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t8"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t7"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t6"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_t1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_c7"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_c6"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_c5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_c4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_c3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_c2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_c1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_jaw"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_clavicle"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_clavicle"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_eyeball"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_eyeball"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_eyebrow"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_eyebrow"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_eyelid"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_eyelid"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_scapula"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_scapula"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_JinLOA3").setUSE("hanim_r_upperarm"))));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.5f });
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"2.0"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/Jin.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png"});
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec2f5 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f ,0.5754f ,0.7851f ,0.572f ,0.7614f ,0.572f ,0.6907f ,0.5698f ,0.62f ,0.5698f ,0.6158f ,0.5702f ,0.5451f ,0.5702f ,0.4167f ,0.5698f ,0.5451f ,0.5702f ,0.6158f ,0.5702f ,0.62f ,0.5698f ,0.6907f ,0.5698f ,0.7614f ,0.572f ,0.8036f ,0.5346f ,0.7761f ,0.5346f ,0.6989f ,0.4838f ,0.6219f ,0.4428f ,0.6154f ,0.4438f ,0.5492f ,0.4639f ,0.4166f ,0.5346f ,0.5492f ,0.4639f ,0.6154f ,0.4438f ,0.6219f ,0.4428f ,0.6989f ,0.4838f ,0.7761f ,0.5346f ,0.7912f ,0.4044f ,0.7635f ,0.4044f ,0.7042f ,0.3925f ,0.6194f ,0.3907f ,0.6148f ,0.3907f ,0.545f ,0.3974f ,0.4163f ,0.4938f ,0.545f ,0.3974f ,0.6148f ,0.3907f ,0.6194f ,0.3907f ,0.7042f ,0.3925f ,0.7635f ,0.4044f ,0.795f ,0.3772f ,0.7662f ,0.3772f ,0.6945f ,0.3645f ,0.6236f ,0.3695f ,0.616f ,0.3695f ,0.5438f ,0.378f ,0.416f ,0.453f ,0.5438f ,0.378f ,0.616f ,0.3695f ,0.6236f ,0.3695f ,0.6945f ,0.3645f ,0.7662f ,0.3772f ,0.7887f ,0.3451f ,0.7635f ,0.3451f ,0.698f ,0.3508f ,0.6262f ,0.3508f ,0.6297f ,0.3503f ,0.5389f ,0.3503f ,0.4181f ,0.3884f ,0.5389f ,0.3503f ,0.6297f ,0.3503f ,0.6262f ,0.3508f ,0.698f ,0.3508f ,0.7635f ,0.3451f ,0.6237f ,0.3398f });
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.053f ,0.0273f ,0f ,0.9123f ,-0.5414f ,-0.4375f ,0.9123f ,-0.4652f ,-0.7578f ,0.9123f ,-0.3733f ,-0.875f ,0.9123f ,0.0273f ,-0.7578f ,0.9123f ,0.4279f ,-0.4375f ,0.9123f ,0.5198f ,0f ,0.9123f ,0.596f ,0.4375f ,0.9123f ,0.5198f ,0.7578f ,0.9123f ,0.4279f ,0.875f ,0.9123f ,0.0273f ,0.7578f ,0.9123f ,-0.3733f ,0.4375f ,0.9123f ,-0.4652f ,0f ,0.5267f ,-0.8842f ,-0.5658f ,0.5267f ,-0.7621f ,-0.98f ,0.5267f ,-0.4285f ,-1.132f ,0.5267f ,0.0273f ,-0.98f ,0.5267f ,0.483f ,-0.5658f ,0.5267f ,0.6985f ,0f ,0.5267f ,0.8206f ,0.5658f ,0.5267f ,0.6985f ,0.98f ,0.5267f ,0.483f ,1.132f ,0.5267f ,0.0273f ,0.98f ,0.5267f ,-0.4285f ,0.5658f ,0.5267f ,-0.7621f ,0f ,0f ,-0.9616f ,-0.6534f ,0f ,-0.8206f ,-1.132f ,0f ,-0.4353f ,-1.307f ,0f ,0.0273f ,-1.132f ,0f ,0.5536f ,-0.6534f ,0f ,0.8206f ,0f ,0f ,0.9616f ,0.6534f ,0f ,0.8206f ,1.132f ,0f ,0.5536f ,1.307f ,0f ,0.0273f ,1.132f ,0f ,-0.4353f ,0.6534f ,0f ,-0.8206f ,0f ,-0.5267f ,-0.8206f ,-0.5658f ,-0.5267f ,-0.6985f ,-0.98f ,-0.5267f ,-0.3648f ,-1.132f ,-0.5267f ,0.0273f ,-0.98f ,-0.5267f ,0.483f ,-0.5658f ,-0.5267f ,0.6985f ,0f ,-0.5267f ,0.8206f ,0.5658f ,-0.5267f ,0.6985f ,0.98f ,-0.5267f ,0.483f ,1.132f ,-0.5267f ,0.0273f ,0.98f ,-0.5267f ,-0.3648f ,0.5658f ,-0.5267f ,-0.6985f ,0f ,-0.9123f ,-0.4353f ,-0.3267f ,-0.9123f ,-0.3648f ,-0.5658f ,-0.9123f ,-0.2358f ,-0.6534f ,-0.9123f ,0.0273f ,-0.5658f ,-0.9123f ,0.2904f ,-0.3267f ,-0.9123f ,0.483f ,0f ,-0.9123f ,0.5536f ,0.3267f ,-0.9123f ,0.483f ,0.5658f ,-0.9123f ,0.2904f ,0.6534f ,-0.9123f ,0.0273f ,0.5658f ,-0.9123f ,-0.2358f ,0.3267f ,-0.9123f ,-0.3648f ,0f ,-1.053f ,0.0273f });
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec2f9 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6211f ,0.5754f ,0.7851f ,0.572f ,0.7614f ,0.572f ,0.6907f ,0.5698f ,0.62f ,0.5698f ,0.6158f ,0.5702f ,0.5451f ,0.5702f ,0.4167f ,0.5698f ,0.5451f ,0.5702f ,0.6158f ,0.5702f ,0.62f ,0.5698f ,0.6907f ,0.5698f ,0.7614f ,0.572f ,0.8036f ,0.5346f ,0.7761f ,0.5346f ,0.6989f ,0.4838f ,0.6219f ,0.4428f ,0.6154f ,0.4438f ,0.5492f ,0.4639f ,0.4166f ,0.5346f ,0.5492f ,0.4639f ,0.6154f ,0.4438f ,0.6219f ,0.4428f ,0.6989f ,0.4838f ,0.7761f ,0.5346f ,0.7912f ,0.4044f ,0.7635f ,0.4044f ,0.7042f ,0.3925f ,0.6194f ,0.3907f ,0.6148f ,0.3907f ,0.545f ,0.3974f ,0.4163f ,0.4938f ,0.545f ,0.3974f ,0.6148f ,0.3907f ,0.6194f ,0.3907f ,0.7042f ,0.3925f ,0.7635f ,0.4044f ,0.795f ,0.3772f ,0.7662f ,0.3772f ,0.6945f ,0.3645f ,0.6236f ,0.3695f ,0.616f ,0.3695f ,0.5438f ,0.378f ,0.416f ,0.453f ,0.5438f ,0.378f ,0.616f ,0.3695f ,0.6236f ,0.3695f ,0.6945f ,0.3645f ,0.7662f ,0.3772f ,0.7887f ,0.3451f ,0.7635f ,0.3451f ,0.698f ,0.3508f ,0.6262f ,0.3508f ,0.6297f ,0.3503f ,0.5389f ,0.3503f ,0.4181f ,0.3884f ,0.5389f ,0.3503f ,0.6297f ,0.3503f ,0.6262f ,0.3508f ,0.698f ,0.3508f ,0.7635f ,0.3451f ,0.6237f ,0.3398f });
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,10.79f ,0.1424f ,0f ,10.06f ,-2.825f ,-2.283f ,10.06f ,-2.428f ,-3.954f ,10.06f ,-1.948f ,-4.566f ,10.06f ,0.1424f ,-3.954f ,10.06f ,2.233f ,-2.283f ,10.06f ,2.712f ,0f ,10.06f ,3.11f ,2.283f ,10.06f ,2.712f ,3.954f ,10.06f ,2.233f ,4.566f ,10.06f ,0.1424f ,3.954f ,10.06f ,-1.948f ,2.283f ,10.06f ,-2.428f ,0f ,8.045f ,-4.614f ,-2.953f ,8.045f ,-3.977f ,-5.114f ,8.045f ,-2.236f ,-5.905f ,8.045f ,0.1424f ,-5.114f ,8.045f ,2.521f ,-2.953f ,8.045f ,3.645f ,0f ,8.045f ,4.282f ,2.953f ,8.045f ,3.645f ,5.114f ,8.045f ,2.521f ,5.905f ,8.045f ,0.1424f ,5.114f ,8.045f ,-2.236f ,2.953f ,8.045f ,-3.977f ,0f ,5.297f ,-5.018f ,-3.409f ,5.297f ,-4.282f ,-5.905f ,5.297f ,-2.272f ,-6.819f ,5.297f ,0.1424f ,-5.905f ,5.297f ,2.889f ,-3.409f ,5.297f ,4.282f ,0f ,5.297f ,5.018f ,3.409f ,5.297f ,4.282f ,5.905f ,5.297f ,2.889f ,6.819f ,5.297f ,0.1424f ,5.905f ,5.297f ,-2.272f ,3.409f ,5.297f ,-4.282f ,0f ,2.548f ,-4.282f ,-2.953f ,2.548f ,-3.645f ,-5.114f ,2.548f ,-1.904f ,-5.905f ,2.548f ,0.1424f ,-5.114f ,2.548f ,2.521f ,-2.953f ,2.548f ,3.645f ,0f ,2.548f ,4.282f ,2.953f ,2.548f ,3.645f ,5.114f ,2.548f ,2.521f ,5.905f ,2.548f ,0.1424f ,5.114f ,2.548f ,-1.904f ,2.953f ,2.548f ,-3.645f ,0f ,0.5362f ,-2.272f ,-1.705f ,0.5362f ,-1.904f ,-2.953f ,0.5362f ,-1.231f ,-3.409f ,0.5362f ,0.1424f ,-2.953f ,0.5362f ,1.516f ,-1.705f ,0.5362f ,2.521f ,0f ,0.5362f ,2.889f ,1.705f ,0.5362f ,2.521f ,2.953f ,0.5362f ,1.516f ,3.409f ,0.5362f ,0.1424f ,2.953f ,0.5362f ,-1.231f ,1.705f ,0.5362f ,-1.904f ,0f ,-0.2003f ,0.1424f });
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1});
  }
}
private class MFVec2f13 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f ,0.5576f ,0.6284f ,0.5576f ,0.7414f ,0.5576f ,0.6787f ,0.5576f ,0.5781f ,0.5576f ,0.5154f ,0.5576f ,0.5378f ,0.5576f ,0.6284f ,0.5029f ,0.7509f ,0.3997f ,0.6284f ,0.3997f ,0.7509f ,0.5029f ,0.7811f ,0.3997f ,0.7811f ,0.5029f ,0.6964f ,0.3997f ,0.6964f ,0.5029f ,0.5604f ,0.3997f ,0.5604f ,0.5029f ,0.4756f ,0.3997f ,0.4756f ,0.5029f ,0.5059f ,0.3997f ,0.5059f ,0.5029f ,0.7509f ,0.3197f ,0.6284f ,0.3197f ,0.7811f ,0.3197f ,0.6964f ,0.3197f ,0.5604f ,0.3197f ,0.4756f ,0.3197f ,0.5059f ,0.3197f ,0.7651f ,0.2166f ,0.6284f ,0.2166f ,0.7989f ,0.2166f ,0.7043f ,0.2166f ,0.5525f ,0.2166f ,0.4579f ,0.2166f ,0.4917f ,0.2166f ,0.7224f ,0.263f ,0.6284f ,0.263f ,0.7456f ,0.263f ,0.6805f ,0.263f ,0.5762f ,0.263f ,0.5112f ,0.263f ,0.5344f ,0.263f ,0.8705f ,0.5452f ,0.8705f ,0.5383f ,0.8705f ,0.5369f ,0.8705f ,0.5408f ,0.8705f ,0.5483f ,0.8705f ,0.5522f ,0.8705f ,0.5509f ,0.917f ,0.5452f ,0.917f ,0.5266f ,0.89f ,0.5304f ,0.89f ,0.5452f ,0.917f ,0.522f ,0.89f ,0.5268f ,0.917f ,0.5349f ,0.89f ,0.537f ,0.917f ,0.5555f ,0.89f ,0.5534f ,0.917f ,0.5684f ,0.89f ,0.5636f ,0.917f ,0.5638f ,0.89f ,0.56f ,0.8746f ,0.531f ,0.8746f ,0.5452f ,0.8746f ,0.5279f ,0.8746f ,0.5368f ,0.8746f ,0.5524f ,0.8746f ,0.5613f ,0.8746f ,0.5581f });
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.96f ,-0.0706f ,0f ,1.643f ,-0.0706f ,3.209f ,-1.316f ,-0.0706f ,4.002f ,-3.367f ,-0.0706f ,1.781f ,-3.367f ,-0.0706f ,-1.781f ,-1.316f ,-0.0706f ,-4.002f ,1.643f ,-0.0706f ,-3.209f ,2.96f ,-3.82f ,0f ,1.643f ,-3.82f ,3.209f ,-1.316f ,-3.82f ,4.002f ,-3.367f ,-3.82f ,1.781f ,-3.367f ,-3.82f ,-1.781f ,-1.316f ,-3.82f ,-4.002f ,1.643f ,-3.82f ,-3.209f ,2.96f ,-10.32f ,0f ,1.643f ,-10.32f ,3.209f ,-1.316f ,-10.32f ,4.002f ,-3.367f ,-10.32f ,1.781f ,-3.367f ,-10.32f ,-1.781f ,-1.316f ,-10.32f ,-4.002f ,1.643f ,-10.32f ,-3.209f ,3.367f ,-16.94f ,0f ,1.897f ,-16.94f ,3.582f ,-1.407f ,-16.94f ,4.467f ,-3.355f ,-16.94f ,1.988f ,-3.355f ,-16.94f ,-1.988f ,-1.407f ,-16.94f ,-4.467f ,1.897f ,-16.94f ,-3.582f ,2.146f ,-8.794f ,0f ,1.136f ,-8.794f ,2.462f ,-1.135f ,-8.794f ,3.07f ,-2.633f ,-8.794f ,1.366f ,-2.633f ,-8.794f ,-1.366f ,-1.135f ,-8.794f ,-3.07f ,1.136f ,-8.794f ,-2.462f ,2.156f ,-15.25f ,0f ,1.225f ,-15.25f ,1.956f ,-0.8662f ,-15.25f ,2.439f ,-2.543f ,-15.25f ,1.085f ,-2.543f ,-15.25f ,-1.085f ,-0.8662f ,-15.25f ,-2.439f ,1.225f ,-15.25f ,-1.956f ,2.051f ,1.92f ,0f ,1.076f ,1.92f ,2.375f ,-1.114f ,1.92f ,2.961f ,-2.87f ,1.92f ,1.318f ,-2.87f ,1.92f ,-1.318f ,-1.114f ,1.92f ,-2.961f ,1.076f ,1.92f ,-2.375f ,1.842f ,-18.93f ,0f ,1.03f ,-18.93f ,1.873f ,-0.7965f ,-18.93f ,2.295f ,-2.261f ,-18.93f ,1.113f ,-2.261f ,-18.93f ,-0.9478f ,-0.7965f ,-18.93f ,-2.13f ,1.03f ,-18.93f ,-1.708f ,0.6277f ,-19.91f ,0f ,0.2723f ,-19.91f ,0.912f ,-0.5262f ,-19.91f ,1.096f ,-1.167f ,-19.91f ,0.5796f ,-1.167f ,-19.91f ,-0.4145f ,-0.5262f ,-19.91f ,-0.9313f ,0.2723f ,-19.91f ,-0.7469f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1});
  }
}
private class MFVec2f17 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f ,0.5848f ,0.919f ,0.5848f ,0.8921f ,0.5848f ,0.8706f ,0.5848f ,0.8706f ,0.5848f ,0.8921f ,0.5848f ,0.919f ,0.5848f ,0.9845f ,0.5321f ,0.955f ,0.5475f ,0.9491f ,0.5599f ,0.9788f ,0.5571f ,0.8787f ,0.5475f ,0.8825f ,0.5599f ,0.8302f ,0.5321f ,0.8291f ,0.5571f ,0.8302f ,0.52f ,0.8291f ,0.5571f ,0.8787f ,0.52f ,0.8825f ,0.5571f ,0.955f ,0.52f ,0.9491f ,0.5571f ,0.9444f ,0.5755f ,0.9717f ,0.5755f ,0.8831f ,0.5755f ,0.8339f ,0.5755f ,0.8339f ,0.5755f ,0.8831f ,0.5755f ,0.9444f ,0.5755f ,0.9679f ,0.2444f ,0.9449f ,0.2445f ,0.8931f ,0.2445f ,0.8516f ,0.2444f ,0.8516f ,0.2442f ,0.8931f ,0.2442f ,0.9449f ,0.2442f ,0.9372f ,0.2243f ,0.9255f ,0.2244f ,0.8993f ,0.2244f ,0.8783f ,0.2243f ,0.8783f ,0.2243f ,0.8993f ,0.2243f ,0.9255f ,0.2243f });
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.7186f ,0.9688f ,0.0234f ,0.3632f ,0.9688f ,0.9354f ,-0.4353f ,0.9688f ,1.12f ,-1.076f ,0.9688f ,0.603f ,-1.076f ,0.9688f ,-0.3911f ,-0.4353f ,0.9688f ,-0.9079f ,0.3632f ,0.9688f ,-0.7235f ,2.337f ,-4.613f ,0.0234f ,1.46f ,-3.622f ,2.019f ,1.236f ,-1.628f ,2.42f ,2.118f ,-1.912f ,0.0234f ,-0.8111f ,-3.622f ,2.567f ,-0.7468f ,-1.628f ,2.903f ,-2.254f ,-4.613f ,1.255f ,-2.337f ,-1.912f ,0.9793f ,-2.254f ,-5.383f ,-1.368f ,-2.337f ,-1.912f ,-0.9325f ,-0.8111f ,-5.383f ,-2.903f ,-0.7468f ,-1.912f ,-2.368f ,1.46f ,-5.383f ,-2.355f ,1.236f ,-1.912f ,-1.885f ,1.121f ,-0.0032f ,1.896f ,1.933f ,-0.0032f ,0.0234f ,-0.7056f ,-0.0032f ,2.318f ,-2.17f ,-0.0032f ,1.136f ,-2.17f ,-0.0032f ,-0.9244f ,-0.7056f ,-0.0032f ,-2.061f ,1.121f ,-0.0032f ,-1.64f ,1.607f ,-12.92f ,0.0032f ,0.9216f ,-12.91f ,1.565f ,-0.619f ,-12.91f ,1.951f ,-1.854f ,-12.92f ,0.8701f ,-1.854f ,-12.94f ,-0.9762f ,-0.619f ,-12.94f ,-1.742f ,0.9216f ,-12.94f ,-1.356f ,0.7072f ,-14.53f ,0.0239f ,0.3604f ,-14.53f ,0.814f ,-0.4188f ,-14.53f ,1.009f ,-1.044f ,-14.53f ,0.4624f ,-1.044f ,-14.54f ,-0.4714f ,-0.4188f ,-14.54f ,-0.8587f ,0.3604f ,-14.54f ,-0.6635f });
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1});
  }
}
private class MFVec2f21 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3819f ,0.171f ,0.4216f ,0.1651f ,0.3819f ,0.171f ,0.4216f ,0.1651f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.4637f ,0.1714f ,0.4216f ,0.1651f ,0.4637f ,0.1714f ,0.4216f ,0.1651f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.4637f ,0.1714f ,0.4637f ,0.1714f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.3836f ,0.1404f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.4637f ,0.1714f ,0.4394f ,0.1472f ,0.4244f ,0.1312f ,0.3861f ,0.1398f });
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.9768f ,-0.0192f ,-1.681f ,1.657f ,-0.0192f ,0.4309f ,0f ,-0.0192f ,-1.681f ,1.403f ,0.7316f ,0.354f ,0.8174f ,0.7316f ,-1.463f ,0f ,0.7316f ,-1.463f ,0f ,0.7316f ,1.471f ,-1.657f ,-0.0192f ,0.4309f ,-1.403f ,0.7316f ,0.354f ,-0.8174f ,0.7316f ,-1.463f ,-0.9768f ,-0.0192f ,-1.681f ,0f ,-0.0192f ,1.75f ,1.109f ,-0.6007f ,-2.046f ,2.045f ,-0.6007f ,0.4309f ,1.695f ,-0.296f ,1.429f ,0f ,-0.6007f ,-2.046f ,-1.109f ,-0.6007f ,-2.046f ,-2.045f ,-0.6007f ,0.4309f ,-1.695f ,-0.296f ,1.429f ,0f ,-1.207f ,-1.841f ,1.023f ,-1.207f ,-1.841f ,1.913f ,-1.223f ,0.5161f ,1.601f ,-0.9325f ,1.406f ,0f ,-0.6582f ,1.708f ,-1.601f ,-0.9325f ,1.406f ,-1.913f ,-1.223f ,0.5161f ,-1.023f ,-1.207f ,-1.841f });
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,6,5,-1,5,0,2,-1,14,0,5,-1,5,16,14,-1,3,2,0,-1,0,1,3,-1,15,1,0,-1,0,14,15,-1,1,15,21,-1,21,4,1,-1,8,7,10,-1,10,9,8,-1,17,18,10,-1,10,7,17,-1,12,11,7,-1,7,8,12,-1,19,17,7,-1,7,11,19,-1,11,13,20,-1,20,19,11,-1,23,24,25,-1,23,25,26,-1,23,26,22,-1,30,31,32,-1,33,27,28,-1,32,33,28,-1,30,32,28,-1,30,28,29,-1,5,6,23,-1,23,22,5,-1,9,10,24,-1,24,23,9,-1,10,18,25,-1,25,24,10,-1,18,16,26,-1,26,25,18,-1,16,5,22,-1,22,26,16,-1,15,14,28,-1,28,27,15,-1,14,16,29,-1,29,28,14,-1,16,18,30,-1,30,29,16,-1,18,17,31,-1,31,30,18,-1,17,19,32,-1,32,31,17,-1,19,20,33,-1,33,32,19,-1,21,15,27,-1,27,33,21,-1});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,4,3,-1,3,0,6,-1,9,0,3,-1,3,11,9,-1,2,6,0,-1,0,1,2,-1,10,1,0,-1,0,9,10,-1,1,10,15,-1,15,2,1,-1,6,5,7,-1,7,4,6,-1,12,13,7,-1,7,5,12,-1,2,8,5,-1,5,6,2,-1,14,12,5,-1,5,8,14,-1,8,2,15,-1,15,14,8,-1,17,18,19,-1,17,19,20,-1,17,20,16,-1,24,25,26,-1,27,21,22,-1,26,27,22,-1,24,26,22,-1,24,22,23,-1,3,4,17,-1,17,16,3,-1,4,7,18,-1,18,17,4,-1,7,13,19,-1,19,18,7,-1,13,11,20,-1,20,19,13,-1,11,3,16,-1,16,20,11,-1,10,9,22,-1,22,21,10,-1,9,11,23,-1,23,22,9,-1,11,13,24,-1,24,23,11,-1,13,12,25,-1,25,24,13,-1,12,14,26,-1,26,25,12,-1,14,15,27,-1,27,26,14,-1,15,10,21,-1,21,27,15,-1});
  }
}
private class MFVec2f25 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3873f ,0.0706f ,0.3871f ,0.0221f ,0.3873f ,0.0706f ,0.3871f ,0.0221f ,0.3871f ,0.0221f ,0.3861f ,0.1398f ,0.3836f ,0.1404f ,0.3873f ,0.0706f ,0.3873f ,0.0706f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.3871f ,0.0221f ,0.3871f ,0.0221f ,0.3871f ,0.0221f ,0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4244f ,0.1312f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.3861f ,0.1398f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4244f ,0.1312f ,0.4411f ,0.0186f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4244f ,0.1312f ,0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4411f ,0.0186f });
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.409f ,-1.322f ,-2.067f ,1.409f ,-3.344f ,-0.8708f ,0f ,-3.344f ,-0.8708f ,1.109f ,0.0027f ,-1.236f ,0f ,0.0027f ,-1.236f ,-1.409f ,-1.322f ,-2.067f ,0f ,-1.322f ,-2.067f ,-1.109f ,0.0027f ,-1.236f ,-1.409f ,-3.344f ,-0.8708f ,2.927f ,-1.322f ,1.241f ,2.089f ,-3.344f ,1.241f ,2.045f ,0.0027f ,1.241f ,-2.927f ,-1.322f ,1.241f ,-2.045f ,0.0027f ,1.241f ,-2.089f ,-3.344f ,1.241f ,0f ,-3.344f ,1.241f ,0.9442f ,0.2881f ,-0.8816f ,0f ,0.2881f ,-0.8816f ,-0.9442f ,0.2881f ,-0.8816f ,-1.7f ,0.2881f ,1.12f ,1.7f ,0.2881f ,1.12f ,1.86f ,-3.19f ,2.175f ,2.541f ,-1.36f ,2.175f ,1.861f ,-0.3398f ,2.175f ,-1.861f ,-0.3398f ,2.175f ,-2.541f ,-1.36f ,2.175f ,-1.86f ,-3.19f ,2.175f ,0f ,-3.19f ,2.175f });
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,30,31,32,-1,32,33,34,-1,30,32,34,-1,30,34,35,-1,30,35,36,-1,30,36,29,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,13,12,30,-1,30,29,13,-1,12,21,31,-1,31,30,12,-1,20,15,32,-1,32,31,20,-1,15,16,33,-1,33,32,15,-1,16,17,34,-1,34,33,16,-1,17,18,35,-1,35,34,17,-1,19,14,36,-1,36,35,19,-1,14,13,29,-1,29,36,14,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,26,27,28,-1,28,29,30,-1,26,28,30,-1,26,30,31,-1,26,31,32,-1,26,32,25,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,11,10,26,-1,26,25,11,-1,10,17,27,-1,27,26,10,-1,17,13,28,-1,28,27,17,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,15,16,31,-1,31,30,15,-1,16,12,32,-1,32,31,16,-1,12,11,25,-1,25,32,12,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1});
  }
}
private class MFVec2f29 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4637f ,0.1714f ,0.4411f ,0.0186f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4411f ,0.0186f ,0.4637f ,0.1714f ,0.4394f ,0.1472f ,0.4411f ,0.0186f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4949f ,0.0186f ,0.4868f ,0.1432f ,0.4868f ,0.1432f ,0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4244f ,0.1312f ,0.4607f ,0.0558f ,0.464f ,0.1246f ,0.4868f ,0.1432f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4904f ,0.0166f });
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.927f ,-1.627f ,-1.013f ,2.089f ,-3.648f ,-1.013f ,0f ,0.2797f ,0.3064f ,2.045f ,-0.3017f ,-1.013f ,1.695f ,0.0029f ,-0.0151f ,-2.927f ,-1.627f ,-1.013f ,-2.045f ,-0.3017f ,-1.013f ,-2.089f ,-3.648f ,-1.013f ,-1.695f ,0.0029f ,-0.0151f ,0f ,-3.648f ,-1.013f ,1.74f ,-0.3226f ,1.158f ,2.661f ,-1.866f ,0.9192f ,2.14f ,-3.648f ,0.9192f ,-1.74f ,-0.3226f ,1.158f ,-2.661f ,-1.866f ,0.9192f ,-2.14f ,-3.648f ,0.9192f ,0f ,-3.648f ,0.9192f ,0f ,-0.0274f ,1.661f ,2.405f ,-1.656f ,-1.915f ,1.75f ,-2.942f ,-1.915f ,0f ,-2.942f ,-1.915f ,-1.75f ,-2.942f ,-1.915f ,-2.405f ,-1.656f ,-1.915f ,-1.742f ,-0.5681f ,-1.915f ,1.742f ,-0.5681f ,-1.915f ,2.393f ,-1.966f ,1.567f ,1.583f ,-0.608f ,1.784f ,0f ,-0.3446f ,2.283f ,-1.583f ,-0.608f ,1.784f ,-2.393f ,-1.966f ,1.567f ,-1.955f ,-3.469f ,1.601f ,0f ,-3.469f ,1.601f ,1.955f ,-3.469f ,1.601f });
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,3,2,-1,2,0,1,-1,4,5,3,-1,3,1,4,-1,5,4,6,-1,2,3,8,-1,8,7,2,-1,8,3,5,-1,5,9,8,-1,9,5,6,-1,6,10,9,-1,11,0,2,-1,2,7,11,-1,12,15,14,-1,14,13,12,-1,16,12,13,-1,13,17,16,-1,17,21,16,-1,14,18,19,-1,19,13,14,-1,19,20,17,-1,17,13,19,-1,20,22,21,-1,21,17,20,-1,23,18,14,-1,14,15,23,-1,25,26,27,-1,27,28,29,-1,29,30,31,-1,27,29,31,-1,25,27,31,-1,25,31,24,-1,7,8,25,-1,25,24,7,-1,8,9,26,-1,26,25,8,-1,9,10,27,-1,27,26,9,-1,22,20,28,-1,28,27,22,-1,20,19,29,-1,29,28,20,-1,19,18,30,-1,30,29,19,-1,18,23,31,-1,31,30,18,-1,11,7,24,-1,24,31,11,-1});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,1,0,-1,0,4,3,-1,10,2,1,-1,1,3,10,-1,2,10,15,-1,0,1,6,-1,6,5,0,-1,6,1,2,-1,2,7,6,-1,7,2,15,-1,15,16,7,-1,17,4,0,-1,0,5,17,-1,3,4,9,-1,9,8,3,-1,10,3,8,-1,8,11,10,-1,11,15,10,-1,9,12,13,-1,13,8,9,-1,13,14,11,-1,11,8,13,-1,14,16,15,-1,15,11,14,-1,17,12,9,-1,9,4,17,-1,19,20,21,-1,21,22,23,-1,23,24,25,-1,21,23,25,-1,19,21,25,-1,19,25,18,-1,5,6,19,-1,19,18,5,-1,6,7,20,-1,20,19,6,-1,7,16,21,-1,21,20,7,-1,16,14,22,-1,22,21,16,-1,14,13,23,-1,23,22,14,-1,13,12,24,-1,24,23,13,-1,12,17,25,-1,25,24,12,-1,17,5,18,-1,18,25,17,-1});
  }
}
private class MFVec2f33 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.532f ,0.098f ,0.5645f ,0.0707f ,0.4885f ,0.102f ,0.5026f ,0.044f ,0.5945f ,0.0186f ,0.5487f ,0.0186f ,0.5487f ,0.0186f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4868f ,0.1432f ,0.5645f ,0.0707f ,0.5026f ,0.044f ,0.4885f ,0.102f ,0.532f ,0.098f ,0.5945f ,0.0186f ,0.5487f ,0.0186f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.5487f ,0.0186f ,0.4949f ,0.0186f ,0.4868f ,0.1432f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4904f ,0.0166f ,0.4607f ,0.0558f ,0.464f ,0.1246f ,0.4868f ,0.1432f });
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.784f ,1.036f ,1.39f ,2.216f ,-0.5826f ,3.202f ,2.216f ,-1.964f ,2.834f ,0f ,-0.5826f ,4.521f ,0f ,1.138f ,3.008f ,1.74f ,1.362f ,0.2166f ,2.661f ,-0.1823f ,-0.0226f ,2.14f ,-1.964f ,-0.0226f ,-2.216f ,-0.5826f ,3.202f ,-1.784f ,1.036f ,1.39f ,0f ,-1.964f ,4.154f ,-2.216f ,-1.964f ,2.834f ,-1.74f ,1.362f ,0.2166f ,-2.661f ,-0.1823f ,-0.0226f ,-2.14f ,-1.964f ,-0.0226f ,0f ,-1.964f ,2.834f ,0f ,-1.964f ,-0.0226f ,0f ,1.657f ,0.7196f ,1.601f ,1.243f ,-0.4207f ,2.424f ,-0.1368f ,-0.64f ,1.977f ,-1.746f ,-0.61f ,0f ,-1.746f ,-0.61f ,-1.977f ,-1.746f ,-0.61f ,-2.424f ,-0.1368f ,-0.64f ,-1.601f ,1.243f ,-0.4207f ,0f ,1.51f ,0.0788f });
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1});
  }
}
private class MFVec2f37 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.719f ,0.5576f ,0.6284f ,0.5576f ,0.7414f ,0.5576f ,0.6787f ,0.5576f ,0.5781f ,0.5576f ,0.5154f ,0.5576f ,0.5378f ,0.5576f ,0.6284f ,0.5029f ,0.7509f ,0.3997f ,0.6284f ,0.3997f ,0.7509f ,0.5029f ,0.7811f ,0.3997f ,0.7811f ,0.5029f ,0.6964f ,0.3997f ,0.6964f ,0.5029f ,0.5604f ,0.3997f ,0.5604f ,0.5029f ,0.4756f ,0.3997f ,0.4756f ,0.5029f ,0.5059f ,0.3997f ,0.5059f ,0.5029f ,0.7509f ,0.3197f ,0.6284f ,0.3197f ,0.7811f ,0.3197f ,0.6964f ,0.3197f ,0.5604f ,0.3197f ,0.4756f ,0.3197f ,0.5059f ,0.3197f ,0.7651f ,0.2166f ,0.6284f ,0.2166f ,0.7989f ,0.2166f ,0.7043f ,0.2166f ,0.5525f ,0.2166f ,0.4579f ,0.2166f ,0.4917f ,0.2166f ,0.7224f ,0.263f ,0.6284f ,0.263f ,0.7456f ,0.263f ,0.6805f ,0.263f ,0.5762f ,0.263f ,0.5112f ,0.263f ,0.5344f ,0.263f ,0.8705f ,0.5452f ,0.8705f ,0.5383f ,0.8705f ,0.5369f ,0.8705f ,0.5408f ,0.8705f ,0.5483f ,0.8705f ,0.5522f ,0.8705f ,0.5509f ,0.917f ,0.5452f ,0.917f ,0.5266f ,0.89f ,0.5304f ,0.89f ,0.5452f ,0.917f ,0.522f ,0.89f ,0.5268f ,0.917f ,0.5349f ,0.89f ,0.537f ,0.917f ,0.5555f ,0.89f ,0.5534f ,0.917f ,0.5684f ,0.89f ,0.5636f ,0.917f ,0.5638f ,0.89f ,0.56f ,0.8746f ,0.531f ,0.8746f ,0.5452f ,0.8746f ,0.5279f ,0.8746f ,0.5368f ,0.8746f ,0.5524f ,0.8746f ,0.5613f ,0.8746f ,0.5581f });
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.96f ,-0.0706f ,0f ,-1.643f ,-0.0706f ,3.209f ,1.316f ,-0.0706f ,4.002f ,3.367f ,-0.0706f ,1.781f ,3.367f ,-0.0706f ,-1.781f ,1.316f ,-0.0706f ,-4.002f ,-1.643f ,-0.0706f ,-3.209f ,-2.96f ,-3.82f ,0f ,-1.643f ,-3.82f ,3.209f ,1.316f ,-3.82f ,4.002f ,3.367f ,-3.82f ,1.781f ,3.367f ,-3.82f ,-1.781f ,1.316f ,-3.82f ,-4.002f ,-1.643f ,-3.82f ,-3.209f ,-2.96f ,-10.32f ,0f ,-1.643f ,-10.32f ,3.209f ,1.316f ,-10.32f ,4.002f ,3.367f ,-10.32f ,1.781f ,3.367f ,-10.32f ,-1.781f ,1.316f ,-10.32f ,-4.002f ,-1.643f ,-10.32f ,-3.209f ,-3.367f ,-16.94f ,0f ,-1.897f ,-16.94f ,3.582f ,1.407f ,-16.94f ,4.467f ,3.355f ,-16.94f ,1.988f ,3.355f ,-16.94f ,-1.988f ,1.407f ,-16.94f ,-4.467f ,-1.897f ,-16.94f ,-3.582f ,-2.146f ,-8.794f ,0f ,-1.136f ,-8.794f ,2.462f ,1.135f ,-8.794f ,3.07f ,2.633f ,-8.794f ,1.366f ,2.633f ,-8.794f ,-1.366f ,1.135f ,-8.794f ,-3.07f ,-1.136f ,-8.794f ,-2.462f ,-2.156f ,-15.25f ,0f ,-1.225f ,-15.25f ,1.956f ,0.8662f ,-15.25f ,2.439f ,2.543f ,-15.25f ,1.085f ,2.543f ,-15.25f ,-1.085f ,0.8662f ,-15.25f ,-2.439f ,-1.225f ,-15.25f ,-1.956f ,-2.051f ,1.92f ,0f ,-1.076f ,1.92f ,2.375f ,1.114f ,1.92f ,2.961f ,2.87f ,1.92f ,1.318f ,2.87f ,1.92f ,-1.318f ,1.114f ,1.92f ,-2.961f ,-1.076f ,1.92f ,-2.375f ,-1.842f ,-18.93f ,0f ,-1.03f ,-18.93f ,1.873f ,0.7965f ,-18.93f ,2.295f ,2.261f ,-18.93f ,1.113f ,2.261f ,-18.93f ,-0.9478f ,0.7965f ,-18.93f ,-2.13f ,-1.03f ,-18.93f ,-1.708f ,-0.6277f ,-19.91f ,0f ,-0.2723f ,-19.91f ,0.912f ,0.5262f ,-19.91f ,1.096f ,1.167f ,-19.91f ,0.5796f ,1.167f ,-19.91f ,-0.4145f ,0.5262f ,-19.91f ,-0.9313f ,-0.2723f ,-19.91f ,-0.7469f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1});
  }
}
private class MFVec2f41 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9309f ,0.5848f ,0.919f ,0.5848f ,0.8921f ,0.5848f ,0.8706f ,0.5848f ,0.8706f ,0.5848f ,0.8921f ,0.5848f ,0.919f ,0.5848f ,0.9845f ,0.5321f ,0.955f ,0.5475f ,0.9491f ,0.5599f ,0.9788f ,0.5571f ,0.8787f ,0.5475f ,0.8825f ,0.5599f ,0.8302f ,0.5321f ,0.8291f ,0.5571f ,0.8302f ,0.52f ,0.8291f ,0.5571f ,0.8787f ,0.52f ,0.8825f ,0.5571f ,0.955f ,0.52f ,0.9491f ,0.5571f ,0.9444f ,0.5755f ,0.9717f ,0.5755f ,0.8831f ,0.5755f ,0.8339f ,0.5755f ,0.8339f ,0.5755f ,0.8831f ,0.5755f ,0.9444f ,0.5755f ,0.9679f ,0.2444f ,0.9449f ,0.2445f ,0.8931f ,0.2445f ,0.8516f ,0.2444f ,0.8516f ,0.2442f ,0.8931f ,0.2442f ,0.9449f ,0.2442f ,0.9372f ,0.2243f ,0.9255f ,0.2244f ,0.8993f ,0.2244f ,0.8783f ,0.2243f ,0.8783f ,0.2243f ,0.8993f ,0.2243f ,0.9255f ,0.2243f });
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.7186f ,0.9688f ,0.0234f ,-0.3632f ,0.9688f ,0.9354f ,0.4353f ,0.9688f ,1.12f ,1.076f ,0.9688f ,0.603f ,1.076f ,0.9688f ,-0.3911f ,0.4353f ,0.9688f ,-0.9079f ,-0.3632f ,0.9688f ,-0.7235f ,-2.337f ,-4.613f ,0.0234f ,-1.46f ,-3.622f ,2.019f ,-1.236f ,-1.628f ,2.42f ,-2.118f ,-1.912f ,0.0234f ,0.8111f ,-3.622f ,2.567f ,0.7468f ,-1.628f ,2.903f ,2.254f ,-4.613f ,1.255f ,2.337f ,-1.912f ,0.9793f ,2.254f ,-5.383f ,-1.368f ,2.337f ,-1.912f ,-0.9325f ,0.8111f ,-5.383f ,-2.903f ,0.7468f ,-1.912f ,-2.368f ,-1.46f ,-5.383f ,-2.355f ,-1.236f ,-1.912f ,-1.885f ,-1.121f ,-0.0032f ,1.896f ,-1.933f ,-0.0032f ,0.0234f ,0.7056f ,-0.0032f ,2.318f ,2.17f ,-0.0032f ,1.136f ,2.17f ,-0.0032f ,-0.9244f ,0.7056f ,-0.0032f ,-2.061f ,-1.121f ,-0.0032f ,-1.64f ,-1.607f ,-12.92f ,0.0032f ,-0.9216f ,-12.91f ,1.565f ,0.619f ,-12.91f ,1.951f ,1.854f ,-12.92f ,0.8701f ,1.854f ,-12.94f ,-0.9762f ,0.619f ,-12.94f ,-1.742f ,-0.9216f ,-12.94f ,-1.356f ,-0.7072f ,-14.53f ,0.0239f ,-0.3604f ,-14.53f ,0.814f ,0.4188f ,-14.53f ,1.009f ,1.044f ,-14.53f ,0.4624f ,1.044f ,-14.54f ,-0.4714f ,0.4188f ,-14.54f ,-0.8587f ,-0.3604f ,-14.54f ,-0.6635f });
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1});
  }
}
private class MFVec2f45 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3819f ,0.171f ,0.4216f ,0.1651f ,0.3819f ,0.171f ,0.4216f ,0.1651f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.4637f ,0.1714f ,0.4216f ,0.1651f ,0.4637f ,0.1714f ,0.4216f ,0.1651f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.3819f ,0.171f ,0.4637f ,0.1714f ,0.4637f ,0.1714f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.3836f ,0.1404f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.4637f ,0.1714f ,0.4394f ,0.1472f ,0.4244f ,0.1312f ,0.3861f ,0.1398f });
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.9768f ,-0.0192f ,-1.681f ,-1.657f ,-0.0192f ,0.4309f ,0f ,-0.0192f ,-1.681f ,-1.403f ,0.7316f ,0.354f ,-0.8174f ,0.7316f ,-1.463f ,0f ,0.7316f ,-1.463f ,0f ,0.7316f ,1.471f ,1.657f ,-0.0192f ,0.4309f ,1.403f ,0.7316f ,0.354f ,0.8174f ,0.7316f ,-1.463f ,0.9768f ,-0.0192f ,-1.681f ,0f ,-0.0192f ,1.75f ,-1.109f ,-0.6007f ,-2.046f ,-2.045f ,-0.6007f ,0.4309f ,-1.695f ,-0.296f ,1.429f ,0f ,-0.6007f ,-2.046f ,1.109f ,-0.6007f ,-2.046f ,2.045f ,-0.6007f ,0.4309f ,1.695f ,-0.296f ,1.429f ,0f ,-1.207f ,-1.841f ,-1.023f ,-1.207f ,-1.841f ,-1.913f ,-1.223f ,0.5161f ,-1.601f ,-0.9325f ,1.406f ,0f ,-0.6582f ,1.708f ,1.601f ,-0.9325f ,1.406f ,1.913f ,-1.223f ,0.5161f ,1.023f ,-1.207f ,-1.841f });
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,5,-1,5,6,2,-1,14,16,5,-1,5,0,14,-1,3,1,0,-1,0,2,3,-1,15,14,0,-1,0,1,15,-1,1,4,21,-1,21,15,1,-1,8,9,10,-1,10,7,8,-1,17,7,10,-1,10,18,17,-1,12,8,7,-1,7,11,12,-1,19,11,7,-1,7,17,19,-1,11,19,20,-1,20,13,11,-1,23,22,26,-1,23,26,25,-1,23,25,24,-1,30,29,28,-1,28,27,33,-1,28,33,32,-1,30,28,32,-1,30,32,31,-1,5,22,23,-1,23,6,5,-1,9,23,24,-1,24,10,9,-1,10,24,25,-1,25,18,10,-1,18,25,26,-1,26,16,18,-1,16,26,22,-1,22,5,16,-1,15,27,28,-1,28,14,15,-1,14,28,29,-1,29,16,14,-1,16,29,30,-1,30,18,16,-1,18,30,31,-1,31,17,18,-1,17,31,32,-1,32,19,17,-1,19,32,33,-1,33,20,19,-1,21,33,27,-1,27,15,21,-1});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,0,3,-1,3,4,6,-1,9,11,3,-1,3,0,9,-1,2,1,0,-1,0,6,2,-1,10,9,0,-1,0,1,10,-1,1,2,15,-1,15,10,1,-1,6,4,7,-1,7,5,6,-1,12,5,7,-1,7,13,12,-1,2,6,5,-1,5,8,2,-1,14,8,5,-1,5,12,14,-1,8,14,15,-1,15,2,8,-1,17,16,20,-1,17,20,19,-1,17,19,18,-1,24,23,22,-1,22,21,27,-1,22,27,26,-1,24,22,26,-1,24,26,25,-1,3,16,17,-1,17,4,3,-1,4,17,18,-1,18,7,4,-1,7,18,19,-1,19,13,7,-1,13,19,20,-1,20,11,13,-1,11,20,16,-1,16,3,11,-1,10,21,22,-1,22,9,10,-1,9,22,23,-1,23,11,9,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,12,13,-1,12,25,26,-1,26,14,12,-1,14,26,27,-1,27,15,14,-1,15,27,21,-1,21,10,15,-1});
  }
}
private class MFVec2f49 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3873f ,0.0706f ,0.3871f ,0.0221f ,0.3873f ,0.0706f ,0.3871f ,0.0221f ,0.3871f ,0.0221f ,0.3861f ,0.1398f ,0.3836f ,0.1404f ,0.3873f ,0.0706f ,0.3873f ,0.0706f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.3871f ,0.0221f ,0.3871f ,0.0221f ,0.3871f ,0.0221f ,0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4244f ,0.1312f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.3861f ,0.1398f ,0.3836f ,0.1404f ,0.3861f ,0.1398f ,0.4244f ,0.1312f ,0.4244f ,0.1312f ,0.4411f ,0.0186f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4244f ,0.1312f ,0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4411f ,0.0186f });
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.409f ,-1.322f ,-2.067f ,-1.409f ,-3.344f ,-0.8708f ,0f ,-3.344f ,-0.8708f ,-1.109f ,0.0027f ,-1.236f ,0f ,0.0027f ,-1.236f ,1.409f ,-1.322f ,-2.067f ,0f ,-1.322f ,-2.067f ,1.109f ,0.0027f ,-1.236f ,1.409f ,-3.344f ,-0.8708f ,-2.927f ,-1.322f ,1.241f ,-2.089f ,-3.344f ,1.241f ,-2.045f ,0.0027f ,1.241f ,2.927f ,-1.322f ,1.241f ,2.045f ,0.0027f ,1.241f ,2.089f ,-3.344f ,1.241f ,0f ,-3.344f ,1.241f ,-0.9442f ,0.2881f ,-0.8816f ,0f ,0.2881f ,-0.8816f ,0.9442f ,0.2881f ,-0.8816f ,1.7f ,0.2881f ,1.12f ,-1.7f ,0.2881f ,1.12f ,-1.86f ,-3.19f ,2.175f ,-2.541f ,-1.36f ,2.175f ,-1.861f ,-0.3398f ,2.175f ,1.861f ,-0.3398f ,2.175f ,2.541f ,-1.36f ,2.175f ,1.86f ,-3.19f ,2.175f ,0f ,-3.19f ,2.175f });
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,30,29,36,-1,30,36,35,-1,30,35,34,-1,34,33,32,-1,30,34,32,-1,30,32,31,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,13,29,30,-1,30,12,13,-1,12,30,31,-1,31,21,12,-1,20,31,32,-1,32,15,20,-1,15,32,33,-1,33,16,15,-1,16,33,34,-1,34,17,16,-1,17,34,35,-1,35,18,17,-1,19,35,36,-1,36,14,19,-1,14,36,29,-1,29,13,14,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,26,25,32,-1,26,32,31,-1,26,31,30,-1,30,29,28,-1,26,30,28,-1,26,28,27,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,11,25,26,-1,26,10,11,-1,10,26,27,-1,27,17,10,-1,17,27,28,-1,28,13,17,-1,13,28,29,-1,29,14,13,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,16,15,-1,16,31,32,-1,32,12,16,-1,12,32,25,-1,25,11,12,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1});
  }
}
private class MFVec2f53 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4637f ,0.1714f ,0.4411f ,0.0186f ,0.4244f ,0.1312f ,0.4394f ,0.1472f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4411f ,0.0186f ,0.4637f ,0.1714f ,0.4394f ,0.1472f ,0.4411f ,0.0186f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4949f ,0.0186f ,0.4868f ,0.1432f ,0.4868f ,0.1432f ,0.433f ,0.0595f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.4411f ,0.0186f ,0.433f ,0.0595f ,0.4244f ,0.1312f ,0.4244f ,0.1312f ,0.4607f ,0.0558f ,0.464f ,0.1246f ,0.4868f ,0.1432f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4904f ,0.0166f });
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.927f ,-1.627f ,-1.013f ,-2.089f ,-3.648f ,-1.013f ,0f ,0.2797f ,0.3064f ,-2.045f ,-0.3017f ,-1.013f ,-1.695f ,0.0029f ,-0.0151f ,2.927f ,-1.627f ,-1.013f ,2.045f ,-0.3017f ,-1.013f ,2.089f ,-3.648f ,-1.013f ,1.695f ,0.0029f ,-0.0151f ,0f ,-3.648f ,-1.013f ,-1.74f ,-0.3226f ,1.158f ,-2.661f ,-1.866f ,0.9192f ,-2.14f ,-3.648f ,0.9192f ,1.74f ,-0.3226f ,1.158f ,2.661f ,-1.866f ,0.9192f ,2.14f ,-3.648f ,0.9192f ,0f ,-3.648f ,0.9192f ,0f ,-0.0274f ,1.661f ,-2.405f ,-1.656f ,-1.915f ,-1.75f ,-2.942f ,-1.915f ,0f ,-2.942f ,-1.915f ,1.75f ,-2.942f ,-1.915f ,2.405f ,-1.656f ,-1.915f ,1.742f ,-0.5681f ,-1.915f ,-1.742f ,-0.5681f ,-1.915f ,-2.393f ,-1.966f ,1.567f ,-1.583f ,-0.608f ,1.784f ,0f ,-0.3446f ,2.283f ,1.583f ,-0.608f ,1.784f ,2.393f ,-1.966f ,1.567f ,1.955f ,-3.469f ,1.601f ,0f ,-3.469f ,1.601f ,-1.955f ,-3.469f ,1.601f });
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,2,3,1,-1,4,1,3,-1,3,5,4,-1,5,6,4,-1,2,7,8,-1,8,3,2,-1,8,9,5,-1,5,3,8,-1,9,10,6,-1,6,5,9,-1,11,7,2,-1,2,0,11,-1,12,13,14,-1,14,15,12,-1,16,17,13,-1,13,12,16,-1,17,16,21,-1,14,13,19,-1,19,18,14,-1,19,13,17,-1,17,20,19,-1,20,17,21,-1,21,22,20,-1,23,15,14,-1,14,18,23,-1,25,24,31,-1,31,30,29,-1,29,28,27,-1,31,29,27,-1,25,31,27,-1,25,27,26,-1,7,24,25,-1,25,8,7,-1,8,25,26,-1,26,9,8,-1,9,26,27,-1,27,10,9,-1,22,27,28,-1,28,20,22,-1,20,28,29,-1,29,19,20,-1,19,29,30,-1,30,18,19,-1,18,30,31,-1,31,23,18,-1,11,31,24,-1,24,7,11,-1});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,0,-1,0,1,3,-1,10,3,1,-1,1,2,10,-1,2,15,10,-1,0,5,6,-1,6,1,0,-1,6,7,2,-1,2,1,6,-1,7,16,15,-1,15,2,7,-1,17,5,0,-1,0,4,17,-1,3,8,9,-1,9,4,3,-1,10,11,8,-1,8,3,10,-1,11,10,15,-1,9,8,13,-1,13,12,9,-1,13,8,11,-1,11,14,13,-1,14,11,15,-1,15,16,14,-1,17,4,9,-1,9,12,17,-1,19,18,25,-1,25,24,23,-1,23,22,21,-1,25,23,21,-1,19,25,21,-1,19,21,20,-1,5,18,19,-1,19,6,5,-1,6,19,20,-1,20,7,6,-1,7,20,21,-1,21,16,7,-1,16,21,22,-1,22,14,16,-1,14,22,23,-1,23,13,14,-1,13,23,24,-1,24,12,13,-1,12,24,25,-1,25,17,12,-1,17,25,18,-1,18,5,17,-1});
  }
}
private class MFVec2f57 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.532f ,0.098f ,0.5645f ,0.0707f ,0.4885f ,0.102f ,0.5026f ,0.044f ,0.5945f ,0.0186f ,0.5487f ,0.0186f ,0.5487f ,0.0186f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4868f ,0.1432f ,0.5645f ,0.0707f ,0.5026f ,0.044f ,0.4885f ,0.102f ,0.532f ,0.098f ,0.5945f ,0.0186f ,0.5487f ,0.0186f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.5487f ,0.0186f ,0.4949f ,0.0186f ,0.4868f ,0.1432f ,0.464f ,0.1246f ,0.4607f ,0.0558f ,0.4904f ,0.0166f ,0.4949f ,0.0186f ,0.4904f ,0.0166f ,0.4607f ,0.0558f ,0.464f ,0.1246f ,0.4868f ,0.1432f });
  }
}
private class MFVec3f58 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.784f ,1.036f ,1.39f ,-2.216f ,-0.5826f ,3.202f ,-2.216f ,-1.964f ,2.834f ,0f ,-0.5826f ,4.521f ,0f ,1.138f ,3.008f ,-1.74f ,1.362f ,0.2166f ,-2.661f ,-0.1823f ,-0.0226f ,-2.14f ,-1.964f ,-0.0226f ,2.216f ,-0.5826f ,3.202f ,1.784f ,1.036f ,1.39f ,0f ,-1.964f ,4.154f ,2.216f ,-1.964f ,2.834f ,1.74f ,1.362f ,0.2166f ,2.661f ,-0.1823f ,-0.0226f ,2.14f ,-1.964f ,-0.0226f ,0f ,-1.964f ,2.834f ,0f ,-1.964f ,-0.0226f ,0f ,1.657f ,0.7196f ,-1.601f ,1.243f ,-0.4207f ,-2.424f ,-0.1368f ,-0.64f ,-1.977f ,-1.746f ,-0.61f ,0f ,-1.746f ,-0.61f ,1.977f ,-1.746f ,-0.61f ,2.424f ,-0.1368f ,-0.64f ,1.601f ,1.243f ,-0.4207f ,0f ,1.51f ,0.0788f });
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1});
  }
}
private class MFVec2f61 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.019f ,0.2349f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.1927f ,0.24f ,0.0206f ,0.2122f ,0.1067f ,0.2154f ,0.1463f ,0.2162f ,0.227f ,0.2131f ,0.3536f ,0.2151f ,0.1879f ,0.2143f ,0.3553f ,0.2398f ,0.3555f ,0.2151f ,0.3557f ,0.2401f ,0.3545f ,0.2151f ,0.3536f ,0.2151f ,0.019f ,0.2349f ,0.0206f ,0.2122f ,0.0206f ,0.2122f ,0.1067f ,0.2154f ,0.1011f ,0.241f ,0.019f ,0.2349f ,0.1463f ,0.2162f ,0.1445f ,0.2419f ,0.227f ,0.2131f ,0.3536f ,0.2151f ,0.3561f ,0.2404f ,0.2369f ,0.2375f ,0.1879f ,0.2143f ,0.1927f ,0.24f ,0.3553f ,0.2398f ,0.3555f ,0.2151f ,0.3545f ,0.2151f ,0.3557f ,0.2401f ,0.0206f ,0.2122f ,0.019f ,0.2349f ,0.3536f ,0.2151f ,0.019f ,0.2349f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.1927f ,0.24f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.3557f ,0.2401f ,0.3553f ,0.2398f ,0.2369f ,0.2375f ,0.1927f ,0.24f ,0.1445f ,0.2419f ,0.1011f ,0.241f ,0.019f ,0.2349f ,0.019f ,0.2349f });
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.178f ,1.114f ,3.711f ,5.76f ,1.15f ,1.754f ,1.52f ,0.9575f ,-3.918f ,3.95f ,0.9672f ,-2.776f ,5.309f ,1.072f ,-0.9797f ,3.789f ,0.0396f ,2.969f ,5.166f ,0.0713f ,1.445f ,1.593f ,-0.0798f ,-2.916f ,3.6f ,-0.0573f ,-2.087f ,4.841f ,-0.0103f ,-0.6841f ,1.635f ,1.083f ,4.322f ,1.595f ,0.0009f ,3.405f ,0f ,0.0009f ,3.405f ,0f ,1.083f ,4.322f ,-1.595f ,0.0009f ,3.405f ,-3.789f ,0.0396f ,2.969f ,-4.178f ,1.114f ,3.711f ,-1.635f ,1.083f ,4.322f ,-5.166f ,0.0713f ,1.445f ,-5.76f ,1.15f ,1.754f ,-3.6f ,-0.0573f ,-2.087f ,-1.593f ,-0.0798f ,-2.916f ,-1.52f ,0.9575f ,-3.918f ,-3.95f ,0.9672f ,-2.776f ,-4.841f ,-0.0103f ,-0.6841f ,-5.309f ,1.072f ,-0.9797f ,0f ,-0.0798f ,-2.916f ,0f ,0.9575f ,-3.918f ,1.609f ,1.473f ,4.099f ,4.053f ,1.473f ,3.512f ,5.524f ,1.473f ,1.692f ,5.098f ,1.473f ,-0.8893f ,3.806f ,1.473f ,-2.528f ,1.47f ,1.473f ,-3.626f ,0f ,1.473f ,-3.626f ,-1.47f ,1.473f ,-3.626f ,-3.806f ,1.473f ,-2.528f ,-5.098f ,1.473f ,-0.8893f ,-5.524f ,1.473f ,1.692f ,-4.053f ,1.473f ,3.512f ,-1.609f ,1.473f ,4.099f ,0f ,1.473f ,4.099f });
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1});
  }
}
private class MFVec2f65 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.3503f ,0.2575f ,0.3578f ,0.2568f ,0.0179f ,0.2574f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.0186f ,0.2582f ,0.3542f ,0.2515f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.3553f ,0.2398f ,0.3561f ,0.2404f ,0.2369f ,0.2375f ,0.1927f ,0.24f ,0.019f ,0.2349f ,0.3557f ,0.2401f ,0.019f ,0.2349f ,0.019f ,0.2349f ,0.1011f ,0.241f ,0.1026f ,0.2616f ,0.0179f ,0.2574f ,0.1445f ,0.2419f ,0.1481f ,0.2604f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.3503f ,0.2575f ,0.2289f ,0.2559f ,0.1927f ,0.24f ,0.1884f ,0.2584f ,0.019f ,0.2349f ,0.0186f ,0.2582f ,0.3578f ,0.2568f ,0.3553f ,0.2398f ,0.3557f ,0.2401f ,0.3542f ,0.2515f ,0.0179f ,0.2574f ,0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.1884f ,0.2584f ,0.2289f ,0.2559f ,0.3503f ,0.2575f ,0.3542f ,0.2515f ,0.3578f ,0.2568f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.1481f ,0.2604f ,0.1026f ,0.2616f ,0.0179f ,0.2574f ,0.0186f ,0.2582f ,0.1011f ,0.241f ,0.019f ,0.2349f ,0.019f ,0.2349f ,0.019f ,0.2349f ,0.1011f ,0.241f ,0.1445f ,0.2419f ,0.1927f ,0.24f ,0.2369f ,0.2375f ,0.3561f ,0.2404f ,0.3557f ,0.2401f ,0.3553f ,0.2398f ,0.2369f ,0.2375f ,0.1927f ,0.24f ,0.1445f ,0.2419f });
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.026f ,0.7465f ,3.365f ,5.556f ,0.7644f ,1.615f ,1.443f ,0.6683f ,-3.473f ,1.519f ,0.7312f ,3.919f ,3.83f ,0.6731f ,-2.414f ,5.148f ,0.7257f ,-0.8425f ,4.178f ,0.0328f ,3.711f ,5.76f ,0.0687f ,1.754f ,1.52f ,-0.1236f ,-3.918f ,3.95f ,-0.1138f ,-2.776f ,5.309f ,-0.0087f ,-0.9797f ,1.635f ,0.0023f ,4.322f ,0f ,-0.1236f ,-3.918f ,-1.635f ,0.0023f ,4.322f ,-4.178f ,0.0328f ,3.711f ,-4.026f ,0.7465f ,3.365f ,-1.519f ,0.7312f ,3.919f ,-5.76f ,0.0687f ,1.754f ,-5.556f ,0.7644f ,1.615f ,-3.95f ,-0.1138f ,-2.776f ,-1.52f ,-0.1236f ,-3.918f ,-1.443f ,0.6683f ,-3.473f ,-3.83f ,0.6731f ,-2.414f ,-5.309f ,-0.0087f ,-0.9797f ,-5.148f ,0.7257f ,-0.8425f ,0f ,0.0023f ,4.322f ,0f ,0.7312f ,3.919f ,0f ,0.6683f ,-3.473f ,1.493f ,1.061f ,3.676f ,3.895f ,1.061f ,3.145f ,5.297f ,1.061f ,1.541f ,4.918f ,1.061f ,-0.7369f ,3.68f ,1.061f ,-2.214f ,1.392f ,1.061f ,-3.23f ,0f ,1.061f ,-3.23f ,-1.392f ,1.061f ,-3.23f ,-3.68f ,1.061f ,-2.214f ,-4.918f ,1.061f ,-0.7369f ,-5.297f ,1.061f ,1.541f ,-3.895f ,1.061f ,3.145f ,-1.493f ,1.061f ,3.676f ,0f ,1.061f ,3.676f ,3.857f ,-0.461f ,3.349f ,1.533f ,-0.461f ,3.907f ,0f ,-0.461f ,3.907f ,-1.533f ,-0.461f ,3.907f ,-3.857f ,-0.461f ,3.349f ,-5.251f ,-0.461f ,1.624f ,-4.847f ,-0.461f ,-0.8254f ,-3.619f ,-0.461f ,-2.448f ,-1.398f ,-0.461f ,-3.492f ,0f ,-0.461f ,-3.492f ,1.398f ,-0.461f ,-3.492f ,3.619f ,-0.461f ,-2.448f ,4.847f ,-0.461f ,-0.8254f ,5.251f ,-0.461f ,1.624f });
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1});
  }
}
private class MFVec2f69 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1041f ,0.2822f ,0.0168f ,0.2798f ,0.1518f ,0.2789f ,0.3444f ,0.2746f ,0.3604f ,0.2737f ,0.221f ,0.2742f ,0.1842f ,0.2768f ,0.3527f ,0.263f ,0.0181f ,0.2816f ,0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.3578f ,0.2568f ,0.3503f ,0.2575f ,0.0179f ,0.2574f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.0186f ,0.2582f ,0.3542f ,0.2515f ,0.3604f ,0.2737f ,0.3578f ,0.2568f ,0.3542f ,0.2515f ,0.3527f ,0.263f ,0.1026f ,0.2616f ,0.1041f ,0.2822f ,0.0168f ,0.2798f ,0.0179f ,0.2574f ,0.1481f ,0.2604f ,0.1518f ,0.2789f ,0.3503f ,0.2575f ,0.3444f ,0.2746f ,0.221f ,0.2742f ,0.2289f ,0.2559f ,0.1842f ,0.2768f ,0.1884f ,0.2584f ,0.0181f ,0.2816f ,0.0186f ,0.2582f ,0.0168f ,0.2798f ,0.1041f ,0.2822f ,0.1518f ,0.2789f ,0.1842f ,0.2768f ,0.221f ,0.2742f ,0.3444f ,0.2746f ,0.3527f ,0.263f ,0.3604f ,0.2737f ,0.221f ,0.2742f ,0.1842f ,0.2768f ,0.1518f ,0.2789f ,0.1041f ,0.2822f ,0.0168f ,0.2798f ,0.0181f ,0.2816f ,0.1026f ,0.2616f ,0.0179f ,0.2574f ,0.0186f ,0.2582f ,0.0179f ,0.2574f ,0.1026f ,0.2616f ,0.1481f ,0.2604f ,0.1884f ,0.2584f ,0.2289f ,0.2559f ,0.3503f ,0.2575f ,0.3542f ,0.2515f ,0.3578f ,0.2568f ,0.2289f ,0.2559f ,0.1884f ,0.2584f ,0.1481f ,0.2604f });
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.874f ,0.7332f ,3.02f ,1.367f ,0.7332f ,-3.028f ,3.71f ,0.7332f ,-2.051f ,4.987f ,0.7332f ,-0.7054f ,1.404f ,0.7332f ,3.517f ,5.353f ,0.7332f ,1.475f ,4.026f ,0.0196f ,3.365f ,5.556f ,0.0375f ,1.615f ,1.443f ,-0.0586f ,-3.473f ,1.519f ,0.0043f ,3.919f ,3.83f ,-0.0538f ,-2.414f ,5.148f ,-0.0012f ,-0.8425f ,0f ,0.0043f ,3.919f ,-1.367f ,0.7332f ,-3.028f ,-1.443f ,-0.0586f ,-3.473f ,0f ,-0.0586f ,-3.473f ,0f ,0.7332f ,-3.028f ,-4.026f ,0.0196f ,3.365f ,-3.874f ,0.7332f ,3.02f ,-1.404f ,0.7332f ,3.517f ,-1.519f ,0.0043f ,3.919f ,-5.556f ,0.0375f ,1.615f ,-5.353f ,0.7332f ,1.475f ,-3.71f ,0.7332f ,-2.051f ,-3.83f ,-0.0538f ,-2.414f ,-4.987f ,0.7332f ,-0.7054f ,-5.148f ,-0.0012f ,-0.8425f ,0f ,0.7332f ,3.517f ,1.366f ,1.112f ,3.286f ,3.726f ,1.112f ,2.811f ,5.078f ,1.112f ,1.398f ,4.742f ,1.112f ,-0.6029f ,3.55f ,1.112f ,-1.86f ,1.311f ,1.112f ,-2.794f ,0f ,1.112f ,-2.794f ,-1.311f ,1.112f ,-2.794f ,-3.55f ,1.112f ,-1.86f ,-4.742f ,1.112f ,-0.6029f ,-5.078f ,1.112f ,1.398f ,-3.726f ,1.112f ,2.811f ,-1.366f ,1.112f ,3.286f ,0f ,1.112f ,3.286f ,3.87f ,-0.3411f ,3.153f ,1.478f ,-0.3411f ,3.682f ,0f ,-0.3411f ,3.682f ,-1.478f ,-0.3411f ,3.682f ,-3.87f ,-0.3411f ,3.153f ,-5.28f ,-0.3411f ,1.54f ,-4.9f ,-0.3411f ,-0.7446f ,-3.661f ,-0.3411f ,-2.221f ,-1.384f ,-0.3411f ,-3.233f ,0f ,-0.3411f ,-3.233f ,1.384f ,-0.3411f ,-3.233f ,3.661f ,-0.3411f ,-2.221f ,4.9f ,-0.3411f ,-0.7446f ,5.28f ,-0.3411f ,1.54f });
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1});
  }
}
private class MFVec2f73 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0177f ,0.3051f ,0.0982f ,0.302f ,0.1487f ,0.2975f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.1849f ,0.2961f ,0.3633f ,0.2922f ,0.3627f ,0.2922f ,0.0177f ,0.3051f ,0.1055f ,0.2814f ,0.3697f ,0.2711f ,0.3605f ,0.2757f ,0.2204f ,0.275f ,0.1853f ,0.2768f ,0.024f ,0.2813f ,0.1448f ,0.2785f ,0.3603f ,0.2745f ,0.0155f ,0.2778f ,0.3633f ,0.2922f ,0.3697f ,0.2711f ,0.3603f ,0.2745f ,0.3627f ,0.2922f ,0.1055f ,0.2814f ,0.0982f ,0.302f ,0.0177f ,0.3051f ,0.024f ,0.2813f ,0.1448f ,0.2785f ,0.1487f ,0.2975f ,0.3605f ,0.2757f ,0.3621f ,0.2922f ,0.2175f ,0.2944f ,0.2204f ,0.275f ,0.1849f ,0.2961f ,0.1853f ,0.2768f ,0.0177f ,0.3051f ,0.0155f ,0.2778f ,0.0177f ,0.3051f ,0.0982f ,0.302f ,0.1487f ,0.2975f ,0.1849f ,0.2961f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.3627f ,0.2922f ,0.3633f ,0.2922f ,0.2175f ,0.2944f ,0.1849f ,0.2961f ,0.1487f ,0.2975f ,0.0982f ,0.302f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.1055f ,0.2814f ,0.024f ,0.2813f ,0.0155f ,0.2778f ,0.024f ,0.2813f ,0.1055f ,0.2814f ,0.1448f ,0.2785f ,0.1853f ,0.2768f ,0.2204f ,0.275f ,0.3605f ,0.2757f ,0.3603f ,0.2745f ,0.3697f ,0.2711f ,0.2204f ,0.275f ,0.1853f ,0.2768f ,0.1448f ,0.2785f });
  }
}
private class MFVec3f74 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.71f ,0.777f ,2.648f ,4.818f ,0.777f ,-0.5615f ,5.128f ,0.777f ,1.321f ,1.293f ,0.777f ,-2.595f ,3.593f ,0.777f ,-1.696f ,1.281f ,0.777f ,3.092f ,3.874f ,0.0063f ,3.02f ,1.367f ,0.0063f ,-3.028f ,3.71f ,0.0063f ,-2.051f ,4.987f ,0.0063f ,-0.7054f ,1.404f ,0.0063f ,3.517f ,5.353f ,0.0063f ,1.475f ,-1.293f ,0.777f ,-2.595f ,-1.367f ,0.0063f ,-3.028f ,0f ,0.0063f ,-3.028f ,0f ,0.777f ,-2.595f ,-3.874f ,0.0063f ,3.02f ,-3.71f ,0.777f ,2.648f ,-1.281f ,0.777f ,3.092f ,-1.404f ,0.0063f ,3.517f ,-5.353f ,0.0063f ,1.475f ,-5.128f ,0.777f ,1.321f ,-3.593f ,0.777f ,-1.696f ,-3.71f ,0.0063f ,-2.051f ,-4.818f ,0.777f ,-0.5615f ,-4.987f ,0.0063f ,-0.7054f ,0f ,0.777f ,3.092f ,0f ,0.0063f ,3.517f ,1.261f ,1.231f ,2.872f ,3.606f ,1.231f ,2.442f ,4.891f ,1.231f ,1.241f ,4.612f ,1.231f ,-0.451f ,3.473f ,1.231f ,-1.506f ,1.251f ,1.231f ,-2.375f ,0f ,1.231f ,-2.375f ,-1.251f ,1.231f ,-2.375f ,-3.473f ,1.231f ,-1.506f ,-4.612f ,1.231f ,-0.451f ,-4.891f ,1.231f ,1.241f ,-3.606f ,1.231f ,2.442f ,-1.261f ,1.231f ,2.872f ,0f ,1.231f ,2.872f ,3.853f ,-0.3735f ,2.877f ,1.415f ,-0.3735f ,3.367f ,0f ,-0.3735f ,3.367f ,-1.415f ,-0.3735f ,3.367f ,-3.853f ,-0.3735f ,2.877f ,-5.24f ,-0.3735f ,1.428f ,-4.895f ,-0.3735f ,-0.6254f ,-3.668f ,-0.3735f ,-1.919f ,-1.354f ,-0.3735f ,-2.884f ,0f ,-0.3735f ,-2.884f ,1.354f ,-0.3735f ,-2.884f ,3.668f ,-0.3735f ,-1.919f ,4.895f ,-0.3735f ,-0.6254f ,5.24f ,-0.3735f ,1.428f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1});
  }
}
private class MFVec2f77 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.1489f ,0.3212f ,0.3615f ,0.3195f ,0.3631f ,0.318f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.3623f ,0.3188f ,0.0192f ,0.3251f ,0.0982f ,0.302f ,0.1849f ,0.2961f ,0.0177f ,0.3051f ,0.3627f ,0.2922f ,0.1487f ,0.2975f ,0.3633f ,0.2922f ,0.3621f ,0.2922f ,0.2175f ,0.2944f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.0982f ,0.302f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.1487f ,0.2975f ,0.1489f ,0.3212f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.3615f ,0.3195f ,0.2175f ,0.3185f ,0.1849f ,0.2961f ,0.1844f ,0.32f ,0.0177f ,0.3051f ,0.0192f ,0.3251f ,0.3631f ,0.318f ,0.3633f ,0.2922f ,0.3627f ,0.2922f ,0.3623f ,0.3188f ,0.0192f ,0.3251f ,0.0943f ,0.3233f ,0.1489f ,0.3212f ,0.1844f ,0.32f ,0.2175f ,0.3185f ,0.3615f ,0.3195f ,0.3623f ,0.3188f ,0.3631f ,0.318f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.1489f ,0.3212f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.0192f ,0.3251f ,0.0982f ,0.302f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.0177f ,0.3051f ,0.0982f ,0.302f ,0.1487f ,0.2975f ,0.1849f ,0.2961f ,0.2175f ,0.2944f ,0.3621f ,0.2922f ,0.3627f ,0.2922f ,0.3633f ,0.2922f ,0.2175f ,0.2944f ,0.1849f ,0.2961f ,0.1487f ,0.2975f });
  }
}
private class MFVec3f78 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.702f ,1.056f ,2.588f ,1.286f ,1.056f ,3.04f ,5.104f ,1.056f ,1.294f ,1.363f ,1.056f ,-2.529f ,3.588f ,1.056f ,-1.686f ,4.805f ,1.056f ,-0.5256f ,0f ,1.056f ,3.04f ,3.71f ,0.0128f ,2.648f ,4.818f ,0.0128f ,-0.5615f ,0f ,0.0128f ,3.092f ,0f ,0.0128f ,-2.595f ,5.128f ,0.0128f ,1.321f ,1.293f ,0.0128f ,-2.595f ,3.593f ,0.0128f ,-1.696f ,1.281f ,0.0128f ,3.092f ,-1.281f ,0.0128f ,3.092f ,-3.71f ,0.0128f ,2.648f ,-3.702f ,1.056f ,2.588f ,-1.286f ,1.056f ,3.04f ,-5.128f ,0.0128f ,1.321f ,-5.104f ,1.056f ,1.294f ,-3.593f ,0.0128f ,-1.696f ,-1.293f ,0.0128f ,-2.595f ,-1.363f ,1.056f ,-2.529f ,-3.588f ,1.056f ,-1.686f ,-4.818f ,0.0128f ,-0.5615f ,-4.805f ,1.056f ,-0.5256f ,0f ,1.056f ,-2.529f ,1.266f ,1.5f ,2.82f ,3.599f ,1.5f ,2.383f ,4.867f ,1.5f ,1.212f ,4.6f ,1.5f ,-0.4169f ,3.469f ,1.5f ,-1.496f ,1.323f ,1.5f ,-2.308f ,0f ,1.5f ,-2.309f ,-1.323f ,1.5f ,-2.308f ,-3.469f ,1.5f ,-1.496f ,-4.6f ,1.5f ,-0.4169f ,-4.867f ,1.5f ,1.212f ,-3.599f ,1.5f ,2.383f ,-1.266f ,1.5f ,2.82f ,0f ,1.5f ,2.82f ,3.606f ,-0.3662f ,2.442f ,1.261f ,-0.3662f ,2.872f ,0f ,-0.3662f ,2.872f ,-1.261f ,-0.3662f ,2.872f ,-3.606f ,-0.3662f ,2.442f ,-4.891f ,-0.3662f ,1.241f ,-4.612f ,-0.3662f ,-0.451f ,-3.473f ,-0.3662f ,-1.506f ,-1.251f ,-0.3662f ,-2.375f ,0f ,-0.3662f ,-2.375f ,1.251f ,-0.3662f ,-2.375f ,3.473f ,-0.3662f ,-1.506f ,4.612f ,-0.3662f ,-0.451f ,4.891f ,-0.3662f ,1.241f });
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1});
  }
}
private class MFVec2f81 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.0206f ,0.3452f ,0.3608f ,0.3469f ,0.3629f ,0.3439f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.3619f ,0.3454f ,0.0206f ,0.3452f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.1489f ,0.3212f ,0.3631f ,0.318f ,0.3615f ,0.3195f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.3623f ,0.3188f ,0.0192f ,0.3251f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.1844f ,0.32f ,0.2175f ,0.3185f ,0.3619f ,0.3454f ,0.3629f ,0.3439f ,0.3631f ,0.318f ,0.3623f ,0.3188f ,0.0943f ,0.3233f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0192f ,0.3251f ,0.1489f ,0.3212f ,0.1491f ,0.3449f ,0.3615f ,0.3195f ,0.3608f ,0.3469f ,0.0206f ,0.3452f ,0.0192f ,0.3251f ,0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.1838f ,0.3438f ,0.2175f ,0.3427f ,0.3608f ,0.3469f ,0.3619f ,0.3454f ,0.3629f ,0.3439f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.1491f ,0.3449f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0943f ,0.3233f ,0.0192f ,0.3251f ,0.0192f ,0.3251f ,0.0192f ,0.3251f ,0.0943f ,0.3233f ,0.1489f ,0.3212f ,0.1844f ,0.32f ,0.2175f ,0.3185f ,0.3615f ,0.3195f ,0.3623f ,0.3188f ,0.3631f ,0.318f ,0.2175f ,0.3185f ,0.1844f ,0.32f ,0.1489f ,0.3212f });
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.695f ,1.054f ,2.529f ,5.081f ,1.054f ,1.266f ,1.292f ,1.054f ,2.988f ,1.434f ,1.054f ,-2.463f ,3.584f ,1.054f ,-1.677f ,4.793f ,1.054f ,-0.4897f ,3.702f ,0.0104f ,2.588f ,1.286f ,0.0104f ,3.04f ,5.104f ,0.0104f ,1.294f ,1.363f ,0.0104f ,-2.529f ,3.588f ,0.0104f ,-1.686f ,4.805f ,0.0104f ,-0.5256f ,0f ,0.0104f ,3.04f ,-3.584f ,1.054f ,-1.677f ,-4.793f ,1.054f ,-0.4897f ,-4.805f ,0.0104f ,-0.5256f ,-3.588f ,0.0104f ,-1.686f ,0f ,1.054f ,-2.464f ,-1.434f ,1.054f ,-2.463f ,-1.363f ,0.0104f ,-2.529f ,0f ,0.0104f ,-2.529f ,-3.702f ,0.0104f ,2.588f ,-3.695f ,1.054f ,2.529f ,-1.292f ,1.054f ,2.988f ,-1.286f ,0.0104f ,3.04f ,-5.104f ,0.0104f ,1.294f ,-5.081f ,1.054f ,1.266f ,0f ,1.054f ,2.988f ,1.276f ,1.452f ,2.823f ,3.618f ,1.452f ,2.375f ,4.904f ,1.452f ,1.204f ,4.639f ,1.452f ,-0.4096f ,3.494f ,1.452f ,-1.534f ,1.405f ,1.452f ,-2.298f ,0f ,1.452f ,-2.298f ,-1.405f ,1.452f ,-2.298f ,-3.494f ,1.452f ,-1.534f ,-4.639f ,1.452f ,-0.4096f ,-4.904f ,1.452f ,1.204f ,-3.618f ,1.452f ,2.375f ,-1.276f ,1.452f ,2.823f ,0f ,1.452f ,2.823f ,3.625f ,-0.4686f ,2.435f ,1.271f ,-0.4686f ,2.875f ,0f ,-0.4686f ,2.875f ,-1.271f ,-0.4686f ,2.875f ,-3.625f ,-0.4686f ,2.435f ,-4.927f ,-0.4686f ,1.233f ,-4.651f ,-0.4686f ,-0.4442f ,-3.499f ,-0.4686f ,-1.544f ,-1.333f ,-0.4686f ,-2.364f ,0f ,-0.4686f ,-2.364f ,1.333f ,-0.4686f ,-2.364f ,3.499f ,-0.4686f ,-1.544f ,4.651f ,-0.4686f ,-0.4442f ,4.927f ,-0.4686f ,1.233f });
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1});
  }
}
private class MFVec2f85 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.3629f ,0.3439f ,0.3608f ,0.3469f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.0206f ,0.3452f ,0.3619f ,0.3454f ,0.0206f ,0.3452f ,0.089f ,0.3604f ,0.1508f ,0.3559f ,0.3623f ,0.3532f ,0.3588f ,0.3561f ,0.0232f ,0.3561f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.0232f ,0.3546f ,0.3608f ,0.3537f ,0.2175f ,0.3427f ,0.3608f ,0.3469f ,0.3588f ,0.3561f ,0.2188f ,0.3538f ,0.1838f ,0.3438f ,0.1874f ,0.3541f ,0.1491f ,0.3449f ,0.1508f ,0.3559f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0232f ,0.3561f ,0.0232f ,0.3546f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.089f ,0.3604f ,0.3623f ,0.3532f ,0.3629f ,0.3439f ,0.3619f ,0.3454f ,0.3608f ,0.3537f ,0.0903f ,0.3446f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0206f ,0.3452f ,0.0903f ,0.3446f ,0.1491f ,0.3449f ,0.1838f ,0.3438f ,0.2175f ,0.3427f ,0.3608f ,0.3469f ,0.3619f ,0.3454f ,0.3629f ,0.3439f ,0.2175f ,0.3427f ,0.1838f ,0.3438f ,0.1491f ,0.3449f ,0.2188f ,0.3538f ,0.3588f ,0.3561f ,0.3608f ,0.3537f ,0.3623f ,0.3532f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.1508f ,0.3559f ,0.089f ,0.3604f ,0.0232f ,0.3561f ,0.0232f ,0.3546f ,0.0232f ,0.3561f ,0.089f ,0.3604f ,0.1508f ,0.3559f ,0.1874f ,0.3541f });
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.695f ,0.0098f ,2.529f ,5.081f ,0.0098f ,1.266f ,1.292f ,0.0098f ,2.988f ,1.434f ,0.0098f ,-2.463f ,3.584f ,0.0098f ,-1.677f ,4.793f ,0.0098f ,-0.4897f ,1.292f ,0.0098f ,2.988f ,0f ,0.0098f ,2.988f ,3.86f ,0.776f ,2.936f ,5.361f ,0.776f ,1.276f ,1.588f ,0.776f ,-2.498f ,1.36f ,0.776f ,3.192f ,3.752f ,0.776f ,-1.776f ,4.97f ,0.776f ,-0.6037f ,0f ,0.776f ,3.192f ,-3.584f ,0.0098f ,-1.677f ,-1.434f ,0.0098f ,-2.463f ,-1.588f ,0.776f ,-2.498f ,-3.752f ,0.776f ,-1.776f ,-4.793f ,0.0098f ,-0.4897f ,-4.97f ,0.776f ,-0.6037f ,-5.081f ,0.0098f ,1.266f ,-5.361f ,0.776f ,1.276f ,-1.292f ,0.0098f ,2.988f ,-1.36f ,0.776f ,3.192f ,-3.695f ,0.0098f ,2.529f ,-1.292f ,0.0098f ,2.988f ,-3.86f ,0.776f ,2.936f ,0f ,0.0098f ,-2.464f ,0f ,0.776f ,-2.506f ,3.599f ,-0.4771f ,2.338f ,1.272f ,-0.4771f ,2.783f ,0f ,-0.4771f ,2.783f ,-1.272f ,-0.4771f ,2.783f ,-3.599f ,-0.4771f ,2.338f ,-4.861f ,-0.4771f ,1.189f ,-4.602f ,-0.4771f ,-0.3904f ,-3.472f ,-0.4771f ,-1.499f ,-1.398f ,-0.4771f ,-2.258f ,0f ,-0.4771f ,-2.259f ,1.398f ,-0.4771f ,-2.258f ,3.472f ,-0.4771f ,-1.499f ,4.602f ,-0.4771f ,-0.3904f ,4.861f ,-0.4771f ,1.189f ,3.643f ,1.099f ,-1.596f ,1.555f ,1.099f ,-2.294f ,0f ,1.099f ,-2.302f ,-1.555f ,1.099f ,-2.294f ,-3.643f ,1.099f ,-1.596f ,-4.782f ,1.099f ,-0.4999f ,-5.14f ,1.099f ,1.216f ,-3.76f ,1.099f ,2.74f ,-1.35f ,1.099f ,2.987f ,0f ,1.099f ,2.987f ,1.35f ,1.099f ,2.987f ,3.76f ,1.099f ,2.74f ,5.14f ,1.099f ,1.216f ,4.782f ,1.099f ,-0.4999f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1});
  }
}
private class MFVec2f89 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.089f ,0.3604f ,0.1508f ,0.3559f ,0.3588f ,0.3561f ,0.3623f ,0.3532f ,0.0232f ,0.3561f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.0232f ,0.3546f ,0.3608f ,0.3537f ,0.0245f ,0.3617f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.3616f ,0.3609f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.3589f ,0.3648f ,0.3617f ,0.3609f ,0.0254f ,0.3626f ,0.3588f ,0.3561f ,0.3589f ,0.3648f ,0.2207f ,0.3633f ,0.2188f ,0.3538f ,0.1922f ,0.3628f ,0.1874f ,0.3541f ,0.1489f ,0.3665f ,0.1508f ,0.3559f ,0.0232f ,0.3561f ,0.0245f ,0.3617f ,0.0254f ,0.3626f ,0.0232f ,0.3546f ,0.089f ,0.3604f ,0.0859f ,0.3657f ,0.3617f ,0.3609f ,0.3623f ,0.3532f ,0.3608f ,0.3537f ,0.3616f ,0.3609f ,0.3623f ,0.3532f ,0.2188f ,0.3538f ,0.1874f ,0.3541f ,0.1508f ,0.3559f ,0.089f ,0.3604f ,0.0232f ,0.3561f ,0.0232f ,0.3546f ,0.0232f ,0.3561f ,0.089f ,0.3604f ,0.1508f ,0.3559f ,0.1874f ,0.3541f ,0.2188f ,0.3538f ,0.3588f ,0.3561f ,0.3608f ,0.3537f ,0.0245f ,0.3617f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.1922f ,0.3628f ,0.2207f ,0.3633f ,0.3589f ,0.3648f ,0.3616f ,0.3609f ,0.3617f ,0.3609f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.1489f ,0.3665f ,0.0859f ,0.3657f ,0.0245f ,0.3617f ,0.0254f ,0.3626f });
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.86f ,0.0118f ,2.936f ,5.361f ,0.0118f ,1.276f ,1.588f ,0.0118f ,-2.498f ,1.36f ,0.0118f ,3.192f ,3.752f ,0.0118f ,-1.776f ,4.97f ,0.0118f ,-0.6037f ,1.418f ,0.6583f ,3.362f ,3.892f ,0.6583f ,-1.86f ,5.121f ,0.6583f ,-0.6992f ,3.987f ,0.6583f ,3.259f ,5.601f ,0.6583f ,1.285f ,1.717f ,0.6583f ,-2.528f ,0f ,0.6583f ,3.363f ,-1.588f ,0.0118f ,-2.498f ,-1.717f ,0.6583f ,-2.528f ,-3.892f ,0.6583f ,-1.86f ,-3.752f ,0.0118f ,-1.776f ,-5.121f ,0.6583f ,-0.6992f ,-4.97f ,0.0118f ,-0.6037f ,-5.601f ,0.6583f ,1.285f ,-5.361f ,0.0118f ,1.276f ,-1.36f ,0.0118f ,3.192f ,-1.418f ,0.6583f ,3.362f ,0f ,0.0118f ,3.192f ,-3.86f ,0.0118f ,2.936f ,-3.987f ,0.6583f ,3.259f ,0f ,0.0118f ,-2.506f ,0f ,0.6583f ,-2.543f ,1.558f ,-0.2996f ,-2.316f ,3.655f ,-0.2996f ,-1.616f ,4.803f ,-0.2996f ,-0.5114f ,5.164f ,-0.2996f ,1.223f ,3.771f ,-0.2996f ,2.762f ,1.351f ,-0.2996f ,3.01f ,0f ,-0.2996f ,3.01f ,-1.351f ,-0.2996f ,3.01f ,-3.771f ,-0.2996f ,2.762f ,-5.164f ,-0.2996f ,1.223f ,-4.803f ,-0.2996f ,-0.5114f ,-3.655f ,-0.2996f ,-1.616f ,-1.558f ,-0.2996f ,-2.316f ,0f ,-0.2996f ,-2.324f ,1.415f ,0.9368f ,3.18f ,3.898f ,0.9368f ,3.08f ,5.402f ,0.9368f ,1.24f ,4.956f ,0.9368f ,-0.6038f ,3.798f ,0.9368f ,-1.698f ,1.689f ,0.9368f ,-2.346f ,0f ,0.9368f ,-2.361f ,-1.689f ,0.9368f ,-2.346f ,-3.798f ,0.9368f ,-1.698f ,-4.956f ,0.9368f ,-0.6038f ,-5.402f ,0.9368f ,1.24f ,-3.898f ,0.9368f ,3.08f ,-1.415f ,0.9368f ,3.18f ,0f ,0.9368f ,3.18f });
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1});
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1});
  }
}
private class MFVec2f93 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0245f ,0.3617f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.3616f ,0.3609f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.3589f ,0.3648f ,0.3617f ,0.3609f ,0.0254f ,0.3626f ,0.0258f ,0.3672f ,0.2227f ,0.3728f ,0.1969f ,0.3716f ,0.0826f ,0.3711f ,0.1469f ,0.377f ,0.3589f ,0.3735f ,0.3612f ,0.3687f ,0.0276f ,0.3706f ,0.3625f ,0.3682f ,0.0258f ,0.3672f ,0.0245f ,0.3617f ,0.0859f ,0.3657f ,0.0826f ,0.3711f ,0.3612f ,0.3687f ,0.3617f ,0.3609f ,0.3616f ,0.3609f ,0.3625f ,0.3682f ,0.1489f ,0.3665f ,0.1469f ,0.377f ,0.3589f ,0.3648f ,0.3589f ,0.3735f ,0.2227f ,0.3728f ,0.2207f ,0.3633f ,0.1969f ,0.3716f ,0.1922f ,0.3628f ,0.0276f ,0.3706f ,0.0254f ,0.3626f ,0.0859f ,0.3657f ,0.0245f ,0.3617f ,0.0254f ,0.3626f ,0.0245f ,0.3617f ,0.0859f ,0.3657f ,0.1489f ,0.3665f ,0.1922f ,0.3628f ,0.2207f ,0.3633f ,0.3589f ,0.3648f ,0.3616f ,0.3609f ,0.3617f ,0.3609f ,0.2207f ,0.3633f ,0.1922f ,0.3628f ,0.1489f ,0.3665f ,0.2227f ,0.3728f ,0.3589f ,0.3735f ,0.3625f ,0.3682f ,0.3612f ,0.3687f ,0.2227f ,0.3728f ,0.1969f ,0.3716f ,0.1469f ,0.377f ,0.0826f ,0.3711f ,0.0258f ,0.3672f ,0.0276f ,0.3706f ,0.0258f ,0.3672f ,0.0826f ,0.3711f ,0.1469f ,0.377f ,0.1969f ,0.3716f });
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.418f ,0.0059f ,3.362f ,3.892f ,0.0059f ,-1.86f ,5.121f ,0.0059f ,-0.6992f ,3.987f ,0.0059f ,3.259f ,5.601f ,0.0059f ,1.285f ,1.717f ,0.0059f ,-2.528f ,0f ,0.0059f ,3.363f ,1.476f ,0.6524f ,3.533f ,4.033f ,0.6524f ,-1.943f ,5.271f ,0.6524f ,-0.7947f ,4.115f ,0.6524f ,3.582f ,5.84f ,0.6524f ,1.295f ,1.845f ,0.6524f ,-2.558f ,0f ,0.6524f ,3.533f ,-1.476f ,0.6524f ,3.533f ,-1.418f ,0.0059f ,3.362f ,-3.987f ,0.0059f ,3.259f ,-4.115f ,0.6524f ,3.582f ,-1.845f ,0.6524f ,-2.558f ,-1.717f ,0.0059f ,-2.528f ,0f ,0.0059f ,-2.543f ,0f ,0.6524f ,-2.58f ,-5.601f ,0.0059f ,1.285f ,-5.84f ,0.6524f ,1.295f ,-4.033f ,0.6524f ,-1.943f ,-3.892f ,0.0059f ,-1.86f ,-5.271f ,0.6524f ,-0.7947f ,-5.121f ,0.0059f ,-0.6992f ,3.895f ,-0.2838f ,3.074f ,1.415f ,-0.2838f ,3.173f ,0f ,-0.2838f ,3.173f ,-1.415f ,-0.2838f ,3.173f ,-3.895f ,-0.2838f ,3.074f ,-5.395f ,-0.2838f ,1.239f ,-4.95f ,-0.2838f ,-0.6002f ,-3.794f ,-0.2838f ,-1.692f ,-1.688f ,-0.2838f ,-2.339f ,0f ,-0.2838f ,-2.354f ,1.688f ,-0.2838f ,-2.339f ,3.794f ,-0.2838f ,-1.692f ,4.95f ,-0.2838f ,-0.6002f ,5.395f ,-0.2838f ,1.239f ,3.937f ,0.9744f ,-1.774f ,1.818f ,0.9744f ,-2.369f ,0f ,0.9744f ,-2.391f ,-1.818f ,0.9744f ,-2.369f ,-3.937f ,0.9744f ,-1.774f ,-5.103f ,0.9744f ,-0.6928f ,-5.633f ,0.9744f ,1.255f ,-4.022f ,0.9744f ,3.391f ,-1.478f ,0.9744f ,3.344f ,0f ,0.9744f ,3.344f ,1.478f ,0.9744f ,3.344f ,4.022f ,0.9744f ,3.391f ,5.633f ,0.9744f ,1.255f ,5.103f ,0.9744f ,-0.6928f });
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1});
  }
}
private class MFVec2f97 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0908f ,0.3999f ,0.0325f ,0.3879f ,0.0306f ,0.3835f ,0.1568f ,0.3845f ,0.3535f ,0.3812f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.3561f ,0.3769f ,0.0802f ,0.3883f ,0.1575f ,0.3746f ,0.3637f ,0.3704f ,0.356f ,0.3713f ,0.3581f ,0.3683f ,0.0256f ,0.3731f ,0.0261f ,0.363f ,0.2218f ,0.3729f ,0.1941f ,0.3712f ,0.0325f ,0.3879f ,0.0256f ,0.3731f ,0.0802f ,0.3883f ,0.0908f ,0.3999f ,0.3589f ,0.3783f ,0.3637f ,0.3704f ,0.3581f ,0.3683f ,0.3561f ,0.3769f ,0.1575f ,0.3746f ,0.1568f ,0.3845f ,0.356f ,0.3713f ,0.3535f ,0.3812f ,0.2214f ,0.3832f ,0.2218f ,0.3729f ,0.1952f ,0.3809f ,0.1941f ,0.3712f ,0.0306f ,0.3835f ,0.0261f ,0.363f ,0.3637f ,0.3704f ,0.2218f ,0.3729f ,0.1941f ,0.3712f ,0.1575f ,0.3746f ,0.0802f ,0.3883f ,0.0256f ,0.3731f ,0.0261f ,0.363f ,0.0256f ,0.3731f ,0.0802f ,0.3883f ,0.1575f ,0.3746f ,0.1941f ,0.3712f ,0.2218f ,0.3729f ,0.356f ,0.3713f ,0.3581f ,0.3683f ,0.0306f ,0.3835f ,0.0325f ,0.3879f ,0.0908f ,0.3999f ,0.1568f ,0.3845f ,0.1952f ,0.3809f ,0.2214f ,0.3832f ,0.3535f ,0.3812f ,0.3561f ,0.3769f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.1568f ,0.3845f ,0.0908f ,0.3999f ,0.0325f ,0.3879f });
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.476f ,0.0001f ,3.533f ,4.033f ,0.0001f ,-1.943f ,5.271f ,0.0001f ,-0.7947f ,4.234f ,0.6936f ,3.898f ,1.538f ,0.6936f ,3.713f ,6.114f ,0.7245f ,1.306f ,1.987f ,0.7245f ,-2.592f ,4.188f ,0.7245f ,-2.037f ,5.442f ,0.7245f ,-0.9006f ,4.115f ,0.0001f ,3.582f ,5.84f ,0.0001f ,1.295f ,1.845f ,0.0001f ,-2.558f ,0f ,0.6936f ,3.713f ,-1.538f ,0.6936f ,3.713f ,-1.476f ,0.0001f ,3.533f ,-4.115f ,0.0001f ,3.582f ,-4.234f ,0.6936f ,3.898f ,-1.987f ,0.7245f ,-2.592f ,-1.845f ,0.0001f ,-2.558f ,0f ,0.0001f ,-2.58f ,0f ,0.7245f ,-2.622f ,-5.84f ,0.0001f ,1.295f ,-6.114f ,0.7245f ,1.306f ,-4.188f ,0.7245f ,-2.037f ,-4.033f ,0.0001f ,-1.943f ,-5.442f ,0.7245f ,-0.9006f ,-5.271f ,0.0001f ,-0.7947f ,0f ,0.0001f ,3.533f ,1.82f ,-0.2993f ,-2.38f ,3.943f ,-0.2993f ,-1.784f ,5.113f ,-0.2993f ,-0.6987f ,5.646f ,-0.2993f ,1.257f ,4.027f ,-0.2993f ,3.403f ,1.478f ,-0.2993f ,3.355f ,0f ,-0.2993f ,3.355f ,-1.478f ,-0.2993f ,3.355f ,-4.027f ,-0.2993f ,3.403f ,-5.646f ,-0.2993f ,1.257f ,-5.113f ,-0.2993f ,-0.6987f ,-3.943f ,-0.2993f ,-1.784f ,-1.82f ,-0.2993f ,-2.38f ,0f ,-0.2993f ,-2.402f ,0f ,1.036f ,3.535f ,1.544f ,1.036f ,3.534f ,4.148f ,1.036f ,3.713f ,5.917f ,1.036f ,1.273f ,5.286f ,1.036f ,-0.8017f ,4.102f ,1.036f ,-1.875f ,1.963f ,1.036f ,-2.414f ,0f ,1.036f ,-2.444f ,-1.963f ,1.036f ,-2.414f ,-4.102f ,1.036f ,-1.875f ,-5.286f ,1.036f ,-0.8017f ,-5.917f ,1.036f ,1.273f ,-4.148f ,1.036f ,3.713f ,-1.544f ,1.036f ,3.534f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1});
  }
}
private class MFVec2f101 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0437f ,0.4075f ,0.2185f ,0.3912f ,0.3484f ,0.3944f ,0.1518f ,0.3905f ,0.1902f ,0.3894f ,0.3503f ,0.3879f ,0.3505f ,0.3886f ,0.0427f ,0.408f ,0.0961f ,0.4138f ,0.0908f ,0.3999f ,0.0325f ,0.3879f ,0.1568f ,0.3845f ,0.3535f ,0.3812f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.3561f ,0.3769f ,0.0306f ,0.3835f ,0.1568f ,0.3845f ,0.1518f ,0.3905f ,0.0961f ,0.4138f ,0.0908f ,0.3999f ,0.3503f ,0.3879f ,0.3589f ,0.3783f ,0.3561f ,0.3769f ,0.3505f ,0.3886f ,0.0325f ,0.3879f ,0.0437f ,0.4075f ,0.0427f ,0.408f ,0.0306f ,0.3835f ,0.3535f ,0.3812f ,0.3484f ,0.3944f ,0.2185f ,0.3912f ,0.2214f ,0.3832f ,0.1902f ,0.3894f ,0.1952f ,0.3809f ,0.3484f ,0.3944f ,0.3505f ,0.3886f ,0.3503f ,0.3879f ,0.2185f ,0.3912f ,0.1902f ,0.3894f ,0.1518f ,0.3905f ,0.0961f ,0.4138f ,0.0437f ,0.4075f ,0.0427f ,0.408f ,0.0437f ,0.4075f ,0.0961f ,0.4138f ,0.1518f ,0.3905f ,0.1902f ,0.3894f ,0.2185f ,0.3912f ,0.0325f ,0.3879f ,0.0306f ,0.3835f ,0.0325f ,0.3879f ,0.0908f ,0.3999f ,0.1568f ,0.3845f ,0.1952f ,0.3809f ,0.2214f ,0.3832f ,0.3535f ,0.3812f ,0.3561f ,0.3769f ,0.3589f ,0.3783f ,0.2214f ,0.3832f ,0.1952f ,0.3809f ,0.1568f ,0.3845f ,0.0908f ,0.3999f });
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {6.285f ,0.5819f ,1.319f ,2.062f ,0.5819f ,-2.618f ,4.101f ,0.5819f ,3.729f ,4.29f ,0.5819f ,-2.105f ,5.572f ,0.5819f ,-0.9516f ,1.585f ,0.5819f ,3.822f ,4.234f ,0.0006f ,3.898f ,1.538f ,0.0006f ,3.713f ,6.114f ,0.0315f ,1.306f ,1.987f ,0.0315f ,-2.592f ,4.188f ,0.0315f ,-2.037f ,5.442f ,0.0315f ,-0.9006f ,-6.114f ,0.0315f ,1.306f ,-6.285f ,0.5819f ,1.319f ,-4.101f ,0.5819f ,3.729f ,-4.234f ,0.0006f ,3.898f ,-2.062f ,0.5819f ,-2.618f ,-1.987f ,0.0315f ,-2.592f ,0f ,0.0315f ,-2.622f ,0f ,0.5819f ,-2.665f ,-1.538f ,0.0006f ,3.713f ,-1.585f ,0.5819f ,3.822f ,0f ,0.5819f ,3.826f ,0f ,0.0006f ,3.713f ,-4.29f ,0.5819f ,-2.105f ,-4.188f ,0.0315f ,-2.037f ,-5.572f ,0.5819f ,-0.9516f ,-5.442f ,0.0315f ,-0.9006f ,2.035f ,0.9259f ,-2.406f ,0f ,0.9259f ,-2.453f ,-2.035f ,0.9259f ,-2.406f ,-4.189f ,0.9259f ,-1.911f ,-5.387f ,0.9259f ,-0.8326f ,-6.046f ,0.9259f ,1.267f ,-4.004f ,0.9259f ,3.52f ,-1.581f ,0.9259f ,3.609f ,0f ,0.9259f ,3.614f ,1.581f ,0.9259f ,3.609f ,4.004f ,0.9259f ,3.52f ,6.046f ,0.9259f ,1.267f ,5.387f ,0.9259f ,-0.8326f ,4.189f ,0.9259f ,-1.911f ,1.524f ,-0.369f ,3.422f ,0f ,-0.369f ,3.422f ,-1.524f ,-0.369f ,3.422f ,-4.074f ,-0.369f ,3.594f ,-5.798f ,-0.369f ,1.248f ,-5.183f ,-0.369f ,-0.7464f ,-4.029f ,-0.369f ,-1.779f ,-1.931f ,-0.369f ,-2.301f ,0f ,-0.369f ,-2.33f ,1.931f ,-0.369f ,-2.301f ,4.029f ,-0.369f ,-1.779f ,5.183f ,-0.369f ,-0.7464f ,5.798f ,-0.369f ,1.248f ,4.074f ,-0.369f ,3.594f });
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1});
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1});
  }
}
private class MFVec2f105 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3061f ,0.4256f ,0.3364f ,0.4029f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.055f ,0.4216f ,0.3325f ,0.4068f ,0.0482f ,0.4185f ,0.221f ,0.4256f ,0.1008f ,0.4259f ,0.1518f ,0.3905f ,0.3506f ,0.3865f ,0.3484f ,0.3944f ,0.0427f ,0.408f ,0.0961f ,0.4138f ,0.3437f ,0.3934f ,0.2185f ,0.3912f ,0.1902f ,0.3894f ,0.0437f ,0.4075f ,0.0437f ,0.4075f ,0.0961f ,0.4138f ,0.1008f ,0.4259f ,0.055f ,0.4216f ,0.1902f ,0.3894f ,0.1843f ,0.4071f ,0.1528f ,0.4078f ,0.1518f ,0.3905f ,0.3364f ,0.4029f ,0.3506f ,0.3865f ,0.3437f ,0.3934f ,0.3325f ,0.4068f ,0.0482f ,0.4185f ,0.0427f ,0.408f ,0.2185f ,0.3912f ,0.221f ,0.4256f ,0.3484f ,0.3944f ,0.3061f ,0.4256f ,0.055f ,0.4216f ,0.1008f ,0.4259f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.221f ,0.4256f ,0.3061f ,0.4256f ,0.3325f ,0.4068f ,0.3364f ,0.4029f ,0.221f ,0.4256f ,0.1843f ,0.4071f ,0.1528f ,0.4078f ,0.1008f ,0.4259f ,0.055f ,0.4216f ,0.0482f ,0.4185f ,0.3437f ,0.3934f ,0.3506f ,0.3865f ,0.2185f ,0.3912f ,0.1902f ,0.3894f ,0.1518f ,0.3905f ,0.0961f ,0.4138f ,0.0437f ,0.4075f ,0.0427f ,0.408f ,0.0437f ,0.4075f ,0.0961f ,0.4138f ,0.1518f ,0.3905f ,0.1902f ,0.3894f ,0.2185f ,0.3912f ,0.3484f ,0.3944f });
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.937f ,0.6896f ,-2.644f ,6.192f ,0.6897f ,1.374f ,5.738f ,0.6897f ,-0.7614f ,1.615f ,0.6897f ,3.729f ,4.273f ,0.6897f ,-2.169f ,3.945f ,0.6897f ,3.53f ,6.285f ,0.0041f ,1.319f ,2.062f ,0.0041f ,-2.618f ,0f ,0.0041f ,3.826f ,4.101f ,0.0041f ,3.729f ,4.29f ,0.0041f ,-2.105f ,5.572f ,0.0041f ,-0.9516f ,1.585f ,0.0041f ,3.822f ,-1.585f ,0.0041f ,3.822f ,-4.101f ,0.0041f ,3.729f ,-3.945f ,0.6897f ,3.53f ,-1.615f ,0.6897f ,3.729f ,-5.572f ,0.0041f ,-0.9516f ,-5.738f ,0.6897f ,-0.7614f ,-6.192f ,0.6897f ,1.374f ,-6.285f ,0.0041f ,1.319f ,-1.937f ,0.6896f ,-2.644f ,-2.062f ,0.0041f ,-2.618f ,0f ,0.0041f ,-2.665f ,0f ,0.6896f ,-2.735f ,0f ,0.6897f ,3.756f ,-4.29f ,0.0041f ,-2.105f ,-4.273f ,0.6897f ,-2.169f ,1.603f ,1.033f ,3.489f ,3.84f ,1.033f ,3.298f ,5.929f ,1.033f ,1.293f ,5.518f ,1.033f ,-0.6393f ,4.157f ,1.033f ,-1.947f ,1.907f ,1.033f ,-2.405f ,0f ,1.033f ,-2.494f ,-1.907f ,1.033f ,-2.405f ,-4.157f ,1.033f ,-1.947f ,-5.518f ,1.033f ,-0.6393f ,-5.929f ,1.033f ,1.293f ,-3.84f ,1.033f ,3.298f ,-1.603f ,1.033f ,3.489f ,0f ,1.033f ,3.516f ,0f ,-0.2313f ,-2.425f ,2.032f ,-0.2313f ,-2.378f ,4.176f ,-0.2313f ,-1.885f ,5.362f ,-0.2313f ,-0.8168f ,6.015f ,-0.2313f ,1.26f ,3.991f ,-0.2313f ,3.492f ,1.581f ,-0.2313f ,3.581f ,0f ,-0.2313f ,3.586f ,-1.581f ,-0.2313f ,3.581f ,-3.991f ,-0.2313f ,3.492f ,-6.015f ,-0.2313f ,1.26f ,-5.362f ,-0.2313f ,-0.8168f ,-4.176f ,-0.2313f ,-1.885f ,-2.032f ,-0.2313f ,-2.378f });
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1});
  }
}
private class MFVec2f109 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2236f ,0.46f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.3223f ,0.4192f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.0537f ,0.4289f ,0.3061f ,0.4256f ,0.3364f ,0.4029f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.055f ,0.4216f ,0.3325f ,0.4068f ,0.0482f ,0.4185f ,0.221f ,0.4256f ,0.1008f ,0.4259f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.3364f ,0.4029f ,0.3325f ,0.4068f ,0.0537f ,0.4289f ,0.0482f ,0.4185f ,0.055f ,0.4216f ,0.0663f ,0.4356f ,0.1055f ,0.438f ,0.1008f ,0.4259f ,0.1528f ,0.4078f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1843f ,0.4071f ,0.221f ,0.4256f ,0.2236f ,0.46f ,0.3061f ,0.4256f ,0.2638f ,0.4568f ,0.0663f ,0.4356f ,0.1055f ,0.438f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.2236f ,0.46f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.2236f ,0.46f ,0.1784f ,0.4249f ,0.1538f ,0.4251f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.0537f ,0.4289f ,0.1008f ,0.4259f ,0.055f ,0.4216f ,0.0482f ,0.4185f ,0.055f ,0.4216f ,0.1008f ,0.4259f ,0.1528f ,0.4078f ,0.1843f ,0.4071f ,0.221f ,0.4256f ,0.3061f ,0.4256f ,0.3325f ,0.4068f ,0.3364f ,0.4029f ,0.221f ,0.4256f ,0.1843f ,0.4071f ,0.1528f ,0.4078f });
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.811f ,0.6855f ,-2.67f ,5.903f ,0.6856f ,-0.5713f ,3.788f ,0.6856f ,3.331f ,1.646f ,0.6856f ,3.637f ,4.256f ,0.6856f ,-2.233f ,6.098f ,0.6856f ,1.429f ,1.937f ,0f ,-2.644f ,6.192f ,0.0001f ,1.374f ,5.738f ,0.0001f ,-0.7614f ,1.615f ,0.0001f ,3.729f ,0f ,0.0001f ,3.756f ,4.273f ,0.0001f ,-2.169f ,3.945f ,0.0001f ,3.53f ,0f ,0.6855f ,-2.804f ,-1.811f ,0.6855f ,-2.67f ,-1.937f ,0f ,-2.644f ,0f ,0f ,-2.735f ,0f ,0.6856f ,3.687f ,-1.615f ,0.0001f ,3.729f ,-1.646f ,0.6856f ,3.637f ,-3.788f ,0.6856f ,3.331f ,-3.945f ,0.0001f ,3.53f ,-6.192f ,0.0001f ,1.374f ,-6.098f ,0.6856f ,1.429f ,-5.903f ,0.6856f ,-0.5713f ,-5.738f ,0.0001f ,-0.7614f ,-4.273f ,0.0001f ,-2.169f ,-4.256f ,0.6856f ,-2.233f ,1.621f ,1.052f ,3.355f ,3.67f ,1.052f ,3.062f ,5.802f ,1.052f ,1.306f ,5.631f ,1.052f ,-0.4437f ,4.118f ,1.052f ,-1.97f ,1.776f ,1.052f ,-2.389f ,0f ,1.052f ,-2.52f ,-1.776f ,1.052f ,-2.389f ,-4.118f ,1.052f ,-1.97f ,-5.631f ,1.052f ,-0.4437f ,-5.802f ,1.052f ,1.306f ,-3.67f ,1.052f ,3.062f ,-1.621f ,1.052f ,3.355f ,0f ,1.052f ,3.404f ,3.821f ,-0.3346f ,3.256f ,1.601f ,-0.3346f ,3.447f ,0f ,-0.3346f ,3.474f ,-1.601f ,-0.3346f ,3.447f ,-3.821f ,-0.3346f ,3.256f ,-5.882f ,-0.3346f ,1.279f ,-5.479f ,-0.3346f ,-0.6177f ,-4.136f ,-0.3346f ,-1.908f ,-1.902f ,-0.3347f ,-2.363f ,0f ,-0.3347f ,-2.451f ,1.902f ,-0.3347f ,-2.363f ,4.136f ,-0.3346f ,-1.908f ,5.479f ,-0.3346f ,-0.6177f ,5.882f ,-0.3346f ,1.279f });
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1});
  }
}
private class MFVec2f113 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0639f ,0.4488f ,0.0777f ,0.4495f ,0.1846f ,0.4438f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.2633f ,0.457f ,0.3222f ,0.4193f ,0.3214f ,0.4203f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.3223f ,0.4192f ,0.2638f ,0.4568f ,0.1784f ,0.4249f ,0.1784f ,0.4249f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.2236f ,0.46f ,0.3214f ,0.4203f ,0.1538f ,0.4251f ,0.0537f ,0.4289f ,0.1538f ,0.4251f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.1055f ,0.438f ,0.0777f ,0.4495f ,0.0663f ,0.4356f ,0.3223f ,0.4192f ,0.3214f ,0.4203f ,0.3214f ,0.4203f ,0.3222f ,0.4193f ,0.2236f ,0.46f ,0.2638f ,0.4568f ,0.2633f ,0.457f ,0.2198f ,0.4731f ,0.0639f ,0.4488f ,0.0537f ,0.4289f ,0.2144f ,0.4674f ,0.1846f ,0.4438f ,0.1784f ,0.4249f ,0.1784f ,0.4249f ,0.1107f ,0.4532f ,0.1504f ,0.4433f ,0.1846f ,0.4438f ,0.2144f ,0.4674f ,0.2198f ,0.4731f ,0.2633f ,0.457f ,0.3214f ,0.4203f ,0.3222f ,0.4193f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.1846f ,0.4438f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.0777f ,0.4495f ,0.0639f ,0.4488f ,0.0777f ,0.4495f ,0.1055f ,0.438f ,0.0663f ,0.4356f ,0.0537f ,0.4289f ,0.0663f ,0.4356f ,0.1055f ,0.438f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.2236f ,0.46f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.2236f ,0.46f ,0.1784f ,0.4249f ,0.1538f ,0.4251f });
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.681f ,0.822f ,3.528f ,5.775f ,0.849f ,-0.9043f ,5.825f ,0.7894f ,1.521f ,3.585f ,0.9022f ,3.073f ,1.811f ,0.849f ,-2.505f ,4.284f ,0.849f ,-2.108f ,4.617f ,0.849f ,-2.072f ,1.811f ,0.0128f ,-2.67f ,5.903f ,0.0129f ,-0.5713f ,3.788f ,0.0129f ,3.331f ,1.646f ,0.0129f ,3.637f ,4.256f ,0.0129f ,-2.233f ,6.098f ,0.0129f ,1.429f ,-6.098f ,0.0129f ,1.429f ,-5.825f ,0.7894f ,1.521f ,-3.585f ,0.9022f ,3.073f ,-3.788f ,0.0129f ,3.331f ,-1.681f ,0.822f ,3.528f ,-1.646f ,0.0129f ,3.637f ,-1.811f ,0.0128f ,-2.67f ,0f ,0.0128f ,-2.804f ,0f ,0.849f ,-2.639f ,-1.811f ,0.849f ,-2.505f ,-4.256f ,0.0129f ,-2.233f ,-4.284f ,0.849f ,-2.108f ,0f ,0.822f ,3.616f ,0f ,0.0129f ,3.687f ,-4.617f ,0.849f ,-2.072f ,-5.775f ,0.849f ,-0.9043f ,-5.903f ,0.0129f ,-0.5713f ,3.461f ,1.375f ,2.795f ,5.523f ,1.375f ,1.367f ,5.479f ,1.375f ,-0.7788f ,4.48f ,1.375f ,-1.787f ,4.244f ,1.375f ,-1.812f ,1.776f ,1.375f ,-2.209f ,0f ,1.375f ,-2.34f ,-1.776f ,1.375f ,-2.209f ,-4.244f ,1.375f ,-1.812f ,-4.48f ,1.375f ,-1.787f ,-5.479f ,1.375f ,-0.7788f ,-5.523f ,1.375f ,1.367f ,-3.461f ,1.375f ,2.795f ,-1.638f ,1.375f ,3.231f ,0f ,1.375f ,3.317f ,1.638f ,1.375f ,3.231f ,3.663f ,-0.3222f ,3.047f ,1.62f ,-0.3222f ,3.339f ,0f ,-0.3222f ,3.388f ,-1.62f ,-0.3222f ,3.339f ,-3.663f ,-0.3222f ,3.047f ,-5.786f ,-0.3222f ,1.299f ,-5.616f ,-0.3222f ,-0.4366f ,-4.111f ,-0.3222f ,-1.955f ,-1.774f ,-0.3222f ,-2.373f ,0f ,-0.3222f ,-2.505f ,1.774f ,-0.3222f ,-2.373f ,4.111f ,-0.3222f ,-1.955f ,5.616f ,-0.3222f ,-0.4366f ,5.786f ,-0.3222f ,1.299f });
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1});
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1});
  }
}
private class MFVec2f117 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0763f ,0.4945f ,0.0877f ,0.4617f ,0.0525f ,0.4715f ,0.0399f ,0.5407f ,0.1491f ,0.4682f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.1915f ,0.4696f ,0.1178f ,0.4708f ,0.2635f ,0.4569f ,0.3223f ,0.4193f ,0.3214f ,0.4203f ,0.0639f ,0.4488f ,0.0777f ,0.4495f ,0.1846f ,0.4438f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.3222f ,0.4193f ,0.2633f ,0.457f ,0.3214f ,0.4203f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.2035f ,0.4795f ,0.2169f ,0.492f ,0.2635f ,0.4569f ,0.3214f ,0.4203f ,0.0763f ,0.4945f ,0.1178f ,0.4708f ,0.1491f ,0.4682f ,0.1915f ,0.4696f ,0.1504f ,0.4433f ,0.1107f ,0.4532f ,0.0777f ,0.4495f ,0.0639f ,0.4488f ,0.3214f ,0.4203f ,0.3222f ,0.4193f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.1846f ,0.4438f ,0.0639f ,0.4488f ,0.0877f ,0.4617f ,0.0763f ,0.4945f ,0.0525f ,0.4715f ,0.0777f ,0.4495f ,0.1504f ,0.4433f ,0.1491f ,0.4682f ,0.1178f ,0.4708f ,0.1107f ,0.4532f ,0.3214f ,0.4203f ,0.3214f ,0.4203f ,0.3223f ,0.4193f ,0.3222f ,0.4193f ,0.2035f ,0.4795f ,0.2144f ,0.4674f ,0.2198f ,0.4731f ,0.2169f ,0.492f ,0.1915f ,0.4696f ,0.1846f ,0.4438f ,0.2633f ,0.457f ,0.2635f ,0.4569f ,0.0399f ,0.5407f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.2635f ,0.4569f ,0.3214f ,0.4203f ,0.1178f ,0.4708f ,0.0763f ,0.4945f ,0.1491f ,0.4682f ,0.1915f ,0.4696f ,0.1107f ,0.4532f ,0.1504f ,0.4433f ,0.0777f ,0.4495f ,0.0639f ,0.4488f ,0.3222f ,0.4193f ,0.3214f ,0.4203f ,0.2198f ,0.4731f ,0.2144f ,0.4674f ,0.1846f ,0.4438f });
  }
}
private class MFVec3f118 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.713f ,0.7435f ,3.428f ,5.378f ,1.242f ,1.672f ,4.324f ,1.242f ,-1.927f ,5.141f ,1.242f ,-1.839f ,5.589f ,1.242f ,-1.387f ,3.32f ,1.242f ,2.736f ,1.811f ,1.242f ,-2.266f ,1.593f ,1.064f ,4.098f ,1.681f ,0.002f ,3.528f ,5.775f ,0.029f ,-0.9043f ,5.825f ,-0.0306f ,1.521f ,3.585f ,0.0822f ,3.073f ,1.811f ,0.029f ,-2.505f ,4.284f ,0.029f ,-2.108f ,4.617f ,0.029f ,-2.072f ,0f ,0.002f ,3.616f ,0f ,0.3874f ,4.121f ,0f ,0.029f ,-2.639f ,0f ,1.242f ,-2.4f ,5.018f ,1.668f ,-1.583f ,4.292f ,1.668f ,-1.661f ,1.783f ,1.668f ,-2f ,1.521f ,1.668f ,3.814f ,3.175f ,1.668f ,2.51f ,5.121f ,1.668f ,1.504f ,5.314f ,1.668f ,-1.285f ,5.669f ,-0.44f ,1.408f ,3.545f ,-0.44f ,2.879f ,1.676f ,-0.44f ,3.326f ,0f ,-0.44f ,3.413f ,1.817f ,-0.44f ,-2.289f ,4.335f ,-0.44f ,-1.884f ,4.586f ,-0.44f ,-1.857f ,5.623f ,-0.44f ,-0.8114f ,-1.713f ,0.7435f ,3.428f ,-1.593f ,1.064f ,4.098f ,-1.681f ,0.002f ,3.528f ,-5.825f ,-0.0306f ,1.521f ,-5.378f ,1.242f ,1.672f ,-3.32f ,1.242f ,2.736f ,-3.585f ,0.0822f ,3.073f ,-1.811f ,1.242f ,-2.266f ,-1.811f ,0.029f ,-2.505f ,-5.141f ,1.242f ,-1.839f ,-4.617f ,0.029f ,-2.072f ,-4.284f ,0.029f ,-2.108f ,-4.324f ,1.242f ,-1.927f ,-5.589f ,1.242f ,-1.387f ,-5.775f ,0.029f ,-0.9043f ,0f ,1.15f ,3.82f ,-4.292f ,1.668f ,-1.661f ,-5.018f ,1.668f ,-1.583f ,-1.783f ,1.668f ,-2f ,0f ,1.668f ,-2.132f ,-3.175f ,1.668f ,2.51f ,-1.521f ,1.668f ,3.814f ,-5.121f ,1.668f ,1.504f ,-5.314f ,1.668f ,-1.285f ,-3.545f ,-0.44f ,2.879f ,-5.669f ,-0.44f ,1.408f ,-1.676f ,-0.44f ,3.326f ,-1.817f ,-0.44f ,-2.289f ,0f ,-0.44f ,-2.423f ,-4.335f ,-0.44f ,-1.884f ,-4.586f ,-0.44f ,-1.857f ,-5.623f ,-0.44f ,-0.8114f });
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1});
  }
}
private class MFVec2f121 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4473f ,0.6921f ,0.4449f ,0.6914f ,0.4513f ,0.6918f ,0.1025f ,0.5076f ,0.0865f ,0.5614f ,0.0652f ,0.5465f ,0.0786f ,0.5849f ,0.0516f ,0.5759f ,0.1474f ,0.4856f ,0.1963f ,0.4863f ,0.0346f ,0.5664f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.2638f ,0.4568f ,0.2146f ,0.5039f ,0.1227f ,0.5144f ,0.4468f ,0.6898f ,0.4495f ,0.6881f ,0.1491f ,0.4682f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.1915f ,0.4696f ,0.1178f ,0.4708f ,0.2635f ,0.4569f ,0.3223f ,0.4193f ,0.3214f ,0.4203f ,0.0763f ,0.4945f ,0.0399f ,0.5407f ,0.1474f ,0.4856f ,0.1963f ,0.4863f ,0.2146f ,0.5039f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.2169f ,0.492f ,0.2035f ,0.4795f ,0.1915f ,0.4696f ,0.1491f ,0.4682f ,0.1178f ,0.4708f ,0.0763f ,0.4945f ,0.0399f ,0.5407f ,0.3214f ,0.4203f ,0.3223f ,0.4193f ,0.4473f ,0.6921f ,0.4449f ,0.6914f ,0.4468f ,0.6898f ,0.0763f ,0.4945f ,0.1025f ,0.5076f ,0.0865f ,0.5614f ,0.0652f ,0.5465f ,0.1227f ,0.5144f ,0.0786f ,0.5849f ,0.0516f ,0.5759f ,0.1178f ,0.4708f ,0.1474f ,0.4856f ,0.0346f ,0.5664f ,0.0399f ,0.5407f ,0.2146f ,0.5039f ,0.1963f ,0.4863f ,0.2035f ,0.4795f ,0.2169f ,0.492f ,0.1915f ,0.4696f ,0.2635f ,0.4569f ,0.2638f ,0.4568f ,0.1491f ,0.4682f ,0.3214f ,0.4203f ,0.3214f ,0.4203f ,0.3223f ,0.4192f ,0.3223f ,0.4193f ,0.4495f ,0.6881f ,0.4513f ,0.6918f ,0.1963f ,0.4863f ,0.1474f ,0.4856f ,0.2146f ,0.5039f ,0.2638f ,0.4568f ,0.3214f ,0.4203f ,0.2035f ,0.4795f ,0.2169f ,0.492f ,0.1915f ,0.4696f ,0.1491f ,0.4682f ,0.1178f ,0.4708f ,0.0763f ,0.4945f ,0.0399f ,0.5407f ,0.3223f ,0.4193f ,0.3214f ,0.4203f });
  }
}
private class MFVec3f122 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {3.131f ,0.4823f ,3.66f ,1.373f ,0.5334f ,3.428f ,1.38f ,0.5334f ,3.897f ,0f ,0.9032f ,-2.25f ,0f ,-0.0071f ,3.661f ,2.043f ,1.067f ,3.089f ,5.086f ,0.9718f ,1.771f ,2.245f ,1.223f ,3.581f ,1.811f ,0.9032f ,-2.116f ,5.472f ,0.9071f ,-1.692f ,4.349f ,0.906f ,-1.813f ,3.805f ,1.161f ,2.723f ,1.182f ,1.067f ,2.765f ,5.378f ,0.1425f ,1.672f ,4.324f ,0.1425f ,-1.927f ,5.141f ,0.1425f ,-1.839f ,5.589f ,0.1425f ,-1.387f ,3.32f ,0.1425f ,2.736f ,1.811f ,0.1425f ,-2.266f ,1.593f ,-0.036f ,4.098f ,0f ,0.0508f ,3.82f ,0f ,0.1425f ,-2.4f ,4.884f ,1.323f ,1.266f ,4.971f ,1.271f ,-1.4f ,4.325f ,1.271f ,-1.641f ,1.791f ,1.268f ,-1.912f ,4.298f ,-0.4521f ,-1.715f ,5.043f ,-0.4521f ,-1.635f ,5.369f ,-0.4521f ,-1.306f ,5.173f ,-0.4521f ,1.538f ,3.204f ,-0.4521f ,2.555f ,1.535f ,-0.4521f ,2.956f ,1.789f ,-0.4521f ,-2.054f ,-1.373f ,0.5334f ,3.428f ,-2.043f ,1.067f ,3.089f ,-1.182f ,1.067f ,2.765f ,-1.593f ,-0.036f ,4.098f ,-3.131f ,0.4823f ,3.66f ,-2.245f ,1.223f ,3.581f ,-1.38f ,0.5334f ,3.897f ,-3.805f ,1.161f ,2.723f ,-3.32f ,0.1425f ,2.736f ,-5.086f ,0.9718f ,1.771f ,-4.349f ,0.906f ,-1.813f ,-5.472f ,0.9071f ,-1.692f ,-5.141f ,0.1425f ,-1.839f ,-4.324f ,0.1425f ,-1.927f ,-5.589f ,0.1425f ,-1.387f ,-1.811f ,0.1425f ,-2.266f ,-1.811f ,0.9032f ,-2.116f ,-5.378f ,0.1425f ,1.672f ,0f ,1.067f ,2.596f ,-4.971f ,1.271f ,-1.4f ,-4.884f ,1.323f ,1.266f ,-4.325f ,1.271f ,-1.641f ,-1.791f ,1.268f ,-1.912f ,0f ,1.268f ,-2.03f ,-5.043f ,-0.4521f ,-1.635f ,-4.298f ,-0.4521f ,-1.715f ,-5.369f ,-0.4521f ,-1.306f ,-5.173f ,-0.4521f ,1.538f ,-3.204f ,-0.4521f ,2.555f ,-1.535f ,-0.4521f ,2.956f ,0f ,-0.4521f ,3.603f ,-1.789f ,-0.4521f ,-2.054f ,0f ,-0.4521f ,-2.186f });
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1});
  }
}
private class MFVec2f125 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4416f ,0.6747f ,0.4535f ,0.6485f ,0.4483f ,0.6438f ,0.4499f ,0.6371f ,0.4594f ,0.6763f ,0.4399f ,0.6472f ,0.4645f ,0.6783f ,0.4385f ,0.6236f ,0.4279f ,0.6258f ,0.1412f ,0.5207f ,0.1108f ,0.5655f ,0.1073f ,0.5839f ,0.1708f ,0.4854f ,0.4376f ,0.6345f ,0.4528f ,0.6648f ,0.4548f ,0.6714f ,0.4459f ,0.6652f ,0.4669f ,0.6678f ,0.0786f ,0.5849f ,0.4476f ,0.6884f ,0.1474f ,0.4856f ,0.0865f ,0.5614f ,0.1963f ,0.4863f ,0.1227f ,0.5144f ,0.4539f ,0.6879f ,0.4621f ,0.6889f ,0.2661f ,0.5914f ,0.3505f ,0.5919f ,0.241f ,0.592f ,0.1724f ,0.5255f ,0.2089f ,0.5196f ,0.2133f ,0.556f ,0.1645f ,0.5709f ,0.2067f ,0.5908f ,0.2708f ,0.4736f ,0.347f ,0.4317f ,0.3616f ,0.5328f ,0.2733f ,0.5359f ,0.238f ,0.493f ,0.249f ,0.5451f ,0.3477f ,0.431f ,0.3623f ,0.5333f ,0.3623f ,0.5333f ,0.3505f ,0.5919f ,0.3477f ,0.431f ,0.3511f ,0.5932f ,0.3206f ,0.4193f ,0.2505f ,0.5754f ,0.3554f ,0.5911f ,0.2112f ,0.5805f ,0.1632f ,0.5887f ,0.1073f ,0.5839f ,0.1474f ,0.4856f ,0.1108f ,0.5655f ,0.1412f ,0.5207f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.3223f ,0.4192f ,0.2638f ,0.4568f ,0.3206f ,0.4193f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.2252f ,0.4828f ,0.2252f ,0.4828f ,0.2252f ,0.4828f ,0.4337f ,0.6239f ,0.4689f ,0.6806f ,0.4689f ,0.6702f ,0.4627f ,0.667f ,0.4583f ,0.6722f ,0.4578f ,0.6906f ,0.1073f ,0.5839f ,0.0786f ,0.5849f ,0.0865f ,0.5614f ,0.1108f ,0.5655f ,0.4514f ,0.6379f ,0.4463f ,0.6454f ,0.4498f ,0.6514f ,0.4521f ,0.6748f ,0.4466f ,0.6744f ,0.4444f ,0.685f ,0.4523f ,0.6875f ,0.4395f ,0.6457f ,0.4393f ,0.633f ,0.4295f ,0.6275f ,0.4284f ,0.6322f ,0.4488f ,0.6639f ,0.1708f ,0.4854f ,0.1412f ,0.5207f ,0.1227f ,0.5144f ,0.1963f ,0.4863f ,0.2661f ,0.5914f ,0.3505f ,0.5919f ,0.3554f ,0.5911f ,0.2505f ,0.5754f ,0.241f ,0.592f ,0.2112f ,0.5805f ,0.1724f ,0.5255f ,0.2089f ,0.5196f ,0.2133f ,0.556f ,0.1645f ,0.5709f ,0.1412f ,0.5207f ,0.1108f ,0.5655f ,0.2067f ,0.5908f ,0.1632f ,0.5887f ,0.1073f ,0.5839f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.1474f ,0.4856f ,0.3477f ,0.431f ,0.347f ,0.4317f ,0.3616f ,0.5328f ,0.3623f ,0.5333f ,0.238f ,0.493f ,0.2708f ,0.4736f ,0.2733f ,0.5359f ,0.249f ,0.5451f ,0.3505f ,0.5919f ,0.3511f ,0.5932f ,0.3623f ,0.5333f ,0.3223f ,0.4192f ,0.3206f ,0.4193f ,0.3477f ,0.431f ,0.2252f ,0.4828f ,0.2638f ,0.4568f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.2252f ,0.4828f ,0.2252f ,0.4828f ,0.1963f ,0.4863f ,0.3206f ,0.4193f ,0.1474f ,0.4856f ,0.4323f ,0.622f ,0.0865f ,0.5614f ,0.0786f ,0.5849f ,0.4539f ,0.6879f ,0.4621f ,0.6889f ,0.4523f ,0.6875f ,0.4578f ,0.6906f ,0.0865f ,0.5614f ,0.1227f ,0.5144f ,0.1474f ,0.4856f ,0.1474f ,0.4856f ,0.1227f ,0.5144f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1963f ,0.4863f ,0.1999f ,0.4849f ,0.1421f ,0.507f ,0.1227f ,0.5144f });
  }
}
private class MFVec3f126 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.47f ,1.71f ,-1.15f ,2.016f ,1.688f ,0.0414f ,2.914f ,1.242f ,0.0931f ,3.187f ,0.3754f ,1.303f ,0.7806f ,1.128f ,1.368f ,1.573f ,1.389f ,0.8702f ,2.043f ,0.0045f ,3.089f ,2.245f ,0.1604f ,3.581f ,5.472f ,-0.1553f ,-1.692f ,3.805f ,0.0984f ,2.723f ,1.182f ,0.0045f ,2.765f ,0f ,0.0045f ,2.596f ,0f ,1.333f ,-0.0527f ,2.599f ,2.142f ,-1.646f ,0.9629f ,2.166f ,-3.392f ,2.035f ,2.193f ,-3.055f ,3.439f ,2.077f ,0.1272f ,3.953f ,1.215f ,-2.467f ,5.073f ,1.55f ,0.1272f ,4.655f ,0.2739f ,-2.02f ,1.032f ,-0.6843f ,-4.667f ,0f ,-0.6754f ,-4.802f ,2.39f ,-0.2981f ,-4.154f ,1.677f ,-4.028f ,-3.387f ,4.12f ,-2.512f ,-3.272f ,0f ,-3.532f ,-2.804f ,0f ,1.519f ,-1.61f ,2.982f ,1.02f ,1.941f ,4.42f ,0.7184f ,1.865f ,5.602f ,0.5099f ,-0.0537f ,1.811f ,-3.383f ,-2.67f ,1.811f ,-0.1592f ,-2.116f ,1.833f ,-2.424f ,-2.283f ,4.241f ,-2.424f ,-2.283f ,4.225f ,-0.1553f ,-1.692f ,0.6928f ,1.497f ,-1.503f ,-2.914f ,1.242f ,0.0931f ,-2.016f ,1.688f ,0.0414f ,-1.573f ,1.389f ,0.8702f ,-2.043f ,0.0045f ,3.089f ,-2.245f ,0.1604f ,3.581f ,-2.982f ,1.02f ,1.941f ,-0.7806f ,1.128f ,1.368f ,0f ,1.119f ,1.49f ,-1.182f ,0.0045f ,2.765f ,-0.6928f ,1.497f ,-1.503f ,-5.602f ,0.5099f ,-0.0537f ,-3.805f ,0.0984f ,2.723f ,-0.9629f ,2.166f ,-3.392f ,0f ,2.143f ,-3.557f ,-2.035f ,2.193f ,-3.055f ,-1.47f ,1.71f ,-1.15f ,-5.073f ,1.55f ,0.1272f ,-4.655f ,0.2739f ,-2.02f ,-3.953f ,1.215f ,-2.467f ,-3.439f ,2.077f ,0.1272f ,-4.42f ,0.7184f ,1.865f ,-2.599f ,2.142f ,-1.646f ,-3.187f ,0.3754f ,1.303f ,-5.472f ,-0.1553f ,-1.692f ,-1.677f ,-4.028f ,-3.387f ,0f ,-4.35f ,-3.506f ,-1.032f ,-0.6843f ,-4.667f ,-4.12f ,-2.512f ,-3.272f ,-2.39f ,-0.2981f ,-4.154f ,-1.811f ,-3.383f ,-2.67f ,-4.241f ,-2.424f ,-2.283f ,-1.811f ,-0.1592f ,-2.116f ,0f ,-0.1592f ,-2.25f ,0f ,-2.424f ,-2.283f ,-1.833f ,-2.424f ,-2.283f ,-4.225f ,-0.1553f ,-1.692f ,5.086f ,-0.0906f ,1.771f ,-5.086f ,-0.0906f ,1.771f ,2.337f ,-0.4422f ,3.448f ,2.182f ,-0.4422f ,3.182f ,1.228f ,-0.4422f ,2.736f ,0f ,-0.4422f ,2.56f ,-1.228f ,-0.4422f ,2.736f ,-2.182f ,-0.4422f ,3.182f ,-2.337f ,-0.4422f ,3.448f ,-3.706f ,-0.4422f ,2.653f ,-4.913f ,-0.4422f ,1.734f ,-5.268f ,-0.4422f ,-1.51f ,-4.209f ,-0.4422f ,-1.51f ,-1.789f ,-0.4422f ,-1.935f ,0f ,-0.4422f ,-2.068f ,1.789f ,-0.4422f ,-1.935f ,4.209f ,-0.4422f ,-1.51f ,5.268f ,-0.4422f ,-1.51f ,4.913f ,-0.4422f ,1.734f ,3.706f ,-0.4422f ,2.653f });
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1});
  }
}
private class MFVec2f129 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6285f ,0.3906f ,0.6293f ,0.4094f ,0.632f ,0.4164f ,0.6316f ,0.4107f ,0.6267f ,0.3906f ,0.6224f ,0.4006f ,0.6225f ,0.3818f ,0.6285f ,0.3719f ,0.632f ,0.3649f ,0.6316f ,0.3706f ,0.6267f ,0.3807f ,0.6225f ,0.3906f ,0.6293f ,0.3995f ,0.6285f ,0.4094f ,0.632f ,0.4164f ,0.6316f ,0.4107f ,0.6267f ,0.4006f ,0.6225f ,0.3906f ,0.6224f ,0.3807f ,0.6225f ,0.3706f ,0.6267f ,0.3649f ,0.6316f ,0.3719f ,0.632f ,0.3818f ,0.6285f ,0.3995f ,0.6534f ,0.4094f ,0.6549f ,0.4164f ,0.6547f ,0.4107f ,0.6527f ,0.3906f ,0.6475f ,0.3807f ,0.6518f ,0.3719f ,0.6549f ,0.3649f ,0.6547f ,0.3906f ,0.6538f ,0.4006f ,0.6518f ,0.3818f ,0.6534f ,0.3706f ,0.6527f ,0.3995f ,0.6534f ,0.3906f ,0.6538f ,0.3818f ,0.6534f ,0.3719f ,0.6549f ,0.3649f ,0.6547f ,0.3706f ,0.6527f ,0.3807f ,0.6518f ,0.3906f ,0.6475f ,0.4006f ,0.6518f ,0.4107f ,0.6527f ,0.4164f ,0.6547f ,0.4094f ,0.6549f });
  }
}
private class MFVec3f130 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f ,0.1071f ,-1.124f ,0f ,0.1694f ,-1.195f ,1.139f ,0.1756f ,-0.8504f ,1.562f ,0.1474f ,0.0729f ,1.219f ,-0.0249f ,0.7152f ,0f ,-0.3558f ,1.195f ,0.605f ,-0.345f ,1.101f ,-0.5369f ,0.1071f ,-1.124f ,-1.139f ,0.1755f ,-0.8504f ,-1.562f ,0.1474f ,0.0729f ,-1.219f ,-0.0249f ,0.7153f ,-0.605f ,-0.345f ,1.101f ,0f ,-0.711f ,-1.028f ,0.4943f ,-0.7203f ,-0.9649f ,0.999f ,-0.7546f ,-0.733f ,1.342f ,-0.8648f ,0.0135f ,1.076f ,-0.9372f ,0.5038f ,0.5328f ,-0.9856f ,0.832f ,0f ,-0.9977f ,0.9139f ,-0.5328f ,-0.9856f ,0.832f ,-1.076f ,-0.9372f ,0.5038f ,-1.342f ,-0.8648f ,0.0136f ,-0.999f ,-0.7546f ,-0.733f ,-0.4943f ,-0.7203f ,-0.9649f ,0.5369f ,0.5357f ,-1.124f ,1.139f ,0.5357f ,-0.8504f ,1.562f ,0.5357f ,0.0729f ,1.219f ,0.5357f ,0.7153f ,0f ,0.5357f ,1.195f ,-0.605f ,0.5357f ,1.101f ,-1.139f ,0.5357f ,-0.8504f ,-1.562f ,0.5357f ,0.0729f ,0f ,0.5357f ,-1.195f ,0.605f ,0.5357f ,1.101f ,-0.5369f ,0.5357f ,-1.124f ,-1.219f ,0.5357f ,0.7153f ,0.4947f ,0.7335f ,-0.9348f ,0f ,0.7335f ,-1f ,-0.4947f ,0.7335f ,-0.9348f ,-1.008f ,0.7335f ,-0.7016f ,-1.361f ,0.7335f ,0.069f ,-1.091f ,0.7335f ,0.5735f ,-0.5462f ,0.7335f ,0.9162f ,0f ,0.7335f ,1.001f ,0.5462f ,0.7335f ,0.9162f ,1.091f ,0.7335f ,0.5735f ,1.361f ,0.7335f ,0.0689f ,1.008f ,0.7335f ,-0.7016f });
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f133 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6565f ,0.4094f ,0.6578f ,0.4164f ,0.6576f ,0.4107f ,0.6559f ,0.3906f ,0.6507f ,0.3807f ,0.6555f ,0.3719f ,0.6578f ,0.3649f ,0.6576f ,0.3906f ,0.6568f ,0.4006f ,0.6555f ,0.3818f ,0.6565f ,0.3706f ,0.6559f ,0.3995f ,0.6534f ,0.4094f ,0.6549f ,0.4164f ,0.6547f ,0.4107f ,0.6527f ,0.3906f ,0.6475f ,0.3807f ,0.6518f ,0.3719f ,0.6549f ,0.3649f ,0.6547f ,0.3906f ,0.6538f ,0.4006f ,0.6518f ,0.3818f ,0.6534f ,0.3706f ,0.6527f ,0.3995f ,0.6565f ,0.3906f ,0.6568f ,0.3818f ,0.6565f ,0.3719f ,0.6578f ,0.3649f ,0.6576f ,0.3706f ,0.6559f ,0.3807f ,0.6555f ,0.3906f ,0.6507f ,0.4006f ,0.6555f ,0.4107f ,0.6559f ,0.4164f ,0.6576f ,0.4094f ,0.6578f ,0.3906f ,0.6538f ,0.3995f ,0.6534f ,0.4094f ,0.6549f ,0.4164f ,0.6547f ,0.4107f ,0.6527f ,0.4006f ,0.6518f ,0.3906f ,0.6475f ,0.3807f ,0.6518f ,0.3706f ,0.6527f ,0.3649f ,0.6547f ,0.3719f ,0.6549f ,0.3818f ,0.6534f });
  }
}
private class MFVec3f134 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f ,0.5581f ,-1.124f ,1.139f ,0.5581f ,-0.8504f ,1.562f ,0.5581f ,0.0729f ,1.219f ,0.5581f ,0.7153f ,0f ,0.5581f ,1.195f ,-0.605f ,0.5581f ,1.101f ,-1.139f ,0.5581f ,-0.8504f ,-1.562f ,0.5581f ,0.0729f ,0f ,0.5581f ,-1.195f ,0.605f ,0.5581f ,1.101f ,-0.5369f ,0.5581f ,-1.124f ,-1.219f ,0.5581f ,0.7153f ,0.5369f ,0.0038f ,-1.124f ,1.139f ,0.0038f ,-0.8504f ,1.562f ,0.0038f ,0.0729f ,1.219f ,0.0038f ,0.7153f ,0f ,0.0038f ,1.195f ,-0.605f ,0.0038f ,1.101f ,-1.139f ,0.0038f ,-0.8504f ,-1.562f ,0.0038f ,0.0729f ,0f ,0.0038f ,-1.195f ,0.605f ,0.0038f ,1.101f ,-0.5369f ,0.0038f ,-1.124f ,-1.219f ,0.0038f ,0.7153f ,0.4947f ,0.756f ,-0.9348f ,0f ,0.756f ,-1f ,-0.4947f ,0.756f ,-0.9348f ,-1.008f ,0.756f ,-0.7016f ,-1.361f ,0.756f ,0.069f ,-1.091f ,0.756f ,0.5735f ,-0.5462f ,0.756f ,0.9162f ,0f ,0.756f ,1.001f ,0.5462f ,0.756f ,0.9162f ,1.091f ,0.756f ,0.5735f ,1.361f ,0.756f ,0.069f ,1.008f ,0.756f ,-0.7016f ,0f ,-0.2355f ,-1f ,0.4947f ,-0.2355f ,-0.9348f ,1.008f ,-0.2355f ,-0.7016f ,1.361f ,-0.2355f ,0.0689f ,1.091f ,-0.2355f ,0.5735f ,0.5462f ,-0.2355f ,0.9162f ,0f ,-0.2355f ,1.001f ,-0.5462f ,-0.2355f ,0.9162f ,-1.091f ,-0.2355f ,0.5735f ,-1.361f ,-0.2355f ,0.069f ,-1.008f ,-0.2355f ,-0.7016f ,-0.4947f ,-0.2355f ,-0.9348f });
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f137 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6596f ,0.4094f ,0.6606f ,0.4164f ,0.6605f ,0.4107f ,0.6591f ,0.3906f ,0.6538f ,0.3807f ,0.6592f ,0.3719f ,0.6606f ,0.3649f ,0.6605f ,0.3906f ,0.6599f ,0.4006f ,0.6592f ,0.3818f ,0.6596f ,0.3706f ,0.6591f ,0.3995f ,0.6565f ,0.4094f ,0.6578f ,0.4164f ,0.6576f ,0.4107f ,0.6559f ,0.3906f ,0.6507f ,0.3807f ,0.6555f ,0.3719f ,0.6578f ,0.3649f ,0.6576f ,0.3906f ,0.6568f ,0.4006f ,0.6555f ,0.3818f ,0.6565f ,0.3706f ,0.6559f ,0.3995f ,0.6596f ,0.3906f ,0.6599f ,0.3818f ,0.6596f ,0.3719f ,0.6606f ,0.3649f ,0.6605f ,0.3706f ,0.6591f ,0.3807f ,0.6592f ,0.3906f ,0.6538f ,0.4006f ,0.6592f ,0.4107f ,0.6591f ,0.4164f ,0.6605f ,0.4094f ,0.6606f ,0.3906f ,0.6568f ,0.3995f ,0.6565f ,0.4094f ,0.6578f ,0.4164f ,0.6576f ,0.4107f ,0.6559f ,0.4006f ,0.6555f ,0.3906f ,0.6507f ,0.3807f ,0.6555f ,0.3706f ,0.6559f ,0.3649f ,0.6576f ,0.3719f ,0.6578f ,0.3818f ,0.6565f });
  }
}
private class MFVec3f138 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f ,0.5456f ,-1.124f ,1.139f ,0.5456f ,-0.8504f ,1.562f ,0.5456f ,0.0729f ,1.219f ,0.5456f ,0.7153f ,0f ,0.5456f ,1.195f ,-0.605f ,0.5456f ,1.101f ,-1.139f ,0.5456f ,-0.8504f ,-1.562f ,0.5456f ,0.0729f ,0f ,0.5456f ,-1.195f ,0.605f ,0.5456f ,1.101f ,-0.5369f ,0.5456f ,-1.124f ,-1.219f ,0.5456f ,0.7153f ,0.5369f ,0.0012f ,-1.124f ,1.139f ,0.0012f ,-0.8504f ,1.562f ,0.0012f ,0.0729f ,1.219f ,0.0012f ,0.7153f ,0f ,0.0012f ,1.195f ,-0.605f ,0.0012f ,1.101f ,-1.139f ,0.0012f ,-0.8504f ,-1.562f ,0.0012f ,0.0729f ,0f ,0.0012f ,-1.195f ,0.605f ,0.0012f ,1.101f ,-0.5369f ,0.0012f ,-1.124f ,-1.219f ,0.0012f ,0.7153f ,0.4947f ,0.7434f ,-0.9348f ,0f ,0.7434f ,-1f ,-0.4947f ,0.7434f ,-0.9348f ,-1.008f ,0.7434f ,-0.7016f ,-1.361f ,0.7434f ,0.069f ,-1.091f ,0.7434f ,0.5735f ,-0.5462f ,0.7434f ,0.9162f ,0f ,0.7434f ,1.001f ,0.5462f ,0.7434f ,0.9162f ,1.091f ,0.7434f ,0.5735f ,1.361f ,0.7434f ,0.069f ,1.008f ,0.7434f ,-0.7016f ,0f ,-0.2282f ,-1f ,0.4947f ,-0.2282f ,-0.9348f ,1.008f ,-0.2282f ,-0.7016f ,1.361f ,-0.2282f ,0.069f ,1.091f ,-0.2282f ,0.5735f ,0.5462f ,-0.2282f ,0.9162f ,0f ,-0.2282f ,1.001f ,-0.5462f ,-0.2282f ,0.9162f ,-1.091f ,-0.2282f ,0.5735f ,-1.361f ,-0.2282f ,0.069f ,-1.008f ,-0.2282f ,-0.7016f ,-0.4947f ,-0.2282f ,-0.9348f });
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f141 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6628f ,0.4094f ,0.6635f ,0.4164f ,0.6634f ,0.4107f ,0.6624f ,0.3906f ,0.657f ,0.3807f ,0.6628f ,0.3719f ,0.6635f ,0.3649f ,0.6634f ,0.3906f ,0.6629f ,0.4006f ,0.6628f ,0.3818f ,0.6628f ,0.3706f ,0.6624f ,0.3995f ,0.6596f ,0.4094f ,0.6606f ,0.4164f ,0.6605f ,0.4107f ,0.6591f ,0.3906f ,0.6538f ,0.3807f ,0.6592f ,0.3719f ,0.6606f ,0.3649f ,0.6605f ,0.3906f ,0.6599f ,0.4006f ,0.6592f ,0.3818f ,0.6596f ,0.3706f ,0.6591f ,0.3995f ,0.6628f ,0.3906f ,0.6629f ,0.3818f ,0.6628f ,0.3719f ,0.6635f ,0.3649f ,0.6634f ,0.3706f ,0.6624f ,0.3807f ,0.6628f ,0.3906f ,0.657f ,0.4006f ,0.6628f ,0.4107f ,0.6624f ,0.4164f ,0.6634f ,0.4094f ,0.6635f ,0.3906f ,0.6599f ,0.3995f ,0.6596f ,0.4094f ,0.6606f ,0.4164f ,0.6605f ,0.4107f ,0.6591f ,0.4006f ,0.6592f ,0.3906f ,0.6538f ,0.3807f ,0.6592f ,0.3706f ,0.6591f ,0.3649f ,0.6605f ,0.3719f ,0.6606f ,0.3818f ,0.6596f });
  }
}
private class MFVec3f142 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f ,0.5776f ,-1.124f ,1.139f ,0.5776f ,-0.8504f ,1.562f ,0.5776f ,0.0729f ,1.219f ,0.5776f ,0.7153f ,0f ,0.5776f ,1.195f ,-0.605f ,0.5776f ,1.101f ,-1.139f ,0.5776f ,-0.8504f ,-1.562f ,0.5776f ,0.0729f ,0f ,0.5776f ,-1.195f ,0.605f ,0.5776f ,1.101f ,-0.5369f ,0.5776f ,-1.124f ,-1.219f ,0.5776f ,0.7153f ,0.5369f ,0.0017f ,-1.124f ,1.139f ,0.0017f ,-0.8504f ,1.562f ,0.0017f ,0.0729f ,1.219f ,0.0017f ,0.7153f ,0f ,0.0017f ,1.195f ,-0.605f ,0.0017f ,1.101f ,-1.139f ,0.0017f ,-0.8504f ,-1.562f ,0.0017f ,0.0729f ,0f ,0.0017f ,-1.195f ,0.605f ,0.0017f ,1.101f ,-0.5369f ,0.0017f ,-1.124f ,-1.219f ,0.0017f ,0.7153f ,0.4947f ,0.7754f ,-0.9348f ,0f ,0.7754f ,-1f ,-0.4947f ,0.7754f ,-0.9348f ,-1.008f ,0.7754f ,-0.7016f ,-1.361f ,0.7754f ,0.069f ,-1.091f ,0.7754f ,0.5735f ,-0.5462f ,0.7754f ,0.9162f ,0f ,0.7754f ,1.001f ,0.5462f ,0.7754f ,0.9162f ,1.091f ,0.7754f ,0.5735f ,1.361f ,0.7754f ,0.069f ,1.008f ,0.7754f ,-0.7016f ,0f ,-0.2388f ,-1f ,0.4947f ,-0.2388f ,-0.9348f ,1.008f ,-0.2388f ,-0.7016f ,1.361f ,-0.2388f ,0.069f ,1.091f ,-0.2388f ,0.5735f ,0.5462f ,-0.2388f ,0.9162f ,0f ,-0.2388f ,1.001f ,-0.5462f ,-0.2388f ,0.9162f ,-1.091f ,-0.2388f ,0.5735f ,-1.361f ,-0.2388f ,0.069f ,-1.008f ,-0.2388f ,-0.7016f ,-0.4947f ,-0.2388f ,-0.9348f });
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f145 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6659f ,0.4094f ,0.6664f ,0.4164f ,0.6663f ,0.4107f ,0.6656f ,0.3906f ,0.6601f ,0.3807f ,0.6665f ,0.3719f ,0.6664f ,0.3649f ,0.6663f ,0.3906f ,0.666f ,0.4006f ,0.6665f ,0.3818f ,0.6659f ,0.3706f ,0.6656f ,0.3995f ,0.6628f ,0.4094f ,0.6635f ,0.4164f ,0.6634f ,0.4107f ,0.6624f ,0.3906f ,0.657f ,0.3807f ,0.6628f ,0.3719f ,0.6635f ,0.3649f ,0.6634f ,0.3906f ,0.6629f ,0.4006f ,0.6628f ,0.3818f ,0.6628f ,0.3706f ,0.6624f ,0.3995f ,0.6659f ,0.3906f ,0.666f ,0.3818f ,0.6659f ,0.3719f ,0.6664f ,0.3649f ,0.6663f ,0.3706f ,0.6656f ,0.3807f ,0.6665f ,0.3906f ,0.6601f ,0.4006f ,0.6665f ,0.4107f ,0.6656f ,0.4164f ,0.6663f ,0.4094f ,0.6664f ,0.3906f ,0.6629f ,0.3995f ,0.6628f ,0.4094f ,0.6635f ,0.4164f ,0.6634f ,0.4107f ,0.6624f ,0.4006f ,0.6628f ,0.3906f ,0.657f ,0.3807f ,0.6628f ,0.3706f ,0.6624f ,0.3649f ,0.6634f ,0.3719f ,0.6635f ,0.3818f ,0.6628f });
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f ,0.5152f ,-1.124f ,1.139f ,0.5152f ,-0.8504f ,1.562f ,0.5152f ,0.0729f ,1.219f ,0.5152f ,0.7153f ,0f ,0.5152f ,1.195f ,-0.605f ,0.5152f ,1.101f ,-1.139f ,0.5152f ,-0.8504f ,-1.562f ,0.5152f ,0.0729f ,0f ,0.5152f ,-1.195f ,0.605f ,0.5152f ,1.101f ,-0.5369f ,0.5152f ,-1.124f ,-1.219f ,0.5152f ,0.7153f ,0.5369f ,0.0015f ,-1.124f ,1.139f ,0.0015f ,-0.8504f ,1.562f ,0.0015f ,0.0729f ,1.219f ,0.0015f ,0.7153f ,0f ,0.0015f ,1.195f ,-0.605f ,0.0015f ,1.101f ,-1.139f ,0.0015f ,-0.8504f ,-1.562f ,0.0015f ,0.0729f ,0f ,0.0015f ,-1.195f ,0.605f ,0.0015f ,1.101f ,-0.5369f ,0.0015f ,-1.124f ,-1.219f ,0.0015f ,0.7153f ,0.4947f ,0.7138f ,-0.9348f ,0f ,0.7138f ,-1f ,-0.4947f ,0.7138f ,-0.9348f ,-1.008f ,0.7138f ,-0.7016f ,-1.361f ,0.7138f ,0.069f ,-1.091f ,0.7138f ,0.5735f ,-0.5462f ,0.7138f ,0.9162f ,0f ,0.7138f ,1.001f ,0.5462f ,0.7138f ,0.9162f ,1.091f ,0.7138f ,0.5735f ,1.361f ,0.7138f ,0.069f ,1.008f ,0.7138f ,-0.7016f ,0f ,-0.2398f ,-1f ,0.4947f ,-0.2398f ,-0.9348f ,1.008f ,-0.2398f ,-0.7016f ,1.361f ,-0.2398f ,0.069f ,1.091f ,-0.2398f ,0.5735f ,0.5462f ,-0.2398f ,0.9162f ,0f ,-0.2398f ,1.001f ,-0.5462f ,-0.2398f ,0.9162f ,-1.091f ,-0.2398f ,0.5735f ,-1.361f ,-0.2398f ,0.069f ,-1.008f ,-0.2398f ,-0.7016f ,-0.4947f ,-0.2398f ,-0.9348f });
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1});
  }
}
private class MFVec2f149 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.6721f ,0.3906f ,0.6721f ,0.4094f ,0.6721f ,0.4164f ,0.6721f ,0.4107f ,0.6721f ,0.4006f ,0.6738f ,0.3906f ,0.6664f ,0.3818f ,0.6721f ,0.3719f ,0.6721f ,0.3649f ,0.6721f ,0.3706f ,0.6721f ,0.3807f ,0.6738f ,0.3995f ,0.6721f ,0.3906f ,0.6721f ,0.3818f ,0.6721f ,0.3719f ,0.6721f ,0.3649f ,0.6721f ,0.3706f ,0.6721f ,0.3807f ,0.6738f ,0.3906f ,0.6664f ,0.4006f ,0.6738f ,0.4107f ,0.6721f ,0.4164f ,0.6721f ,0.4094f ,0.6721f ,0.3995f ,0.669f ,0.4094f ,0.6692f ,0.4164f ,0.6692f ,0.4107f ,0.6689f ,0.3906f ,0.6632f ,0.3807f ,0.6702f ,0.3719f ,0.6692f ,0.3649f ,0.6692f ,0.3906f ,0.669f ,0.4006f ,0.6702f ,0.3818f ,0.669f ,0.3706f ,0.6689f ,0.3906f ,0.669f ,0.3995f ,0.669f ,0.4094f ,0.6692f ,0.4164f ,0.6692f ,0.4107f ,0.6689f ,0.4006f ,0.6702f ,0.3906f ,0.6632f ,0.3807f ,0.6702f ,0.3706f ,0.6689f ,0.3649f ,0.6692f ,0.3719f ,0.6692f ,0.3818f ,0.669f });
  }
}
private class MFVec3f150 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f ,0.5216f ,-1.124f ,0f ,0.5216f ,-1.195f ,1.139f ,0.5216f ,-0.8504f ,1.562f ,0.5216f ,0.073f ,1.219f ,0.5216f ,0.7153f ,0.605f ,0.5216f ,1.101f ,0f ,0.5216f ,1.195f ,-0.5369f ,0.5216f ,-1.124f ,-1.139f ,0.5216f ,-0.8504f ,-1.562f ,0.5216f ,0.0729f ,-1.219f ,0.5216f ,0.7153f ,-0.605f ,0.5216f ,1.101f ,0.4798f ,0.7591f ,-0.9247f ,0f ,0.7591f ,-0.9883f ,-0.4798f ,0.7591f ,-0.9247f ,-0.9844f ,0.7591f ,-0.6953f ,-1.333f ,0.7591f ,0.066f ,-1.064f ,0.7591f ,0.5706f ,-0.5317f ,0.7591f ,0.9052f ,0f ,0.7591f ,0.9877f ,0.5317f ,0.7591f ,0.9052f ,1.064f ,0.7591f ,0.5706f ,1.333f ,0.7591f ,0.066f ,0.9844f ,0.7591f ,-0.6953f ,0.5369f ,0.0018f ,-1.124f ,1.139f ,0.0018f ,-0.8504f ,1.562f ,0.0018f ,0.073f ,1.219f ,0.0018f ,0.7153f ,0f ,0.0018f ,1.195f ,-0.605f ,0.0018f ,1.101f ,-1.139f ,0.0018f ,-0.8504f ,-1.562f ,0.0018f ,0.0729f ,0f ,0.0018f ,-1.195f ,0.605f ,0.0018f ,1.101f ,-0.5369f ,0.0018f ,-1.124f ,-1.219f ,0.0018f ,0.7153f ,0f ,-0.2146f ,-1f ,0.4947f ,-0.2146f ,-0.9348f ,1.008f ,-0.2146f ,-0.7016f ,1.361f ,-0.2146f ,0.069f ,1.091f ,-0.2146f ,0.5735f ,0.5462f ,-0.2146f ,0.9162f ,0f ,-0.2146f ,1.001f ,-0.5462f ,-0.2146f ,0.9162f ,-1.091f ,-0.2146f ,0.5735f ,-1.361f ,-0.2146f ,0.069f ,-1.008f ,-0.2146f ,-0.7016f ,-0.4947f ,-0.2146f ,-0.9348f });
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFInt32152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1});
  }
}
private class MFVec2f153 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3995f ,0.669f ,0.4094f ,0.6692f ,0.4164f ,0.6692f ,0.4107f ,0.6689f ,0.3906f ,0.6632f ,0.3807f ,0.6702f ,0.3719f ,0.6692f ,0.3649f ,0.6692f ,0.3906f ,0.669f ,0.4006f ,0.6702f ,0.3818f ,0.669f ,0.3706f ,0.6689f ,0.3995f ,0.6659f ,0.4094f ,0.6664f ,0.4164f ,0.6663f ,0.4107f ,0.6656f ,0.3906f ,0.6601f ,0.3807f ,0.6665f ,0.3719f ,0.6664f ,0.3649f ,0.6663f ,0.3906f ,0.666f ,0.4006f ,0.6665f ,0.3818f ,0.6659f ,0.3706f ,0.6656f ,0.3995f ,0.669f ,0.3906f ,0.669f ,0.3818f ,0.669f ,0.3719f ,0.6692f ,0.3649f ,0.6692f ,0.3706f ,0.6689f ,0.3807f ,0.6702f ,0.3906f ,0.6632f ,0.4006f ,0.6702f ,0.4107f ,0.6689f ,0.4164f ,0.6692f ,0.4094f ,0.6692f ,0.3906f ,0.666f ,0.3995f ,0.6659f ,0.4094f ,0.6664f ,0.4164f ,0.6663f ,0.4107f ,0.6656f ,0.4006f ,0.6665f ,0.3906f ,0.6601f ,0.3807f ,0.6665f ,0.3706f ,0.6656f ,0.3649f ,0.6663f ,0.3719f ,0.6664f ,0.3818f ,0.6659f });
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5369f ,0.5724f ,-1.124f ,1.139f ,0.5724f ,-0.8504f ,1.562f ,0.5724f ,0.073f ,1.219f ,0.5724f ,0.7153f ,0f ,0.5724f ,1.195f ,-0.605f ,0.5724f ,1.101f ,-1.139f ,0.5724f ,-0.8504f ,-1.562f ,0.5724f ,0.0729f ,0f ,0.5724f ,-1.195f ,0.605f ,0.5724f ,1.101f ,-0.5369f ,0.5724f ,-1.124f ,-1.219f ,0.5724f ,0.7153f ,0.5369f ,0.0022f ,-1.124f ,1.139f ,0.0022f ,-0.8504f ,1.562f ,0.0022f ,0.0729f ,1.219f ,0.0022f ,0.7153f ,0f ,0.0022f ,1.195f ,-0.605f ,0.0022f ,1.101f ,-1.139f ,0.0022f ,-0.8504f ,-1.562f ,0.0022f ,0.0729f ,0f ,0.0022f ,-1.195f ,0.605f ,0.0022f ,1.101f ,-0.5369f ,0.0022f ,-1.124f ,-1.219f ,0.0022f ,0.7153f ,0.4947f ,0.7703f ,-0.9348f ,0f ,0.7703f ,-1f ,-0.4947f ,0.7703f ,-0.9348f ,-1.008f ,0.7703f ,-0.7016f ,-1.361f ,0.7703f ,0.069f ,-1.091f ,0.7703f ,0.5735f ,-0.5462f ,0.7703f ,0.9162f ,0f ,0.7703f ,1.001f ,0.5462f ,0.7703f ,0.9162f ,1.091f ,0.7703f ,0.5735f ,1.361f ,0.7703f ,0.069f ,1.008f ,0.7703f ,-0.7016f ,0f ,-0.2078f ,-1f ,0.4947f ,-0.2078f ,-0.9348f ,1.008f ,-0.2078f ,-0.7016f ,1.361f ,-0.2078f ,0.069f ,1.091f ,-0.2078f ,0.5735f ,0.5462f ,-0.2078f ,0.9162f ,0f ,-0.2078f ,1.001f ,-0.5462f ,-0.2078f ,0.9162f ,-1.091f ,-0.2078f ,0.5735f ,-1.361f ,-0.2078f ,0.069f ,-1.008f ,-0.2078f ,-0.7016f ,-0.4947f ,-0.2078f ,-0.9348f });
  }
}
private class MFInt32155 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1});
  }
}
private class MFInt32156 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1});
  }
}
private class MFInt32157 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1});
  }
}
private class MFInt32158 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1});
  }
}
private class MFInt32159 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1});
  }
}
private class MFInt32160 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1});
  }
}
private class MFVec2f161 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9175f ,0.8974f ,0.9509f ,0.8981f ,0.9421f ,0.8701f ,0.924f ,0.8702f ,0.9824f ,0.8971f ,0.9824f ,0.8682f ,0.9541f ,0.8718f ,0.9147f ,0.8129f ,0.9437f ,0.8153f ,0.9638f ,0.8095f ,0.9824f ,0.809f ,0.9461f ,0.923f ,0.9071f ,0.9135f ,0.9824f ,0.9287f ,0.7343f ,0.9169f ,0.7616f ,0.9147f ,0.7553f ,0.8982f ,0.7343f ,0.8968f ,0.7739f ,0.9327f ,0.7343f ,0.9365f ,0.8187f ,0.8433f ,0.8348f ,0.9045f ,0.8324f ,0.8647f ,0.74f ,0.8745f ,0.761f ,0.8768f ,0.7497f ,0.8755f ,0.777f ,0.8787f ,0.7647f ,0.8593f ,0.7596f ,0.8565f ,0.7438f ,0.8546f ,0.7343f ,0.8756f ,0.7372f ,0.8736f ,0.7394f ,0.8706f ,0.7405f ,0.8536f ,0.7808f ,0.8802f ,0.7786f ,0.8666f ,0.7875f ,0.8787f ,0.7821f ,0.8667f ,0.7952f ,0.9076f ,0.8011f ,0.8823f ,0.7745f ,0.9003f ,0.7939f ,0.8518f ,0.7845f ,0.8549f ,0.7731f ,0.8049f ,0.7979f ,0.8609f ,0.8185f ,0.8054f ,0.8439f ,0.8655f ,0.8131f ,0.8741f ,0.786f ,0.7876f ,0.8107f ,0.8538f ,0.8058f ,0.8252f ,0.8096f ,0.8166f ,0.8589f ,0.7975f ,0.8767f ,0.8622f ,0.8568f ,0.8668f ,0.8669f ,0.8674f ,0.9208f ,0.8549f ,0.8792f ,0.7991f ,0.8835f ,0.8633f ,0.9139f ,0.8636f ,0.9513f ,0.84f ,0.9824f ,0.8358f ,0.8845f ,0.9021f ,0.888f ,0.931f ,0.8761f ,0.9036f ,0.8705f ,0.9018f ,0.8544f ,0.902f ,0.8538f ,0.9345f ,0.8173f ,0.9068f ,0.8156f ,0.9257f ,0.7753f ,0.9186f ,0.7832f ,0.9041f ,0.7338f ,0.8385f ,0.7279f ,0.8339f ,0.7208f ,0.8401f ,0.7397f ,0.7767f ,0.7338f ,0.7681f ,0.7338f ,0.7727f ,0.7192f ,0.8201f ,0.7171f ,0.8352f ,0.7139f ,0.8364f ,0.7127f ,0.8419f ,0.7175f ,0.832f ,0.7247f ,0.8312f ,0.7224f ,0.8292f ,0.7239f ,0.8169f ,0.7146f ,0.8334f ,0.7152f ,0.8309f ,0.753f ,0.7762f ,0.7452f ,0.772f ,0.7409f ,0.7703f ,0.756f ,0.7661f ,0.7502f ,0.7748f ,0.7102f ,0.837f ,0.7574f ,0.7798f ,0.7054f ,0.8378f ,0.7338f ,0.8253f ,0.7338f ,0.8299f ,0.7267f ,0.8275f ,0.7291f ,0.8283f ,0.7338f ,0.8254f ,0.7338f ,0.7682f ,0.7385f ,0.7711f ,0.7338f ,0.7628f ,0.7338f ,0.82f ,0.7437f ,0.7597f ,0.7429f ,0.774f ,0.7484f ,0.7629f ,0.7505f ,0.778f ,0.7116f ,0.8233f ,0.7622f ,0.7806f ,0.7576f ,0.779f ,0.763f ,0.7872f ,0.7046f ,0.8444f ,0.7572f ,0.7769f ,0.7524f ,0.7737f ,0.7104f ,0.8341f ,0.7881f ,0.9479f ,0.7343f ,0.9577f ,0.8497f ,0.9637f ,0.9158f ,0.9539f ,0.7343f ,0.9872f ,0.9824f ,0.9663f ,0.4263f ,0.6263f ,0.4421f ,0.6351f ,0.4514f ,0.6319f ,0.4298f ,0.637f ,0.4385f ,0.639f ,0.4385f ,0.6403f ,0.4369f ,0.6596f ,0.4321f ,0.6555f ,0.4385f ,0.6553f ,0.4451f ,0.6548f ,0.4452f ,0.6463f ,0.4227f ,0.6454f ,0.4263f ,0.652f ,0.4193f ,0.6633f ,0.4176f ,0.6328f ,0.4376f ,0.6237f ,0.4196f ,0.6187f ,0.3384f ,0.9887f ,0.2934f ,0.905f ,0.2441f ,0.9417f ,0.2441f ,0.9723f ,0.4437f ,0.6405f ,0.4519f ,0.6235f ,0.3367f ,0.9059f ,0.4034f ,0.9073f ,0.4566f ,0.6329f ,0.4157f ,0.6257f ,0.4137f ,0.6192f ,0.2959f ,0.626f ,0.3051f ,0.6166f ,0.2511f ,0.6816f ,0.2548f ,0.6653f ,0.2441f ,0.6653f ,0.2441f ,0.6816f ,0.2661f ,0.696f ,0.2636f ,0.664f ,0.3484f ,0.6888f ,0.3007f ,0.651f ,0.2881f ,0.7397f ,0.3623f ,0.7239f ,0.4151f ,0.6155f ,0.4295f ,0.6197f ,0.4116f ,0.6201f ,0.4088f ,0.6855f ,0.4123f ,0.7323f ,0.4518f ,0.7703f ,0.364f ,0.6372f ,0.2441f ,0.7326f ,0.2441f ,0.7109f ,0.2441f ,0.7705f ,0.2441f ,0.816f ,0.2466f ,0.8272f ,0.2826f ,0.8198f ,0.263f ,0.8101f ,0.3011f ,0.7644f ,0.4294f ,0.848f ,0.295f ,0.8569f ,0.4229f ,0.7906f ,0.445f ,0.8342f ,0.3273f ,0.8725f ,0.3401f ,0.8443f ,0.4194f ,0.891f ,0.3844f ,0.8819f ,0.3962f ,0.7639f ,0.3654f ,0.758f ,0.3664f ,0.7923f ,0.3312f ,0.7931f ,0.3858f ,0.7947f ,0.2864f ,0.8094f ,0.3065f ,0.7969f ,0.4051f ,0.8004f ,0.4267f ,0.8291f ,0.3243f ,0.8795f ,0.293f ,0.8645f ,0.4715f ,0.8911f ,0.431f ,0.9594f ,0.4658f ,0.6252f ,0.465f ,0.6281f ,0.3862f ,0.8876f ,0.4544f ,0.6426f ,0.2548f ,0.6553f ,0.2441f ,0.6553f ,0.4156f ,0.6279f ,0.3783f ,0.625f ,0.3984f ,0.649f ,0.4325f ,0.6718f ,0.4443f ,0.6446f ,0.428f ,0.6022f ,0.4445f ,0.6357f ,0.4021f ,0.656f ,0.4052f ,0.6271f ,0.4253f ,0.6199f ,0.4215f ,0.6174f ,0.6418f ,0.6585f ,0.6441f ,0.671f ,0.6214f ,0.6731f ,0.616f ,0.6731f ,0.6418f ,0.6585f ,0.623f ,0.6494f ,0.6418f ,0.6585f ,0.6441f ,0.671f ,0.3003f ,0.6509f ,0.2548f ,0.6558f ,0.2549f ,0.6531f ,0.2441f ,0.6558f ,0.616f ,0.6731f ,0.6214f ,0.6731f ,0.2441f ,0.6529f ,0.314f ,0.8296f ,0.3898f ,0.85f ,0.2746f ,0.7881f ,0.2889f ,0.7981f ,0.4442f ,0.8857f ,0.2745f ,0.8415f ,0.3079f ,0.8417f ,0.3393f ,0.8544f ,0.3891f ,0.8542f ,0.2699f ,0.8521f ,0.246f ,0.853f ,0.4715f ,0.8911f ,0.9421f ,0.8701f ,0.9509f ,0.8981f ,0.9175f ,0.8974f ,0.924f ,0.8702f ,0.9824f ,0.8682f ,0.9824f ,0.8971f ,0.9541f ,0.8718f ,0.9147f ,0.8129f ,0.9437f ,0.8153f ,0.9638f ,0.8095f ,0.9824f ,0.809f ,0.9461f ,0.923f ,0.9071f ,0.9135f ,0.9824f ,0.9287f ,0.7553f ,0.8982f ,0.7616f ,0.9147f ,0.7343f ,0.9169f ,0.7343f ,0.8968f ,0.7739f ,0.9327f ,0.7343f ,0.9365f ,0.8324f ,0.8647f ,0.8348f ,0.9045f ,0.8187f ,0.8433f ,0.74f ,0.8745f ,0.7497f ,0.8755f ,0.761f ,0.8768f ,0.7647f ,0.8593f ,0.777f ,0.8787f ,0.7438f ,0.8546f ,0.7596f ,0.8565f ,0.7372f ,0.8736f ,0.7343f ,0.8756f ,0.7394f ,0.8706f ,0.7405f ,0.8536f ,0.7808f ,0.8802f ,0.7786f ,0.8666f ,0.7821f ,0.8667f ,0.7875f ,0.8787f ,0.8011f ,0.8823f ,0.7952f ,0.9076f ,0.7745f ,0.9003f ,0.7939f ,0.8518f ,0.7845f ,0.8549f ,0.7731f ,0.8049f ,0.7979f ,0.8609f ,0.8185f ,0.8054f ,0.8439f ,0.8655f ,0.8131f ,0.8741f ,0.8107f ,0.8538f ,0.8058f ,0.8252f ,0.786f ,0.7876f ,0.8096f ,0.8166f ,0.8767f ,0.8622f ,0.8589f ,0.7975f ,0.8669f ,0.8674f ,0.8568f ,0.8668f ,0.9208f ,0.8549f ,0.8792f ,0.7991f ,0.9139f ,0.8636f ,0.8835f ,0.8633f ,0.9513f ,0.84f ,0.9824f ,0.8358f ,0.8845f ,0.9021f ,0.888f ,0.931f ,0.8761f ,0.9036f ,0.8705f ,0.9018f ,0.8544f ,0.902f ,0.8538f ,0.9345f ,0.8173f ,0.9068f ,0.8156f ,0.9257f ,0.7753f ,0.9186f ,0.7832f ,0.9041f ,0.7208f ,0.8401f ,0.7279f ,0.8339f ,0.7338f ,0.8385f ,0.7338f ,0.7727f ,0.7338f ,0.7681f ,0.7397f ,0.7767f ,0.7192f ,0.8201f ,0.7139f ,0.8364f ,0.7171f ,0.8352f ,0.7127f ,0.8419f ,0.7175f ,0.832f ,0.7224f ,0.8292f ,0.7247f ,0.8312f ,0.7239f ,0.8169f ,0.7146f ,0.8334f ,0.7452f ,0.772f ,0.753f ,0.7762f ,0.7152f ,0.8309f ,0.7409f ,0.7703f ,0.7502f ,0.7748f ,0.756f ,0.7661f ,0.7102f ,0.837f ,0.7574f ,0.7798f ,0.7054f ,0.8378f ,0.7338f ,0.8253f ,0.7338f ,0.8299f ,0.7338f ,0.8254f ,0.7291f ,0.8283f ,0.7267f ,0.8275f ,0.7338f ,0.7628f ,0.7385f ,0.7711f ,0.7338f ,0.7682f ,0.7338f ,0.82f ,0.7437f ,0.7597f ,0.7484f ,0.7629f ,0.7429f ,0.774f ,0.7505f ,0.778f ,0.7116f ,0.8233f ,0.763f ,0.7872f ,0.7576f ,0.779f ,0.7622f ,0.7806f ,0.7046f ,0.8444f ,0.7572f ,0.7769f ,0.7524f ,0.7737f ,0.7104f ,0.8341f ,0.7881f ,0.9479f ,0.7343f ,0.9577f ,0.8497f ,0.9637f ,0.9158f ,0.9539f ,0.7343f ,0.9872f ,0.9824f ,0.9663f ,0.4514f ,0.6319f ,0.4421f ,0.6351f ,0.4263f ,0.6263f ,0.4385f ,0.639f ,0.4298f ,0.637f ,0.4385f ,0.6403f ,0.4385f ,0.6553f ,0.4321f ,0.6555f ,0.4369f ,0.6596f ,0.4451f ,0.6548f ,0.4452f ,0.6463f ,0.4263f ,0.652f ,0.4227f ,0.6454f ,0.4193f ,0.6633f ,0.4176f ,0.6328f ,0.4196f ,0.6187f ,0.4376f ,0.6237f ,0.2441f ,0.9417f ,0.2934f ,0.905f ,0.3384f ,0.9887f ,0.2441f ,0.9723f ,0.4437f ,0.6405f ,0.4519f ,0.6235f ,0.3367f ,0.9059f ,0.4034f ,0.9073f ,0.4566f ,0.6329f ,0.4157f ,0.6257f ,0.4137f ,0.6192f ,0.2441f ,0.6653f ,0.2548f ,0.6653f ,0.2511f ,0.6816f ,0.2441f ,0.6816f ,0.2636f ,0.664f ,0.2661f ,0.696f ,0.3484f ,0.6888f ,0.3007f ,0.651f ,0.3623f ,0.7239f ,0.2881f ,0.7397f ,0.4215f ,0.6174f ,0.4295f ,0.6197f ,0.4151f ,0.6155f ,0.4116f ,0.6201f ,0.4518f ,0.7703f ,0.4123f ,0.7323f ,0.4088f ,0.6855f ,0.364f ,0.6372f ,0.2959f ,0.626f ,0.3051f ,0.6166f ,0.2441f ,0.7326f ,0.2441f ,0.7705f ,0.2441f ,0.7109f ,0.2745f ,0.8415f ,0.2466f ,0.8272f ,0.2441f ,0.816f });
  }
}
private class MFVec2f162 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.263f ,0.8101f ,0.3011f ,0.7644f ,0.2746f ,0.7881f ,0.246f ,0.853f ,0.2699f ,0.8521f ,0.4229f ,0.7906f ,0.445f ,0.8342f ,0.3401f ,0.8443f ,0.3393f ,0.8544f ,0.3079f ,0.8417f ,0.314f ,0.8296f ,0.3962f ,0.7639f ,0.3654f ,0.758f ,0.3664f ,0.7923f ,0.3312f ,0.7931f ,0.3858f ,0.7947f ,0.3065f ,0.7969f ,0.2889f ,0.7981f ,0.2826f ,0.8198f ,0.2864f ,0.8094f ,0.4051f ,0.8004f ,0.3243f ,0.8795f ,0.4267f ,0.8291f ,0.293f ,0.8645f ,0.4715f ,0.8911f ,0.431f ,0.9594f ,0.4715f ,0.8911f ,0.4658f ,0.6252f ,0.465f ,0.6281f ,0.4194f ,0.891f ,0.3862f ,0.8876f ,0.4544f ,0.6426f ,0.2548f ,0.6553f ,0.2441f ,0.6553f ,0.3984f ,0.649f ,0.3783f ,0.625f ,0.4156f ,0.6279f ,0.4325f ,0.6718f ,0.428f ,0.6022f ,0.4443f ,0.6446f ,0.4445f ,0.6357f ,0.4021f ,0.656f ,0.4052f ,0.6271f ,0.4253f ,0.6199f ,0.3898f ,0.85f ,0.6418f ,0.6585f ,0.6441f ,0.671f ,0.6441f ,0.671f ,0.6418f ,0.6585f ,0.6214f ,0.6731f ,0.6214f ,0.6731f ,0.616f ,0.6731f ,0.616f ,0.6731f ,0.623f ,0.6494f ,0.6418f ,0.6585f ,0.3003f ,0.6509f ,0.2548f ,0.6558f ,0.2549f ,0.6531f ,0.2441f ,0.6558f ,0.2441f ,0.6529f ,0.3891f ,0.8542f ,0.4294f ,0.848f ,0.4442f ,0.8857f ,0.295f ,0.8569f ,0.3273f ,0.8725f ,0.3844f ,0.8819f });
  }
}
private class MFVec3f163 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.596f ,3.055f ,-7.113f ,5.82f ,3.915f ,-2.239f ,3.712f ,1.225f ,-2.29f ,3.261f ,1.453f ,-4.252f ,5.658f ,2.599f ,-1.983f ,1.82f ,1.289f ,-5.164f ,2.395f ,4.95f ,6.346f ,0.7761f ,4.912f ,6.883f ,4.408f ,9.203f ,3.673f ,0f ,11.25f ,5.65f ,2.225f ,10.89f ,5.304f ,5.962f ,4.414f ,1.165f ,4.041f ,0.8383f ,3.523f ,1.972f ,9.601f ,6.357f ,2.537f ,7.001f ,6.362f ,3.694f ,6.649f ,5.287f ,0.4475f ,7.341f ,7.362f ,4.843f ,6.188f ,3.431f ,3.886f ,6.593f ,4.951f ,3.681f ,5.194f ,5.001f ,3.826f ,5.001f ,4.664f ,3.284f ,2.472f ,4.49f ,4.543f ,4.124f ,3.499f ,3.859f ,3.861f ,4.364f ,4.575f ,3.792f ,4.006f ,5.065f ,1.183f ,1.247f ,4.863f ,1.73f ,2.37f ,5.256f ,2.695f ,2.024f ,5.549f ,5.532f ,2.714f ,5.161f ,2.035f ,2.722f ,5.442f ,3.878f ,2.887f ,6.111f ,4.389f ,0.2634f ,4.062f ,5.868f ,4.221f ,6.007f ,7.856f ,-0.5637f ,7.021f ,1.661f ,-0.9157f ,6.568f ,4.855f ,-0.7308f ,6.326f ,4.691f ,-1.55f ,6.23f ,0.8303f ,-3.441f ,4.977f ,5.364f ,-5.673f ,6.326f ,4.656f ,-2.95f ,4.216f ,3.427f ,-5.131f ,3.522f ,5.818f ,-7.166f ,3.424f ,1.86f ,-7.278f ,2.479f ,7.925f ,-6.757f ,1.927f ,1.981f ,-8.89f ,5.584f ,7.691f ,-2.78f ,5.853f ,7.683f ,-1.772f ,5.181f ,8.476f ,2.104f ,3.038f ,10.79f ,4.444f ,5.123f ,3.032f ,-5.304f ,5.664f ,8.061f ,0.8754f ,4.721f ,7.925f ,-5.258f ,2.479f ,5.82f ,-7.483f ,5.595f ,7.63f ,-2.141f ,1.173f ,1.832f ,-6.114f ,3.978f ,2.324f ,-4.64f ,2.917f ,-0.9285f ,-7.31f ,3.323f ,2.08f ,-5.371f ,1.968f ,-1.561f ,-5.013f ,4.713f ,2.444f ,-3.477f ,4.42f ,-0.2924f ,-4.477f ,1.411f ,0.5541f ,-3.484f ,2.275f ,0.8807f ,-3.763f ,0.9407f ,0.7103f ,-4.537f ,3.818f ,1.729f ,-3.139f ,4.664f ,1.866f ,-1.436f ,3.657f ,9.188f ,4.96f ,1.559f ,7.266f ,7.008f ,2.791f ,5.041f ,6.017f ,2.479f ,12.6f ,2.191f ,0f ,12.77f ,-3.073f ,2.479f ,13.01f ,-0.5905f ,2.479f ,12.47f ,-3.073f ,2.479f ,11.8f ,3.665f ,4.738f ,11.13f ,-0.5905f ,4.581f ,10.59f ,1.893f ,4.776f ,9.342f ,-4.254f ,4.651f ,10.94f ,-2.696f ,2.479f ,10.58f ,-5.873f ,5.038f ,2.087f ,0.2634f ,5.351f ,2.269f ,0.2568f ,5.575f ,4.993f ,0.4877f ,5.759f ,4.313f ,-0.6689f ,5.672f ,3.119f ,-0.6884f ,4.617f ,3.919f ,1.981f ,2.507f ,0.2122f ,3.467f ,1.252f ,-0.7037f ,3.753f ,2.181f ,1.29f ,4.703f ,1.083f ,-0.2065f ,4.531f ,4.006f ,4.226f ,3.45f ,3.843f ,3.486f ,3.474f ,0.2615f ,3.949f ,5.823f ,2.043f ,5.094f ,5.803f ,1.599f ,4.225f ,5.429f ,2.175f ,4.422f ,5.292f ,1.061f ,2.841f ,5.24f ,3.345f ,2.806f ,3.987f ,2.647f ,2.75f ,4.481f ,3.082f ,3.581f ,4.206f ,1.044f ,3.885f ,5.454f ,1.356f ,3.642f ,5.241f ,3.227f ,3.707f ,4.111f ,3.028f ,4.567f ,4.683f ,2.472f ,2.023f ,4.722f ,0.9194f ,2.354f ,5.382f ,3.515f ,2.199f ,3.631f ,3.685f ,4.225f ,3.891f ,0.1458f ,1.141f ,5.967f ,0.4592f ,1.442f ,5.549f ,3.443f ,1.22f ,3.201f ,1.972f ,6.686f ,5.769f ,3.551f ,6.468f ,4.66f ,1.125f ,6.641f ,6.224f ,2.799f ,0.2961f ,1.981f ,1.438f ,-0.7799f ,2.92f ,2.098f ,-0.0622f ,0.3894f ,4.342f ,2.994f ,2.484f ,1.972f ,10.18f ,5.298f ,3.829f ,8.081f ,4.078f ,4.754f ,5.519f ,2.97f ,2.795f ,3.568f ,4.497f ,1.835f ,3.587f ,5.011f ,4.074f ,1.813f ,1.489f ,4.073f ,1.537f ,-0.251f ,4.798f ,4.414f ,1.165f ,0.4079f ,0.7711f ,5.733f ,0.2244f ,0.7989f ,5.843f ,1.184f ,0.5011f ,4.895f ,0.2244f ,0.5907f ,5.545f ,2.091f ,-0.0943f ,-1.629f ,0.4475f ,7.341f ,7.362f ,0.7761f ,4.912f ,6.883f ,0.4475f ,7.341f ,7.362f ,4.734f ,2.295f ,-0.478f ,3.712f ,1.225f ,-2.29f ,5.658f ,2.599f ,-1.983f ,0.513f ,6.698f ,7.119f ,5.054f ,4.389f ,0.2634f ,3.561f ,1.081f ,-1.554f ,2.09f ,4.432f ,3.699f ,1.621f ,4.356f ,4.123f ,1.332f ,4.202f ,4.217f ,1.07f ,3.93f ,4.244f ,1.254f ,3.737f ,4.129f ,1.514f ,3.69f ,3.988f ,2.035f ,3.658f ,3.658f ,2.202f ,3.647f ,3.455f ,2.276f ,3.737f ,3.378f ,2.499f ,4.118f ,3.181f ,0f ,2.738f ,-7.551f ,0f ,4.192f ,6.16f ,0f ,7.925f ,-7.347f ,0f ,0.1375f ,-3.592f ,0f ,-0.9435f ,-6.54f ,0f ,-0.6349f ,1.532f ,0.5806f ,0.4168f ,3.813f ,0.1288f ,0.4247f ,4.012f ,0.5566f ,-0.2209f ,3.55f ,0f ,6.577f ,6.529f ,0f ,-1.299f ,4.283f ,0f ,0.7989f ,5.843f ,0.2132f ,0.5713f ,5.365f ,0.5926f ,3.49f ,5.582f ,0.9241f ,3.763f ,5.471f ,3.843f ,5.112f ,4.093f ,1.112f ,4.786f ,6.09f ,3.261f ,5.262f ,4.816f ,1.327f ,4.522f ,5.859f ,2.089f ,4.758f ,5.599f ,3.171f ,4.95f ,4.784f ,0.646f ,4.262f ,6.112f ,0f ,5.519f ,-7.965f ,0f ,9.74f ,6.859f ,0f ,7.548f ,7.405f ,0f ,2.998f ,5.872f ,0f ,1.753f ,6.811f ,0f ,0.5907f ,5.545f ,0.7426f ,4.743f ,6.135f ,-3.522f ,5.818f ,-7.166f ,-2.479f ,7.925f ,-6.757f ,-4.721f ,7.925f ,-5.258f ,-4.977f ,5.364f ,-5.673f ,-2.479f ,5.82f ,-7.483f ,-5.123f ,3.032f ,-5.304f ,-3.424f ,1.86f ,-7.278f ,-1.927f ,1.981f ,-8.89f ,0f ,3.753f ,-8.454f ,-2.479f ,10.58f ,-5.873f ,-4.776f ,9.342f ,-4.254f ,0f ,10.91f ,-6.064f ,-1.972f ,9.601f ,6.357f ,-2.225f ,10.89f ,5.304f ,-2.479f ,11.8f ,3.665f ,0f ,12.19f ,4.069f ,-5.962f ,4.414f ,1.165f ,-5.664f ,8.061f ,0.8754f ,-5.256f ,2.695f ,2.024f ,-0.4475f ,7.341f ,7.362f ,-1.559f ,7.266f ,7.008f ,-2.537f ,7.001f ,6.362f ,-2.791f ,5.041f ,6.017f ,-3.694f ,6.649f ,5.287f ,-0.7761f ,4.912f ,6.883f ,-2.395f ,4.95f ,6.346f ,-0.513f ,6.698f ,7.119f ,-0.4475f ,7.341f ,7.362f ,-0.7761f ,4.912f ,6.883f ,-0.4475f ,7.341f ,7.362f ,-3.886f ,6.593f ,4.951f ,-3.681f ,5.194f ,5.001f ,-3.826f ,5.001f ,4.664f ,-4.062f ,5.868f ,4.221f ,-4.843f ,6.188f ,3.431f ,-4.408f ,9.203f ,3.673f ,-3.657f ,9.188f ,4.96f ,-4.575f ,3.792f ,4.006f ,-3.859f ,3.861f ,4.364f ,-3.284f ,2.472f ,4.49f ,-4.543f ,4.124f ,3.499f ,-5.065f ,1.183f ,1.247f ,-6.111f ,4.389f ,0.2634f ,-5.549f ,5.532f ,2.714f ,-5.442f ,3.878f ,2.887f ,-5.161f ,2.035f ,2.722f ,-4.041f ,0.8383f ,3.523f ,-4.863f ,1.73f ,2.37f ,-5.82f ,3.915f ,-2.239f ,-7.021f ,1.661f ,-0.9157f ,-6.326f ,4.691f ,-1.55f ,-6.568f ,4.855f ,-0.7308f ,-4.216f ,3.427f ,-5.131f ,-6.23f ,0.8303f ,-3.441f ,-6.326f ,4.656f ,-2.95f ,-2.596f ,3.055f ,-7.113f ,-5.584f ,7.691f ,-2.78f ,-4.651f ,10.94f ,-2.696f ,-5.595f ,7.63f ,-2.141f ,-5.853f ,7.683f ,-1.772f ,-6.007f ,7.856f ,-0.5637f ,-4.738f ,11.13f ,-0.5905f ,-5.181f ,8.476f ,2.104f ,-4.581f ,10.59f ,1.893f ,-3.038f ,10.79f ,4.444f ,-1.173f ,1.832f ,-6.114f ,0f ,1.035f ,-6.031f ,0f ,0.1227f ,-8.281f ,-2.917f ,-0.9285f ,-7.31f ,-3.978f ,2.324f ,-4.64f ,-3.323f ,2.08f ,-5.371f ,-3.261f ,1.453f ,-4.252f ,-2.275f ,0.8807f ,-3.763f ,-1.82f ,1.289f ,-5.164f ,-1.968f ,-1.561f ,-5.013f ,-3.818f ,1.729f ,-3.139f ,-3.712f ,1.225f ,-2.29f ,-1.411f ,0.5541f ,-3.484f ,-4.42f ,-0.2924f ,-4.477f ,-4.713f ,2.444f ,-3.477f ,-5.658f ,2.599f ,-1.983f ,-0.9407f ,0.7103f ,-4.537f ,-4.734f ,2.295f ,-0.478f ,-4.664f ,1.866f ,-1.436f ,-2.479f ,12.6f ,2.191f ,0f ,12.89f ,2.191f ,-2.479f ,13.01f ,-0.5905f ,-2.479f ,12.47f ,-3.073f ,0f ,13.3f ,-0.5905f ,-3.561f ,1.081f ,-1.554f ,-4.073f ,1.537f ,-0.251f ,-2.799f ,0.2961f ,1.981f ,-5.038f ,2.087f ,0.2634f ,-4.074f ,1.813f ,1.489f ,-5.351f ,2.269f ,0.2568f ,-5.054f ,4.389f ,0.2634f ,-4.798f ,4.414f ,1.165f ,-5.575f ,4.993f ,0.4877f ,-5.759f ,4.313f ,-0.6689f ,-5.672f ,3.119f ,-0.6884f ,-4.617f ,3.919f ,1.981f ,-4.342f ,2.994f ,2.484f });
  }
}
private class MFVec3f164 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.754f ,5.519f ,2.97f ,-3.443f ,1.22f ,3.201f ,-1.438f ,-0.7799f ,2.92f ,-2.098f ,-0.0622f ,0.3894f ,-1.125f ,6.641f ,6.224f ,-1.972f ,10.18f ,5.298f ,0f ,9.837f ,5.8f ,-2.091f ,-0.0943f ,-1.629f ,-1.972f ,6.686f ,5.769f ,-3.551f ,6.468f ,4.66f ,-2.507f ,0.2122f ,3.467f ,-1.252f ,-0.7037f ,3.753f ,-0.2244f ,0.7989f ,5.843f ,-0.1458f ,1.141f ,5.967f ,0f ,1.141f ,5.968f ,-0.4079f ,0.7711f ,5.733f ,-0.4592f ,1.442f ,5.549f ,-2.181f ,1.29f ,4.703f ,-1.184f ,0.5011f ,4.895f ,-2.472f ,2.023f ,4.722f ,-0.9194f ,2.354f ,5.382f ,0f ,-1.065f ,3.009f ,0f ,-1.23f ,3.575f ,-3.515f ,2.199f ,3.631f ,-1.083f ,-0.2065f ,4.531f ,0f ,2.206f ,6.446f ,-0.646f ,4.262f ,6.112f ,0f ,3.949f ,5.823f ,-0.2615f ,3.949f ,5.823f ,-1.061f ,2.841f ,5.24f ,-0.5926f ,3.49f ,5.582f ,0f ,4.73f ,6.243f ,-0.7426f ,4.743f ,6.135f ,-3.843f ,3.486f ,3.474f ,-4.006f ,4.226f ,3.45f ,-2.175f ,4.422f ,5.292f ,-2.089f ,4.758f ,5.599f ,-1.327f ,4.522f ,5.859f ,-1.599f ,4.225f ,5.429f ,-3.345f ,2.806f ,3.987f ,-2.647f ,2.75f ,4.481f ,-2.795f ,3.568f ,4.497f ,-1.835f ,3.587f ,5.011f ,-3.082f ,3.581f ,4.206f ,-1.356f ,3.642f ,5.241f ,-0.9241f ,3.763f ,5.471f ,-1.044f ,3.885f ,5.454f ,-3.227f ,3.707f ,4.111f ,-2.043f ,5.094f ,5.803f ,-3.685f ,4.225f ,3.891f ,-1.112f ,4.786f ,6.09f ,-3.829f ,8.081f ,4.078f ,-3.843f ,5.112f ,4.093f ,-3.261f ,5.262f ,4.816f ,-5.658f ,2.599f ,-1.983f ,-3.712f ,1.225f ,-2.29f ,-0.2244f ,0.5907f ,5.545f ,-3.028f ,4.567f ,4.683f ,-1.621f ,4.356f ,4.123f ,-2.09f ,4.432f ,3.699f ,-1.332f ,4.202f ,4.217f ,-1.07f ,3.93f ,4.244f ,-1.254f ,3.737f ,4.129f ,-1.514f ,3.69f ,3.988f ,-2.035f ,3.658f ,3.658f ,-2.202f ,3.647f ,3.455f ,-2.276f ,3.737f ,3.378f ,-2.499f ,4.118f ,3.181f ,-0.5806f ,0.4168f ,3.813f ,-0.5566f ,-0.2209f ,3.55f ,-0.2132f ,0.5713f ,5.365f ,-0.1288f ,0.4247f ,4.012f ,0f ,0.5723f ,5.368f ,0f ,0.4306f ,4.006f ,0f ,-0.2612f ,3.286f ,-3.171f ,4.95f ,4.784f });
  }
}
private class MFInt32165 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1});
  }
}
private class MFInt32166 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1});
  }
}
private class MFVec2f167 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f ,0.7836f ,0.3424f ,0.7815f ,0.3432f ,0.7614f ,0.3553f ,0.7628f ,0.3328f ,0.7723f ,0.3344f ,0.7557f ,0.3248f ,0.7567f ,0.3294f ,0.7475f ,0.3666f ,0.7703f ,0.3614f ,0.7771f ,0.3598f ,0.7618f ,0.364f ,0.76f ,0.3542f ,0.784f ,0.3411f ,0.7782f ,0.3327f ,0.7703f ,0.3246f ,0.7567f ,0.3657f ,0.7703f ,0.3598f ,0.7771f ,0.3534f ,0.7431f ,0.3436f ,0.742f ,0.3428f ,0.7423f ,0.3522f ,0.7429f ,0.335f ,0.743f ,0.3345f ,0.743f ,0.3291f ,0.7475f ,0.3576f ,0.7438f ,0.3566f ,0.7438f ,0.3632f ,0.7603f });
  }
}
private class MFVec3f168 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.7812f ,-0.3922f ,2.571f ,-0.0916f ,-0.4605f ,3.239f ,-0.6939f ,-0.6908f ,3.379f ,-1.201f ,-1.081f ,3.304f ,1.44f ,-0.7409f ,1.741f ,0.5651f ,-1.538f ,2.334f ,-0.0316f ,-1.56f ,2.732f ,-0.5556f ,-1.456f ,2.994f ,-0.9123f ,-1.31f ,3.138f ,1.238f ,-0.9979f ,1.826f ,1.125f ,-0.5541f ,2.164f ,0.8496f ,-1.396f ,2.061f ,0.6573f ,-0.3994f ,2.377f ,-0.1708f ,-0.5443f ,2.903f ,-0.7043f ,-0.7411f ,3.046f ,-1.214f ,-1.081f ,3.172f ,1.382f ,-0.7409f ,1.7f ,0.5305f ,-1.549f ,2.255f ,-0.061f ,-1.557f ,2.59f ,-0.5907f ,-1.457f ,2.881f ,-0.9336f ,-1.31f ,3.023f ,1.226f ,-0.991f ,1.738f ,1.011f ,-0.5701f ,2.042f ,0.8046f ,-1.4f ,2.015f ,0.7041f ,-1.015f ,2.416f ,-0.0583f ,-1.031f ,3.036f ,-0.5943f ,-1.139f ,3.166f ,0.9909f ,-1.005f ,2.116f });
  }
}
private class MFInt32169 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1});
  }
}
private class MFInt32170 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1});
  }
}
private class MFVec2f171 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3562f ,0.7836f ,0.3424f ,0.7815f ,0.3432f ,0.7614f ,0.3553f ,0.7628f ,0.3328f ,0.7723f ,0.3344f ,0.7557f ,0.3248f ,0.7567f ,0.3294f ,0.7475f ,0.3666f ,0.7703f ,0.3614f ,0.7771f ,0.3598f ,0.7618f ,0.364f ,0.76f ,0.3542f ,0.784f ,0.3411f ,0.7782f ,0.3327f ,0.7703f ,0.3246f ,0.7567f ,0.3657f ,0.7703f ,0.3598f ,0.7771f ,0.3534f ,0.7431f ,0.3436f ,0.742f ,0.3428f ,0.7423f ,0.3522f ,0.7429f ,0.335f ,0.743f ,0.3345f ,0.743f ,0.3291f ,0.7475f ,0.3576f ,0.7438f ,0.3566f ,0.7438f ,0.3632f ,0.7603f });
  }
}
private class MFVec3f172 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.7812f ,-0.3922f ,2.571f ,0.0916f ,-0.4605f ,3.239f ,0.6939f ,-0.6908f ,3.379f ,1.201f ,-1.081f ,3.304f ,-1.44f ,-0.7409f ,1.741f ,-0.5651f ,-1.538f ,2.334f ,0.0316f ,-1.56f ,2.732f ,0.5556f ,-1.456f ,2.994f ,0.9123f ,-1.31f ,3.138f ,-1.238f ,-0.9979f ,1.826f ,-1.125f ,-0.5541f ,2.164f ,-0.8496f ,-1.396f ,2.061f ,-0.6573f ,-0.3994f ,2.377f ,0.1708f ,-0.5443f ,2.903f ,0.7043f ,-0.7411f ,3.046f ,1.214f ,-1.081f ,3.172f ,-1.382f ,-0.7409f ,1.7f ,-0.5305f ,-1.549f ,2.255f ,0.061f ,-1.557f ,2.59f ,0.5907f ,-1.457f ,2.881f ,0.9336f ,-1.31f ,3.023f ,-1.226f ,-0.991f ,1.738f ,-1.011f ,-0.5701f ,2.042f ,-0.8046f ,-1.4f ,2.015f ,-0.7041f ,-1.015f ,2.416f ,0.0583f ,-1.031f ,3.036f ,0.5943f ,-1.139f ,3.166f ,-0.9909f ,-1.005f ,2.116f });
  }
}
private class MFInt32173 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1});
  }
}
private class MFInt32174 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1});
  }
}
private class MFVec2f175 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f ,0.8278f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.3206f ,0.8292f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.2977f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.3868f ,0.8428f ,0.3482f ,0.8386f ,0.3206f ,0.8292f ,0.3319f ,0.7987f ,0.3778f ,0.7978f ,0.3916f ,0.7984f ,0.309f ,0.8013f ,0.3985f ,0.8029f ,0.2977f ,0.8092f ,0.4182f ,0.8263f ,0.3482f ,0.8386f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3985f ,0.8044f ,0.3916f ,0.7984f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.309f ,0.8013f ,0.2977f ,0.8092f ,0.3206f ,0.8292f ,0.2978f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7986f ,0.3567f ,0.819f });
  }
}
private class MFVec3f176 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.5714f ,0.1308f ,1.022f ,0.0065f ,0.3275f ,0.8903f ,0.9254f ,-0.514f ,-0.1858f ,-1.127f ,-0.2093f ,1.04f ,-0.8123f ,-0.4527f ,0.8311f ,1.071f ,-0.3875f ,-0.2786f ,0.8656f ,0.4725f ,0.2913f ,1.531f ,0.131f ,-0.4935f ,0.6347f ,-0.5265f ,0.1025f ,-0.3305f ,-0.5079f ,0.6059f ,-0.9072f ,0.3038f ,0.6607f ,-0.2821f ,0.6036f ,0.4543f ,0.8055f ,-0.7341f ,-0.6018f ,-1.538f ,-0.196f ,0.7028f ,-1.179f ,-0.6703f ,0.471f ,0.9784f ,-0.5205f ,-0.7082f ,0.7686f ,0.7606f ,-0.1253f ,1.439f ,0.2188f ,-0.9066f ,0.4776f ,-0.7606f ,-0.3045f ,-0.6264f ,-0.7495f ,0.2298f ,-0.4184f ,0.4603f ,0.0509f ,0.5401f ,0.5849f ,-0.4428f ,1.071f ,0.2019f ,-1.042f ,0.7894f ,-0.2743f ,-0.8837f ,0.6127f ,-0.4156f ,-0.7848f ,0.3441f ,-0.4361f ,-0.5345f ,-0.763f ,-0.4066f ,-0.0392f ,-1.24f ,-0.3287f ,0.1376f ,-1.414f ,-0.1566f ,0.1789f ,-0.9737f ,0.2094f ,0.2088f ,0.2912f ,-0.0892f ,0.5676f });
  }
}
private class MFInt32177 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1});
  }
}
private class MFInt32178 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1});
  }
}
private class MFVec2f179 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.3217f ,0.8278f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.3206f ,0.8292f ,0.3482f ,0.8386f ,0.3916f ,0.7984f ,0.2977f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.3868f ,0.8428f ,0.3482f ,0.8386f ,0.3206f ,0.8292f ,0.3319f ,0.7987f ,0.3778f ,0.7978f ,0.3916f ,0.7984f ,0.309f ,0.8013f ,0.3985f ,0.8029f ,0.2977f ,0.8092f ,0.4182f ,0.8263f ,0.3482f ,0.8386f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3985f ,0.8044f ,0.3916f ,0.7984f ,0.3778f ,0.7978f ,0.3319f ,0.7987f ,0.309f ,0.8013f ,0.2977f ,0.8092f ,0.3206f ,0.8292f ,0.2978f ,0.8092f ,0.309f ,0.8013f ,0.3985f ,0.8044f ,0.3868f ,0.8428f ,0.4182f ,0.8265f ,0.3778f ,0.7978f ,0.3319f ,0.7986f ,0.3567f ,0.819f });
  }
}
private class MFVec3f180 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5714f ,0.1308f ,1.022f ,-0.0065f ,0.3275f ,0.8903f ,-0.9254f ,-0.514f ,-0.1858f ,1.127f ,-0.2093f ,1.04f ,0.8123f ,-0.4527f ,0.8311f ,-1.071f ,-0.3875f ,-0.2786f ,-0.8656f ,0.4725f ,0.2913f ,-1.531f ,0.131f ,-0.4935f ,-0.6347f ,-0.5265f ,0.1025f ,0.3305f ,-0.5079f ,0.6059f ,0.9072f ,0.3038f ,0.6607f ,0.2821f ,0.6036f ,0.4543f ,-0.8055f ,-0.7341f ,-0.6018f ,1.538f ,-0.196f ,0.7028f ,1.179f ,-0.6703f ,0.471f ,-0.9784f ,-0.5205f ,-0.7082f ,-0.7686f ,0.7606f ,-0.1254f ,-1.439f ,0.2188f ,-0.9066f ,-0.4776f ,-0.7606f ,-0.3045f ,0.6264f ,-0.7495f ,0.2298f ,0.4184f ,0.4603f ,0.0509f ,-0.5401f ,0.5849f ,-0.4428f ,-1.071f ,0.2019f ,-1.042f ,-0.7894f ,-0.2743f ,-0.8837f ,-0.6127f ,-0.4156f ,-0.7848f ,-0.3441f ,-0.4361f ,-0.5345f ,0.763f ,-0.4066f ,-0.0392f ,1.24f ,-0.3287f ,0.1376f ,1.414f ,-0.1566f ,0.1789f ,0.9737f ,0.2094f ,0.2088f ,-0.2912f ,-0.0892f ,0.5676f });
  }
}
private class MFInt32181 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
private class MFInt32182 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1});
  }
}
private class MFVec2f183 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f ,0.8611f ,0.3991f ,0.8726f ,0.2757f ,0.8301f ,0.4299f ,0.8749f ,0.3424f ,0.8703f ,0.297f ,0.8558f ,0.4f ,0.8788f ,0.3445f ,0.8554f ,0.397f ,0.8649f ,0.2794f ,0.8281f ,0.4294f ,0.8703f ,0.3456f ,0.8724f ,0.3008f ,0.857f ,0.3469f ,0.8565f ,0.2795f ,0.829f ,0.4293f ,0.8745f ,0.3996f ,0.8793f ,0.3963f ,0.8659f ,0.2847f ,0.831f ,0.4284f ,0.8697f ,0.3046f ,0.8466f ,0.3082f ,0.8407f ,0.3105f ,0.8417f });
  }
}
private class MFVec3f184 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3218f ,-0.2298f ,0.7043f ,1.083f ,0.5974f ,0.3796f ,1.096f ,0.4225f ,0.3238f ,2.278f ,0.6308f ,-0.5919f ,2.889f ,0.6602f ,-1.322f ,0.1489f ,0.2892f ,0.6667f ,2.301f ,0.7666f ,-0.6065f ,1.117f ,0.2554f ,0.2024f ,2.208f ,0.4503f ,-0.6419f ,-0.2543f ,-0.2957f ,0.5866f ,2.872f ,0.5692f ,-1.343f ,-0.2774f ,-0.216f ,0.4476f ,1.079f ,0.5765f ,0.1724f ,2.807f ,0.6568f ,-1.386f ,0.1761f ,0.2697f ,0.4332f ,2.269f ,0.7395f ,-0.7309f ,1.111f ,0.2424f ,0.0098f ,2.17f ,0.434f ,-0.7637f ,-0.2034f ,-0.285f ,0.3399f ,2.78f ,0.5442f ,-1.406f ,0.2769f ,0.1224f ,0.5591f ,0.3788f ,-0.0007f ,0.4194f ,0.3389f ,-0.0414f ,0.2053f });
  }
}
private class MFInt32185 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1});
  }
}
private class MFInt32186 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1});
  }
}
private class MFVec2f187 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.344f ,0.8611f ,0.3991f ,0.8726f ,0.2757f ,0.8301f ,0.4299f ,0.8749f ,0.3424f ,0.8703f ,0.297f ,0.8558f ,0.4f ,0.8788f ,0.3445f ,0.8554f ,0.397f ,0.8649f ,0.2794f ,0.8281f ,0.4294f ,0.8703f ,0.3456f ,0.8724f ,0.3008f ,0.857f ,0.3469f ,0.8565f ,0.2795f ,0.829f ,0.4293f ,0.8745f ,0.3996f ,0.8793f ,0.3963f ,0.8659f ,0.2847f ,0.831f ,0.4284f ,0.8697f ,0.3046f ,0.8466f ,0.3082f ,0.8407f ,0.3105f ,0.8417f });
  }
}
private class MFVec3f188 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.3218f ,-0.2298f ,0.7043f ,-1.083f ,0.5974f ,0.3796f ,-1.096f ,0.4225f ,0.3238f ,-2.278f ,0.6308f ,-0.5919f ,-2.889f ,0.6602f ,-1.322f ,-0.1489f ,0.2892f ,0.6667f ,-2.301f ,0.7666f ,-0.6065f ,-1.117f ,0.2554f ,0.2024f ,-2.208f ,0.4503f ,-0.6419f ,0.2543f ,-0.2957f ,0.5866f ,-2.872f ,0.5692f ,-1.343f ,0.2774f ,-0.216f ,0.4476f ,-1.079f ,0.5765f ,0.1724f ,-2.807f ,0.6568f ,-1.386f ,-0.1761f ,0.2697f ,0.4332f ,-2.269f ,0.7395f ,-0.7309f ,-1.111f ,0.2424f ,0.0098f ,-2.17f ,0.434f ,-0.7637f ,0.2034f ,-0.285f ,0.3399f ,-2.78f ,0.5442f ,-1.406f ,-0.2769f ,0.1224f ,0.5591f ,-0.3788f ,-0.0007f ,0.4194f ,-0.3389f ,-0.0414f ,0.2053f });
  }
}
private class MFInt32189 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1});
  }
}
private class MFInt32190 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1});
  }
}
private class MFVec2f191 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2448f ,0.6067f ,0.3051f ,0.6166f ,0.2959f ,0.6259f ,0.2442f ,0.6234f ,0.2438f ,0.6465f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.3051f ,0.6166f ,0.3007f ,0.651f ,0.6104f ,0.6278f ,0.6104f ,0.661f ,0.6021f ,0.661f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.3007f ,0.651f ,0.6021f ,0.6278f ,0.6425f ,0.6334f ,0.6294f ,0.6619f ,0.3051f ,0.6166f ,0.3051f ,0.6166f ,0.2442f ,0.6234f ,0.2438f ,0.6465f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.3051f ,0.6166f ,0.3051f ,0.6166f ,0.3007f ,0.651f ,0.3007f ,0.651f ,0.2546f ,0.6556f ,0.2439f ,0.6556f ,0.3007f ,0.651f ,0.6104f ,0.6278f ,0.6104f ,0.661f ,0.6021f ,0.661f ,0.6021f ,0.6278f ,0.6425f ,0.6334f ,0.6294f ,0.6619f ,0.3051f ,0.6166f ,0.3051f ,0.6166f });
  }
}
private class MFVec3f192 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-1.317f ,2.914f ,1.252f ,-0.7221f ,2.383f ,1.083f ,-0.2249f ,3.164f ,0.2244f ,0.5712f ,4.007f ,1.184f ,0.4815f ,3.532f ,0.2244f ,1.038f ,1.387f ,1.073f ,1.14f ,1.338f ,0.2244f ,0.6336f ,3.483f ,1.09f ,0.6458f ,3.144f ,1.93f ,0.1375f ,0.7069f ,1.991f ,0.7184f ,0.9789f ,-1.083f ,-0.2249f ,3.164f ,0f ,-0.2295f ,3.585f ,0f ,0.1459f ,4.012f ,-0.2244f ,0.5712f ,4.007f ,0f ,0.5712f ,4.007f ,-1.184f ,0.4815f ,3.532f ,-1.252f ,-0.7221f ,2.383f ,0f ,-0.2922f ,0.9103f ,-1.93f ,0.1375f ,0.7069f ,-1.991f ,0.7184f ,0.9789f ,-1.073f ,1.14f ,1.338f ,-1.09f ,0.6458f ,3.144f ,-0.2244f ,0.6336f ,3.483f ,0f ,0.6336f ,3.483f ,-0.2244f ,1.038f ,1.387f ,0f ,0.9359f ,1.424f });
  }
}
private class MFInt32193 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
private class MFInt32194 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1});
  }
}
private class MFVec2f195 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f ,0.4797f ,0.171f ,0.4832f ,0.1497f ,0.4806f ,0.1519f ,0.4334f ,0.1831f ,0.4416f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1784f ,0.4249f ,0.1538f ,0.4251f ,0.1963f ,0.4863f ,0.19f ,0.5091f ,0.1847f ,0.499f ,0.172f ,0.4382f ,0.1568f ,0.4457f ,0.1409f ,0.4926f });
  }
}
private class MFVec3f196 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {4.99f ,0.104f ,-0.8644f ,5.073f ,0.4993f ,0.047f ,4.706f ,0.1695f ,1.198f ,4.631f ,-1.819f ,1.104f ,4.586f ,-1.648f ,-0.1248f ,3.376f ,0.3884f ,1.771f ,3.891f ,0.989f ,-0.0537f ,4.193f ,-2.49f ,-0.5713f ,4.388f ,-2.49f ,1.429f ,3.761f ,0.3238f ,-1.692f ,-0.1237f ,0.6312f ,-0.1883f ,-0.1237f ,0.3007f ,-0.9426f ,-0.1237f ,-1.418f ,-0.2577f ,-0.1237f ,-1.392f ,0.6264f ,-0.1237f ,0.2586f ,0.8179f });
  }
}
private class MFInt32197 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1});
  }
}
private class MFInt32198 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1});
  }
}
private class MFVec2f199 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f ,0.4655f ,0.1797f ,0.4646f ,0.1569f ,0.4642f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1703f ,0.4865f ,0.1895f ,0.487f ,0.1761f ,0.4271f ,0.1552f ,0.4287f ,0.1491f ,0.4835f ,0.1671f ,0.4618f });
  }
}
private class MFVec3f200 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.935f ,1.466f ,-0.0932f ,1.515f ,0.6492f ,-1.732f ,1.534f ,0.7105f ,1.619f ,-0.3782f ,1.139f ,1.732f ,0.1374f ,1.74f ,-0.0932f ,0.0076f ,1.074f ,-1.731f ,0.8341f ,-1.572f ,1.39f ,0.4391f ,-1.74f ,-0.6109f ,0.8275f ,-1.58f ,-0.6098f ,0.6342f ,-1.74f ,1.389f ,-1.237f ,1.407f ,-0.0712f ,-1.547f ,0.8515f ,-1.142f ,-0.7525f ,-1.603f ,-0.4744f ,-0.7511f ,-1.595f ,1.16f ,-1.51f ,1.034f ,1.296f ,-1.59f ,-0.0185f ,0.1351f });
  }
}
private class MFInt32201 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1});
  }
}
private class MFInt32202 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1});
  }
}
private class MFVec2f203 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f ,0.2114f ,0.2726f ,0.2114f ,0.3201f ,0.2114f ,0.3415f ,0.2114f ,0.2466f ,0.2114f ,0.2979f ,0.2417f ,0.2726f ,0.2417f ,0.3197f ,0.2417f ,0.3418f ,0.2417f ,0.2473f ,0.2417f ,0.2979f ,0.3018f ,0.2726f ,0.3018f ,0.3197f ,0.3018f ,0.3418f ,0.3018f ,0.2473f ,0.3018f ,0.2978f ,0.3276f ,0.2726f ,0.3276f ,0.3197f ,0.3276f ,0.3419f ,0.3276f ,0.2474f ,0.3276f ,0.2932f ,0.2834f ,0.2689f ,0.2834f ,0.316f ,0.2834f ,0.3322f ,0.2834f ,0.245f ,0.2834f ,0.2251f ,0.2114f ,0.2255f ,0.2417f ,0.2255f ,0.2417f ,0.2255f ,0.3018f ,0.2255f ,0.3018f ,0.2255f ,0.3276f ,0.2255f ,0.3276f ,0.2159f ,0.2834f ,0.4315f ,0.6736f ,0.442f ,0.6736f ,0.3947f ,0.6736f ,0.4041f ,0.6736f ,0.418f ,0.6736f ,0.4296f ,0.6167f ,0.4409f ,0.6167f ,0.4415f ,0.6485f ,0.4303f ,0.6485f ,0.3965f ,0.6167f ,0.3953f ,0.6485f ,0.4047f ,0.6167f ,0.4053f ,0.6485f ,0.4189f ,0.6167f ,0.418f ,0.6485f ,0.4415f ,0.6706f ,0.4306f ,0.6706f ,0.395f ,0.6706f ,0.4051f ,0.6706f ,0.4182f ,0.6706f ,0.3746f ,0.6736f ,0.3851f ,0.6736f ,0.384f ,0.6167f ,0.3845f ,0.6485f ,0.3845f ,0.6485f ,0.3846f ,0.6706f ,0.3846f ,0.6706f ,0.3851f ,0.6736f ,0.3481f ,0.2114f });
  }
}
private class MFVec3f204 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.164f ,1.767f ,-1.68f ,2.32f ,1.756f ,0.0337f ,1.047f ,1.768f ,1.663f ,-0.895f ,1.785f ,0.9556f ,-0.8229f ,1.784f ,-1.11f ,1.382f ,0.4997f ,-2.31f ,2.978f ,0.4855f ,0.057f ,1.221f ,0.5011f ,2.307f ,-1.462f ,0.525f ,1.33f ,-1.362f ,0.5241f ,-1.523f ,1.36f ,-2.014f ,-2.31f ,2.956f ,-2.028f ,0.057f ,1.198f ,-2.012f ,2.307f ,-1.484f ,-1.988f ,1.33f ,-1.384f ,-1.989f ,-1.523f ,1.398f ,-3.089f ,-2.442f ,3.087f ,-3.104f ,0.0619f ,1.228f ,-3.087f ,2.442f ,-1.61f ,-3.062f ,1.409f ,-1.505f ,-3.063f ,-1.61f ,0.8845f ,-1.238f ,-1.939f ,2.105f ,-1.248f ,-0.4543f ,1.473f ,-1.243f ,1.629f ,-0.1375f ,-1.229f ,1.432f ,-0.5011f ,-1.225f ,-0.7734f ,0.9027f ,-7.045f ,-1.569f ,2.17f ,-7.056f ,-0.378f ,1.514f ,-7.051f ,1.293f ,-0.1588f ,-7.036f ,1.135f ,-0.5365f ,-7.032f ,-0.634f ,0.9066f ,-11.1f ,-1.511f ,2.127f ,-11.11f ,-0.3651f ,1.495f ,-11.1f ,1.243f ,-0.1154f ,-11.09f ,1.091f ,-0.4791f ,-11.08f ,-0.6115f ,0.852f ,-11.65f ,-0.8985f ,1.567f ,-11.65f ,-0.2267f ,1.197f ,-11.65f ,0.716f ,0.2531f ,-11.64f ,0.6268f ,0.0399f ,-11.64f ,-0.3711f });
  }
}
private class MFInt32205 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
private class MFInt32206 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1});
  }
}
private class MFVec2f207 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4222f ,0.6201f ,0.4327f ,0.6201f ,0.3884f ,0.6201f ,0.3987f ,0.6201f ,0.4103f ,0.6201f ,0.4213f ,0.6265f ,0.4321f ,0.6265f ,0.3894f ,0.6265f ,0.399f ,0.6265f ,0.4105f ,0.6265f ,0.4214f ,0.6413f ,0.4323f ,0.6413f ,0.389f ,0.6381f ,0.3992f ,0.6381f ,0.4103f ,0.6413f ,0.4213f ,0.6705f ,0.4336f ,0.6705f ,0.3899f ,0.6705f ,0.3981f ,0.6705f ,0.4094f ,0.6705f ,0.4215f ,0.674f ,0.4346f ,0.674f ,0.3899f ,0.674f ,0.398f ,0.674f ,0.4083f ,0.674f ,0.3787f ,0.6201f ,0.3682f ,0.6201f ,0.3787f ,0.6201f ,0.3782f ,0.6265f ,0.3782f ,0.6265f ,0.3783f ,0.6413f ,0.3783f ,0.6413f ,0.3796f ,0.6705f ,0.3676f ,0.674f ,0.3806f ,0.674f ,0.3796f ,0.6705f ,0.3806f ,0.674f });
  }
}
private class MFVec3f208 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.215f ,0.3047f ,-1.152f ,1.155f ,0.2966f ,-0.2588f ,0.6199f ,0.3013f ,1.04f ,-0.6505f ,0.3122f ,0.9491f ,-0.9008f ,0.3143f ,-0.4054f ,0.1442f ,-0.8448f ,-1.625f ,1.472f ,-0.8561f ,-0.4271f ,0.7164f ,-0.8496f ,1.625f ,-1.079f ,-0.8342f ,1.482f ,-1.433f ,-0.8312f ,-0.6588f ,0.1328f ,-3.5f ,-1.607f ,1.551f ,-3.513f ,-0.4225f ,0.781f ,-2.925f ,1.61f ,-1.136f ,-2.909f ,1.468f ,-1.551f ,-3.486f ,-0.6519f ,0.0592f ,-8.713f ,-1.437f ,1.093f ,-8.722f ,-0.1279f ,0.5047f ,-8.716f ,1.51f ,-0.8932f ,-8.704f ,1.377f ,-1.169f ,-8.702f ,-0.3428f ,0.0092f ,-9.336f ,-0.8855f ,0.7154f ,-9.342f ,0.0084f ,0.3135f ,-9.339f ,1.043f ,-0.6412f ,-9.331f ,0.9519f ,-0.8292f ,-9.329f ,-0.1383f });
  }
}
private class MFInt32209 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,6,-1,8,9,10,-1,10,7,8,-1,12,13,14,-1,14,11,12,-1,14,13,15,-1,15,16,14,-1,17,18,11,-1,11,14,17,-1,20,21,22,-1,22,19,20,-1,23,24,25,-1,7,26,27,-1,20,17,14,-1,14,16,20,-1,28,24,29,-1,29,30,28,-1,21,31,32,-1,32,22,21,-1,33,26,10,-1,10,34,33,-1,35,36,31,-1,31,21,35,-1,32,37,38,-1,38,22,32,-1,39,31,36,-1,36,15,39,-1,39,25,24,-1,24,28,39,-1,40,41,3,-1,3,2,40,-1,42,27,18,-1,19,43,27,-1,27,42,19,-1,44,7,43,-1,43,38,44,-1,45,6,29,-1,29,23,45,-1,20,16,35,-1,35,21,20,-1,29,8,30,-1,30,37,32,-1,32,28,30,-1,31,39,28,-1,28,32,31,-1,7,44,46,-1,46,8,7,-1,36,35,16,-1,16,15,36,-1,15,13,25,-1,25,39,15,-1,25,13,12,-1,12,23,25,-1,20,19,42,-1,42,17,20,-1,17,42,18,-1,47,45,48,-1,48,49,47,-1,23,50,48,-1,48,45,23,-1,23,12,51,-1,51,50,23,-1,12,11,52,-1,52,51,12,-1,18,53,52,-1,52,11,18,-1,18,47,49,-1,49,53,18,-1,46,44,38,-1,38,37,46,-1,22,38,43,-1,43,19,22,-1,30,8,46,-1,46,37,30,-1,33,4,54,-1,54,26,33,-1,29,24,23,-1,33,34,5,-1,5,4,33,-1,47,18,54,-1,54,4,47,-1,5,9,29,-1,29,9,8,-1,5,34,9,-1,1,0,49,-1,49,48,1,-1,50,2,1,-1,1,48,50,-1,40,2,50,-1,50,51,40,-1,41,40,51,-1,51,52,41,-1,53,3,41,-1,41,52,53,-1,0,3,53,-1,53,49,0,-1,18,27,54,-1,54,27,26,-1,10,26,7,-1,10,9,34,-1,6,5,29,-1,4,6,45,-1,45,47,4,-1,27,43,7,-1});
  }
}
private class MFInt32210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,37,38,-1,38,41,36,-1,44,45,54,-1,31,4,53,-1,53,30,31,-1,6,10,11,-1,11,7,6,-1,11,10,33,-1,33,32,11,-1,34,24,7,-1,7,11,34,-1,13,17,15,-1,15,27,13,-1,25,22,35,-1,30,5,20,-1,13,34,11,-1,11,32,13,-1,23,22,28,-1,28,29,23,-1,17,16,14,-1,14,15,17,-1,18,5,53,-1,53,19,18,-1,9,8,16,-1,16,17,9,-1,14,42,43,-1,43,15,14,-1,21,16,8,-1,8,33,21,-1,21,35,22,-1,22,23,21,-1,39,40,41,-1,41,38,39,-1,26,20,24,-1,27,12,20,-1,20,26,27,-1,3,30,12,-1,12,43,3,-1,0,54,28,-1,28,25,0,-1,13,32,9,-1,9,17,13,-1,28,31,29,-1,29,42,14,-1,14,23,29,-1,16,21,23,-1,23,14,16,-1,30,3,2,-1,2,31,30,-1,8,9,32,-1,32,33,8,-1,33,10,35,-1,35,21,33,-1,35,10,6,-1,6,25,35,-1,13,27,26,-1,26,34,13,-1,34,26,24,-1,1,0,47,-1,47,46,1,-1,25,48,47,-1,47,0,25,-1,25,6,49,-1,49,48,25,-1,6,7,50,-1,50,49,6,-1,24,51,50,-1,50,7,24,-1,24,1,46,-1,46,51,24,-1,2,3,43,-1,43,42,2,-1,15,43,12,-1,12,27,15,-1,29,31,2,-1,2,42,29,-1,18,44,52,-1,52,5,18,-1,28,22,25,-1,18,19,45,-1,45,44,18,-1,1,24,52,-1,52,44,1,-1,45,4,28,-1,28,4,31,-1,45,19,4,-1,37,36,46,-1,46,47,37,-1,48,38,37,-1,37,47,48,-1,39,38,48,-1,48,49,39,-1,40,39,49,-1,49,50,40,-1,51,41,40,-1,40,50,51,-1,36,41,51,-1,51,46,36,-1,24,20,52,-1,52,20,5,-1,53,5,30,-1,53,4,19,-1,54,45,28,-1,44,54,0,-1,0,1,44,-1,20,12,30,-1});
  }
}
private class MFVec2f211 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4538f ,0.6821f ,0.4536f ,0.6827f ,0.4366f ,0.6851f ,0.4365f ,0.6843f ,0.4719f ,0.6661f ,0.4711f ,0.6637f ,0.4639f ,0.67f ,0.4606f ,0.6487f ,0.4605f ,0.6507f ,0.4603f ,0.6538f ,0.4606f ,0.6529f ,0.4117f ,0.6708f ,0.4117f ,0.6714f ,0.4055f ,0.6612f ,0.4047f ,0.6602f ,0.4025f ,0.6505f ,0.4027f ,0.6493f ,0.4177f ,0.6589f ,0.4355f ,0.6719f ,0.431f ,0.6469f ,0.4157f ,0.6482f ,0.414f ,0.6419f ,0.4289f ,0.6406f ,0.4346f ,0.6727f ,0.4316f ,0.6601f ,0.4169f ,0.6604f ,0.4607f ,0.6543f ,0.4504f ,0.6593f ,0.4308f ,0.6489f ,0.4498f ,0.6605f ,0.4482f ,0.6491f ,0.4143f ,0.6427f ,0.4297f ,0.6411f ,0.4754f ,0.6565f ,0.4752f ,0.6543f ,0.4024f ,0.6436f ,0.4026f ,0.6446f ,0.4463f ,0.6407f ,0.4467f ,0.6399f ,0.4164f ,0.6496f ,0.419f ,0.6831f ,0.4192f ,0.6825f ,0.4346f ,0.6583f ,0.4478f ,0.647f ,0.4591f ,0.6409f ,0.4581f ,0.6741f ,0.4578f ,0.6416f ,0.4616f ,0.6733f ,0.4549f ,0.6767f ,0.455f ,0.6762f ,0.4365f ,0.6779f ,0.4176f ,0.6767f ,0.4177f ,0.6762f ,0.4368f ,0.6768f ,0.46f ,0.6628f });
  }
}
private class MFVec3f212 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.615f ,-0.6885f ,1.418f ,-0.2519f ,-0.7698f ,1.606f ,0.894f ,-4.14f ,1.405f ,0.2357f ,-4.221f ,1.472f ,0.7106f ,-2.848f ,1.537f ,-0.2913f ,-2.795f ,1.561f ,0.3511f ,-0.9723f ,-1.085f ,-0.332f ,-1.036f ,-1.083f ,0.6255f ,-3.82f ,-1.576f ,0.076f ,-3.93f ,-1.587f ,0.5517f ,-2.055f ,-1.417f ,-0.1089f ,-2.163f ,-1.46f ,0.0149f ,-3.564f ,0.866f ,-0.0687f ,-3.436f ,-0.8707f ,0.9147f ,-4.192f ,-0.1153f ,0.2445f ,-4.253f ,-0.1554f ,0.7883f ,-4.028f ,-0.9461f ,0.1878f ,-4.111f ,-0.9619f ,-0.1749f ,-2.558f ,2.351f ,0.5105f ,-2.795f ,2.344f ,-0.1613f ,-2.264f ,1.005f ,0.8473f ,-3.286f ,-0.8304f ,0.9399f ,-2.17f ,-0.0115f ,0.979f ,-3.369f ,-0.052f ,-0.4715f ,-0.9186f ,0.2017f ,0.7286f ,-0.8328f ,0.1541f ,-0.1459f ,-2.365f ,0.1498f ,-0.0501f ,-3.575f ,-0.0433f ,0.969f ,-2.127f ,0.9718f ,0.9825f ,-3.348f ,0.8866f ,0.0909f ,-3.383f ,1.556f ,0.8371f ,-3.169f ,1.547f ,0.041f ,-3.318f ,-1.568f ,0.5921f ,-3.194f ,-1.578f ,-0.2264f ,-2.304f ,-0.7602f ,0.8375f ,-2.137f ,-0.8044f ,-0.2818f ,0.1713f ,1.187f ,0.2277f ,0.2301f ,1.179f ,0.2277f ,0.4881f ,0.2572f ,0.1331f ,0.2707f ,-0.6889f ,-0.3764f ,0.2118f ,-0.6809f ,-0.4614f ,0.4054f ,0.2565f ,0.9242f ,-4.241f ,0.7847f ,0.2647f ,-4.324f ,0.8047f ,-0.3043f ,-1.534f ,2.164f ,0.8425f ,-1.789f ,2.123f ,-0.201f ,-0.4603f ,1.254f ,0.3856f ,-0.405f ,1.248f ,0.4965f ,-0.283f ,0.2553f ,0.2563f ,-0.4079f ,-0.7647f ,-0.3314f ,-0.4586f ,-0.758f ,-0.3822f ,-0.3913f ,0.2697f ,-0.4485f ,-1.891f ,1.52f ,0.3893f ,-2.936f ,1.555f ,0.7623f ,-1.12f ,1.731f });
  }
}
private class MFInt32213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f215 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.469f ,0.6546f ,0.4646f ,0.6538f ,0.4679f ,0.6539f ,0.4723f ,0.6548f ,0.4715f ,0.6565f ,0.4657f ,0.6558f ,0.4749f ,0.6566f ,0.4741f ,0.6561f ,0.4697f ,0.6552f ,0.4639f ,0.6545f ,0.4606f ,0.6544f ,0.4613f ,0.655f ,0.468f ,0.6634f ,0.4615f ,0.6626f ,0.472f ,0.6635f ,0.4712f ,0.6629f ,0.466f ,0.6619f ,0.4595f ,0.6611f ,0.4555f ,0.661f ,0.4563f ,0.6616f ,0.4678f ,0.6645f ,0.4607f ,0.6637f ,0.4721f ,0.6647f ,0.4712f ,0.664f ,0.4655f ,0.6629f ,0.4585f ,0.6621f ,0.4541f ,0.6619f ,0.455f ,0.6626f ,0.4658f ,0.6652f ,0.4608f ,0.6646f ,0.4689f ,0.6653f ,0.4682f ,0.6649f ,0.4642f ,0.6641f ,0.4592f ,0.6635f ,0.4561f ,0.6634f ,0.4568f ,0.6639f ,0.4622f ,0.6648f });
  }
}
private class MFVec3f216 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.375f ,-0.9214f ,0.322f ,-0.212f ,-1.009f ,0.0858f ,-0.1385f ,-0.9095f ,0.5036f ,0.0245f ,-0.9973f ,0.2674f ,-0.533f ,-0.8014f ,0.1471f ,-0.4779f ,-0.7267f ,0.4605f ,-0.2413f ,-0.7148f ,0.6421f ,0.0584f ,-0.7717f ,0.6012f ,0.2213f ,-0.8595f ,0.365f ,0.1662f ,-0.9342f ,0.0516f ,-0.0704f ,-0.9461f ,-0.13f ,-0.3701f ,-0.8892f ,-0.0891f ,-0.4847f ,-0.0791f ,-0.0791f ,-0.4228f ,0.0048f ,0.2724f ,-0.1414f ,0.0189f ,0.4885f ,0.1948f ,-0.0449f ,0.4426f ,0.3887f ,-0.1493f ,0.1616f ,0.3268f ,-0.2331f ,-0.1899f ,0.0453f ,-0.2473f ,-0.406f ,-0.2908f ,-0.1835f ,-0.3601f ,-0.5058f ,0.0372f ,-0.1235f ,-0.4385f ,0.1283f ,0.2586f ,-0.1325f ,0.1437f ,0.4936f ,0.233f ,0.0743f ,0.4437f ,0.4438f ,-0.0392f ,0.1381f ,0.3765f ,-0.1303f ,-0.244f ,0.0705f ,-0.1457f ,-0.479f ,-0.2949f ,-0.0763f ,-0.4291f ,-0.3497f ,0.1392f ,-0.1192f ,-0.3021f ,0.2036f ,0.1511f ,-0.0857f ,0.2145f ,0.3172f ,0.1727f ,0.1654f ,0.2819f ,0.3218f ,0.0852f ,0.0659f ,0.2742f ,0.0207f ,-0.2044f ,0.0578f ,0.0098f ,-0.3705f ,-0.2006f ,0.0589f ,-0.3352f ,-0.0069f ,0.159f ,-0.0407f });
  }
}
private class MFInt32217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f219 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4716f ,0.6458f ,0.468f ,0.6451f ,0.471f ,0.6448f ,0.4746f ,0.6455f ,0.4739f ,0.6476f ,0.469f ,0.6473f ,0.4769f ,0.6473f ,0.4764f ,0.6466f ,0.4727f ,0.6459f ,0.4678f ,0.6456f ,0.4648f ,0.6459f ,0.4653f ,0.6466f ,0.4718f ,0.655f ,0.4662f ,0.6546f ,0.4753f ,0.6546f ,0.4748f ,0.6538f ,0.4704f ,0.653f ,0.4649f ,0.6527f ,0.4613f ,0.653f ,0.4619f ,0.6538f ,0.4717f ,0.6562f ,0.4657f ,0.6558f ,0.4756f ,0.6559f ,0.475f ,0.655f ,0.4702f ,0.6541f ,0.4642f ,0.6537f ,0.4603f ,0.654f ,0.4609f ,0.6549f ,0.4702f ,0.657f ,0.4659f ,0.6567f ,0.4729f ,0.6567f ,0.4725f ,0.6561f ,0.4692f ,0.6555f ,0.4649f ,0.6552f ,0.4622f ,0.6555f ,0.4626f ,0.6561f ,0.4674f ,0.6566f });
  }
}
private class MFVec3f220 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.5258f ,-1.001f ,0.2196f ,-0.3901f ,-1.074f ,0.023f ,-0.3376f ,-1.029f ,0.3799f ,-0.2019f ,-1.102f ,0.1833f ,-0.6244f ,-0.8415f ,0.0751f ,-0.585f ,-0.8078f ,0.3428f ,-0.3968f ,-0.8361f ,0.503f ,-0.1539f ,-0.912f ,0.4758f ,-0.0182f ,-0.985f ,0.2792f ,-0.0576f ,-1.019f ,0.0115f ,-0.2458f ,-0.9905f ,-0.1487f ,-0.4887f ,-0.9145f ,-0.1215f ,-0.4357f ,-0.0607f ,-0.0712f ,-0.3915f ,-0.0229f ,0.229f ,-0.1676f ,-0.0565f ,0.4196f ,0.1048f ,-0.1417f ,0.3891f ,0.2662f ,-0.2286f ,0.1552f ,0.222f ,-0.2663f ,-0.1451f ,-0.0018f ,-0.2328f ,-0.3357f ,-0.2743f ,-0.1476f ,-0.3051f ,-0.4293f ,0.0682f ,-0.1026f ,-0.3812f ,0.1092f ,0.2242f ,-0.1376f ,0.0727f ,0.4317f ,0.1589f ,-0.02f ,0.3984f ,0.3346f ,-0.1146f ,0.1438f ,0.2865f ,-0.1556f ,-0.1829f ,0.0429f ,-0.1191f ,-0.3904f ,-0.2536f ,-0.0264f ,-0.3572f ,-0.2801f ,0.1629f ,-0.0879f ,-0.2461f ,0.1919f ,0.1432f ,-0.0738f ,0.1661f ,0.2899f ,0.1359f ,0.1005f ,0.2664f ,0.2601f ,0.0337f ,0.0864f ,0.2261f ,0.0046f ,-0.1447f ,0.0538f ,0.0304f ,-0.2914f ,-0.1558f ,0.096f ,-0.2679f ,0.0055f ,0.1486f ,-0.0096f });
  }
}
private class MFInt32221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f223 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4723f ,0.6394f ,0.469f ,0.6388f ,0.4716f ,0.6383f ,0.4749f ,0.6389f ,0.4747f ,0.6409f ,0.4703f ,0.6408f ,0.4773f ,0.6404f ,0.4767f ,0.6395f ,0.4734f ,0.6389f ,0.469f ,0.6389f ,0.4664f ,0.6394f ,0.467f ,0.6402f ,0.4744f ,0.647f ,0.4694f ,0.6469f ,0.4774f ,0.6463f ,0.4768f ,0.6454f ,0.4729f ,0.6447f ,0.4679f ,0.6446f ,0.4649f ,0.6452f ,0.4655f ,0.6461f ,0.4734f ,0.6485f ,0.4696f ,0.6485f ,0.4758f ,0.6481f ,0.4753f ,0.6473f ,0.4722f ,0.6468f ,0.4684f ,0.6467f ,0.4661f ,0.6472f ,0.4666f ,0.6479f ,0.4709f ,0.648f });
  }
}
private class MFVec3f224 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.5817f ,-0.8003f ,0.0727f ,-0.4584f ,-0.8658f ,-0.106f ,-0.4372f ,-0.8552f ,0.2109f ,-0.314f ,-0.9207f ,0.0322f ,-0.6359f ,-0.6464f ,-0.0377f ,-0.62f ,-0.6384f ,0.2f ,-0.4756f ,-0.6933f ,0.3382f ,-0.2748f ,-0.7836f ,0.3078f ,-0.1516f ,-0.8492f ,0.1291f ,-0.1675f ,-0.8572f ,-0.1085f ,-0.3119f ,-0.8023f ,-0.2467f ,-0.5127f ,-0.712f ,-0.2163f ,-0.374f ,-0.0036f ,-0.0838f ,-0.3562f ,0.0054f ,0.1827f ,-0.1843f ,-0.0599f ,0.3471f ,0.0408f ,-0.1612f ,0.313f ,0.1875f ,-0.2392f ,0.1004f ,0.1697f ,-0.2482f ,-0.1661f ,-0.0022f ,-0.1829f ,-0.3305f ,-0.2274f ,-0.0816f ,-0.2964f ,-0.2142f ,0.1671f ,-0.0744f ,-0.2005f ,0.174f ,0.1306f ,-0.0683f ,0.1238f ,0.257f ,0.1048f ,0.0459f ,0.2308f ,0.2176f ,-0.0141f ,0.0673f ,0.2039f ,-0.021f ,-0.1376f ,0.0717f ,0.0292f ,-0.264f ,-0.1014f ,0.1072f ,-0.2378f ,0.0214f ,0.1175f ,-0.006f });
  }
}
private class MFInt32225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f227 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.453f ,0.6387f ,0.4487f ,0.6387f ,0.4487f ,0.6388f ,0.453f ,0.6389f ,0.4561f ,0.6405f ,0.453f ,0.6403f ,0.4561f ,0.6406f ,0.4528f ,0.6407f ,0.4485f ,0.6406f ,0.4453f ,0.6405f ,0.4454f ,0.6403f ,0.4487f ,0.6402f ,0.4563f ,0.6497f ,0.4527f ,0.6495f ,0.4562f ,0.6499f ,0.4525f ,0.65f ,0.4474f ,0.6499f ,0.4439f ,0.6497f ,0.4439f ,0.6495f ,0.4476f ,0.6494f ,0.4567f ,0.6512f ,0.4528f ,0.651f ,0.4566f ,0.6514f ,0.4526f ,0.6515f ,0.4471f ,0.6514f ,0.4432f ,0.6512f ,0.4433f ,0.651f ,0.4473f ,0.6509f ,0.4546f ,0.6527f ,0.4519f ,0.6525f ,0.4546f ,0.6528f ,0.4518f ,0.6529f ,0.4478f ,0.6528f ,0.4451f ,0.6527f ,0.4452f ,0.6525f ,0.448f ,0.6524f ,0.4498f ,0.6533f });
  }
}
private class MFVec3f228 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0229f ,-1.485f ,0.1659f ,-0.0277f ,-1.493f ,-0.0662f ,0.2213f ,-1.467f ,0.1625f ,0.2166f ,-1.475f ,-0.0696f ,-0.2194f ,-1.321f ,0.162f ,-0.0326f ,-1.302f ,0.3335f ,0.2116f ,-1.284f ,0.3301f ,0.3912f ,-1.276f ,0.1535f ,0.3864f ,-1.284f ,-0.0786f ,0.1997f ,-1.303f ,-0.2501f ,-0.0446f ,-1.321f ,-0.2467f ,-0.2242f ,-1.329f ,-0.0701f ,-0.3384f ,-0.3382f ,0.1488f ,-0.1289f ,-0.3166f ,0.3412f ,0.1617f ,-0.2951f ,0.3371f ,0.3631f ,-0.2862f ,0.139f ,0.3574f ,-0.2953f ,-0.1371f ,0.148f ,-0.3169f ,-0.3295f ,-0.1426f ,-0.3384f ,-0.3254f ,-0.3441f ,-0.3473f ,-0.1273f ,-0.3796f ,-0.1843f ,0.1553f ,-0.1523f ,-0.1608f ,0.364f ,0.1629f ,-0.1375f ,0.3596f ,0.3814f ,-0.1279f ,0.1446f ,0.3753f ,-0.1377f ,-0.1549f ,0.148f ,-0.1611f ,-0.3636f ,-0.1672f ,-0.1845f ,-0.3592f ,-0.3858f ,-0.1941f ,-0.1442f ,-0.2808f ,-0.0217f ,0.1042f ,-0.1201f ,-0.0051f ,0.2518f ,0.1029f ,0.0114f ,0.2486f ,0.2574f ,0.0182f ,0.0967f ,0.253f ,0.0113f ,-0.1151f ,0.0923f ,-0.0053f ,-0.2627f ,-0.1306f ,-0.0218f ,-0.2596f ,-0.2851f ,-0.0286f ,-0.1076f ,-0.0187f ,0.0593f ,-0.0078f });
  }
}
private class MFInt32229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f231 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.454f ,0.6279f ,0.4498f ,0.6279f ,0.4498f ,0.6277f ,0.454f ,0.6277f ,0.4571f ,0.6295f ,0.4539f ,0.6296f ,0.4571f ,0.6293f ,0.4539f ,0.6291f ,0.4496f ,0.6291f ,0.4464f ,0.6292f ,0.4465f ,0.6294f ,0.4497f ,0.6295f ,0.4573f ,0.6381f ,0.4537f ,0.6382f ,0.4572f ,0.6379f ,0.4536f ,0.6377f ,0.4486f ,0.6376f ,0.445f ,0.6377f ,0.445f ,0.6379f ,0.4486f ,0.6381f ,0.4578f ,0.6395f ,0.4538f ,0.6396f ,0.4577f ,0.6392f ,0.4538f ,0.639f ,0.4482f ,0.6389f ,0.4443f ,0.639f ,0.4444f ,0.6393f ,0.4483f ,0.6395f ,0.4557f ,0.6408f ,0.4529f ,0.6408f ,0.4557f ,0.6406f ,0.4529f ,0.6404f ,0.449f ,0.6404f ,0.4462f ,0.6404f ,0.4462f ,0.6406f ,0.449f ,0.6408f ,0.4509f ,0.6412f });
  }
}
private class MFVec3f232 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2499f ,-1.331f ,0.1644f ,-0.2541f ,-1.339f ,-0.0655f ,-0.0349f ,-1.351f ,0.1633f ,-0.0391f ,-1.359f ,-0.0666f ,-0.3958f ,-1.152f ,0.159f ,-0.2314f ,-1.162f ,0.3307f ,-0.0165f ,-1.182f ,0.3296f ,0.1416f ,-1.203f ,0.1563f ,0.1374f ,-1.21f ,-0.0736f ,-0.0269f ,-1.201f ,-0.2453f ,-0.2419f ,-1.181f ,-0.2442f ,-0.4f ,-1.16f ,-0.0709f ,-0.3504f ,-0.2375f ,0.1465f ,-0.166f ,-0.2482f ,0.3391f ,0.0897f ,-0.2722f ,0.3377f ,0.267f ,-0.2955f ,0.1434f ,0.2621f ,-0.3044f ,-0.1302f ,0.0777f ,-0.2937f ,-0.3227f ,-0.1781f ,-0.2697f ,-0.3214f ,-0.3554f ,-0.2464f ,-0.127f ,-0.3661f ,-0.0905f ,0.1542f ,-0.1642f ,-0.1021f ,0.365f ,0.1159f ,-0.1284f ,0.3636f ,0.3101f ,-0.1539f ,0.1508f ,0.3046f ,-0.1637f ,-0.1488f ,0.1027f ,-0.152f ,-0.3596f ,-0.1774f ,-0.1258f ,-0.3581f ,-0.3715f ,-0.1003f ,-0.1453f ,-0.2544f ,0.0426f ,0.1044f ,-0.1117f ,0.0344f ,0.2535f ,0.0864f ,0.0158f ,0.2525f ,0.2237f ,-0.0022f ,0.102f ,0.2198f ,-0.0091f ,-0.1098f ,0.077f ,-0.0009f ,-0.2589f ,-0.121f ,0.0177f ,-0.2579f ,-0.2583f ,0.0357f ,-0.1074f ,-0.0117f ,0.0763f ,-0.005f });
  }
}
private class MFInt32233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f235 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4546f ,0.6191f ,0.4506f ,0.619f ,0.4506f ,0.6185f ,0.4546f ,0.6186f ,0.4575f ,0.6206f ,0.4545f ,0.6209f ,0.4576f ,0.6201f ,0.4545f ,0.6196f ,0.4505f ,0.6196f ,0.4474f ,0.6199f ,0.4474f ,0.6204f ,0.4505f ,0.6209f ,0.4572f ,0.6286f ,0.4541f ,0.6289f ,0.4572f ,0.628f ,0.4541f ,0.6276f ,0.4497f ,0.6275f ,0.4466f ,0.6279f ,0.4465f ,0.6284f ,0.4497f ,0.6289f ,0.4558f ,0.631f ,0.4534f ,0.6313f ,0.4558f ,0.6306f ,0.4534f ,0.6302f ,0.45f ,0.6302f ,0.4475f ,0.6305f ,0.4475f ,0.6309f ,0.45f ,0.6312f ,0.4516f ,0.6313f });
  }
}
private class MFVec3f236 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.4479f ,-1.125f ,0.1554f ,-0.4519f ,-1.132f ,-0.0632f ,-0.2499f ,-1.18f ,0.1557f ,-0.2539f ,-1.187f ,-0.0629f ,-0.5544f ,-0.9319f ,0.1491f ,-0.4029f ,-0.9674f ,0.3134f ,-0.2049f ,-1.022f ,0.3137f ,-0.0594f ,-1.068f ,0.1499f ,-0.0634f ,-1.075f ,-0.0687f ,-0.2149f ,-1.04f ,-0.2329f ,-0.4129f ,-0.9852f ,-0.2333f ,-0.5584f ,-0.939f ,-0.0695f ,-0.3333f ,-0.0803f ,0.1251f ,-0.1781f ,-0.1166f ,0.2933f ,0.037f ,-0.1758f ,0.2937f ,0.186f ,-0.2231f ,0.1259f ,0.1817f ,-0.2308f ,-0.1116f ,0.0265f ,-0.1945f ,-0.2799f ,-0.1886f ,-0.1353f ,-0.2802f ,-0.3376f ,-0.088f ,-0.1125f ,-0.2019f ,0.1709f ,0.088f ,-0.0815f ,0.1427f ,0.2185f ,0.0854f ,0.0967f ,0.2188f ,0.2011f ,0.06f ,0.0887f ,0.1977f ,0.054f ,-0.0957f ,0.0773f ,0.0822f ,-0.2262f ,-0.0896f ,0.1281f ,-0.2265f ,-0.2053f ,0.1648f ,-0.0963f ,0.0132f ,0.1679f ,-0.006f });
  }
}
private class MFInt32237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f239 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.455f ,0.6109f ,0.4515f ,0.6108f ,0.4515f ,0.6101f ,0.455f ,0.6102f ,0.4575f ,0.6123f ,0.4549f ,0.6128f ,0.4576f ,0.6116f ,0.455f ,0.611f ,0.4514f ,0.6109f ,0.4488f ,0.6114f ,0.4488f ,0.6121f ,0.4514f ,0.6127f ,0.4576f ,0.6198f ,0.4546f ,0.6204f ,0.4576f ,0.619f ,0.4547f ,0.6183f ,0.4505f ,0.6182f ,0.4475f ,0.6188f ,0.4475f ,0.6197f ,0.4504f ,0.6203f ,0.4567f ,0.6213f ,0.4542f ,0.6217f ,0.4567f ,0.6206f ,0.4542f ,0.6202f ,0.4507f ,0.6202f ,0.4482f ,0.6206f ,0.4482f ,0.6213f ,0.4506f ,0.6217f ,0.4523f ,0.6218f });
  }
}
private class MFVec3f240 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.6187f ,-1.071f ,0.1411f ,-0.6221f ,-1.077f ,-0.0485f ,-0.4578f ,-1.147f ,0.1426f ,-0.4613f ,-1.153f ,-0.047f ,-0.6714f ,-0.8704f ,0.1341f ,-0.5482f ,-0.923f ,0.2774f ,-0.3873f ,-0.9993f ,0.2789f ,-0.2693f ,-1.061f ,0.1378f ,-0.2727f ,-1.067f ,-0.0518f ,-0.396f ,-1.015f ,-0.1951f ,-0.5568f ,-0.9385f ,-0.1966f ,-0.6749f ,-0.8765f ,-0.0555f ,-0.3236f ,-0.0612f ,0.1191f ,-0.1854f ,-0.1202f ,0.2799f ,0.006f ,-0.211f ,0.2816f ,0.1384f ,-0.2805f ,0.1233f ,0.1343f ,-0.2879f ,-0.1023f ,-0.004f ,-0.2288f ,-0.263f ,-0.1953f ,-0.138f ,-0.2647f ,-0.3277f ,-0.0685f ,-0.1065f ,-0.2135f ,0.0836f ,0.0963f ,-0.0945f ,0.035f ,0.233f ,0.0723f ,-0.0325f ,0.2317f ,0.1865f ,-0.0807f ,0.0968f ,0.1843f ,-0.0816f ,-0.0912f ,0.0691f ,-0.0336f ,-0.2249f ,-0.0937f ,0.0356f ,-0.2277f ,-0.2116f ,0.0844f ,-0.0958f ,0.0314f ,0.0875f ,-0.0035f });
  }
}
private class MFInt32241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f243 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4371f ,0.6382f ,0.4328f ,0.6382f ,0.4329f ,0.6384f ,0.4372f ,0.6384f ,0.4403f ,0.64f ,0.4369f ,0.6398f ,0.4405f ,0.6401f ,0.4374f ,0.6403f ,0.4331f ,0.6403f ,0.4298f ,0.6402f ,0.4296f ,0.64f ,0.4326f ,0.6398f ,0.4413f ,0.6498f ,0.4375f ,0.6497f ,0.4415f ,0.65f ,0.438f ,0.6502f ,0.4329f ,0.6502f ,0.4291f ,0.6501f ,0.4289f ,0.6499f ,0.4324f ,0.6497f ,0.4418f ,0.6514f ,0.4377f ,0.6512f ,0.442f ,0.6516f ,0.4383f ,0.6518f ,0.4327f ,0.6518f ,0.4286f ,0.6517f ,0.4284f ,0.6514f ,0.4321f ,0.6512f ,0.4399f ,0.653f ,0.437f ,0.6529f ,0.4401f ,0.6531f ,0.4374f ,0.6533f ,0.4335f ,0.6533f ,0.4306f ,0.6532f ,0.4304f ,0.653f ,0.4331f ,0.6529f ,0.4352f ,0.6537f });
  }
}
private class MFVec3f244 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0157f ,-1.601f ,0.0972f ,0.0217f ,-1.599f ,-0.1348f ,0.2598f ,-1.581f ,0.1076f ,0.2658f ,-1.578f ,-0.1245f ,-0.183f ,-1.427f ,0.091f ,-0.0045f ,-1.414f ,0.2728f ,0.2395f ,-1.393f ,0.2832f ,0.4271f ,-1.376f ,0.1169f ,0.4331f ,-1.374f ,-0.1151f ,0.2546f ,-1.387f ,-0.2969f ,0.0105f ,-1.408f ,-0.3073f ,-0.177f ,-1.425f ,-0.1411f ,-0.3164f ,-0.3793f ,0.1197f ,-0.1161f ,-0.3643f ,0.3236f ,0.1742f ,-0.3403f ,0.3359f ,0.3846f ,-0.3213f ,0.1495f ,0.3918f ,-0.3185f ,-0.1266f ,0.1915f ,-0.3335f ,-0.3306f ,-0.0988f ,-0.3575f ,-0.3429f ,-0.3092f ,-0.3765f ,-0.1564f ,-0.3602f ,-0.2157f ,0.1315f ,-0.143f ,-0.1995f ,0.3527f ,0.172f ,-0.1734f ,0.3661f ,0.4003f ,-0.1528f ,0.1638f ,0.408f ,-0.1498f ,-0.1357f ,0.1908f ,-0.166f ,-0.357f ,-0.1242f ,-0.1921f ,-0.3703f ,-0.3524f ,-0.2126f ,-0.168f ,-0.2615f ,-0.0399f ,0.0937f ,-0.1079f ,-0.0284f ,0.2501f ,0.1148f ,-0.01f ,0.2596f ,0.2762f ,0.0046f ,0.1165f ,0.2817f ,0.0068f ,-0.0952f ,0.1281f ,-0.0047f ,-0.2517f ,-0.0946f ,-0.0232f ,-0.2611f ,-0.256f ,-0.0377f ,-0.1181f ,0.0044f ,0.0523f ,-0.0002f });
  }
}
private class MFInt32245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f247 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4369f ,0.6266f ,0.4327f ,0.6266f ,0.4328f ,0.6264f ,0.4371f ,0.6264f ,0.4402f ,0.6282f ,0.4368f ,0.6283f ,0.4403f ,0.628f ,0.4373f ,0.6279f ,0.433f ,0.6279f ,0.4297f ,0.628f ,0.4295f ,0.6282f ,0.4326f ,0.6284f ,0.4412f ,0.6373f ,0.4375f ,0.6375f ,0.4414f ,0.6371f ,0.438f ,0.637f ,0.4329f ,0.637f ,0.4292f ,0.6372f ,0.429f ,0.6374f ,0.4324f ,0.6375f ,0.4418f ,0.6388f ,0.4378f ,0.639f ,0.4421f ,0.6385f ,0.4383f ,0.6384f ,0.4327f ,0.6384f ,0.4287f ,0.6386f ,0.4284f ,0.6389f ,0.4322f ,0.639f ,0.4399f ,0.6402f ,0.4371f ,0.6403f ,0.4401f ,0.64f ,0.4374f ,0.6399f ,0.4335f ,0.6399f ,0.4306f ,0.6401f ,0.4305f ,0.6402f ,0.4331f ,0.6404f ,0.4353f ,0.6407f });
  }
}
private class MFVec3f248 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2259f ,-1.448f ,0.0923f ,-0.2194f ,-1.446f ,-0.1376f ,-0.0106f ,-1.469f ,0.1016f ,-0.0041f ,-1.467f ,-0.1283f ,-0.3742f ,-1.258f ,0.088f ,-0.2177f ,-1.275f ,0.2673f ,-0.0024f ,-1.296f ,0.2766f ,0.1639f ,-1.31f ,0.1112f ,0.1704f ,-1.307f ,-0.1187f ,0.0138f ,-1.29f ,-0.2981f ,-0.2014f ,-1.269f ,-0.3073f ,-0.3677f ,-1.255f ,-0.1419f ,-0.3422f ,-0.2825f ,0.1227f ,-0.1666f ,-0.302f ,0.3239f ,0.0895f ,-0.3267f ,0.3349f ,0.2761f ,-0.3422f ,0.1493f ,0.2838f ,-0.3394f ,-0.1242f ,0.1082f ,-0.3199f ,-0.3253f ,-0.1479f ,-0.2952f ,-0.3364f ,-0.3345f ,-0.2797f ,-0.1508f ,-0.3605f ,-0.1263f ,0.1367f ,-0.1681f ,-0.1476f ,0.357f ,0.1123f ,-0.1747f ,0.3691f ,0.3166f ,-0.1917f ,0.1659f ,0.3251f ,-0.1886f ,-0.1336f ,0.1327f ,-0.1672f ,-0.3539f ,-0.1477f ,-0.1401f ,-0.366f ,-0.352f ,-0.1232f ,-0.1627f ,-0.2486f ,0.0181f ,0.0994f ,-0.1126f ,0.003f ,0.2552f ,0.0857f ,-0.0161f ,0.2638f ,0.2302f ,-0.0281f ,0.1201f ,0.2362f ,-0.0259f ,-0.0917f ,0.1002f ,-0.0108f ,-0.2475f ,-0.0981f ,0.0083f ,-0.256f ,-0.2426f ,0.0203f ,-0.1123f ,-0.0014f ,0.0597f ,0.0048f });
  }
}
private class MFInt32249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f251 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4364f ,0.617f ,0.4323f ,0.6171f ,0.4325f ,0.6165f ,0.4365f ,0.6165f ,0.4395f ,0.6186f ,0.4363f ,0.619f ,0.4397f ,0.618f ,0.4367f ,0.6176f ,0.4327f ,0.6176f ,0.4295f ,0.6181f ,0.4294f ,0.6186f ,0.4323f ,0.619f ,0.4401f ,0.6271f ,0.4369f ,0.6275f ,0.4403f ,0.6265f ,0.4373f ,0.6261f ,0.4329f ,0.6261f ,0.4297f ,0.6266f ,0.4295f ,0.6271f ,0.4325f ,0.6275f ,0.4391f ,0.6297f ,0.4366f ,0.6301f ,0.4392f ,0.6293f ,0.4369f ,0.629f ,0.4335f ,0.629f ,0.431f ,0.6293f ,0.4308f ,0.6298f ,0.4331f ,0.6301f ,0.435f ,0.6301f });
  }
}
private class MFVec3f252 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.4389f ,-1.268f ,0.089f ,-0.4327f ,-1.265f ,-0.1296f ,-0.2401f ,-1.325f ,0.0971f ,-0.234f ,-1.323f ,-0.1215f ,-0.5481f ,-1.062f ,0.0865f ,-0.4036f ,-1.106f ,0.2566f ,-0.2049f ,-1.164f ,0.2647f ,-0.0512f ,-1.205f ,0.1068f ,-0.045f ,-1.203f ,-0.1118f ,-0.1894f ,-1.158f ,-0.2818f ,-0.3882f ,-1.101f ,-0.2899f ,-0.5419f ,-1.059f ,-0.132f ,-0.3388f ,-0.1526f ,0.1159f ,-0.1909f ,-0.1984f ,0.2901f ,0.025f ,-0.2608f ,0.2989f ,0.1825f ,-0.3032f ,0.1372f ,0.1892f ,-0.3008f ,-0.1003f ,0.0412f ,-0.2549f ,-0.2744f ,-0.1747f ,-0.1925f ,-0.2833f ,-0.3321f ,-0.1501f ,-0.1216f ,-0.2096f ,0.117f ,0.0982f ,-0.0948f ,0.0814f ,0.2333f ,0.0727f ,0.033f ,0.2402f ,0.1949f ,0.0001f ,0.1147f ,0.2001f ,0.002f ,-0.0696f ,0.0853f ,0.0376f ,-0.2048f ,-0.0823f ,0.086f ,-0.2116f ,-0.2044f ,0.1189f ,-0.0861f ,0.0097f ,0.1188f ,0.0156f });
  }
}
private class MFInt32253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f255 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4356f ,0.6082f ,0.4321f ,0.6082f ,0.4322f ,0.6074f ,0.4357f ,0.6074f ,0.4383f ,0.6096f ,0.4356f ,0.6102f ,0.4384f ,0.6088f ,0.4359f ,0.6083f ,0.4324f ,0.6083f ,0.4296f ,0.6089f ,0.4295f ,0.6096f ,0.4321f ,0.6102f ,0.4394f ,0.6176f ,0.4364f ,0.6183f ,0.4396f ,0.6167f ,0.4367f ,0.6161f ,0.4325f ,0.6161f ,0.4295f ,0.6168f ,0.4293f ,0.6177f ,0.4322f ,0.6183f ,0.4388f ,0.6192f ,0.4362f ,0.6198f ,0.4389f ,0.6186f ,0.4364f ,0.6181f ,0.433f ,0.6182f ,0.4304f ,0.6187f ,0.4303f ,0.6194f ,0.4326f ,0.6199f ,0.4346f ,0.6199f });
  }
}
private class MFVec3f256 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.631f ,-1.169f ,0.0421f ,-0.6256f ,-1.167f ,-0.1475f ,-0.4691f ,-1.25f ,0.0483f ,-0.4637f ,-1.248f ,-0.1413f ,-0.6864f ,-0.9557f ,0.0421f ,-0.569f ,-1.018f ,0.1889f ,-0.4071f ,-1.099f ,0.1951f ,-0.2817f ,-1.158f ,0.0576f ,-0.2763f ,-1.156f ,-0.1319f ,-0.3937f ,-1.094f ,-0.2788f ,-0.5556f ,-1.013f ,-0.285f ,-0.681f ,-0.9537f ,-0.1474f ,-0.3504f ,-0.0919f ,0.0851f ,-0.2187f ,-0.1616f ,0.2498f ,-0.026f ,-0.2579f ,0.2572f ,0.1147f ,-0.3243f ,0.1029f ,0.121f ,-0.322f ,-0.1226f ,-0.0106f ,-0.2523f ,-0.2873f ,-0.2033f ,-0.156f ,-0.2946f ,-0.344f ,-0.0896f ,-0.1404f ,-0.2414f ,0.0637f ,0.0753f ,-0.128f ,0.0061f ,0.2155f ,0.0399f ,-0.0652f ,0.2197f ,0.161f ,-0.1101f ,0.0888f ,0.1675f ,-0.1027f ,-0.0988f ,0.0577f ,-0.0458f ,-0.2359f ,-0.106f ,0.0275f ,-0.2439f ,-0.2307f ,0.0733f ,-0.1162f ,0.0079f ,0.0731f ,-0.0112f });
  }
}
private class MFInt32257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f259 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4223f ,0.6397f ,0.4182f ,0.6398f ,0.4179f ,0.64f ,0.422f ,0.6399f ,0.4255f ,0.6412f ,0.4227f ,0.6412f ,0.4252f ,0.6414f ,0.422f ,0.6417f ,0.418f ,0.6418f ,0.4151f ,0.6417f ,0.4154f ,0.6415f ,0.4187f ,0.6413f ,0.4275f ,0.6502f ,0.4244f ,0.6501f ,0.4272f ,0.6504f ,0.4235f ,0.6507f ,0.4187f ,0.6508f ,0.4156f ,0.6508f ,0.4159f ,0.6505f ,0.4196f ,0.6503f ,0.4282f ,0.6516f ,0.4248f ,0.6515f ,0.4279f ,0.6519f ,0.4239f ,0.6522f ,0.4187f ,0.6523f ,0.4153f ,0.6522f ,0.4156f ,0.652f ,0.4196f ,0.6517f ,0.4265f ,0.6531f ,0.4241f ,0.6531f ,0.4263f ,0.6533f ,0.4235f ,0.6535f ,0.4198f ,0.6536f ,0.4174f ,0.6536f ,0.4176f ,0.6534f ,0.4204f ,0.6532f ,0.422f ,0.6539f });
  }
}
private class MFVec3f260 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.014f ,-1.366f ,0.0295f ,-0.0298f ,-1.354f ,-0.1885f ,0.2211f ,-1.344f ,0.0143f ,0.2053f ,-1.332f ,-0.2037f ,-0.205f ,-1.209f ,0.0528f ,-0.0169f ,-1.202f ,0.2049f ,0.2182f ,-1.181f ,0.1897f ,0.3826f ,-1.156f ,0.0148f ,0.3668f ,-1.144f ,-0.2032f ,0.1787f ,-1.151f ,-0.3553f ,-0.0564f ,-1.172f ,-0.3401f ,-0.2209f ,-1.197f ,-0.1652f ,-0.3293f ,-0.2545f ,0.1423f ,-0.1183f ,-0.2468f ,0.3129f ,0.1614f ,-0.2216f ,0.2949f ,0.3458f ,-0.1936f ,0.0987f ,0.327f ,-0.1793f ,-0.1607f ,0.116f ,-0.187f ,-0.3313f ,-0.1637f ,-0.2122f ,-0.3132f ,-0.3482f ,-0.2402f ,-0.117f ,-0.3702f ,-0.1061f ,0.1656f ,-0.1412f ,-0.0977f ,0.3507f ,0.1622f ,-0.0704f ,0.3311f ,0.3623f ,-0.04f ,0.1183f ,0.3419f ,-0.0245f ,-0.1631f ,0.1129f ,-0.0329f ,-0.3482f ,-0.1905f ,-0.0602f ,-0.3286f ,-0.3906f ,-0.0905f ,-0.1158f ,-0.2788f ,0.0575f ,0.1279f ,-0.1169f ,0.0634f ,0.2588f ,0.0976f ,0.0827f ,0.2449f ,0.2391f ,0.1042f ,0.0944f ,0.2247f ,0.1152f ,-0.1045f ,0.0628f ,0.1093f ,-0.2354f ,-0.1518f ,0.0899f ,-0.2215f ,-0.2933f ,0.0685f ,-0.0711f ,-0.0325f ,0.1491f ,0.016f });
  }
}
private class MFInt32261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f263 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4212f ,0.6288f ,0.4172f ,0.6289f ,0.4169f ,0.6288f ,0.4209f ,0.6287f ,0.4244f ,0.6302f ,0.4216f ,0.6304f ,0.4241f ,0.6301f ,0.4209f ,0.63f ,0.4169f ,0.6301f ,0.4141f ,0.6304f ,0.4144f ,0.6305f ,0.4176f ,0.6306f ,0.4261f ,0.6386f ,0.423f ,0.6388f ,0.4258f ,0.6384f ,0.4222f ,0.6383f ,0.4174f ,0.6385f ,0.4143f ,0.6387f ,0.4146f ,0.6389f ,0.4182f ,0.6389f ,0.4268f ,0.6399f ,0.4234f ,0.6401f ,0.4265f ,0.6397f ,0.4225f ,0.6396f ,0.4173f ,0.6398f ,0.4139f ,0.64f ,0.4142f ,0.6402f ,0.4182f ,0.6403f ,0.4251f ,0.6412f ,0.4226f ,0.6414f ,0.4248f ,0.6411f ,0.422f ,0.641f ,0.4183f ,0.6411f ,0.4159f ,0.6413f ,0.4162f ,0.6415f ,0.419f ,0.6415f ,0.4206f ,0.6418f });
  }
}
private class MFVec3f264 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1847f ,-1.253f ,0.0467f ,-0.1998f ,-1.241f ,-0.1693f ,0.0227f ,-1.271f ,0.0316f ,0.0076f ,-1.259f ,-0.1844f ,-0.3279f ,-1.08f ,0.0673f ,-0.161f ,-1.102f ,0.2179f ,0.0464f ,-1.12f ,0.2028f ,0.1906f ,-1.124f ,0.0295f ,0.1754f ,-1.112f ,-0.1865f ,0.0085f ,-1.09f ,-0.3372f ,-0.1989f ,-1.072f ,-0.3221f ,-0.3431f ,-1.068f ,-0.1487f ,-0.2967f ,-0.1902f ,0.1418f ,-0.1095f ,-0.215f ,0.3108f ,0.1373f ,-0.2358f ,0.2929f ,0.299f ,-0.2404f ,0.0984f ,0.281f ,-0.2262f ,-0.1586f ,0.0938f ,-0.2014f ,-0.3276f ,-0.153f ,-0.1807f ,-0.3096f ,-0.3147f ,-0.176f ,-0.1151f ,-0.3133f ,-0.0482f ,0.1642f ,-0.1083f ,-0.0753f ,0.3493f ,0.1619f ,-0.0981f ,0.3296f ,0.339f ,-0.1032f ,0.1167f ,0.3192f ,-0.0876f ,-0.1647f ,0.1142f ,-0.0605f ,-0.3498f ,-0.156f ,-0.0377f ,-0.3301f ,-0.3331f ,-0.0327f ,-0.1172f ,-0.2099f ,0.0863f ,0.1241f ,-0.0649f ,0.0671f ,0.255f ,0.1261f ,0.051f ,0.2411f ,0.2514f ,0.0474f ,0.0905f ,0.2374f ,0.0585f ,-0.1085f ,0.0924f ,0.0776f ,-0.2393f ,-0.0986f ,0.0937f ,-0.2254f ,-0.2239f ,0.0973f ,-0.0749f ,0.0182f ,0.1305f ,0.0112f });
  }
}
private class MFInt32265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f267 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4203f ,0.6204f ,0.4166f ,0.6205f ,0.4163f ,0.62f ,0.42f ,0.6199f ,0.4232f ,0.6217f ,0.4207f ,0.6221f ,0.4229f ,0.6212f ,0.4199f ,0.6209f ,0.4162f ,0.621f ,0.4136f ,0.6215f ,0.4139f ,0.622f ,0.4169f ,0.6222f ,0.4242f ,0.6295f ,0.4215f ,0.6299f ,0.4239f ,0.629f ,0.4208f ,0.6287f ,0.4167f ,0.6288f ,0.4141f ,0.6293f ,0.4144f ,0.6298f ,0.4175f ,0.6301f ,0.4233f ,0.6319f ,0.4212f ,0.6323f ,0.423f ,0.6315f ,0.4206f ,0.6313f ,0.4175f ,0.6314f ,0.4154f ,0.6317f ,0.4157f ,0.6321f ,0.4181f ,0.6324f ,0.4194f ,0.6323f });
  }
}
private class MFVec3f268 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.412f ,-1.137f ,0.0335f ,-0.4261f ,-1.125f ,-0.1679f ,-0.2243f ,-1.187f ,0.0176f ,-0.2385f ,-1.176f ,-0.1838f ,-0.5153f ,-0.9493f ,0.0522f ,-0.3639f ,-0.9958f ,0.1913f ,-0.1762f ,-1.047f ,0.1754f ,-0.0461f ,-1.076f ,0.0125f ,-0.0602f ,-1.065f ,-0.1888f ,-0.2116f ,-1.019f ,-0.3279f ,-0.3992f ,-0.9679f ,-0.312f ,-0.5294f ,-0.9381f ,-0.1491f ,-0.3178f ,-0.1177f ,0.1f ,-0.1627f ,-0.1653f ,0.2425f ,0.0412f ,-0.2206f ,0.2252f ,0.1745f ,-0.2511f ,0.0583f ,0.1591f ,-0.239f ,-0.1604f ,0.0041f ,-0.1914f ,-0.3029f ,-0.1998f ,-0.1361f ,-0.2856f ,-0.3331f ,-0.1056f ,-0.1188f ,-0.1985f ,0.1307f ,0.0829f ,-0.0782f ,0.0937f ,0.1934f ,0.08f ,0.0508f ,0.18f ,0.1835f ,0.0271f ,0.0505f ,0.1716f ,0.0365f ,-0.1192f ,0.0513f ,0.0735f ,-0.2298f ,-0.1069f ,0.1164f ,-0.2164f ,-0.2104f ,0.1401f ,-0.0869f ,0.0002f ,0.1379f ,-0.0157f });
  }
}
private class MFInt32269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f271 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4195f ,0.6124f ,0.4163f ,0.6125f ,0.416f ,0.6118f ,0.4193f ,0.6117f ,0.422f ,0.6137f ,0.4198f ,0.6143f ,0.4218f ,0.613f ,0.4191f ,0.6126f ,0.4159f ,0.6126f ,0.4137f ,0.6132f ,0.414f ,0.6139f ,0.4166f ,0.6143f ,0.4231f ,0.621f ,0.4207f ,0.6217f ,0.4228f ,0.6202f ,0.4199f ,0.6197f ,0.416f ,0.6198f ,0.4135f ,0.6205f ,0.4139f ,0.6213f ,0.4168f ,0.6218f ,0.4225f ,0.6225f ,0.4204f ,0.623f ,0.4222f ,0.6219f ,0.4197f ,0.6216f ,0.4165f ,0.6217f ,0.4145f ,0.6223f ,0.4147f ,0.6229f ,0.4172f ,0.6232f ,0.4185f ,0.6232f });
  }
}
private class MFVec3f272 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.5436f ,-1.006f ,0.082f ,-0.5559f ,-0.9964f ,-0.0922f ,-0.3911f ,-1.079f ,0.0671f ,-0.4033f ,-1.069f ,-0.1071f ,-0.596f ,-0.8116f ,0.0978f ,-0.4725f ,-0.8732f ,0.2172f ,-0.3199f ,-0.9458f ,0.2024f ,-0.2147f ,-0.9931f ,0.0605f ,-0.2269f ,-0.9834f ,-0.1137f ,-0.3505f ,-0.9218f ,-0.2332f ,-0.503f ,-0.8491f ,-0.2183f ,-0.6083f ,-0.8019f ,-0.0765f ,-0.2786f ,-0.0205f ,0.1427f ,-0.14f ,-0.0896f ,0.2768f ,0.0415f ,-0.176f ,0.2591f ,0.1596f ,-0.229f ,0.1f ,0.1451f ,-0.2175f ,-0.1073f ,0.0064f ,-0.1484f ,-0.2413f ,-0.1751f ,-0.062f ,-0.2236f ,-0.2931f ,-0.009f ,-0.0645f ,-0.1776f ,0.1232f ,0.1297f ,-0.0583f ,0.0659f ,0.2438f ,0.0996f ,0.0023f ,0.2269f ,0.2013f ,-0.0322f ,0.0923f ,0.1903f ,-0.0176f ,-0.08f ,0.0748f ,0.0389f ,-0.1916f ,-0.0796f ,0.1047f ,-0.1786f ,-0.185f ,0.14f ,-0.0465f ,0.0484f ,0.1379f ,0.025f });
  }
}
private class MFInt32273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f275 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4094f ,0.6427f ,0.4058f ,0.6429f ,0.4055f ,0.6432f ,0.4091f ,0.643f ,0.4124f ,0.6437f ,0.41f ,0.6437f ,0.412f ,0.644f ,0.4092f ,0.6444f ,0.4056f ,0.6446f ,0.4032f ,0.6445f ,0.4035f ,0.6443f ,0.4064f ,0.6439f ,0.4149f ,0.6501f ,0.4122f ,0.65f ,0.4146f ,0.6504f ,0.4113f ,0.6509f ,0.4071f ,0.6511f ,0.4044f ,0.651f ,0.4048f ,0.6507f ,0.408f ,0.6502f ,0.4157f ,0.651f ,0.4127f ,0.651f ,0.4153f ,0.6514f ,0.4118f ,0.6519f ,0.4072f ,0.6522f ,0.4043f ,0.6521f ,0.4047f ,0.6517f ,0.4082f ,0.6512f ,0.4143f ,0.6522f ,0.4122f ,0.6522f ,0.414f ,0.6525f ,0.4115f ,0.6528f ,0.4083f ,0.653f ,0.4062f ,0.6529f ,0.4065f ,0.6527f ,0.409f ,0.6523f ,0.4104f ,0.653f });
  }
}
private class MFVec3f276 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0463f ,-0.9645f ,-0.0622f ,0.0267f ,-0.942f ,-0.253f ,0.2519f ,-0.9328f ,-0.0794f ,0.2324f ,-0.9103f ,-0.2702f ,-0.1254f ,-0.8655f ,-0.031f ,0.0435f ,-0.8586f ,0.0992f ,0.2492f ,-0.8269f ,0.082f ,0.3888f ,-0.7862f ,-0.074f ,0.3693f ,-0.7638f ,-0.2648f ,0.2004f ,-0.7707f ,-0.395f ,-0.0053f ,-0.8024f ,-0.3779f ,-0.1449f ,-0.843f ,-0.2218f ,-0.2585f ,-0.1911f ,0.0918f ,-0.069f ,-0.1834f ,0.2379f ,0.1757f ,-0.1456f ,0.2175f ,0.3323f ,-0.1f ,0.0425f ,0.309f ,-0.0733f ,-0.1846f ,0.1196f ,-0.0811f ,-0.3307f ,-0.1251f ,-0.1188f ,-0.3102f ,-0.2817f ,-0.1644f ,-0.1352f ,-0.2978f ,-0.0883f ,0.1196f ,-0.0923f ,-0.0799f ,0.2781f ,0.1732f ,-0.0389f ,0.2559f ,0.343f ,0.0105f ,0.066f ,0.3178f ,0.0395f ,-0.1803f ,0.1123f ,0.0311f ,-0.3387f ,-0.1532f ,-0.0098f ,-0.3166f ,-0.3231f ,-0.0593f ,-0.1267f ,-0.223f ,0.0382f ,0.0917f ,-0.0776f ,0.0442f ,0.2038f ,0.1101f ,0.0732f ,0.1881f ,0.2302f ,0.1081f ,0.0539f ,0.2124f ,0.1286f ,-0.1203f ,0.0671f ,0.1227f ,-0.2324f ,-0.1207f ,0.0937f ,-0.2167f ,-0.2408f ,0.0588f ,-0.0824f ,-0.0116f ,0.1281f ,-0.0076f });
  }
}
private class MFInt32277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1});
  }
}
private class MFInt32278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1});
  }
}
private class MFVec2f279 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4075f ,0.6349f ,0.404f ,0.6351f ,0.4037f ,0.6351f ,0.4072f ,0.6349f ,0.4104f ,0.6358f ,0.4081f ,0.6359f ,0.4101f ,0.6358f ,0.4072f ,0.636f ,0.4037f ,0.6362f ,0.4013f ,0.6363f ,0.4017f ,0.6363f ,0.4046f ,0.6362f ,0.4127f ,0.6418f ,0.41f ,0.6419f ,0.4123f ,0.6418f ,0.409f ,0.642f ,0.4048f ,0.6423f ,0.4022f ,0.6424f ,0.4026f ,0.6424f ,0.4058f ,0.6422f ,0.4134f ,0.6427f ,0.4105f ,0.6429f ,0.413f ,0.6427f ,0.4094f ,0.6429f ,0.4048f ,0.6432f ,0.4019f ,0.6434f ,0.4024f ,0.6434f ,0.4059f ,0.6432f ,0.412f ,0.6438f ,0.4099f ,0.6439f ,0.4116f ,0.6438f ,0.4091f ,0.6439f ,0.4059f ,0.6441f ,0.4038f ,0.6442f ,0.4042f ,0.6442f ,0.4067f ,0.6441f ,0.408f ,0.6444f });
  }
}
private class MFVec3f280 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1298f ,-0.9343f ,0.012f ,-0.1487f ,-0.912f ,-0.1771f ,0.0526f ,-0.9323f ,-0.0063f ,0.0337f ,-0.91f ,-0.1954f ,-0.2599f ,-0.8204f ,0.0405f ,-0.1089f ,-0.8356f ,0.1686f ,0.0735f ,-0.8336f ,0.1504f ,0.1961f ,-0.8154f ,-0.0051f ,0.1772f ,-0.793f ,-0.1942f ,0.0262f ,-0.7778f ,-0.3224f ,-0.1562f ,-0.7798f ,-0.3041f ,-0.2788f ,-0.7981f ,-0.1486f ,-0.2549f ,-0.1812f ,0.1442f ,-0.0856f ,-0.1983f ,0.2879f ,0.1314f ,-0.1959f ,0.2662f ,0.269f ,-0.1755f ,0.0918f ,0.2465f ,-0.1489f ,-0.1332f ,0.0771f ,-0.1318f ,-0.2769f ,-0.1399f ,-0.1342f ,-0.2552f ,-0.2774f ,-0.1547f ,-0.0808f ,-0.2729f ,-0.0814f ,0.1704f ,-0.0874f ,-0.1001f ,0.3278f ,0.1502f ,-0.0975f ,0.304f ,0.3008f ,-0.0751f ,0.113f ,0.2762f ,-0.046f ,-0.1333f ,0.0907f ,-0.0273f ,-0.2907f ,-0.1469f ,-0.0299f ,-0.2669f ,-0.2975f ,-0.0523f ,-0.0759f ,-0.1866f ,0.0252f ,0.139f ,-0.0555f ,0.012f ,0.2502f ,0.1126f ,0.0138f ,0.2334f ,0.2191f ,0.0297f ,0.0984f ,0.2016f ,0.0502f ,-0.0758f ,0.0705f ,0.0635f ,-0.1871f ,-0.0975f ,0.0616f ,-0.1703f ,-0.204f ,0.0458f ,-0.0352f ,0.0099f ,0.0797f ,0.0369f });
  }
}
private class MFInt32281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f283 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4061f ,0.6287f ,0.4028f ,0.6289f ,0.4025f ,0.6286f ,0.4057f ,0.6284f ,0.4088f ,0.6296f ,0.4066f ,0.6299f ,0.4084f ,0.6293f ,0.4057f ,0.6293f ,0.4024f ,0.6295f ,0.4002f ,0.6298f ,0.4006f ,0.63f ,0.4033f ,0.6301f ,0.4102f ,0.6353f ,0.408f ,0.6356f ,0.4098f ,0.635f ,0.407f ,0.635f ,0.4035f ,0.6352f ,0.4012f ,0.6355f ,0.4016f ,0.6358f ,0.4044f ,0.6358f ,0.4096f ,0.6371f ,0.4079f ,0.6374f ,0.4093f ,0.6369f ,0.4071f ,0.6369f ,0.4043f ,0.6371f ,0.4026f ,0.6373f ,0.4029f ,0.6375f ,0.4051f ,0.6375f ,0.4062f ,0.6376f });
  }
}
private class MFVec3f284 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3103f ,-0.8684f ,0.0017f ,-0.3279f ,-0.8476f ,-0.1746f ,-0.1444f ,-0.8917f ,-0.0183f ,-0.162f ,-0.8709f ,-0.1946f ,-0.4057f ,-0.7413f ,0.0284f ,-0.268f ,-0.7744f ,0.1456f ,-0.1021f ,-0.7977f ,0.1256f ,0.0092f ,-0.7996f ,-0.0215f ,-0.0085f ,-0.7788f ,-0.1978f ,-0.1461f ,-0.7457f ,-0.315f ,-0.3121f ,-0.7224f ,-0.295f ,-0.4234f ,-0.7205f ,-0.1478f ,-0.2537f ,-0.1316f ,0.1027f ,-0.1126f ,-0.1655f ,0.2227f ,0.0677f ,-0.1909f ,0.201f ,0.1817f ,-0.1928f ,0.0502f ,0.1625f ,-0.1702f ,-0.1412f ,0.0215f ,-0.1363f ,-0.2613f ,-0.1588f ,-0.1109f ,-0.2396f ,-0.2728f ,-0.109f ,-0.0888f ,-0.156f ,0.0566f ,0.096f ,-0.0465f ,0.0303f ,0.1892f ,0.0934f ,0.0106f ,0.1723f ,0.1818f ,0.0091f ,0.0553f ,0.1669f ,0.0266f ,-0.0933f ,0.0575f ,0.0529f ,-0.1864f ,-0.0824f ,0.0726f ,-0.1696f ,-0.1709f ,0.0741f ,-0.0526f ,0.016f ,0.0815f ,0.0057f });
  }
}
private class MFInt32285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1});
  }
}
private class MFInt32286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1});
  }
}
private class MFVec2f287 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4049f ,0.6227f ,0.4021f ,0.6229f ,0.4017f ,0.6225f ,0.4045f ,0.6223f ,0.4072f ,0.6236f ,0.4053f ,0.624f ,0.4068f ,0.6232f ,0.4044f ,0.623f ,0.4016f ,0.6232f ,0.3997f ,0.6236f ,0.4001f ,0.624f ,0.4025f ,0.6242f ,0.4086f ,0.6291f ,0.4066f ,0.6295f ,0.4082f ,0.6286f ,0.4055f ,0.6284f ,0.4022f ,0.6286f ,0.4001f ,0.6291f ,0.4005f ,0.6296f ,0.4032f ,0.6297f ,0.4082f ,0.6302f ,0.4064f ,0.6306f ,0.4078f ,0.6299f ,0.4056f ,0.6298f ,0.4028f ,0.63f ,0.401f ,0.6304f ,0.4014f ,0.6307f ,0.4036f ,0.6308f ,0.4047f ,0.6309f });
  }
}
private class MFVec3f288 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.4265f ,-0.7665f ,0.0531f ,-0.4417f ,-0.7485f ,-0.0994f ,-0.2908f ,-0.8079f ,0.0337f ,-0.306f ,-0.7899f ,-0.1188f ,-0.4775f ,-0.6307f ,0.0765f ,-0.3642f ,-0.6752f ,0.1764f ,-0.2285f ,-0.7166f ,0.157f ,-0.1382f ,-0.7341f ,0.0281f ,-0.1534f ,-0.7161f ,-0.1244f ,-0.2667f ,-0.6716f ,-0.2242f ,-0.4024f ,-0.6302f ,-0.2049f ,-0.4927f ,-0.6127f ,-0.076f ,-0.2189f ,-0.0422f ,0.1441f ,-0.0919f ,-0.0921f ,0.2561f ,0.0696f ,-0.1414f ,0.2331f ,0.1709f ,-0.161f ,0.0886f ,0.1528f ,-0.1396f ,-0.0929f ,0.0258f ,-0.0897f ,-0.2049f ,-0.1357f ,-0.0404f ,-0.1819f ,-0.2371f ,-0.0207f ,-0.0373f ,-0.1344f ,0.069f ,0.1368f ,-0.0252f ,0.0277f ,0.2322f ,0.1149f ,-0.0067f ,0.2114f ,0.202f ,-0.0158f ,0.0895f ,0.1878f ,0.0058f ,-0.0611f ,0.082f ,0.0466f ,-0.1545f ,-0.0552f ,0.083f ,-0.137f ,-0.1456f ,0.0926f ,-0.0171f ,0.0613f ,0.1015f ,0.0409f });
  }
}
private class MFInt32289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
private class MFInt32290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1});
  }
}
private class MFVec2f291 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1911f ,0.4797f ,0.171f ,0.4832f ,0.1497f ,0.4806f ,0.1519f ,0.4334f ,0.1831f ,0.4416f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1784f ,0.4249f ,0.1538f ,0.4251f ,0.1963f ,0.4863f ,0.19f ,0.5091f ,0.1847f ,0.499f ,0.172f ,0.4382f ,0.1568f ,0.4457f ,0.1409f ,0.4926f });
  }
}
private class MFVec3f292 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-4.99f ,0.104f ,-0.8644f ,-5.073f ,0.4993f ,0.047f ,-4.706f ,0.1695f ,1.198f ,-4.631f ,-1.819f ,1.104f ,-4.586f ,-1.648f ,-0.1248f ,-3.376f ,0.3884f ,1.771f ,-3.891f ,0.989f ,-0.0537f ,-4.193f ,-2.49f ,-0.5713f ,-4.388f ,-2.49f ,1.429f ,-3.761f ,0.3238f ,-1.692f ,0.1237f ,0.6312f ,-0.1883f ,0.1237f ,0.3007f ,-0.9426f ,0.1237f ,-1.418f ,-0.2577f ,0.1237f ,-1.392f ,0.6264f ,0.1237f ,0.2586f ,0.8179f });
  }
}
private class MFInt32293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1});
  }
}
private class MFInt32294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1});
  }
}
private class MFVec2f295 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1715f ,0.4655f ,0.1797f ,0.4646f ,0.1569f ,0.4642f ,0.1474f ,0.4856f ,0.1708f ,0.4854f ,0.1963f ,0.4863f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1544f ,0.4288f ,0.1782f ,0.4286f ,0.1538f ,0.4251f ,0.1784f ,0.4249f ,0.1703f ,0.4865f ,0.1895f ,0.487f ,0.1761f ,0.4271f ,0.1552f ,0.4287f ,0.1491f ,0.4835f ,0.1671f ,0.4618f });
  }
}
private class MFVec3f296 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.935f ,1.466f ,-0.0932f ,-1.515f ,0.6492f ,-1.732f ,-1.534f ,0.7105f ,1.619f ,0.3782f ,1.139f ,1.732f ,-0.1374f ,1.74f ,-0.0932f ,-0.0076f ,1.074f ,-1.731f ,-0.8341f ,-1.572f ,1.39f ,-0.4391f ,-1.74f ,-0.6109f ,-0.8275f ,-1.58f ,-0.6098f ,-0.6342f ,-1.74f ,1.389f ,1.237f ,1.407f ,-0.0712f ,1.547f ,0.8515f ,-1.142f ,0.7525f ,-1.603f ,-0.4744f ,0.7511f ,-1.595f ,1.16f ,1.51f ,1.034f ,1.296f ,1.59f ,-0.0185f ,0.1351f });
  }
}
private class MFInt32297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1});
  }
}
private class MFInt32298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1});
  }
}
private class MFVec2f299 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2986f ,0.2114f ,0.2726f ,0.2114f ,0.3201f ,0.2114f ,0.3415f ,0.2114f ,0.2466f ,0.2114f ,0.2979f ,0.2417f ,0.2726f ,0.2417f ,0.3197f ,0.2417f ,0.3418f ,0.2417f ,0.2473f ,0.2417f ,0.2979f ,0.3018f ,0.2726f ,0.3018f ,0.3197f ,0.3018f ,0.3418f ,0.3018f ,0.2473f ,0.3018f ,0.2978f ,0.3276f ,0.2726f ,0.3276f ,0.3197f ,0.3276f ,0.3419f ,0.3276f ,0.2474f ,0.3276f ,0.2932f ,0.2834f ,0.2689f ,0.2834f ,0.316f ,0.2834f ,0.3322f ,0.2834f ,0.245f ,0.2834f ,0.2251f ,0.2114f ,0.2255f ,0.2417f ,0.2255f ,0.2417f ,0.2255f ,0.3018f ,0.2255f ,0.3018f ,0.2255f ,0.3276f ,0.2255f ,0.3276f ,0.2159f ,0.2834f ,0.4315f ,0.6736f ,0.442f ,0.6736f ,0.3947f ,0.6736f ,0.4041f ,0.6736f ,0.418f ,0.6736f ,0.4296f ,0.6167f ,0.4409f ,0.6167f ,0.4415f ,0.6485f ,0.4303f ,0.6485f ,0.3965f ,0.6167f ,0.3953f ,0.6485f ,0.4047f ,0.6167f ,0.4053f ,0.6485f ,0.4189f ,0.6167f ,0.418f ,0.6485f ,0.4415f ,0.6706f ,0.4306f ,0.6706f ,0.395f ,0.6706f ,0.4051f ,0.6706f ,0.4182f ,0.6706f ,0.3746f ,0.6736f ,0.3851f ,0.6736f ,0.384f ,0.6167f ,0.3845f ,0.6485f ,0.3845f ,0.6485f ,0.3846f ,0.6706f ,0.3846f ,0.6706f ,0.3851f ,0.6736f ,0.3481f ,0.2114f });
  }
}
private class MFVec3f300 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.164f ,1.767f ,-1.68f ,-2.32f ,1.756f ,0.0337f ,-1.047f ,1.768f ,1.663f ,0.895f ,1.785f ,0.9556f ,0.8229f ,1.784f ,-1.11f ,-1.382f ,0.4997f ,-2.31f ,-2.978f ,0.4855f ,0.057f ,-1.221f ,0.5011f ,2.307f ,1.462f ,0.525f ,1.33f ,1.362f ,0.5241f ,-1.523f ,-1.36f ,-2.014f ,-2.31f ,-2.956f ,-2.028f ,0.057f ,-1.198f ,-2.012f ,2.307f ,1.484f ,-1.988f ,1.33f ,1.384f ,-1.989f ,-1.523f ,-1.398f ,-3.089f ,-2.442f ,-3.087f ,-3.104f ,0.0619f ,-1.228f ,-3.087f ,2.442f ,1.61f ,-3.062f ,1.409f ,1.505f ,-3.063f ,-1.61f ,-0.8845f ,-1.238f ,-1.939f ,-2.105f ,-1.248f ,-0.4543f ,-1.473f ,-1.243f ,1.629f ,0.1375f ,-1.229f ,1.432f ,0.5011f ,-1.225f ,-0.7734f ,-0.9027f ,-7.045f ,-1.569f ,-2.17f ,-7.056f ,-0.378f ,-1.514f ,-7.051f ,1.293f ,0.1588f ,-7.036f ,1.135f ,0.5365f ,-7.032f ,-0.634f ,-0.9066f ,-11.1f ,-1.511f ,-2.127f ,-11.11f ,-0.3651f ,-1.495f ,-11.1f ,1.243f ,0.1154f ,-11.09f ,1.091f ,0.4791f ,-11.08f ,-0.6115f ,-0.852f ,-11.65f ,-0.8985f ,-1.567f ,-11.65f ,-0.2267f ,-1.197f ,-11.65f ,0.716f ,-0.2531f ,-11.64f ,0.6268f ,-0.0399f ,-11.64f ,-0.3711f });
  }
}
private class MFInt32301 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
private class MFInt32302 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1});
  }
}
private class MFVec2f303 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4222f ,0.6201f ,0.4327f ,0.6201f ,0.3884f ,0.6201f ,0.3987f ,0.6201f ,0.4103f ,0.6201f ,0.4213f ,0.6265f ,0.4321f ,0.6265f ,0.3894f ,0.6265f ,0.399f ,0.6265f ,0.4105f ,0.6265f ,0.4214f ,0.6413f ,0.4323f ,0.6413f ,0.389f ,0.6381f ,0.3992f ,0.6381f ,0.4103f ,0.6413f ,0.4213f ,0.6705f ,0.4336f ,0.6705f ,0.3899f ,0.6705f ,0.3981f ,0.6705f ,0.4094f ,0.6705f ,0.4215f ,0.674f ,0.4346f ,0.674f ,0.3899f ,0.674f ,0.398f ,0.674f ,0.4083f ,0.674f ,0.3787f ,0.6201f ,0.3682f ,0.6201f ,0.3787f ,0.6201f ,0.3782f ,0.6265f ,0.3782f ,0.6265f ,0.3783f ,0.6413f ,0.3783f ,0.6413f ,0.3796f ,0.6705f ,0.3676f ,0.674f ,0.3806f ,0.674f ,0.3796f ,0.6705f ,0.3806f ,0.674f });
  }
}
private class MFVec3f304 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.215f ,0.3047f ,-1.152f ,-1.155f ,0.2966f ,-0.2588f ,-0.6199f ,0.3013f ,1.04f ,0.6505f ,0.3122f ,0.9491f ,0.9008f ,0.3143f ,-0.4054f ,-0.1442f ,-0.8448f ,-1.625f ,-1.472f ,-0.8561f ,-0.4271f ,-0.7164f ,-0.8496f ,1.625f ,1.079f ,-0.8342f ,1.482f ,1.433f ,-0.8312f ,-0.6588f ,-0.1328f ,-3.5f ,-1.607f ,-1.551f ,-3.513f ,-0.4225f ,-0.781f ,-2.925f ,1.61f ,1.136f ,-2.909f ,1.468f ,1.551f ,-3.486f ,-0.6519f ,-0.0592f ,-8.713f ,-1.437f ,-1.093f ,-8.722f ,-0.1279f ,-0.5047f ,-8.716f ,1.51f ,0.8932f ,-8.704f ,1.377f ,1.169f ,-8.702f ,-0.3428f ,-0.0092f ,-9.336f ,-0.8855f ,-0.7154f ,-9.342f ,0.0084f ,-0.3135f ,-9.339f ,1.043f ,0.6412f ,-9.331f ,0.9519f ,0.8292f ,-9.329f ,-0.1383f });
  }
}
private class MFInt32305 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,4,6,5,-1,8,7,10,-1,10,9,8,-1,12,11,14,-1,14,13,12,-1,14,16,15,-1,15,13,14,-1,17,14,11,-1,11,18,17,-1,20,19,22,-1,22,21,20,-1,23,25,24,-1,7,27,26,-1,20,16,14,-1,14,17,20,-1,28,30,29,-1,29,24,28,-1,21,22,32,-1,32,31,21,-1,33,34,10,-1,10,26,33,-1,35,21,31,-1,31,36,35,-1,32,22,38,-1,38,37,32,-1,39,15,36,-1,36,31,39,-1,39,28,24,-1,24,25,39,-1,40,2,3,-1,3,41,40,-1,42,18,27,-1,19,42,27,-1,27,43,19,-1,44,38,43,-1,43,7,44,-1,45,23,29,-1,29,6,45,-1,20,21,35,-1,35,16,20,-1,29,30,8,-1,30,28,32,-1,32,37,30,-1,31,32,28,-1,28,39,31,-1,7,8,46,-1,46,44,7,-1,36,15,16,-1,16,35,36,-1,15,39,25,-1,25,13,15,-1,25,23,12,-1,12,13,25,-1,20,17,42,-1,42,19,20,-1,17,18,42,-1,47,49,48,-1,48,45,47,-1,23,45,48,-1,48,50,23,-1,23,50,51,-1,51,12,23,-1,12,51,52,-1,52,11,12,-1,18,11,52,-1,52,53,18,-1,18,53,49,-1,49,47,18,-1,46,37,38,-1,38,44,46,-1,22,19,43,-1,43,38,22,-1,30,37,46,-1,46,8,30,-1,33,26,54,-1,54,4,33,-1,29,23,24,-1,33,4,5,-1,5,34,33,-1,47,4,54,-1,54,18,47,-1,5,29,9,-1,29,8,9,-1,5,9,34,-1,1,48,49,-1,49,0,1,-1,50,48,1,-1,1,2,50,-1,40,51,50,-1,50,2,40,-1,41,52,51,-1,51,40,41,-1,53,52,41,-1,41,3,53,-1,0,49,53,-1,53,3,0,-1,18,54,27,-1,54,26,27,-1,10,7,26,-1,10,34,9,-1,6,29,5,-1,4,47,45,-1,45,6,4,-1,27,7,43,-1});
  }
}
private class MFInt32306 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {36,41,38,-1,38,37,36,-1,44,54,45,-1,31,30,53,-1,53,4,31,-1,6,7,11,-1,11,10,6,-1,11,32,33,-1,33,10,11,-1,34,11,7,-1,7,24,34,-1,13,27,15,-1,15,17,13,-1,25,35,22,-1,30,20,5,-1,13,32,11,-1,11,34,13,-1,23,29,28,-1,28,22,23,-1,17,15,14,-1,14,16,17,-1,18,19,53,-1,53,5,18,-1,9,17,16,-1,16,8,9,-1,14,15,43,-1,43,42,14,-1,21,33,8,-1,8,16,21,-1,21,23,22,-1,22,35,21,-1,39,38,41,-1,41,40,39,-1,26,24,20,-1,27,26,20,-1,20,12,27,-1,3,43,12,-1,12,30,3,-1,0,25,28,-1,28,54,0,-1,13,17,9,-1,9,32,13,-1,28,29,31,-1,29,23,14,-1,14,42,29,-1,16,14,23,-1,23,21,16,-1,30,31,2,-1,2,3,30,-1,8,33,32,-1,32,9,8,-1,33,21,35,-1,35,10,33,-1,35,25,6,-1,6,10,35,-1,13,34,26,-1,26,27,13,-1,34,24,26,-1,1,46,47,-1,47,0,1,-1,25,0,47,-1,47,48,25,-1,25,48,49,-1,49,6,25,-1,6,49,50,-1,50,7,6,-1,24,7,50,-1,50,51,24,-1,24,51,46,-1,46,1,24,-1,2,42,43,-1,43,3,2,-1,15,27,12,-1,12,43,15,-1,29,42,2,-1,2,31,29,-1,18,5,52,-1,52,44,18,-1,28,25,22,-1,18,44,45,-1,45,19,18,-1,1,44,52,-1,52,24,1,-1,45,28,4,-1,28,31,4,-1,45,4,19,-1,37,47,46,-1,46,36,37,-1,48,47,37,-1,37,38,48,-1,39,49,48,-1,48,38,39,-1,40,50,49,-1,49,39,40,-1,51,50,40,-1,40,41,51,-1,36,46,51,-1,51,41,36,-1,24,52,20,-1,52,5,20,-1,53,30,5,-1,53,19,4,-1,54,28,45,-1,44,1,0,-1,0,54,44,-1,20,30,12,-1});
  }
}
private class MFVec2f307 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4538f ,0.6821f ,0.4536f ,0.6827f ,0.4366f ,0.6851f ,0.4365f ,0.6843f ,0.4719f ,0.6661f ,0.4711f ,0.6637f ,0.4639f ,0.67f ,0.4606f ,0.6487f ,0.4605f ,0.6507f ,0.4603f ,0.6538f ,0.4606f ,0.6529f ,0.4117f ,0.6708f ,0.4117f ,0.6714f ,0.4055f ,0.6612f ,0.4047f ,0.6602f ,0.4025f ,0.6505f ,0.4027f ,0.6493f ,0.4177f ,0.6589f ,0.4355f ,0.6719f ,0.431f ,0.6469f ,0.4157f ,0.6482f ,0.414f ,0.6419f ,0.4289f ,0.6406f ,0.4346f ,0.6727f ,0.4316f ,0.6601f ,0.4169f ,0.6604f ,0.4607f ,0.6543f ,0.4504f ,0.6593f ,0.4308f ,0.6489f ,0.4498f ,0.6605f ,0.4482f ,0.6491f ,0.4143f ,0.6427f ,0.4297f ,0.6411f ,0.4754f ,0.6565f ,0.4752f ,0.6543f ,0.4024f ,0.6436f ,0.4026f ,0.6446f ,0.4463f ,0.6407f ,0.4467f ,0.6399f ,0.4164f ,0.6496f ,0.419f ,0.6831f ,0.4192f ,0.6825f ,0.4346f ,0.6583f ,0.4478f ,0.647f ,0.4591f ,0.6409f ,0.4581f ,0.6741f ,0.4578f ,0.6416f ,0.4616f ,0.6733f ,0.4549f ,0.6767f ,0.455f ,0.6762f ,0.4365f ,0.6779f ,0.4176f ,0.6767f ,0.4177f ,0.6762f ,0.4368f ,0.6768f ,0.46f ,0.6628f });
  }
}
private class MFVec3f308 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.615f ,-0.6885f ,1.418f ,0.2519f ,-0.7698f ,1.606f ,-0.894f ,-4.14f ,1.405f ,-0.2357f ,-4.221f ,1.472f ,-0.7106f ,-2.848f ,1.537f ,0.2913f ,-2.795f ,1.561f ,-0.3511f ,-0.9723f ,-1.085f ,0.332f ,-1.036f ,-1.083f ,-0.6255f ,-3.82f ,-1.576f ,-0.076f ,-3.93f ,-1.587f ,-0.5517f ,-2.055f ,-1.417f ,0.1089f ,-2.163f ,-1.46f ,-0.0149f ,-3.564f ,0.866f ,0.0687f ,-3.436f ,-0.8707f ,-0.9147f ,-4.192f ,-0.1153f ,-0.2445f ,-4.253f ,-0.1554f ,-0.7883f ,-4.028f ,-0.9461f ,-0.1878f ,-4.111f ,-0.9619f ,0.1749f ,-2.558f ,2.351f ,-0.5105f ,-2.795f ,2.344f ,0.1613f ,-2.264f ,1.005f ,-0.8473f ,-3.286f ,-0.8304f ,-0.9399f ,-2.17f ,-0.0115f ,-0.979f ,-3.369f ,-0.052f ,0.4715f ,-0.9186f ,0.2017f ,-0.7286f ,-0.8328f ,0.1541f ,0.1459f ,-2.365f ,0.1498f ,0.0501f ,-3.575f ,-0.0433f ,-0.969f ,-2.127f ,0.9718f ,-0.9825f ,-3.348f ,0.8866f ,-0.0909f ,-3.383f ,1.556f ,-0.8371f ,-3.169f ,1.547f ,-0.041f ,-3.318f ,-1.568f ,-0.5921f ,-3.194f ,-1.578f ,0.2264f ,-2.304f ,-0.7602f ,-0.8375f ,-2.137f ,-0.8044f ,0.2818f ,0.1713f ,1.187f ,-0.2277f ,0.2301f ,1.179f ,-0.2277f ,0.4881f ,0.2572f ,-0.1331f ,0.2707f ,-0.6889f ,0.3764f ,0.2118f ,-0.6809f ,0.4614f ,0.4054f ,0.2565f ,-0.9242f ,-4.241f ,0.7847f ,-0.2647f ,-4.324f ,0.8047f ,0.3043f ,-1.534f ,2.164f ,-0.8425f ,-1.789f ,2.123f ,0.201f ,-0.4603f ,1.254f ,-0.3856f ,-0.405f ,1.248f ,-0.4965f ,-0.283f ,0.2553f ,-0.2563f ,-0.4079f ,-0.7647f ,0.3314f ,-0.4586f ,-0.758f ,0.3822f ,-0.3913f ,0.2697f ,0.4485f ,-1.891f ,1.52f ,-0.3893f ,-2.936f ,1.555f ,-0.7623f ,-1.12f ,1.731f });
  }
}
private class MFInt32309 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32310 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f311 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.469f ,0.6546f ,0.4646f ,0.6538f ,0.4679f ,0.6539f ,0.4723f ,0.6548f ,0.4715f ,0.6565f ,0.4657f ,0.6558f ,0.4749f ,0.6566f ,0.4741f ,0.6561f ,0.4697f ,0.6552f ,0.4639f ,0.6545f ,0.4606f ,0.6544f ,0.4613f ,0.655f ,0.468f ,0.6634f ,0.4615f ,0.6626f ,0.472f ,0.6635f ,0.4712f ,0.6629f ,0.466f ,0.6619f ,0.4595f ,0.6611f ,0.4555f ,0.661f ,0.4563f ,0.6616f ,0.4678f ,0.6645f ,0.4607f ,0.6637f ,0.4721f ,0.6647f ,0.4712f ,0.664f ,0.4655f ,0.6629f ,0.4585f ,0.6621f ,0.4541f ,0.6619f ,0.455f ,0.6626f ,0.4658f ,0.6652f ,0.4608f ,0.6646f ,0.4689f ,0.6653f ,0.4682f ,0.6649f ,0.4642f ,0.6641f ,0.4592f ,0.6635f ,0.4561f ,0.6634f ,0.4568f ,0.6639f ,0.4622f ,0.6648f });
  }
}
private class MFVec3f312 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.375f ,-0.9214f ,0.322f ,0.212f ,-1.009f ,0.0858f ,0.1385f ,-0.9095f ,0.5036f ,-0.0245f ,-0.9973f ,0.2674f ,0.533f ,-0.8014f ,0.1471f ,0.4779f ,-0.7267f ,0.4605f ,0.2413f ,-0.7148f ,0.6421f ,-0.0584f ,-0.7717f ,0.6012f ,-0.2213f ,-0.8595f ,0.365f ,-0.1662f ,-0.9342f ,0.0516f ,0.0704f ,-0.9461f ,-0.13f ,0.3701f ,-0.8892f ,-0.0891f ,0.4847f ,-0.0791f ,-0.0791f ,0.4228f ,0.0048f ,0.2724f ,0.1414f ,0.0189f ,0.4885f ,-0.1948f ,-0.0449f ,0.4426f ,-0.3887f ,-0.1493f ,0.1616f ,-0.3268f ,-0.2331f ,-0.1899f ,-0.0453f ,-0.2473f ,-0.406f ,0.2908f ,-0.1835f ,-0.3601f ,0.5058f ,0.0372f ,-0.1235f ,0.4385f ,0.1283f ,0.2586f ,0.1325f ,0.1437f ,0.4936f ,-0.233f ,0.0743f ,0.4437f ,-0.4438f ,-0.0392f ,0.1381f ,-0.3765f ,-0.1303f ,-0.244f ,-0.0705f ,-0.1457f ,-0.479f ,0.2949f ,-0.0763f ,-0.4291f ,0.3497f ,0.1392f ,-0.1192f ,0.3021f ,0.2036f ,0.1511f ,0.0857f ,0.2145f ,0.3172f ,-0.1727f ,0.1654f ,0.2819f ,-0.3218f ,0.0852f ,0.0659f ,-0.2742f ,0.0207f ,-0.2044f ,-0.0578f ,0.0098f ,-0.3705f ,0.2006f ,0.0589f ,-0.3352f ,0.0069f ,0.159f ,-0.0407f });
  }
}
private class MFInt32313 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32314 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f315 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4716f ,0.6458f ,0.468f ,0.6451f ,0.471f ,0.6448f ,0.4746f ,0.6455f ,0.4739f ,0.6476f ,0.469f ,0.6473f ,0.4769f ,0.6473f ,0.4764f ,0.6466f ,0.4727f ,0.6459f ,0.4678f ,0.6456f ,0.4648f ,0.6459f ,0.4653f ,0.6466f ,0.4718f ,0.655f ,0.4662f ,0.6546f ,0.4753f ,0.6546f ,0.4748f ,0.6538f ,0.4704f ,0.653f ,0.4649f ,0.6527f ,0.4613f ,0.653f ,0.4619f ,0.6538f ,0.4717f ,0.6562f ,0.4657f ,0.6558f ,0.4756f ,0.6559f ,0.475f ,0.655f ,0.4702f ,0.6541f ,0.4642f ,0.6537f ,0.4603f ,0.654f ,0.4609f ,0.6549f ,0.4702f ,0.657f ,0.4659f ,0.6567f ,0.4729f ,0.6567f ,0.4725f ,0.6561f ,0.4692f ,0.6555f ,0.4649f ,0.6552f ,0.4622f ,0.6555f ,0.4626f ,0.6561f ,0.4674f ,0.6566f });
  }
}
private class MFVec3f316 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5258f ,-1.001f ,0.2196f ,0.3901f ,-1.074f ,0.023f ,0.3376f ,-1.029f ,0.3799f ,0.2019f ,-1.102f ,0.1833f ,0.6244f ,-0.8415f ,0.0751f ,0.585f ,-0.8078f ,0.3428f ,0.3968f ,-0.8361f ,0.503f ,0.1539f ,-0.912f ,0.4758f ,0.0182f ,-0.985f ,0.2792f ,0.0576f ,-1.019f ,0.0115f ,0.2458f ,-0.9905f ,-0.1487f ,0.4887f ,-0.9145f ,-0.1215f ,0.4357f ,-0.0607f ,-0.0712f ,0.3915f ,-0.0229f ,0.229f ,0.1676f ,-0.0565f ,0.4196f ,-0.1048f ,-0.1417f ,0.3891f ,-0.2662f ,-0.2286f ,0.1552f ,-0.222f ,-0.2663f ,-0.1451f ,0.0018f ,-0.2328f ,-0.3357f ,0.2743f ,-0.1476f ,-0.3051f ,0.4293f ,0.0682f ,-0.1026f ,0.3812f ,0.1092f ,0.2242f ,0.1376f ,0.0727f ,0.4317f ,-0.1589f ,-0.02f ,0.3984f ,-0.3346f ,-0.1146f ,0.1438f ,-0.2865f ,-0.1556f ,-0.1829f ,-0.0429f ,-0.1191f ,-0.3904f ,0.2536f ,-0.0264f ,-0.3572f ,0.2801f ,0.1629f ,-0.0879f ,0.2461f ,0.1919f ,0.1432f ,0.0738f ,0.1661f ,0.2899f ,-0.1359f ,0.1005f ,0.2664f ,-0.2601f ,0.0337f ,0.0864f ,-0.2261f ,0.0046f ,-0.1447f ,-0.0538f ,0.0304f ,-0.2914f ,0.1558f ,0.096f ,-0.2679f ,-0.0055f ,0.1486f ,-0.0096f });
  }
}
private class MFInt32317 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32318 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f319 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4723f ,0.6394f ,0.469f ,0.6388f ,0.4716f ,0.6383f ,0.4749f ,0.6389f ,0.4747f ,0.6409f ,0.4703f ,0.6408f ,0.4773f ,0.6404f ,0.4767f ,0.6395f ,0.4734f ,0.6389f ,0.469f ,0.6389f ,0.4664f ,0.6394f ,0.467f ,0.6402f ,0.4744f ,0.647f ,0.4694f ,0.6469f ,0.4774f ,0.6463f ,0.4768f ,0.6454f ,0.4729f ,0.6447f ,0.4679f ,0.6446f ,0.4649f ,0.6452f ,0.4655f ,0.6461f ,0.4734f ,0.6485f ,0.4696f ,0.6485f ,0.4758f ,0.6481f ,0.4753f ,0.6473f ,0.4722f ,0.6468f ,0.4684f ,0.6467f ,0.4661f ,0.6472f ,0.4666f ,0.6479f ,0.4709f ,0.648f });
  }
}
private class MFVec3f320 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5817f ,-0.8003f ,0.0727f ,0.4584f ,-0.8658f ,-0.106f ,0.4372f ,-0.8552f ,0.2109f ,0.314f ,-0.9207f ,0.0322f ,0.6359f ,-0.6464f ,-0.0377f ,0.62f ,-0.6384f ,0.2f ,0.4756f ,-0.6933f ,0.3382f ,0.2748f ,-0.7836f ,0.3078f ,0.1516f ,-0.8492f ,0.1291f ,0.1675f ,-0.8572f ,-0.1085f ,0.3119f ,-0.8023f ,-0.2467f ,0.5127f ,-0.712f ,-0.2163f ,0.374f ,-0.0036f ,-0.0838f ,0.3562f ,0.0054f ,0.1827f ,0.1843f ,-0.0599f ,0.3471f ,-0.0408f ,-0.1612f ,0.313f ,-0.1875f ,-0.2392f ,0.1004f ,-0.1697f ,-0.2482f ,-0.1661f ,0.0022f ,-0.1829f ,-0.3305f ,0.2274f ,-0.0816f ,-0.2964f ,0.2142f ,0.1671f ,-0.0744f ,0.2005f ,0.174f ,0.1306f ,0.0683f ,0.1238f ,0.257f ,-0.1048f ,0.0459f ,0.2308f ,-0.2176f ,-0.0141f ,0.0673f ,-0.2039f ,-0.021f ,-0.1376f ,-0.0717f ,0.0292f ,-0.264f ,0.1014f ,0.1072f ,-0.2378f ,-0.0214f ,0.1175f ,-0.006f });
  }
}
private class MFInt32321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f323 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.453f ,0.6387f ,0.4487f ,0.6387f ,0.4487f ,0.6388f ,0.453f ,0.6389f ,0.4561f ,0.6405f ,0.453f ,0.6403f ,0.4561f ,0.6406f ,0.4528f ,0.6407f ,0.4485f ,0.6406f ,0.4453f ,0.6405f ,0.4454f ,0.6403f ,0.4487f ,0.6402f ,0.4563f ,0.6497f ,0.4527f ,0.6495f ,0.4562f ,0.6499f ,0.4525f ,0.65f ,0.4474f ,0.6499f ,0.4439f ,0.6497f ,0.4439f ,0.6495f ,0.4476f ,0.6494f ,0.4567f ,0.6512f ,0.4528f ,0.651f ,0.4566f ,0.6514f ,0.4526f ,0.6515f ,0.4471f ,0.6514f ,0.4432f ,0.6512f ,0.4433f ,0.651f ,0.4473f ,0.6509f ,0.4546f ,0.6527f ,0.4519f ,0.6525f ,0.4546f ,0.6528f ,0.4518f ,0.6529f ,0.4478f ,0.6528f ,0.4451f ,0.6527f ,0.4452f ,0.6525f ,0.448f ,0.6524f ,0.4498f ,0.6533f });
  }
}
private class MFVec3f324 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0229f ,-1.485f ,0.1659f ,0.0277f ,-1.493f ,-0.0662f ,-0.2213f ,-1.467f ,0.1625f ,-0.2166f ,-1.475f ,-0.0696f ,0.2194f ,-1.321f ,0.162f ,0.0326f ,-1.302f ,0.3335f ,-0.2116f ,-1.284f ,0.3301f ,-0.3912f ,-1.276f ,0.1535f ,-0.3864f ,-1.284f ,-0.0786f ,-0.1997f ,-1.303f ,-0.2501f ,0.0446f ,-1.321f ,-0.2467f ,0.2242f ,-1.329f ,-0.0701f ,0.3384f ,-0.3382f ,0.1488f ,0.1289f ,-0.3166f ,0.3412f ,-0.1617f ,-0.2951f ,0.3371f ,-0.3631f ,-0.2862f ,0.139f ,-0.3574f ,-0.2953f ,-0.1371f ,-0.148f ,-0.3169f ,-0.3295f ,0.1426f ,-0.3384f ,-0.3254f ,0.3441f ,-0.3473f ,-0.1273f ,0.3796f ,-0.1843f ,0.1553f ,0.1523f ,-0.1608f ,0.364f ,-0.1629f ,-0.1375f ,0.3596f ,-0.3814f ,-0.1279f ,0.1446f ,-0.3753f ,-0.1377f ,-0.1549f ,-0.148f ,-0.1611f ,-0.3636f ,0.1672f ,-0.1845f ,-0.3592f ,0.3858f ,-0.1941f ,-0.1442f ,0.2808f ,-0.0217f ,0.1042f ,0.1201f ,-0.0051f ,0.2518f ,-0.1029f ,0.0114f ,0.2486f ,-0.2574f ,0.0182f ,0.0967f ,-0.253f ,0.0113f ,-0.1151f ,-0.0923f ,-0.0053f ,-0.2627f ,0.1306f ,-0.0218f ,-0.2596f ,0.2851f ,-0.0286f ,-0.1076f ,0.0187f ,0.0593f ,-0.0078f });
  }
}
private class MFInt32325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f327 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.454f ,0.6279f ,0.4498f ,0.6279f ,0.4498f ,0.6277f ,0.454f ,0.6277f ,0.4571f ,0.6295f ,0.4539f ,0.6296f ,0.4571f ,0.6293f ,0.4539f ,0.6291f ,0.4496f ,0.6291f ,0.4464f ,0.6292f ,0.4465f ,0.6294f ,0.4497f ,0.6295f ,0.4573f ,0.6381f ,0.4537f ,0.6382f ,0.4572f ,0.6379f ,0.4536f ,0.6377f ,0.4486f ,0.6376f ,0.445f ,0.6377f ,0.445f ,0.6379f ,0.4486f ,0.6381f ,0.4578f ,0.6395f ,0.4538f ,0.6396f ,0.4577f ,0.6392f ,0.4538f ,0.639f ,0.4482f ,0.6389f ,0.4443f ,0.639f ,0.4444f ,0.6393f ,0.4483f ,0.6395f ,0.4557f ,0.6408f ,0.4529f ,0.6408f ,0.4557f ,0.6406f ,0.4529f ,0.6404f ,0.449f ,0.6404f ,0.4462f ,0.6404f ,0.4462f ,0.6406f ,0.449f ,0.6408f ,0.4509f ,0.6412f });
  }
}
private class MFVec3f328 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2499f ,-1.331f ,0.1644f ,0.2541f ,-1.339f ,-0.0655f ,0.0349f ,-1.351f ,0.1633f ,0.0391f ,-1.359f ,-0.0666f ,0.3958f ,-1.152f ,0.159f ,0.2314f ,-1.162f ,0.3307f ,0.0165f ,-1.182f ,0.3296f ,-0.1416f ,-1.203f ,0.1563f ,-0.1374f ,-1.21f ,-0.0736f ,0.0269f ,-1.201f ,-0.2453f ,0.2419f ,-1.181f ,-0.2442f ,0.4f ,-1.16f ,-0.0709f ,0.3504f ,-0.2375f ,0.1465f ,0.166f ,-0.2482f ,0.3391f ,-0.0897f ,-0.2722f ,0.3377f ,-0.267f ,-0.2955f ,0.1434f ,-0.2621f ,-0.3044f ,-0.1302f ,-0.0777f ,-0.2937f ,-0.3227f ,0.1781f ,-0.2697f ,-0.3214f ,0.3554f ,-0.2464f ,-0.127f ,0.3661f ,-0.0905f ,0.1542f ,0.1642f ,-0.1021f ,0.365f ,-0.1159f ,-0.1284f ,0.3636f ,-0.3101f ,-0.1539f ,0.1508f ,-0.3046f ,-0.1637f ,-0.1488f ,-0.1027f ,-0.152f ,-0.3596f ,0.1774f ,-0.1258f ,-0.3581f ,0.3715f ,-0.1003f ,-0.1453f ,0.2544f ,0.0426f ,0.1044f ,0.1117f ,0.0344f ,0.2535f ,-0.0864f ,0.0158f ,0.2525f ,-0.2237f ,-0.0022f ,0.102f ,-0.2198f ,-0.0091f ,-0.1098f ,-0.077f ,-0.0009f ,-0.2589f ,0.121f ,0.0177f ,-0.2579f ,0.2583f ,0.0357f ,-0.1074f ,0.0117f ,0.0763f ,-0.005f });
  }
}
private class MFInt32329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32330 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f331 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4546f ,0.6191f ,0.4506f ,0.619f ,0.4506f ,0.6185f ,0.4546f ,0.6186f ,0.4575f ,0.6206f ,0.4545f ,0.6209f ,0.4576f ,0.6201f ,0.4545f ,0.6196f ,0.4505f ,0.6196f ,0.4474f ,0.6199f ,0.4474f ,0.6204f ,0.4505f ,0.6209f ,0.4572f ,0.6286f ,0.4541f ,0.6289f ,0.4572f ,0.628f ,0.4541f ,0.6276f ,0.4497f ,0.6275f ,0.4466f ,0.6279f ,0.4465f ,0.6284f ,0.4497f ,0.6289f ,0.4558f ,0.631f ,0.4534f ,0.6313f ,0.4558f ,0.6306f ,0.4534f ,0.6302f ,0.45f ,0.6302f ,0.4475f ,0.6305f ,0.4475f ,0.6309f ,0.45f ,0.6312f ,0.4516f ,0.6313f });
  }
}
private class MFVec3f332 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.4479f ,-1.125f ,0.1554f ,0.4519f ,-1.132f ,-0.0632f ,0.2499f ,-1.18f ,0.1557f ,0.2539f ,-1.187f ,-0.0629f ,0.5544f ,-0.9319f ,0.1491f ,0.4029f ,-0.9674f ,0.3134f ,0.2049f ,-1.022f ,0.3137f ,0.0594f ,-1.068f ,0.1499f ,0.0634f ,-1.075f ,-0.0687f ,0.2149f ,-1.04f ,-0.2329f ,0.4129f ,-0.9852f ,-0.2333f ,0.5584f ,-0.939f ,-0.0695f ,0.3333f ,-0.0803f ,0.1251f ,0.1781f ,-0.1166f ,0.2933f ,-0.037f ,-0.1758f ,0.2937f ,-0.186f ,-0.2231f ,0.1259f ,-0.1817f ,-0.2308f ,-0.1116f ,-0.0265f ,-0.1945f ,-0.2799f ,0.1886f ,-0.1353f ,-0.2802f ,0.3376f ,-0.088f ,-0.1125f ,0.2019f ,0.1709f ,0.088f ,0.0815f ,0.1427f ,0.2185f ,-0.0854f ,0.0967f ,0.2188f ,-0.2011f ,0.06f ,0.0887f ,-0.1977f ,0.054f ,-0.0957f ,-0.0773f ,0.0822f ,-0.2262f ,0.0896f ,0.1281f ,-0.2265f ,0.2053f ,0.1648f ,-0.0963f ,-0.0132f ,0.1679f ,-0.006f });
  }
}
private class MFInt32333 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32334 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f335 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.455f ,0.6109f ,0.4515f ,0.6108f ,0.4515f ,0.6101f ,0.455f ,0.6102f ,0.4575f ,0.6123f ,0.4549f ,0.6128f ,0.4576f ,0.6116f ,0.455f ,0.611f ,0.4514f ,0.6109f ,0.4488f ,0.6114f ,0.4488f ,0.6121f ,0.4514f ,0.6127f ,0.4576f ,0.6198f ,0.4546f ,0.6204f ,0.4576f ,0.619f ,0.4547f ,0.6183f ,0.4505f ,0.6182f ,0.4475f ,0.6188f ,0.4475f ,0.6197f ,0.4504f ,0.6203f ,0.4567f ,0.6213f ,0.4542f ,0.6217f ,0.4567f ,0.6206f ,0.4542f ,0.6202f ,0.4507f ,0.6202f ,0.4482f ,0.6206f ,0.4482f ,0.6213f ,0.4506f ,0.6217f ,0.4523f ,0.6218f });
  }
}
private class MFVec3f336 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.6187f ,-1.071f ,0.1411f ,0.6221f ,-1.077f ,-0.0485f ,0.4578f ,-1.147f ,0.1426f ,0.4613f ,-1.153f ,-0.047f ,0.6714f ,-0.8704f ,0.1341f ,0.5482f ,-0.923f ,0.2774f ,0.3873f ,-0.9993f ,0.2789f ,0.2693f ,-1.061f ,0.1378f ,0.2727f ,-1.067f ,-0.0518f ,0.396f ,-1.015f ,-0.1951f ,0.5568f ,-0.9385f ,-0.1966f ,0.6749f ,-0.8765f ,-0.0555f ,0.3236f ,-0.0612f ,0.1191f ,0.1854f ,-0.1202f ,0.2799f ,-0.006f ,-0.211f ,0.2816f ,-0.1384f ,-0.2805f ,0.1233f ,-0.1343f ,-0.2879f ,-0.1023f ,0.004f ,-0.2288f ,-0.263f ,0.1953f ,-0.138f ,-0.2647f ,0.3277f ,-0.0685f ,-0.1065f ,0.2135f ,0.0836f ,0.0963f ,0.0945f ,0.035f ,0.233f ,-0.0723f ,-0.0325f ,0.2317f ,-0.1865f ,-0.0807f ,0.0968f ,-0.1843f ,-0.0816f ,-0.0912f ,-0.0691f ,-0.0336f ,-0.2249f ,0.0937f ,0.0356f ,-0.2277f ,0.2116f ,0.0844f ,-0.0958f ,-0.0314f ,0.0875f ,-0.0035f });
  }
}
private class MFInt32337 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32338 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f339 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4371f ,0.6382f ,0.4328f ,0.6382f ,0.4329f ,0.6384f ,0.4372f ,0.6384f ,0.4403f ,0.64f ,0.4369f ,0.6398f ,0.4405f ,0.6401f ,0.4374f ,0.6403f ,0.4331f ,0.6403f ,0.4298f ,0.6402f ,0.4296f ,0.64f ,0.4326f ,0.6398f ,0.4413f ,0.6498f ,0.4375f ,0.6497f ,0.4415f ,0.65f ,0.438f ,0.6502f ,0.4329f ,0.6502f ,0.4291f ,0.6501f ,0.4289f ,0.6499f ,0.4324f ,0.6497f ,0.4418f ,0.6514f ,0.4377f ,0.6512f ,0.442f ,0.6516f ,0.4383f ,0.6518f ,0.4327f ,0.6518f ,0.4286f ,0.6517f ,0.4284f ,0.6514f ,0.4321f ,0.6512f ,0.4399f ,0.653f ,0.437f ,0.6529f ,0.4401f ,0.6531f ,0.4374f ,0.6533f ,0.4335f ,0.6533f ,0.4306f ,0.6532f ,0.4304f ,0.653f ,0.4331f ,0.6529f ,0.4352f ,0.6537f });
  }
}
private class MFVec3f340 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0157f ,-1.601f ,0.0972f ,-0.0217f ,-1.599f ,-0.1348f ,-0.2598f ,-1.581f ,0.1076f ,-0.2658f ,-1.578f ,-0.1245f ,0.183f ,-1.427f ,0.091f ,0.0045f ,-1.414f ,0.2728f ,-0.2395f ,-1.393f ,0.2832f ,-0.4271f ,-1.376f ,0.1169f ,-0.4331f ,-1.374f ,-0.1151f ,-0.2546f ,-1.387f ,-0.2969f ,-0.0105f ,-1.408f ,-0.3073f ,0.177f ,-1.425f ,-0.1411f ,0.3164f ,-0.3793f ,0.1197f ,0.1161f ,-0.3643f ,0.3236f ,-0.1742f ,-0.3403f ,0.3359f ,-0.3846f ,-0.3213f ,0.1495f ,-0.3918f ,-0.3185f ,-0.1266f ,-0.1915f ,-0.3335f ,-0.3306f ,0.0988f ,-0.3575f ,-0.3429f ,0.3092f ,-0.3765f ,-0.1564f ,0.3602f ,-0.2157f ,0.1315f ,0.143f ,-0.1995f ,0.3527f ,-0.172f ,-0.1734f ,0.3661f ,-0.4003f ,-0.1528f ,0.1638f ,-0.408f ,-0.1498f ,-0.1357f ,-0.1908f ,-0.166f ,-0.357f ,0.1242f ,-0.1921f ,-0.3703f ,0.3524f ,-0.2126f ,-0.168f ,0.2615f ,-0.0399f ,0.0937f ,0.1079f ,-0.0284f ,0.2501f ,-0.1148f ,-0.01f ,0.2596f ,-0.2762f ,0.0046f ,0.1165f ,-0.2817f ,0.0068f ,-0.0952f ,-0.1281f ,-0.0047f ,-0.2517f ,0.0946f ,-0.0232f ,-0.2611f ,0.256f ,-0.0377f ,-0.1181f ,-0.0044f ,0.0523f ,-0.0002f });
  }
}
private class MFInt32341 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32342 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f343 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4369f ,0.6266f ,0.4327f ,0.6266f ,0.4328f ,0.6264f ,0.4371f ,0.6264f ,0.4402f ,0.6282f ,0.4368f ,0.6283f ,0.4403f ,0.628f ,0.4373f ,0.6279f ,0.433f ,0.6279f ,0.4297f ,0.628f ,0.4295f ,0.6282f ,0.4326f ,0.6284f ,0.4412f ,0.6373f ,0.4375f ,0.6375f ,0.4414f ,0.6371f ,0.438f ,0.637f ,0.4329f ,0.637f ,0.4292f ,0.6372f ,0.429f ,0.6374f ,0.4324f ,0.6375f ,0.4418f ,0.6388f ,0.4378f ,0.639f ,0.4421f ,0.6385f ,0.4383f ,0.6384f ,0.4327f ,0.6384f ,0.4287f ,0.6386f ,0.4284f ,0.6389f ,0.4322f ,0.639f ,0.4399f ,0.6402f ,0.4371f ,0.6403f ,0.4401f ,0.64f ,0.4374f ,0.6399f ,0.4335f ,0.6399f ,0.4306f ,0.6401f ,0.4305f ,0.6402f ,0.4331f ,0.6404f ,0.4353f ,0.6407f });
  }
}
private class MFVec3f344 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2259f ,-1.448f ,0.0923f ,0.2194f ,-1.446f ,-0.1376f ,0.0106f ,-1.469f ,0.1016f ,0.0041f ,-1.467f ,-0.1283f ,0.3742f ,-1.258f ,0.088f ,0.2177f ,-1.275f ,0.2673f ,0.0024f ,-1.296f ,0.2766f ,-0.1639f ,-1.31f ,0.1112f ,-0.1704f ,-1.307f ,-0.1187f ,-0.0138f ,-1.29f ,-0.2981f ,0.2014f ,-1.269f ,-0.3073f ,0.3677f ,-1.255f ,-0.1419f ,0.3422f ,-0.2825f ,0.1227f ,0.1666f ,-0.302f ,0.3239f ,-0.0895f ,-0.3267f ,0.3349f ,-0.2761f ,-0.3422f ,0.1493f ,-0.2838f ,-0.3394f ,-0.1242f ,-0.1082f ,-0.3199f ,-0.3253f ,0.1479f ,-0.2952f ,-0.3364f ,0.3345f ,-0.2797f ,-0.1508f ,0.3605f ,-0.1263f ,0.1367f ,0.1681f ,-0.1476f ,0.357f ,-0.1123f ,-0.1747f ,0.3691f ,-0.3166f ,-0.1917f ,0.1659f ,-0.3251f ,-0.1886f ,-0.1336f ,-0.1327f ,-0.1672f ,-0.3539f ,0.1477f ,-0.1401f ,-0.366f ,0.352f ,-0.1232f ,-0.1627f ,0.2486f ,0.0181f ,0.0994f ,0.1126f ,0.003f ,0.2552f ,-0.0857f ,-0.0161f ,0.2638f ,-0.2302f ,-0.0281f ,0.1201f ,-0.2362f ,-0.0259f ,-0.0917f ,-0.1002f ,-0.0108f ,-0.2475f ,0.0981f ,0.0083f ,-0.256f ,0.2426f ,0.0203f ,-0.1123f ,0.0014f ,0.0597f ,0.0048f });
  }
}
private class MFInt32345 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32346 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f347 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4364f ,0.617f ,0.4323f ,0.6171f ,0.4325f ,0.6165f ,0.4365f ,0.6165f ,0.4395f ,0.6186f ,0.4363f ,0.619f ,0.4397f ,0.618f ,0.4367f ,0.6176f ,0.4327f ,0.6176f ,0.4295f ,0.6181f ,0.4294f ,0.6186f ,0.4323f ,0.619f ,0.4401f ,0.6271f ,0.4369f ,0.6275f ,0.4403f ,0.6265f ,0.4373f ,0.6261f ,0.4329f ,0.6261f ,0.4297f ,0.6266f ,0.4295f ,0.6271f ,0.4325f ,0.6275f ,0.4391f ,0.6297f ,0.4366f ,0.6301f ,0.4392f ,0.6293f ,0.4369f ,0.629f ,0.4335f ,0.629f ,0.431f ,0.6293f ,0.4308f ,0.6298f ,0.4331f ,0.6301f ,0.435f ,0.6301f });
  }
}
private class MFVec3f348 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.4389f ,-1.268f ,0.089f ,0.4327f ,-1.265f ,-0.1296f ,0.2401f ,-1.325f ,0.0971f ,0.234f ,-1.323f ,-0.1215f ,0.5481f ,-1.062f ,0.0865f ,0.4036f ,-1.106f ,0.2566f ,0.2049f ,-1.164f ,0.2647f ,0.0512f ,-1.205f ,0.1068f ,0.045f ,-1.203f ,-0.1118f ,0.1894f ,-1.158f ,-0.2818f ,0.3882f ,-1.101f ,-0.2899f ,0.5419f ,-1.059f ,-0.132f ,0.3388f ,-0.1526f ,0.1159f ,0.1909f ,-0.1984f ,0.2901f ,-0.025f ,-0.2608f ,0.2989f ,-0.1825f ,-0.3032f ,0.1372f ,-0.1892f ,-0.3008f ,-0.1003f ,-0.0412f ,-0.2549f ,-0.2744f ,0.1747f ,-0.1925f ,-0.2833f ,0.3321f ,-0.1501f ,-0.1216f ,0.2096f ,0.117f ,0.0982f ,0.0948f ,0.0814f ,0.2333f ,-0.0727f ,0.033f ,0.2402f ,-0.1949f ,0.0001f ,0.1147f ,-0.2001f ,0.002f ,-0.0696f ,-0.0853f ,0.0376f ,-0.2048f ,0.0823f ,0.086f ,-0.2116f ,0.2044f ,0.1189f ,-0.0861f ,-0.0097f ,0.1188f ,0.0156f });
  }
}
private class MFInt32349 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32350 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f351 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4356f ,0.6082f ,0.4321f ,0.6082f ,0.4322f ,0.6074f ,0.4357f ,0.6074f ,0.4383f ,0.6096f ,0.4356f ,0.6102f ,0.4384f ,0.6088f ,0.4359f ,0.6083f ,0.4324f ,0.6083f ,0.4296f ,0.6089f ,0.4295f ,0.6096f ,0.4321f ,0.6102f ,0.4394f ,0.6176f ,0.4364f ,0.6183f ,0.4396f ,0.6167f ,0.4367f ,0.6161f ,0.4325f ,0.6161f ,0.4295f ,0.6168f ,0.4293f ,0.6177f ,0.4322f ,0.6183f ,0.4388f ,0.6192f ,0.4362f ,0.6198f ,0.4389f ,0.6186f ,0.4364f ,0.6181f ,0.433f ,0.6182f ,0.4304f ,0.6187f ,0.4303f ,0.6194f ,0.4326f ,0.6199f ,0.4346f ,0.6199f });
  }
}
private class MFVec3f352 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.631f ,-1.169f ,0.0421f ,0.6256f ,-1.167f ,-0.1475f ,0.4691f ,-1.25f ,0.0483f ,0.4637f ,-1.248f ,-0.1413f ,0.6864f ,-0.9557f ,0.0421f ,0.569f ,-1.018f ,0.1889f ,0.4071f ,-1.099f ,0.1951f ,0.2817f ,-1.158f ,0.0576f ,0.2763f ,-1.156f ,-0.1319f ,0.3937f ,-1.094f ,-0.2788f ,0.5556f ,-1.013f ,-0.285f ,0.681f ,-0.9537f ,-0.1474f ,0.3504f ,-0.0919f ,0.0851f ,0.2187f ,-0.1616f ,0.2498f ,0.026f ,-0.2579f ,0.2572f ,-0.1147f ,-0.3243f ,0.1029f ,-0.121f ,-0.322f ,-0.1226f ,0.0106f ,-0.2523f ,-0.2873f ,0.2033f ,-0.156f ,-0.2946f ,0.344f ,-0.0896f ,-0.1404f ,0.2414f ,0.0637f ,0.0753f ,0.128f ,0.0061f ,0.2155f ,-0.0399f ,-0.0652f ,0.2197f ,-0.161f ,-0.1101f ,0.0888f ,-0.1675f ,-0.1027f ,-0.0988f ,-0.0577f ,-0.0458f ,-0.2359f ,0.106f ,0.0275f ,-0.2439f ,0.2307f ,0.0733f ,-0.1162f ,-0.0079f ,0.0731f ,-0.0112f });
  }
}
private class MFInt32353 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32354 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f355 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4223f ,0.6397f ,0.4182f ,0.6398f ,0.4179f ,0.64f ,0.422f ,0.6399f ,0.4255f ,0.6412f ,0.4227f ,0.6412f ,0.4252f ,0.6414f ,0.422f ,0.6417f ,0.418f ,0.6418f ,0.4151f ,0.6417f ,0.4154f ,0.6415f ,0.4187f ,0.6413f ,0.4275f ,0.6502f ,0.4244f ,0.6501f ,0.4272f ,0.6504f ,0.4235f ,0.6507f ,0.4187f ,0.6508f ,0.4156f ,0.6508f ,0.4159f ,0.6505f ,0.4196f ,0.6503f ,0.4282f ,0.6516f ,0.4248f ,0.6515f ,0.4279f ,0.6519f ,0.4239f ,0.6522f ,0.4187f ,0.6523f ,0.4153f ,0.6522f ,0.4156f ,0.652f ,0.4196f ,0.6517f ,0.4265f ,0.6531f ,0.4241f ,0.6531f ,0.4263f ,0.6533f ,0.4235f ,0.6535f ,0.4198f ,0.6536f ,0.4174f ,0.6536f ,0.4176f ,0.6534f ,0.4204f ,0.6532f ,0.422f ,0.6539f });
  }
}
private class MFVec3f356 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.014f ,-1.366f ,0.0295f ,0.0298f ,-1.354f ,-0.1885f ,-0.2211f ,-1.344f ,0.0143f ,-0.2053f ,-1.332f ,-0.2037f ,0.205f ,-1.209f ,0.0528f ,0.0169f ,-1.202f ,0.2049f ,-0.2182f ,-1.181f ,0.1897f ,-0.3826f ,-1.156f ,0.0148f ,-0.3668f ,-1.144f ,-0.2032f ,-0.1787f ,-1.151f ,-0.3553f ,0.0564f ,-1.172f ,-0.3401f ,0.2209f ,-1.197f ,-0.1652f ,0.3293f ,-0.2545f ,0.1423f ,0.1183f ,-0.2468f ,0.3129f ,-0.1614f ,-0.2216f ,0.2949f ,-0.3458f ,-0.1936f ,0.0987f ,-0.327f ,-0.1793f ,-0.1607f ,-0.116f ,-0.187f ,-0.3313f ,0.1637f ,-0.2122f ,-0.3132f ,0.3482f ,-0.2402f ,-0.117f ,0.3702f ,-0.1061f ,0.1656f ,0.1412f ,-0.0977f ,0.3507f ,-0.1622f ,-0.0704f ,0.3311f ,-0.3623f ,-0.04f ,0.1183f ,-0.3419f ,-0.0245f ,-0.1631f ,-0.1129f ,-0.0329f ,-0.3482f ,0.1905f ,-0.0602f ,-0.3286f ,0.3906f ,-0.0905f ,-0.1158f ,0.2788f ,0.0575f ,0.1279f ,0.1169f ,0.0634f ,0.2588f ,-0.0976f ,0.0827f ,0.2449f ,-0.2391f ,0.1042f ,0.0944f ,-0.2247f ,0.1152f ,-0.1045f ,-0.0628f ,0.1093f ,-0.2354f ,0.1518f ,0.0899f ,-0.2215f ,0.2933f ,0.0685f ,-0.0711f ,0.0325f ,0.1491f ,0.016f });
  }
}
private class MFInt32357 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32358 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f359 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4212f ,0.6288f ,0.4172f ,0.6289f ,0.4169f ,0.6288f ,0.4209f ,0.6287f ,0.4244f ,0.6302f ,0.4216f ,0.6304f ,0.4241f ,0.6301f ,0.4209f ,0.63f ,0.4169f ,0.6301f ,0.4141f ,0.6304f ,0.4144f ,0.6305f ,0.4176f ,0.6306f ,0.4261f ,0.6386f ,0.423f ,0.6388f ,0.4258f ,0.6384f ,0.4222f ,0.6383f ,0.4174f ,0.6385f ,0.4143f ,0.6387f ,0.4146f ,0.6389f ,0.4182f ,0.6389f ,0.4268f ,0.6399f ,0.4234f ,0.6401f ,0.4265f ,0.6397f ,0.4225f ,0.6396f ,0.4173f ,0.6398f ,0.4139f ,0.64f ,0.4142f ,0.6402f ,0.4182f ,0.6403f ,0.4251f ,0.6412f ,0.4226f ,0.6414f ,0.4248f ,0.6411f ,0.422f ,0.641f ,0.4183f ,0.6411f ,0.4159f ,0.6413f ,0.4162f ,0.6415f ,0.419f ,0.6415f ,0.4206f ,0.6418f });
  }
}
private class MFVec3f360 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1847f ,-1.253f ,0.0467f ,0.1998f ,-1.241f ,-0.1693f ,-0.0227f ,-1.271f ,0.0316f ,-0.0076f ,-1.259f ,-0.1844f ,0.3279f ,-1.08f ,0.0673f ,0.161f ,-1.102f ,0.2179f ,-0.0464f ,-1.12f ,0.2028f ,-0.1906f ,-1.124f ,0.0295f ,-0.1754f ,-1.112f ,-0.1865f ,-0.0085f ,-1.09f ,-0.3372f ,0.1989f ,-1.072f ,-0.3221f ,0.3431f ,-1.068f ,-0.1487f ,0.2967f ,-0.1902f ,0.1418f ,0.1095f ,-0.215f ,0.3108f ,-0.1373f ,-0.2358f ,0.2929f ,-0.299f ,-0.2404f ,0.0984f ,-0.281f ,-0.2262f ,-0.1586f ,-0.0938f ,-0.2014f ,-0.3276f ,0.153f ,-0.1807f ,-0.3096f ,0.3147f ,-0.176f ,-0.1151f ,0.3133f ,-0.0482f ,0.1642f ,0.1083f ,-0.0753f ,0.3493f ,-0.1619f ,-0.0981f ,0.3296f ,-0.339f ,-0.1032f ,0.1167f ,-0.3192f ,-0.0876f ,-0.1647f ,-0.1142f ,-0.0605f ,-0.3498f ,0.156f ,-0.0377f ,-0.3301f ,0.3331f ,-0.0327f ,-0.1172f ,0.2099f ,0.0863f ,0.1241f ,0.0649f ,0.0671f ,0.255f ,-0.1261f ,0.051f ,0.2411f ,-0.2514f ,0.0474f ,0.0905f ,-0.2374f ,0.0585f ,-0.1085f ,-0.0924f ,0.0776f ,-0.2393f ,0.0986f ,0.0937f ,-0.2254f ,0.2239f ,0.0973f ,-0.0749f ,-0.0182f ,0.1305f ,0.0112f });
  }
}
private class MFInt32361 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32362 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f363 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4203f ,0.6204f ,0.4166f ,0.6205f ,0.4163f ,0.62f ,0.42f ,0.6199f ,0.4232f ,0.6217f ,0.4207f ,0.6221f ,0.4229f ,0.6212f ,0.4199f ,0.6209f ,0.4162f ,0.621f ,0.4136f ,0.6215f ,0.4139f ,0.622f ,0.4169f ,0.6222f ,0.4242f ,0.6295f ,0.4215f ,0.6299f ,0.4239f ,0.629f ,0.4208f ,0.6287f ,0.4167f ,0.6288f ,0.4141f ,0.6293f ,0.4144f ,0.6298f ,0.4175f ,0.6301f ,0.4233f ,0.6319f ,0.4212f ,0.6323f ,0.423f ,0.6315f ,0.4206f ,0.6313f ,0.4175f ,0.6314f ,0.4154f ,0.6317f ,0.4157f ,0.6321f ,0.4181f ,0.6324f ,0.4194f ,0.6323f });
  }
}
private class MFVec3f364 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.412f ,-1.137f ,0.0335f ,0.4261f ,-1.125f ,-0.1679f ,0.2243f ,-1.187f ,0.0176f ,0.2385f ,-1.176f ,-0.1838f ,0.5153f ,-0.9493f ,0.0522f ,0.3639f ,-0.9958f ,0.1913f ,0.1762f ,-1.047f ,0.1754f ,0.0461f ,-1.076f ,0.0125f ,0.0602f ,-1.065f ,-0.1888f ,0.2116f ,-1.019f ,-0.3279f ,0.3992f ,-0.9679f ,-0.312f ,0.5294f ,-0.9381f ,-0.1491f ,0.3178f ,-0.1177f ,0.1f ,0.1627f ,-0.1653f ,0.2425f ,-0.0412f ,-0.2206f ,0.2252f ,-0.1745f ,-0.2511f ,0.0583f ,-0.1591f ,-0.239f ,-0.1604f ,-0.0041f ,-0.1914f ,-0.3029f ,0.1998f ,-0.1361f ,-0.2856f ,0.3331f ,-0.1056f ,-0.1188f ,0.1985f ,0.1307f ,0.0829f ,0.0782f ,0.0937f ,0.1934f ,-0.08f ,0.0508f ,0.18f ,-0.1835f ,0.0271f ,0.0505f ,-0.1716f ,0.0365f ,-0.1192f ,-0.0513f ,0.0735f ,-0.2298f ,0.1069f ,0.1164f ,-0.2164f ,0.2104f ,0.1401f ,-0.0869f ,-0.0002f ,0.1379f ,-0.0157f });
  }
}
private class MFInt32365 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32366 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f367 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4195f ,0.6124f ,0.4163f ,0.6125f ,0.416f ,0.6118f ,0.4193f ,0.6117f ,0.422f ,0.6137f ,0.4198f ,0.6143f ,0.4218f ,0.613f ,0.4191f ,0.6126f ,0.4159f ,0.6126f ,0.4137f ,0.6132f ,0.414f ,0.6139f ,0.4166f ,0.6143f ,0.4231f ,0.621f ,0.4207f ,0.6217f ,0.4228f ,0.6202f ,0.4199f ,0.6197f ,0.416f ,0.6198f ,0.4135f ,0.6205f ,0.4139f ,0.6213f ,0.4168f ,0.6218f ,0.4225f ,0.6225f ,0.4204f ,0.623f ,0.4222f ,0.6219f ,0.4197f ,0.6216f ,0.4165f ,0.6217f ,0.4145f ,0.6223f ,0.4147f ,0.6229f ,0.4172f ,0.6232f ,0.4185f ,0.6232f });
  }
}
private class MFVec3f368 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5436f ,-1.006f ,0.082f ,0.5559f ,-0.9964f ,-0.0922f ,0.3911f ,-1.079f ,0.0671f ,0.4033f ,-1.069f ,-0.1071f ,0.596f ,-0.8116f ,0.0978f ,0.4725f ,-0.8732f ,0.2172f ,0.3199f ,-0.9458f ,0.2024f ,0.2147f ,-0.9931f ,0.0605f ,0.2269f ,-0.9834f ,-0.1137f ,0.3505f ,-0.9218f ,-0.2332f ,0.503f ,-0.8491f ,-0.2183f ,0.6083f ,-0.8019f ,-0.0765f ,0.2786f ,-0.0205f ,0.1427f ,0.14f ,-0.0896f ,0.2768f ,-0.0415f ,-0.176f ,0.2591f ,-0.1596f ,-0.229f ,0.1f ,-0.1451f ,-0.2175f ,-0.1073f ,-0.0064f ,-0.1484f ,-0.2413f ,0.1751f ,-0.062f ,-0.2236f ,0.2931f ,-0.009f ,-0.0645f ,0.1776f ,0.1232f ,0.1297f ,0.0583f ,0.0659f ,0.2438f ,-0.0996f ,0.0023f ,0.2269f ,-0.2013f ,-0.0322f ,0.0923f ,-0.1903f ,-0.0176f ,-0.08f ,-0.0748f ,0.0389f ,-0.1916f ,0.0796f ,0.1047f ,-0.1786f ,0.185f ,0.14f ,-0.0465f ,-0.0484f ,0.1379f ,0.025f });
  }
}
private class MFInt32369 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32370 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f371 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4094f ,0.6427f ,0.4058f ,0.6429f ,0.4055f ,0.6432f ,0.4091f ,0.643f ,0.4124f ,0.6437f ,0.41f ,0.6437f ,0.412f ,0.644f ,0.4092f ,0.6444f ,0.4056f ,0.6446f ,0.4032f ,0.6445f ,0.4035f ,0.6443f ,0.4064f ,0.6439f ,0.4149f ,0.6501f ,0.4122f ,0.65f ,0.4146f ,0.6504f ,0.4113f ,0.6509f ,0.4071f ,0.6511f ,0.4044f ,0.651f ,0.4048f ,0.6507f ,0.408f ,0.6502f ,0.4157f ,0.651f ,0.4127f ,0.651f ,0.4153f ,0.6514f ,0.4118f ,0.6519f ,0.4072f ,0.6522f ,0.4043f ,0.6521f ,0.4047f ,0.6517f ,0.4082f ,0.6512f ,0.4143f ,0.6522f ,0.4122f ,0.6522f ,0.414f ,0.6525f ,0.4115f ,0.6528f ,0.4083f ,0.653f ,0.4062f ,0.6529f ,0.4065f ,0.6527f ,0.409f ,0.6523f ,0.4104f ,0.653f });
  }
}
private class MFVec3f372 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0463f ,-0.9645f ,-0.0622f ,-0.0267f ,-0.942f ,-0.253f ,-0.2519f ,-0.9328f ,-0.0794f ,-0.2324f ,-0.9103f ,-0.2702f ,0.1254f ,-0.8655f ,-0.031f ,-0.0435f ,-0.8586f ,0.0992f ,-0.2492f ,-0.8269f ,0.082f ,-0.3888f ,-0.7862f ,-0.074f ,-0.3693f ,-0.7638f ,-0.2648f ,-0.2004f ,-0.7707f ,-0.395f ,0.0053f ,-0.8024f ,-0.3779f ,0.1449f ,-0.843f ,-0.2218f ,0.2585f ,-0.1911f ,0.0918f ,0.069f ,-0.1834f ,0.2379f ,-0.1757f ,-0.1456f ,0.2175f ,-0.3323f ,-0.1f ,0.0425f ,-0.309f ,-0.0733f ,-0.1846f ,-0.1196f ,-0.0811f ,-0.3307f ,0.1251f ,-0.1188f ,-0.3102f ,0.2817f ,-0.1644f ,-0.1352f ,0.2978f ,-0.0883f ,0.1196f ,0.0923f ,-0.0799f ,0.2781f ,-0.1732f ,-0.0389f ,0.2559f ,-0.343f ,0.0105f ,0.066f ,-0.3178f ,0.0395f ,-0.1803f ,-0.1123f ,0.0311f ,-0.3387f ,0.1532f ,-0.0098f ,-0.3166f ,0.3231f ,-0.0593f ,-0.1267f ,0.223f ,0.0382f ,0.0917f ,0.0776f ,0.0442f ,0.2038f ,-0.1101f ,0.0732f ,0.1881f ,-0.2302f ,0.1081f ,0.0539f ,-0.2124f ,0.1286f ,-0.1203f ,-0.0671f ,0.1227f ,-0.2324f ,0.1207f ,0.0937f ,-0.2167f ,0.2408f ,0.0588f ,-0.0824f ,0.0116f ,0.1281f ,-0.0076f });
  }
}
private class MFInt32373 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1});
  }
}
private class MFInt32374 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1});
  }
}
private class MFVec2f375 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4075f ,0.6349f ,0.404f ,0.6351f ,0.4037f ,0.6351f ,0.4072f ,0.6349f ,0.4104f ,0.6358f ,0.4081f ,0.6359f ,0.4101f ,0.6358f ,0.4072f ,0.636f ,0.4037f ,0.6362f ,0.4013f ,0.6363f ,0.4017f ,0.6363f ,0.4046f ,0.6362f ,0.4127f ,0.6418f ,0.41f ,0.6419f ,0.4123f ,0.6418f ,0.409f ,0.642f ,0.4048f ,0.6423f ,0.4022f ,0.6424f ,0.4026f ,0.6424f ,0.4058f ,0.6422f ,0.4134f ,0.6427f ,0.4105f ,0.6429f ,0.413f ,0.6427f ,0.4094f ,0.6429f ,0.4048f ,0.6432f ,0.4019f ,0.6434f ,0.4024f ,0.6434f ,0.4059f ,0.6432f ,0.412f ,0.6438f ,0.4099f ,0.6439f ,0.4116f ,0.6438f ,0.4091f ,0.6439f ,0.4059f ,0.6441f ,0.4038f ,0.6442f ,0.4042f ,0.6442f ,0.4067f ,0.6441f ,0.408f ,0.6444f });
  }
}
private class MFVec3f376 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1298f ,-0.9343f ,0.012f ,0.1487f ,-0.912f ,-0.1771f ,-0.0526f ,-0.9323f ,-0.0063f ,-0.0337f ,-0.91f ,-0.1954f ,0.2599f ,-0.8204f ,0.0405f ,0.1089f ,-0.8356f ,0.1686f ,-0.0735f ,-0.8336f ,0.1504f ,-0.1961f ,-0.8154f ,-0.0051f ,-0.1772f ,-0.793f ,-0.1942f ,-0.0262f ,-0.7778f ,-0.3224f ,0.1562f ,-0.7798f ,-0.3041f ,0.2788f ,-0.7981f ,-0.1486f ,0.2549f ,-0.1812f ,0.1442f ,0.0856f ,-0.1983f ,0.2879f ,-0.1314f ,-0.1959f ,0.2662f ,-0.269f ,-0.1755f ,0.0918f ,-0.2465f ,-0.1489f ,-0.1332f ,-0.0771f ,-0.1318f ,-0.2769f ,0.1399f ,-0.1342f ,-0.2552f ,0.2774f ,-0.1547f ,-0.0808f ,0.2729f ,-0.0814f ,0.1704f ,0.0874f ,-0.1001f ,0.3278f ,-0.1502f ,-0.0975f ,0.304f ,-0.3008f ,-0.0751f ,0.113f ,-0.2762f ,-0.046f ,-0.1333f ,-0.0907f ,-0.0273f ,-0.2907f ,0.1469f ,-0.0299f ,-0.2669f ,0.2975f ,-0.0523f ,-0.0759f ,0.1866f ,0.0252f ,0.139f ,0.0555f ,0.012f ,0.2502f ,-0.1126f ,0.0138f ,0.2334f ,-0.2191f ,0.0297f ,0.0984f ,-0.2016f ,0.0502f ,-0.0758f ,-0.0705f ,0.0635f ,-0.1871f ,0.0975f ,0.0616f ,-0.1703f ,0.204f ,0.0458f ,-0.0352f ,-0.0099f ,0.0797f ,0.0369f });
  }
}
private class MFInt32377 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32378 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f379 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4061f ,0.6287f ,0.4028f ,0.6289f ,0.4025f ,0.6286f ,0.4057f ,0.6284f ,0.4088f ,0.6296f ,0.4066f ,0.6299f ,0.4084f ,0.6293f ,0.4057f ,0.6293f ,0.4024f ,0.6295f ,0.4002f ,0.6298f ,0.4006f ,0.63f ,0.4033f ,0.6301f ,0.4102f ,0.6353f ,0.408f ,0.6356f ,0.4098f ,0.635f ,0.407f ,0.635f ,0.4035f ,0.6352f ,0.4012f ,0.6355f ,0.4016f ,0.6358f ,0.4044f ,0.6358f ,0.4096f ,0.6371f ,0.4079f ,0.6374f ,0.4093f ,0.6369f ,0.4071f ,0.6369f ,0.4043f ,0.6371f ,0.4026f ,0.6373f ,0.4029f ,0.6375f ,0.4051f ,0.6375f ,0.4062f ,0.6376f });
  }
}
private class MFVec3f380 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.3103f ,-0.8684f ,0.0017f ,0.3279f ,-0.8476f ,-0.1746f ,0.1444f ,-0.8917f ,-0.0183f ,0.162f ,-0.8709f ,-0.1946f ,0.4057f ,-0.7413f ,0.0284f ,0.268f ,-0.7744f ,0.1456f ,0.1021f ,-0.7977f ,0.1256f ,-0.0092f ,-0.7996f ,-0.0215f ,0.0085f ,-0.7788f ,-0.1978f ,0.1461f ,-0.7457f ,-0.315f ,0.3121f ,-0.7224f ,-0.295f ,0.4234f ,-0.7205f ,-0.1478f ,0.2537f ,-0.1316f ,0.1027f ,0.1126f ,-0.1655f ,0.2227f ,-0.0677f ,-0.1909f ,0.201f ,-0.1817f ,-0.1928f ,0.0502f ,-0.1625f ,-0.1702f ,-0.1412f ,-0.0215f ,-0.1363f ,-0.2613f ,0.1588f ,-0.1109f ,-0.2396f ,0.2728f ,-0.109f ,-0.0888f ,0.156f ,0.0566f ,0.096f ,0.0465f ,0.0303f ,0.1892f ,-0.0934f ,0.0106f ,0.1723f ,-0.1818f ,0.0091f ,0.0553f ,-0.1669f ,0.0266f ,-0.0933f ,-0.0575f ,0.0529f ,-0.1864f ,0.0824f ,0.0726f ,-0.1696f ,0.1709f ,0.0741f ,-0.0526f ,-0.016f ,0.0815f ,0.0057f });
  }
}
private class MFInt32381 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1});
  }
}
private class MFInt32382 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1});
  }
}
private class MFVec2f383 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.4049f ,0.6227f ,0.4021f ,0.6229f ,0.4017f ,0.6225f ,0.4045f ,0.6223f ,0.4072f ,0.6236f ,0.4053f ,0.624f ,0.4068f ,0.6232f ,0.4044f ,0.623f ,0.4016f ,0.6232f ,0.3997f ,0.6236f ,0.4001f ,0.624f ,0.4025f ,0.6242f ,0.4086f ,0.6291f ,0.4066f ,0.6295f ,0.4082f ,0.6286f ,0.4055f ,0.6284f ,0.4022f ,0.6286f ,0.4001f ,0.6291f ,0.4005f ,0.6296f ,0.4032f ,0.6297f ,0.4082f ,0.6302f ,0.4064f ,0.6306f ,0.4078f ,0.6299f ,0.4056f ,0.6298f ,0.4028f ,0.63f ,0.401f ,0.6304f ,0.4014f ,0.6307f ,0.4036f ,0.6308f ,0.4047f ,0.6309f });
  }
}
private class MFVec3f384 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.4265f ,-0.7665f ,0.0531f ,0.4417f ,-0.7485f ,-0.0994f ,0.2908f ,-0.8079f ,0.0337f ,0.306f ,-0.7899f ,-0.1188f ,0.4775f ,-0.6307f ,0.0765f ,0.3642f ,-0.6752f ,0.1764f ,0.2285f ,-0.7166f ,0.157f ,0.1382f ,-0.7341f ,0.0281f ,0.1534f ,-0.7161f ,-0.1244f ,0.2667f ,-0.6716f ,-0.2242f ,0.4024f ,-0.6302f ,-0.2049f ,0.4927f ,-0.6127f ,-0.076f ,0.2189f ,-0.0422f ,0.1441f ,0.0919f ,-0.0921f ,0.2561f ,-0.0696f ,-0.1414f ,0.2331f ,-0.1709f ,-0.161f ,0.0886f ,-0.1528f ,-0.1396f ,-0.0929f ,-0.0258f ,-0.0897f ,-0.2049f ,0.1357f ,-0.0404f ,-0.1819f ,0.2371f ,-0.0207f ,-0.0373f ,0.1344f ,0.069f ,0.1368f ,0.0252f ,0.0277f ,0.2322f ,-0.1149f ,-0.0067f ,0.2114f ,-0.202f ,-0.0158f ,0.0895f ,-0.1878f ,0.0058f ,-0.0611f ,-0.082f ,0.0466f ,-0.1545f ,0.0552f ,0.083f ,-0.137f ,0.1456f ,0.0926f ,-0.0171f ,-0.0613f ,0.1015f ,0.0409f });
  }
}
}
