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
public class HAnimModelFootRight {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new HAnimModelFootRight().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/HAnimModelFootRight.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnimModelFootRight.x3d"))
        .addMeta(new meta().setName("description").setContent("Right foot, using high-fidelity definitions for HAnim version 2.0"))
        .addMeta(new meta().setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("created").setContent("26 January 2015"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("warning").setContent("not yet to scale"))
        .addMeta(new meta().setName("TODO").setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4"))
        .addMeta(new meta().setName("TODO").setContent("Add links to figures"))
        .addMeta(new meta().setName("TODO").setContent("Add Viewpoints to enable inspection"))
        .addMeta(new meta().setName("info").setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
        .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
        .addMeta(new meta().setName("subject").setContent("X3D HAnim humanoid animation"))
        .addMeta(new meta().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelFootRight.x3d"))
        .addChild(new HAnimHumanoid().setName("Foot_Right").setDEF("hanim_Foot_Right").setLoa(4).setVersion("2.0")
          .addComments("original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorName").setValue(new MFString0().getArray())))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setUlimit(new MFFloat1().getArray()).setLlimit(new MFFloat2().getArray())
            .addComments("Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model")
            .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setDescription("connection joint of foot to leg above").setUlimit(new MFFloat3().getArray()).setLlimit(new MFFloat4().getArray())
              .addChild(new HAnimSegment().setName("r_talus").setDEF("hanim_r_talus")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setGeometry(new Sphere().setRadius(0.025f))
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoTCN").setCoordIndex(new MFInt325().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoCC").setCoordIndex(new MFInt327().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray())))))
              .addComments("TCN")
              .addChild(new HAnimJoint().setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new float[] {0f,-0.3f,0f}).setUlimit(new MFFloat9().getArray()).setLlimit(new MFFloat10().getArray())
                .addChild(new HAnimSegment().setName("r_navicular").setDEF("hanim_r_navicular")
                  .addChild(new Transform().setTranslation(new float[] {0f,-0.3f,0f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN1").setCoordIndex(new MFInt3211().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN2").setCoordIndex(new MFInt3213().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN3").setCoordIndex(new MFInt3215().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray())))))
                .addComments("CN1")
                .addChild(new HAnimJoint().setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new float[] {0.1f,-0.45f,0f}).setUlimit(new MFFloat17().getArray()).setLlimit(new MFFloat18().getArray())
                  .addChild(new HAnimSegment().setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                    .addChild(new Transform().setTranslation(new float[] {0.1f,-0.45f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN1toTMT1").setCoordIndex(new MFInt3219().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray())))))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new float[] {0.1f,-0.6f,0f}).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray())
                    .addChild(new HAnimSegment().setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                      .addChild(new Transform().setTranslation(new float[] {0.1f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT1toMTP1").setCoordIndex(new MFInt3223().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray())))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new float[] {0.1f,-0.9f,0f}).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                      .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                        .addChild(new Transform().setTranslation(new float[] {0.1f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP1toIP1").setCoordIndex(new MFInt3227().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray())))))
                      .addChild(new HAnimJoint().setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setCenter(new float[] {0.1f,-1.05f,0f}).setUlimit(new MFFloat29().getArray()).setLlimit(new MFFloat30().getArray())
                        .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1")
                          .addChild(new Transform().setTranslation(new float[] {0.1f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_interphalangeal_").setCoordIndex(new MFInt3231().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))))))
                .addComments("CN2")
                .addChild(new HAnimJoint().setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new float[] {0f,-0.45f,0f}).setUlimit(new MFFloat33().getArray()).setLlimit(new MFFloat34().getArray())
                  .addChild(new HAnimSegment().setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                    .addChild(new Transform().setTranslation(new float[] {0f,-0.45f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN2toTMT2").setCoordIndex(new MFInt3235().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray())))))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new float[] {-0.05f,-0.6f,0f}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                    .addChild(new HAnimSegment().setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                      .addChild(new Transform().setTranslation(new float[] {-0.05f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT2toMTP2").setCoordIndex(new MFInt3239().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray())))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-0.05f,-0.9f,0f}).setUlimit(new MFFloat41().getArray()).setLlimit(new MFFloat42().getArray())
                      .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                        .addChild(new Transform().setTranslation(new float[] {-0.05f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP2toPIP2").setCoordIndex(new MFInt3243().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray())))))
                      .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new float[] {-0.05f,-1.05f,0f}).setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                        .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                          .addChild(new Transform().setTranslation(new float[] {-0.05f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new MFInt3247().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray())))))
                        .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.05f,-1.12f,0f}).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2")
                            .addChild(new Transform().setTranslation(new float[] {-0.05f,-1.12f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_2").setCoordIndex(new MFInt3251().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))))))))))
                .addComments("CN3")
                .addChild(new HAnimJoint().setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new float[] {-0.1f,-0.4f,0f}).setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                  .addChild(new HAnimSegment().setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                    .addChild(new Transform().setTranslation(new float[] {-0.1f,-0.4f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN3toTMT3").setCoordIndex(new MFInt3255().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray())))))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new float[] {-0.15f,-0.6f,0f}).setUlimit(new MFFloat57().getArray()).setLlimit(new MFFloat58().getArray())
                    .addChild(new HAnimSegment().setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                      .addChild(new Transform().setTranslation(new float[] {-0.15f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT3toMTP3").setCoordIndex(new MFInt3259().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray())))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new float[] {-0.15f,-0.9f,0f}).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
                      .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                        .addChild(new Transform().setTranslation(new float[] {-0.15f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP3toPIP3").setCoordIndex(new MFInt3263().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f64().getArray())))))
                      .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new float[] {-0.15f,-1.05f,0f}).setUlimit(new MFFloat65().getArray()).setLlimit(new MFFloat66().getArray())
                        .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                          .addChild(new Transform().setTranslation(new float[] {-0.15f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new MFInt3267().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray())))))
                        .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new float[] {-0.15f,-1.13f,0f}).setUlimit(new MFFloat69().getArray()).setLlimit(new MFFloat70().getArray())
                          .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3")
                            .addChild(new Transform().setTranslation(new float[] {-0.15f,-1.13f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_3").setCoordIndex(new MFInt3271().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray())))))))))))
              .addComments("CC")
              .addChild(new HAnimJoint().setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new float[] {-0.2f,0.3f,0f}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                .addChild(new HAnimSegment().setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                  .addChild(new Transform().setTranslation(new float[] {-0.2f,0.3f,0f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("CCtoTT").setCoordIndex(new MFInt3275().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray())))))
                .addComments("TT")
                .addChild(new HAnimJoint().setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new float[] {-0.21f,-0.3f,0f}).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                  .addChild(new HAnimSegment().setName("r_cuboid").setDEF("hanim_r_cuboid")
                    .addChild(new Transform().setTranslation(new float[] {-0.21f,-0.3f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT4").setCoordIndex(new MFInt3279().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT5").setCoordIndex(new MFInt3281().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray())))))
                  .addComments("TMT4")
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new float[] {-0.25f,-0.58f,0f}).setUlimit(new MFFloat83().getArray()).setLlimit(new MFFloat84().getArray())
                    .addChild(new HAnimSegment().setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                      .addChild(new Transform().setTranslation(new float[] {-0.25f,-0.58f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT4toMTP4").setCoordIndex(new MFInt3285().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray())))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new float[] {-0.25f,-0.87f,0f}).setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray())
                      .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                        .addChild(new Transform().setTranslation(new float[] {-0.25f,-0.87f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP4toPIP4").setCoordIndex(new MFInt3289().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray())))))
                      .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new float[] {-0.25f,-1f,0f}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                        .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                          .addChild(new Transform().setTranslation(new float[] {-0.25f,-1f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new MFInt3293().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray())))))
                        .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new float[] {-0.25f,-1.1f,0f}).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                          .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4")
                            .addChild(new Transform().setTranslation(new float[] {-0.25f,-1.1f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_4").setCoordIndex(new MFInt3297().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray())))))))))
                  .addComments("TMT5")
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new float[] {-0.33f,-0.52f,0f}).setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray())
                    .addChild(new HAnimSegment().setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                      .addChild(new Transform().setTranslation(new float[] {-0.33f,-0.52f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT5toMTP5").setCoordIndex(new MFInt32101().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray())))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new float[] {-0.34f,-0.8f,0f}).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                      .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                        .addChild(new Transform().setTranslation(new float[] {-0.34f,-0.8f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP5toPIP5").setCoordIndex(new MFInt32105().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray())))))
                      .addChild(new HAnimJoint().setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new float[] {-0.34f,-0.95f,0f}).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                        .addChild(new HAnimSegment().setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                          .addChild(new Transform().setTranslation(new float[] {-0.34f,-0.95f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new MFInt32109().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray())))))
                        .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new float[] {-0.34f,-1.05f,0f}).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                          .addChild(new HAnimSegment().setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5")
                            .addChild(new Transform().setTranslation(new float[] {-0.34f,-1.05f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_5").setCoordIndex(new MFInt32113().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray())))))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_calcaneocuboid"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_transversetarsal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuboid"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_navicular"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_5"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kwan-Hee YOO, Don Brutzman and Joe Williams"});
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
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat4 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.3f,0f});
  }
}
protected class MFInt327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f8 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,-0.2f,0.3f,0f});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,0.1f,-0.45f,0f});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f14 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,0f,-0.45f,0f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,-0.1f,-0.4f,0f});
  }
}
protected class MFFloat17 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f20 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-0.45f,0f,0.1f,-0.6f,0f});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-0.6f,0f,0.1f,-0.9f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-0.9f,0f,0.1f,-1.05f,0f});
  }
}
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-1.05f,0f,0.1f,-1.1f,0f});
  }
}
protected class MFFloat33 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.45f,0f,-0.05f,-0.6f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-0.6f,0f,-0.05f,-0.9f,0f});
  }
}
protected class MFFloat41 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat42 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-0.9f,0f,-0.05f,-1.05f,0f});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat46 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-1.05f,0f,-0.05f,-1.12f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-1.12f,0f,-0.05f,-1.16f,0f});
  }
}
protected class MFFloat53 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat54 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,-0.4f,0f,-0.15f,-0.6f,0f});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat58 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f60 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-0.6f,0f,-0.15f,-0.9f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f64 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-0.9f,0f,-0.15f,-1.05f,0f});
  }
}
protected class MFFloat65 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat66 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f68 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-1.05f,0f,-0.15f,-1.13f,0f});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat70 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f72 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-1.13f,0f,-0.15f,-1.16f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f76 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.3f,0f,-0.21f,-0.3f,0f});
  }
}
protected class MFFloat77 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat78 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3279 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f80 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.21f,-0.3f,0f,-0.25f,-0.58f,0f});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f82 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.21f,-0.3f,0f,-0.33f,-0.52f,0f});
  }
}
protected class MFFloat83 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat84 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f86 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-0.58f,0f,-0.25f,-0.87f,0f});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat88 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f90 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-0.87f,0f,-0.25f,-1f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f94 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-1f,0f,-0.25f,-1.1f,0f});
  }
}
protected class MFFloat95 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat96 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f98 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-1.1f,0f,-0.25f,-1.15f,0f});
  }
}
protected class MFFloat99 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat100 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32101 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f102 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.33f,-0.52f,0f,-0.34f,-0.8f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f106 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f,-0.8f,0f,-0.34f,-0.95f,0f});
  }
}
protected class MFFloat107 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32109 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f110 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f,-0.95f,0f,-0.34f,-1.05f,0f});
  }
}
protected class MFFloat111 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32113 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f114 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f,-1.05f,0f,-0.34f,-1.08f,0f});
  }
}
}
