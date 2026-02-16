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
public class HAnimModelFootRight implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimModelFootRight().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimModelFootRight.new.java.x3d");
    model.toFileJSON("../data/HAnimModelFootRight.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("HAnimModelFootRight.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Right foot, using high-fidelity definitions for HAnim version 2.0")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("26 January 2015")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("23 December 2021")))
        .addMeta(new meta().setName(new SFString("warning")).setContent(new SFString("not yet to scale")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("Update all values to match HAnim2 A.7 Level of articulation four LOA-4")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("Add links to figures")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("Add Viewpoints to enable inspection")))
        .addMeta(new meta().setName(new SFString("info")).setContent(new SFString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")))
        .addMeta(new meta().setName(new SFString("warning")).setContent(new SFString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/working-groups/humanoid-animation-HAnim")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("X3D HAnim humanoid animation")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("Integrate and confirm Segment/Joint names, Viewpoints.")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("HAnimModelFootRight.x3d")))
        .addChild(new HAnimHumanoid().setName(new SFString("Foot_Right")).setDEF(new SFString("hanim_Foot_Right")).setLoa(4).setVersion(new SFString("2.0"))
          .addComments(new CommentsBlock("original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"))
          .setMetadata(new MetadataSet().setName(new SFString("HAnimHumanoid.info")).setReference(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"))
            .setMetadata(new MetadataString().setName(new SFString("authorName")).setValue(new MFString0().getArray())))
          .addSkeleton(new HAnimJoint("hanim_Foot_Right").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setUlimit(new MFFloat1().getArray()).setLlimit(new MFFloat2().getArray())
            .addComments(new CommentsBlock("Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model"))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("r_talocrural")).setDEF(new SFString("hanim_r_talocrural")).setDescription(new SFString("connection joint of foot to leg above")).setUlimit(new MFFloat3().getArray()).setLlimit(new MFFloat4().getArray())
              .addChild(new HAnimSegment("hanim_r_talocrural").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus"))
                .addChild(new Transform()
                  .addChild(new Shape().setDEF(new SFString("HAnimJointShape"))
                    .setGeometry(new Sphere().setRadius(0.025f ))
                    .setAppearance(new Appearance().setDEF(new SFString("HAnimJointAppearance"))
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new IndexedLineSet().setDEF(new SFString("TCtoTCN")).setCoordIndex(new MFInt325().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new IndexedLineSet().setDEF(new SFString("TCtoCC")).setCoordIndex(new MFInt327().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray())))))
              .addComments(new CommentsBlock("TCN"))
              .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_talocalcaneonavicular")).setDEF(new SFString("hanim_r_talocalcaneonavicular")).setCenter(new float[] {0f ,-0.3f ,0f }).setUlimit(new MFFloat9().getArray()).setLlimit(new MFFloat10().getArray())
                .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName(new SFString("r_navicular")).setDEF(new SFString("hanim_r_navicular"))
                  .addChild(new Transform().setTranslation(new float[] {0f ,-0.3f ,0f })
                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("TCNtoCN1")).setCoordIndex(new MFInt3211().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("TCNtoCN2")).setCoordIndex(new MFInt3213().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("TCNtoCN3")).setCoordIndex(new MFInt3215().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray())))))
                .addComments(new CommentsBlock("CN1"))
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_1")).setDEF(new SFString("hanim_r_cuneonavicular_1")).setCenter(new float[] {0.1f ,-0.45f ,0f }).setUlimit(new MFFloat17().getArray()).setLlimit(new MFFloat18().getArray())
                  .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName(new SFString("r_cuneiform_1")).setDEF(new SFString("hanim_r_cuneiform_1"))
                    .addChild(new Transform().setTranslation(new float[] {0.1f ,-0.45f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CN1toTMT1")).setCoordIndex(new MFInt3219().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName(new SFString("r_tarsometatarsal_1")).setDEF(new SFString("hanim_r_tarsometatarsal_1")).setCenter(new float[] {0.1f ,-0.6f ,0f }).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsal_1")).setDEF(new SFString("hanim_r_metatarsal_1"))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,-0.6f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("TMT1toMTP1")).setCoordIndex(new MFInt3223().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName(new SFString("r_metatarsophalangeal_1")).setDEF(new SFString("hanim_r_metatarsophalangeal_1")).setCenter(new float[] {0.1f ,-0.9f ,0f }).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_1"))
                        .addChild(new Transform().setTranslation(new float[] {0.1f ,-0.9f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("MTP1toIP1")).setCoordIndex(new MFInt3227().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName(new SFString("r_tarsal_interphalangeal_1")).setDEF(new SFString("hanim_r_tarsal_interphalangeal_1")).setCenter(new float[] {0.1f ,-1.05f ,0f }).setUlimit(new MFFloat29().getArray()).setLlimit(new MFFloat30().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_interphalangeal_1").setName(new SFString("r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_1"))
                          .addChild(new Transform().setTranslation(new float[] {0.1f ,-1.05f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("tiptoe_r_interphalangeal_")).setCoordIndex(new MFInt3231().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))))))
                .addComments(new CommentsBlock("CN2"))
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_2")).setDEF(new SFString("hanim_r_cuneonavicular_2")).setCenter(new float[] {0f ,-0.45f ,0f }).setUlimit(new MFFloat33().getArray()).setLlimit(new MFFloat34().getArray())
                  .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName(new SFString("r_cuneiform_2")).setDEF(new SFString("hanim_r_cuneiform_2"))
                    .addChild(new Transform().setTranslation(new float[] {0f ,-0.45f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CN2toTMT2")).setCoordIndex(new MFInt3235().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName(new SFString("r_tarsometatarsal_2")).setDEF(new SFString("hanim_r_tarsometatarsal_2")).setCenter(new float[] {-0.05f ,-0.6f ,0f }).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("hanim_r_metatarsal_2"))
                      .addChild(new Transform().setTranslation(new float[] {-0.05f ,-0.6f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("TMT2toMTP2")).setCoordIndex(new MFInt3239().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("hanim_r_metatarsophalangeal_2")).setCenter(new float[] {-0.05f ,-0.9f ,0f }).setUlimit(new MFFloat41().getArray()).setLlimit(new MFFloat42().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2"))
                        .addChild(new Transform().setTranslation(new float[] {-0.05f ,-0.9f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("MTP2toPIP2")).setCoordIndex(new MFInt3243().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")).setCenter(new float[] {-0.05f ,-1.05f ,0f }).setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_2"))
                          .addChild(new Transform().setTranslation(new float[] {-0.05f ,-1.05f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP2toDIP2")).setCoordIndex(new MFInt3247().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName(new SFString("r_tarsal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_2")).setCenter(new float[] {-0.05f ,-1.12f ,0f }).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setName(new SFString("r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_2"))
                            .addChild(new Transform().setTranslation(new float[] {-0.05f ,-1.12f ,0f })
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                              .setGeometry(new IndexedLineSet().setDEF(new SFString("tiptoe_r_tarsal_distal_interphalangeal_2")).setCoordIndex(new MFInt3251().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))))))))))
                .addComments(new CommentsBlock("CN3"))
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName(new SFString("r_cuneonavicular_3")).setDEF(new SFString("hanim_r_cuneonavicular_3")).setCenter(new float[] {-0.1f ,-0.4f ,0f }).setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                  .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName(new SFString("r_cuneiform_3")).setDEF(new SFString("hanim_r_cuneiform_3"))
                    .addChild(new Transform().setTranslation(new float[] {-0.1f ,-0.4f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CN3toTMT3")).setCoordIndex(new MFInt3255().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName(new SFString("r_tarsometatarsal_3")).setDEF(new SFString("hanim_r_tarsometatarsal_3")).setCenter(new float[] {-0.15f ,-0.6f ,0f }).setUlimit(new MFFloat57().getArray()).setLlimit(new MFFloat58().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsal_3")).setDEF(new SFString("hanim_r_metatarsal_3"))
                      .addChild(new Transform().setTranslation(new float[] {-0.15f ,-0.6f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("TMT3toMTP3")).setCoordIndex(new MFInt3259().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName(new SFString("r_metatarsophalangeal_3")).setDEF(new SFString("hanim_r_metatarsophalangeal_3")).setCenter(new float[] {-0.15f ,-0.9f ,0f }).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_3"))
                        .addChild(new Transform().setTranslation(new float[] {-0.15f ,-0.9f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("MTP3toPIP3")).setCoordIndex(new MFInt3263().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f64().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName(new SFString("r_tarsal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")).setCenter(new float[] {-0.15f ,-1.05f ,0f }).setUlimit(new MFFloat65().getArray()).setLlimit(new MFFloat66().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_3"))
                          .addChild(new Transform().setTranslation(new float[] {-0.15f ,-1.05f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP3toDIP3")).setCoordIndex(new MFInt3267().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName(new SFString("r_tarsal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_3")).setCenter(new float[] {-0.15f ,-1.13f ,0f }).setUlimit(new MFFloat69().getArray()).setLlimit(new MFFloat70().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_3").setName(new SFString("r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_3"))
                            .addChild(new Transform().setTranslation(new float[] {-0.15f ,-1.13f ,0f })
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                              .setGeometry(new IndexedLineSet().setDEF(new SFString("tiptoe_r_tarsal_distal_interphalangeal_3")).setCoordIndex(new MFInt3271().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray())))))))))))
              .addComments(new CommentsBlock("CC"))
              .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_calcaneocuboid")).setDEF(new SFString("hanim_r_calcaneocuboid")).setCenter(new float[] {-0.2f ,0.3f ,0f }).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName(new SFString("r_calcaneus")).setDEF(new SFString("hanim_r_calcaneus"))
                  .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.3f ,0f })
                    .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("CCtoTT")).setCoordIndex(new MFInt3275().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray())))))
                .addComments(new CommentsBlock("TT"))
                .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName(new SFString("r_transversetarsal")).setDEF(new SFString("hanim_r_transversetarsal")).setCenter(new float[] {-0.21f ,-0.3f ,0f }).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                  .addChild(new HAnimSegment("hanim_r_transversetarsal").setName(new SFString("r_cuboid")).setDEF(new SFString("hanim_r_cuboid"))
                    .addChild(new Transform().setTranslation(new float[] {-0.21f ,-0.3f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("TTtoTMT4")).setCoordIndex(new MFInt3279().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("TTtoTMT5")).setCoordIndex(new MFInt3281().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray())))))
                  .addComments(new CommentsBlock("TMT4"))
                  .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_4")).setDEF(new SFString("hanim_r_tarsometatarsal_4")).setCenter(new float[] {-0.25f ,-0.58f ,0f }).setUlimit(new MFFloat83().getArray()).setLlimit(new MFFloat84().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsal_4")).setDEF(new SFString("hanim_r_metatarsal_4"))
                      .addChild(new Transform().setTranslation(new float[] {-0.25f ,-0.58f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("TMT4toMTP4")).setCoordIndex(new MFInt3285().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName(new SFString("r_metatarsophalangeal_4")).setDEF(new SFString("hanim_r_metatarsophalangeal_4")).setCenter(new float[] {-0.25f ,-0.87f ,0f }).setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_4"))
                        .addChild(new Transform().setTranslation(new float[] {-0.25f ,-0.87f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("MTP4toPIP4")).setCoordIndex(new MFInt3289().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName(new SFString("r_tarsal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")).setCenter(new float[] {-0.25f ,-1f ,0f }).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_4"))
                          .addChild(new Transform().setTranslation(new float[] {-0.25f ,-1f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP4toDIP4")).setCoordIndex(new MFInt3293().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName(new SFString("r_tarsal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_4")).setCenter(new float[] {-0.25f ,-1.1f ,0f }).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_4").setName(new SFString("r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_4"))
                            .addChild(new Transform().setTranslation(new float[] {-0.25f ,-1.1f ,0f })
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                              .setGeometry(new IndexedLineSet().setDEF(new SFString("tiptoe_r_tarsal_distal_interphalangeal_4")).setCoordIndex(new MFInt3297().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray())))))))))
                  .addComments(new CommentsBlock("TMT5"))
                  .addChild(new HAnimJoint("hanim_r_transversetarsal").setName(new SFString("r_tarsometatarsal_5")).setDEF(new SFString("hanim_r_tarsometatarsal_5")).setCenter(new float[] {-0.33f ,-0.52f ,0f }).setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsal_5")).setDEF(new SFString("hanim_r_metatarsal_5"))
                      .addChild(new Transform().setTranslation(new float[] {-0.33f ,-0.52f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("TMT5toMTP5")).setCoordIndex(new MFInt32101().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName(new SFString("r_metatarsophalangeal_5")).setDEF(new SFString("hanim_r_metatarsophalangeal_5")).setCenter(new float[] {-0.34f ,-0.8f ,0f }).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_5"))
                        .addChild(new Transform().setTranslation(new float[] {-0.34f ,-0.8f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("MTP5toPIP5")).setCoordIndex(new MFInt32105().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName(new SFString("r_tarsal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")).setCenter(new float[] {-0.34f ,-0.95f ,0f }).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_5"))
                          .addChild(new Transform().setTranslation(new float[] {-0.34f ,-0.95f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP5toDIP5")).setCoordIndex(new MFInt32109().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName(new SFString("r_tarsal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_tarsal_distal_interphalangeal_5")).setCenter(new float[] {-0.34f ,-1.05f ,0f }).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_5").setName(new SFString("r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_5"))
                            .addChild(new Transform().setTranslation(new float[] {-0.34f ,-1.05f ,0f })
                              .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                              .setGeometry(new IndexedLineSet().setDEF(new SFString("tiptoe_r_tarsal_distal_interphalangeal_5")).setCoordIndex(new MFInt32113().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray())))))))))))))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_humanoid_root")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_calcaneocuboid")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_cuneonavicular_1")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_cuneonavicular_2")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_cuneonavicular_3")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_metatarsophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_metatarsophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_metatarsophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_metatarsophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_metatarsophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_talocalcaneonavicular")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_talocrural")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsometatarsal_1")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsometatarsal_2")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsometatarsal_3")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsometatarsal_4")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_tarsometatarsal_5")))
          .addJoints(new HAnimJoint("hanim_Foot_Right").setUSE(new SFString("hanim_r_transversetarsal")))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kwan-Hee YOO, Don Brutzman and Joe Williams"});
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,-0.3f ,0f });
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,-0.2f ,0.3f ,0f });
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f12 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.3f ,0f ,0.1f ,-0.45f ,0f });
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.3f ,0f ,0f ,-0.45f ,0f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.3f ,0f ,-0.1f ,-0.4f ,0f });
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,-0.45f ,0f ,0.1f ,-0.6f ,0f });
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,-0.6f ,0f ,0.1f ,-0.9f ,0f });
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f28 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,-0.9f ,0f ,0.1f ,-1.05f ,0f });
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,-1.05f ,0f ,0.1f ,-1.1f ,0f });
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.45f ,0f ,-0.05f ,-0.6f ,0f });
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,-0.6f ,0f ,-0.05f ,-0.9f ,0f });
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,-0.9f ,0f ,-0.05f ,-1.05f ,0f });
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,-1.05f ,0f ,-0.05f ,-1.12f ,0f });
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,-1.12f ,0f ,-0.05f ,-1.16f ,0f });
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat54 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,-0.4f ,0f ,-0.15f ,-0.6f ,0f });
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f60 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f ,-0.6f ,0f ,-0.15f ,-0.9f ,0f });
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f64 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f ,-0.9f ,0f ,-0.15f ,-1.05f ,0f });
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f ,-1.05f ,0f ,-0.15f ,-1.13f ,0f });
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat70 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f ,-1.13f ,0f ,-0.15f ,-1.16f ,0f });
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.3f ,0f ,-0.21f ,-0.3f ,0f });
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.21f ,-0.3f ,0f ,-0.25f ,-0.58f ,0f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.21f ,-0.3f ,0f ,-0.33f ,-0.52f ,0f });
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f ,-0.58f ,0f ,-0.25f ,-0.87f ,0f });
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f ,-0.87f ,0f ,-0.25f ,-1f ,0f });
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f ,-1f ,0f ,-0.25f ,-1.1f ,0f });
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f ,-1.1f ,0f ,-0.25f ,-1.15f ,0f });
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.33f ,-0.52f ,0f ,-0.34f ,-0.8f ,0f });
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f ,-0.8f ,0f ,-0.34f ,-0.95f ,0f });
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f ,-0.95f ,0f ,-0.34f ,-1.05f ,0f });
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f ,-1.05f ,0f ,-0.34f ,-1.08f ,0f });
  }
}
}
