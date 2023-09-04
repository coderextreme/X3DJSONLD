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
public class HAnimModelFootLeft {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new HAnimModelFootLeft().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/HAnimModelFootLeft.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HAnimModelFootLeft.x3d"))
        .addMeta(new meta().setName("description").setContent("Left foot, using high-fidelity definitions for HAnim version 2.0"))
        .addMeta(new meta().setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("created").setContent("26 January 2015"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("warning").setContent("not yet to scale"))
        .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta(new meta().setName("info").setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
        .addMeta(new meta().setName("subject").setContent("X3D HAnim humanoid animation"))
        .addMeta(new meta().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelFootLeft.x3d"))
        .addChild(new HAnimHumanoid().setDEF("hanim_Foot_Left").setVersion("2.0").setName("Foot_Left").setLoa(4)
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addMetadata(new MetadataString().setName("authorName")))
          .addSkeleton(new HAnimJoint("hanim_Foot_Left").setDEF("hanim_humanoid_root").setName("humanoid_root")
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_l_talocrural").setDescription("connection joint of foot to leg above").setName("l_talocrural")
              .addChild(new HAnimSegment("hanim_l_talocrural").setDEF("hanim_l_talus").setName("l_talus")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))
                    .setGeometry(new Sphere().setRadius(0.025f))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoTCN").setCoordIndex(new MFInt320().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f1().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoCC").setCoordIndex(new MFInt322().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray())))))
              .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_talocalcaneonavicular").setName("l_talocalcaneonavicular").setCenter(new float[] {0f,-0.3f,0f})
                .addChild(new HAnimSegment("hanim_l_talocalcaneonavicular").setDEF("hanim_l_navicular").setName("l_navicular")
                  .addChild(new Transform().setTranslation(new float[] {0f,-0.3f,0f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN1").setCoordIndex(new MFInt324().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN2").setCoordIndex(new MFInt326().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f7().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN3").setCoordIndex(new MFInt328().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))))
                .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_1").setName("l_cuneonavicular_1").setCenter(new float[] {-0.1f,-0.45f,0f})
                  .addChild(new HAnimSegment("hanim_l_cuneonavicular_1").setDEF("hanim_l_cuneiform_1").setName("l_cuneiform_1")
                    .addChild(new Transform().setTranslation(new float[] {-0.1f,-0.45f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN1toTMT1").setCoordIndex(new MFInt3210().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setDEF("hanim_l_tarsometatarsal_1").setName("l_tarsometatarsal_1").setCenter(new float[] {-0.1f,-0.6f,0f})
                    .addChild(new HAnimSegment("hanim_l_tarsometatarsal_1").setDEF("hanim_l_metatarsal_1").setName("l_metatarsal_1")
                      .addChild(new Transform().setTranslation(new float[] {-0.1f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT1toMTP1").setCoordIndex(new MFInt3212().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f13().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setDEF("hanim_l_metatarsophalangeal_1").setName("l_metatarsophalangeal_1").setCenter(new float[] {-0.1f,-0.9f,0f})
                      .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_1").setDEF("hanim_l_tarsal_proximal_phalanx_1").setName("l_tarsal_proximal_phalanx_1")
                        .addChild(new Transform().setTranslation(new float[] {-0.1f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP1toIP1").setCoordIndex(new MFInt3214().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f15().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setDEF("hanim_l_tarsal_interphalangeal_1").setName("l_tarsal_interphalangeal_1").setCenter(new float[] {-0.1f,-1.05f,0f})
                        .addChild(new HAnimSegment("hanim_l_tarsal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_phalanx_1").setName("l_tarsal_distal_phalanx_1")
                          .addChild(new Transform().setTranslation(new float[] {-0.1f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("tiptoe_l_tarsal_distal_interphalangeal_1").setCoordIndex(new MFInt3216().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray())))))))))
                .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_2").setName("l_cuneonavicular_2").setCenter(new float[] {0f,-0.45f,0f})
                  .addChild(new HAnimSegment("hanim_l_cuneonavicular_2").setDEF("hanim_l_cuneiform_2").setName("l_cuneiform_2")
                    .addChild(new Transform().setTranslation(new float[] {0f,-0.45f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN2toTMT2").setCoordIndex(new MFInt3218().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f19().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setDEF("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(new float[] {0.05f,-0.6f,0f})
                    .addChild(new HAnimSegment("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsal_2").setName("l_metatarsal_2")
                      .addChild(new Transform().setTranslation(new float[] {0.05f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT2toMTP2").setCoordIndex(new MFInt3220().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f21().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setDEF("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(new float[] {0.05f,-0.9f,0f})
                      .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2")
                        .addChild(new Transform().setTranslation(new float[] {0.05f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP2toPIP2").setCoordIndex(new MFInt3222().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setDEF("hanim_l_tarsal_proximal_interphalangeal_1").setName("l_tarsal_proximal_interphalangeal_2").setCenter(new float[] {0.05f,-1.05f,0f})
                        .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_1").setDEF("hanim_l_tarsal_middle_phalanx_1").setName("l_tarsal_middle_phalanx_2")
                          .addChild(new Transform().setTranslation(new float[] {0.05f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new MFInt3224().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f25().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_interphalangeal_1").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.05f,-1.12f,0f})
                          .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_1").setDEF("hanim_l_tarsal_distal_phalanx_2").setName("l_tarsal_distal_phalanx_2")
                            .addChild(new Transform().setTranslation(new float[] {0.05f,-1.12f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_l_tarsal_distal_phalanx_1").setCoordIndex(new MFInt3226().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f27().getArray()))))))))))
                .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setDEF("hanim_l_cuneonavicular_3").setName("l_cuneonavicular_3").setCenter(new float[] {0.1f,-0.4f,0f})
                  .addChild(new HAnimSegment("hanim_l_cuneonavicular_3").setDEF("hanim_l_cuneiform_3").setName("l_cuneiform_3")
                    .addChild(new Transform().setTranslation(new float[] {0.1f,-0.4f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN3toTMT3").setCoordIndex(new MFInt3228().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setDEF("hanim_l_tarsometatarsal_3").setName("l_tarsometatarsal_3").setCenter(new float[] {0.15f,-0.6f,0f})
                    .addChild(new HAnimSegment("hanim_l_tarsometatarsal_3").setDEF("hanim_l_metatarsal_3").setName("l_metatarsal_3")
                      .addChild(new Transform().setTranslation(new float[] {0.15f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT3toMTP3").setCoordIndex(new MFInt3230().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f31().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setDEF("hanim_l_metatarsophalangeal_3").setName("l_metatarsophalangeal_3").setCenter(new float[] {0.15f,-0.9f,0f})
                      .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_3").setDEF("hanim_l_tarsal_proximal_phalanx_3").setName("l_tarsal_proximal_phalanx_3")
                        .addChild(new Transform().setTranslation(new float[] {0.15f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP3toPIP3").setCoordIndex(new MFInt3232().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setDEF("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_proximal_interphalangeal_3").setCenter(new float[] {0.15f,-1.05f,0f})
                        .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_middle_phalanx_2").setName("l_tarsal_middle_phalanx_3")
                          .addChild(new Transform().setTranslation(new float[] {0.15f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new MFInt3234().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_3").setCenter(new float[] {0.15f,-1.13f,0f})
                          .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_phalanx_3").setName("l_tarsal_distal_phalanx_3")
                            .addChild(new Transform().setTranslation(new float[] {0.15f,-1.13f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_l_tarsal_distal_interphalangeal_2").setCoordIndex(new MFInt3236().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f37().getArray())))))))))))
              .addChild(new HAnimJoint("hanim_l_talocrural").setDEF("hanim_l_calcaneocuboid").setName("l_calcaneocuboid").setCenter(new float[] {0.2f,0.3f,0f})
                .addChild(new HAnimSegment("hanim_l_calcaneocuboid").setDEF("hanim_l_calcaneus").setName("l_calcaneus")
                  .addChild(new Transform().setTranslation(new float[] {0.2f,0.3f,0f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("CCtoTT").setCoordIndex(new MFInt3238().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f39().getArray())))))
                .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setDEF("hanim_l_transversetarsal").setName("l_transversetarsal").setCenter(new float[] {0.21f,-0.3f,0f})
                  .addChild(new HAnimSegment("hanim_l_transversetarsal").setDEF("hanim_l_cuboid").setName("l_cuboid")
                    .addChild(new Transform().setTranslation(new float[] {0.21f,-0.3f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT4").setCoordIndex(new MFInt3240().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT5").setCoordIndex(new MFInt3242().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f43().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_4").setName("l_tarsometatarsal_4").setCenter(new float[] {0.25f,-0.58f,0f})
                    .addChild(new HAnimSegment("hanim_l_tarsometatarsal_4").setDEF("hanim_l_metatarsal_4").setName("l_metatarsal_4")
                      .addChild(new Transform().setTranslation(new float[] {0.25f,-0.58f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT4toMTP4").setCoordIndex(new MFInt3244().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f45().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setDEF("hanim_l_metatarsophalangeal_4").setName("l_metatarsophalangeal_4").setCenter(new float[] {0.25f,-0.87f,0f})
                      .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_4").setDEF("hanim_l_tarsal_proximal_phalanx_4").setName("l_tarsal_proximal_phalanx_4")
                        .addChild(new Transform().setTranslation(new float[] {0.25f,-0.87f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP4toPIP4").setCoordIndex(new MFInt3246().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setDEF("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_proximal_interphalangeal_4").setCenter(new float[] {0.25f,-1f,0f})
                        .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_middle_phalanx_3").setName("l_tarsal_middle_phalanx_4")
                          .addChild(new Transform().setTranslation(new float[] {0.25f,-1f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new MFInt3248().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_4").setCenter(new float[] {0.25f,-1.1f,0f})
                          .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_3").setDEF("hanim_l_tarsal_distal_phalanx_4").setName("l_tarsal_distal_phalanx_4")
                            .addChild(new Transform().setTranslation(new float[] {0.25f,-1.1f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_l_tarsal_distal_interphalangeal_3").setCoordIndex(new MFInt3250().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f51().getArray())))))))))
                  .addChild(new HAnimJoint("hanim_l_transversetarsal").setDEF("hanim_l_tarsometatarsal_5").setName("l_tarsometatarsal_5").setCenter(new float[] {0.33f,-0.52f,0f})
                    .addChild(new HAnimSegment("hanim_l_tarsometatarsal_5").setDEF("hanim_l_metatarsal_5").setName("l_metatarsal_5")
                      .addChild(new Transform().setTranslation(new float[] {0.33f,-0.52f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT5toMTP5").setCoordIndex(new MFInt3252().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setDEF("hanim_l_metatarsophalangeal_5").setName("l_metatarsophalangeal_5").setCenter(new float[] {0.34f,-0.8f,0f})
                      .addChild(new HAnimSegment("hanim_l_metatarsophalangeal_5").setDEF("hanim_l_tarsal_proximal_phalanx_5").setName("l_tarsal_proximal_phalanx_5")
                        .addChild(new Transform().setTranslation(new float[] {0.34f,-0.8f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP5toPIP5").setCoordIndex(new MFInt3254().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f55().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setDEF("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_proximal_interphalangeal_5").setCenter(new float[] {0.34f,-0.95f,0f})
                        .addChild(new HAnimSegment("hanim_l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_middle_phalanx_4").setName("l_tarsal_middle_phalanx_5")
                          .addChild(new Transform().setTranslation(new float[] {0.34f,-0.95f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new MFInt3256().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f57().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_5").setCenter(new float[] {0.34f,-1.05f,0f})
                          .addChild(new HAnimSegment("hanim_l_tarsal_distal_interphalangeal_4").setDEF("hanim_l_tarsal_distal_phalanx_5").setName("l_tarsal_distal_phalanx_5")
                            .addChild(new Transform().setTranslation(new float[] {0.34f,-1.05f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_l_tarsal_distal_interphalangeal_4").setCoordIndex(new MFInt3258().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f59().getArray())))))))))))))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_calcaneus"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_cuboid"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_cuneiform_1"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_cuneiform_2"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_cuneiform_3"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_metatarsal_1"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_metatarsal_3"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_metatarsal_4"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_metatarsal_5"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_navicular"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_middle_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_phalanx_5"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_calcaneocuboid"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_cuneonavicular_1"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_cuneonavicular_2"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_cuneonavicular_3"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_metatarsophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_metatarsophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_metatarsophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_metatarsophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_talocalcaneonavicular"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsometatarsal_1"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsometatarsal_2"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsometatarsal_3"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsometatarsal_4"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_tarsometatarsal_5"))
          .addJoints(new HAnimJoint("hanim_Foot_Left").setUSE("hanim_l_transversetarsal"))))      ;
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.3f,0f});
  }
}
private class MFInt322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.2f,0.3f,0f});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,-0.1f,-0.45f,0f});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,0f,-0.45f,0f});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,0.1f,-0.4f,0f});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f11 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,-0.45f,0f,-0.1f,-0.6f,0f});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f13 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,-0.6f,0f,-0.1f,-0.9f,0f});
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f15 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,-0.9f,0f,-0.1f,-1.05f,0f});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,-1.05f,0f,-0.1f,-1.1f,0f});
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f19 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.45f,0f,0.05f,-0.6f,0f});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f21 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.05f,-0.6f,0f,0.05f,-0.9f,0f});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f23 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.05f,-0.9f,0f,0.05f,-1.05f,0f});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f25 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.05f,-1.05f,0f,0.05f,-1.12f,0f});
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f27 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.05f,-1.12f,0f,0.05f,-1.16f,0f});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f29 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-0.4f,0f,0.15f,-0.6f,0f});
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f31 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,-0.6f,0f,0.15f,-0.9f,0f});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f33 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,-0.9f,0f,0.15f,-1.05f,0f});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f35 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,-1.05f,0f,0.15f,-1.13f,0f});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f37 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,-1.13f,0f,0.15f,-1.16f,0f});
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f39 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f,0.3f,0f,0.21f,-0.3f,0f});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.21f,-0.3f,0f,0.25f,-0.58f,0f});
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f43 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.21f,-0.3f,0f,0.33f,-0.52f,0f});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f45 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f,-0.58f,0f,0.25f,-0.87f,0f});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f47 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f,-0.87f,0f,0.25f,-1f,0f});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f,-1f,0f,0.25f,-1.1f,0f});
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f51 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f,-1.1f,0f,0.25f,-1.15f,0f});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.33f,-0.52f,0f,0.34f,-0.8f,0f});
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f55 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.34f,-0.8f,0f,0.34f,-0.95f,0f});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f57 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.34f,-0.95f,0f,0.34f,-1.05f,0f});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f59 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.34f,-1.05f,0f,0.34f,-1.08f,0f});
  }
}
}
