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
    model.toFileJSON("../data/HAnimModelFootRight.new.java.json");
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
          .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setName("humanoid_root").setDEF("hanim_humanoid_root").setUlimit(new MFFloat1().getArray()).setLlimit(new MFFloat2().getArray()).setContainerFieldOverride("skeleton"))
            .addComments("Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model")
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("r_talocrural").setDEF("hanim_r_talocrural").setDescription("connection joint of foot to leg above").setUlimit(new MFFloat3().getArray()).setLlimit(new MFFloat4().getArray())
              .addChild(new HAnimSegment("hanim_r_talocrural").setName("r_talus").setDEF("hanim_r_talus")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setGeometry(new Sphere().setRadius(0.025))
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                      .setMaterial(new Material().setDiffuseColor(new double[] {0,0,1})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoTCN").setCoordIndex(new MFInt325().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoCC").setCoordIndex(new MFInt327().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray())))))
              .addComments("TCN")
              .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocalcaneonavicular").setDEF("hanim_r_talocalcaneonavicular").setCenter(new double[] {0,-0.3,0}).setUlimit(new MFFloat9().getArray()).setLlimit(new MFFloat10().getArray())
                .addChild(new HAnimSegment("hanim_r_talocalcaneonavicular").setName("r_navicular").setDEF("hanim_r_navicular")
                  .addChild(new Transform().setTranslation(new double[] {0,-0.3,0})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN1").setCoordIndex(new MFInt3211().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN2").setCoordIndex(new MFInt3213().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN3").setCoordIndex(new MFInt3215().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray())))))
                .addComments("CN1")
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_1").setDEF("hanim_r_cuneonavicular_1").setCenter(new double[] {0.1,-0.45,0}).setUlimit(new MFFloat17().getArray()).setLlimit(new MFFloat18().getArray())
                  .addChild(new HAnimSegment("hanim_r_cuneonavicular_1").setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1")
                    .addChild(new Transform().setTranslation(new double[] {0.1,-0.45,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CN1toTMT1").setCoordIndex(new MFInt3219().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_tarsometatarsal_1").setDEF("hanim_r_tarsometatarsal_1").setCenter(new double[] {0.1,-0.6,0}).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_1").setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1")
                      .addChild(new Transform().setTranslation(new double[] {0.1,-0.6,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT1toMTP1").setCoordIndex(new MFInt3223().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_metatarsophalangeal_1").setDEF("hanim_r_metatarsophalangeal_1").setCenter(new double[] {0.1,-0.9,0}).setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_1").setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1")
                        .addChild(new Transform().setTranslation(new double[] {0.1,-0.9,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP1toIP1").setCoordIndex(new MFInt3227().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_tarsal_interphalangeal_1").setDEF("hanim_r_tarsal_interphalangeal_1").setCenter(new double[] {0.1,-1.05,0}).setUlimit(new MFFloat29().getArray()).setLlimit(new MFFloat30().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1")
                          .addChild(new Transform().setTranslation(new double[] {0.1,-1.05,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_interphalangeal_").setCoordIndex(new MFInt3231().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))))))
                .addComments("CN2")
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_2").setDEF("hanim_r_cuneonavicular_2").setCenter(new double[] {0,-0.45,0}).setUlimit(new MFFloat33().getArray()).setLlimit(new MFFloat34().getArray())
                  .addChild(new HAnimSegment("hanim_r_cuneonavicular_2").setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2")
                    .addChild(new Transform().setTranslation(new double[] {0,-0.45,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CN2toTMT2").setCoordIndex(new MFInt3235().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_tarsometatarsal_2").setDEF("hanim_r_tarsometatarsal_2").setCenter(new double[] {-0.05,-0.6,0}).setUlimit(new MFFloat37().getArray()).setLlimit(new MFFloat38().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_2").setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2")
                      .addChild(new Transform().setTranslation(new double[] {-0.05,-0.6,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT2toMTP2").setCoordIndex(new MFInt3239().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new double[] {-0.05,-0.9,0}).setUlimit(new MFFloat41().getArray()).setLlimit(new MFFloat42().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                        .addChild(new Transform().setTranslation(new double[] {-0.05,-0.9,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP2toPIP2").setCoordIndex(new MFInt3243().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setDEF("hanim_r_tarsal_proximal_interphalangeal_2").setCenter(new double[] {-0.05,-1.05,0}).setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2")
                          .addChild(new Transform().setTranslation(new double[] {-0.05,-1.05,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new MFInt3247().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setDEF("hanim_r_tarsal_distal_interphalangeal_2").setCenter(new double[] {-0.05,-1.12,0}).setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2")
                            .addChild(new Transform().setTranslation(new double[] {-0.05,-1.12,0})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_2").setCoordIndex(new MFInt3251().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray()))))))))))
                .addComments("CN3")
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_cuneonavicular_3").setDEF("hanim_r_cuneonavicular_3").setCenter(new double[] {-0.1,-0.4,0}).setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                  .addChild(new HAnimSegment("hanim_r_cuneonavicular_3").setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3")
                    .addChild(new Transform().setTranslation(new double[] {-0.1,-0.4,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CN3toTMT3").setCoordIndex(new MFInt3255().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_tarsometatarsal_3").setDEF("hanim_r_tarsometatarsal_3").setCenter(new double[] {-0.15,-0.6,0}).setUlimit(new MFFloat57().getArray()).setLlimit(new MFFloat58().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_3").setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3")
                      .addChild(new Transform().setTranslation(new double[] {-0.15,-0.6,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT3toMTP3").setCoordIndex(new MFInt3259().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f60().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_metatarsophalangeal_3").setDEF("hanim_r_metatarsophalangeal_3").setCenter(new double[] {-0.15,-0.9,0}).setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3")
                        .addChild(new Transform().setTranslation(new double[] {-0.15,-0.9,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP3toPIP3").setCoordIndex(new MFInt3263().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f64().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setDEF("hanim_r_tarsal_proximal_interphalangeal_3").setCenter(new double[] {-0.15,-1.05,0}).setUlimit(new MFFloat65().getArray()).setLlimit(new MFFloat66().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3")
                          .addChild(new Transform().setTranslation(new double[] {-0.15,-1.05,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new MFInt3267().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f68().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setDEF("hanim_r_tarsal_distal_interphalangeal_3").setCenter(new double[] {-0.15,-1.13,0}).setUlimit(new MFFloat69().getArray()).setLlimit(new MFFloat70().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3")
                            .addChild(new Transform().setTranslation(new double[] {-0.15,-1.13,0})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_3").setCoordIndex(new MFInt3271().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray())))))))))))
              .addComments("CC")
              .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_calcaneocuboid").setDEF("hanim_r_calcaneocuboid").setCenter(new double[] {-0.2,0.3,0}).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                .addChild(new HAnimSegment("hanim_r_calcaneocuboid").setName("r_calcaneus").setDEF("hanim_r_calcaneus")
                  .addChild(new Transform().setTranslation(new double[] {-0.2,0.3,0})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("CCtoTT").setCoordIndex(new MFInt3275().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray())))))
                .addComments("TT")
                .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_transversetarsal").setDEF("hanim_r_transversetarsal").setCenter(new double[] {-0.21,-0.3,0}).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                  .addChild(new HAnimSegment("hanim_r_transversetarsal").setName("r_cuboid").setDEF("hanim_r_cuboid")
                    .addChild(new Transform().setTranslation(new double[] {-0.21,-0.3,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT4").setCoordIndex(new MFInt3279().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray()))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT5").setCoordIndex(new MFInt3281().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f82().getArray())))))
                  .addComments("TMT4")
                  .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_4").setDEF("hanim_r_tarsometatarsal_4").setCenter(new double[] {-0.25,-0.58,0}).setUlimit(new MFFloat83().getArray()).setLlimit(new MFFloat84().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_4").setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4")
                      .addChild(new Transform().setTranslation(new double[] {-0.25,-0.58,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT4toMTP4").setCoordIndex(new MFInt3285().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f86().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_metatarsophalangeal_4").setDEF("hanim_r_metatarsophalangeal_4").setCenter(new double[] {-0.25,-0.87,0}).setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4")
                        .addChild(new Transform().setTranslation(new double[] {-0.25,-0.87,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP4toPIP4").setCoordIndex(new MFInt3289().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f90().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setDEF("hanim_r_tarsal_proximal_interphalangeal_4").setCenter(new double[] {-0.25,-1,0}).setUlimit(new MFFloat91().getArray()).setLlimit(new MFFloat92().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4")
                          .addChild(new Transform().setTranslation(new double[] {-0.25,-1,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new MFInt3293().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f94().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setDEF("hanim_r_tarsal_distal_interphalangeal_4").setCenter(new double[] {-0.25,-1.1,0}).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4")
                            .addChild(new Transform().setTranslation(new double[] {-0.25,-1.1,0})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_4").setCoordIndex(new MFInt3297().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f98().getArray())))))))))
                  .addComments("TMT5")
                  .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_tarsometatarsal_5").setDEF("hanim_r_tarsometatarsal_5").setCenter(new double[] {-0.33,-0.52,0}).setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray())
                    .addChild(new HAnimSegment("hanim_r_tarsometatarsal_5").setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5")
                      .addChild(new Transform().setTranslation(new double[] {-0.33,-0.52,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT5toMTP5").setCoordIndex(new MFInt32101().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f102().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_metatarsophalangeal_5").setDEF("hanim_r_metatarsophalangeal_5").setCenter(new double[] {-0.34,-0.8,0}).setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray())
                      .addChild(new HAnimSegment("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5")
                        .addChild(new Transform().setTranslation(new double[] {-0.34,-0.8,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP5toPIP5").setCoordIndex(new MFInt32105().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f106().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setDEF("hanim_r_tarsal_proximal_interphalangeal_5").setCenter(new double[] {-0.34,-0.95,0}).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                        .addChild(new HAnimSegment("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5")
                          .addChild(new Transform().setTranslation(new double[] {-0.34,-0.95,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new MFInt32109().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f110().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setDEF("hanim_r_tarsal_distal_interphalangeal_5").setCenter(new double[] {-0.34,-1.05,0}).setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                          .addChild(new HAnimSegment("hanim_r_tarsal_distal_interphalangeal_5").setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5")
                            .addChild(new Transform().setTranslation(new double[] {-0.34,-1.05,0})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_tarsal_distal_interphalangeal_5").setCoordIndex(new MFInt32113().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f114().getArray())))))))))))))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_humanoid_root"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_calcaneocuboid"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneonavicular_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_talocalcaneonavicular"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_talocrural"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsometatarsal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Foot_Right").setContainerFieldOverride("joints")).setUSE("hanim_r_transversetarsal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_calcaneus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_cuboid"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_cuneiform_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_metatarsal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_navicular"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_talus"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_distal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_distal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_distal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_distal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_distal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Foot_Right").setContainerFieldOverride("segments")).setUSE("hanim_r_tarsal_proximal_phalanx_5"))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kwan-Hee YOO, Don Brutzman and Joe Williams"});
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0,-0.3,0});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,-0.2,0.3,0});
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f12 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,-0.3,0,0.1,-0.45,0});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,-0.3,0,0,-0.45,0});
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,-0.3,0,-0.1,-0.4,0});
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1,-0.45,0,0.1,-0.6,0});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1,-0.6,0,0.1,-0.9,0});
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f28 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1,-0.9,0,0.1,-1.05,0});
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1,-1.05,0,0.1,-1.1,0});
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,-0.45,0,-0.05,-0.6,0});
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.05,-0.6,0,-0.05,-0.9,0});
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.05,-0.9,0,-0.05,-1.05,0});
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.05,-1.05,0,-0.05,-1.12,0});
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.05,-1.12,0,-0.05,-1.16,0});
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat54 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,-0.4,0,-0.15,-0.6,0});
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f60 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.15,-0.6,0,-0.15,-0.9,0});
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f64 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.15,-0.9,0,-0.15,-1.05,0});
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f68 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.15,-1.05,0,-0.15,-1.13,0});
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat70 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.15,-1.13,0,-0.15,-1.16,0});
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f76 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.2,0.3,0,-0.21,-0.3,0});
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f80 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.21,-0.3,0,-0.25,-0.58,0});
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f82 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.21,-0.3,0,-0.33,-0.52,0});
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f86 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.25,-0.58,0,-0.25,-0.87,0});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f90 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.25,-0.87,0,-0.25,-1,0});
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f94 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.25,-1,0,-0.25,-1.1,0});
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f98 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.25,-1.1,0,-0.25,-1.15,0});
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f102 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.33,-0.52,0,-0.34,-0.8,0});
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f106 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.34,-0.8,0,-0.34,-0.95,0});
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f110 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.34,-0.95,0,-0.34,-1.05,0});
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0});
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f114 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.34,-1.05,0,-0.34,-1.08,0});
  }
}
}
