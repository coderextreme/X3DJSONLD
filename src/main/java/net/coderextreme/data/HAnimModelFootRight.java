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
    new HAnimModelFootRight().initialize().toFileJSON("../data/HAnimModelFootRight.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnimModelFootRight.x3d"))
        .addMeta(new meta().setName("description").setContent("Right foot, using high-fidelity definitions for H-Anim version 2.2"))
        .addMeta(new meta().setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("26 January 2015"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("warning").setContent("not yet to scale"))
        .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
        .addMeta(new meta().setName("subject").setContent("X3D H-Anim humanoid animation"))
        .addMeta(new meta().setName("warning").setContent("scene, DOCTYPE and Schema under development."))
        .addMeta(new meta().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelFootRight.x3d"))
        .addChild(new HAnimHumanoid().setName("Humanoid_Right_Foot").setDEF("Humanoid_Right_Foot").setJointBindingPositions(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f0().getArray())).setJointBindingRotations(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation1().getArray())).setJointBindingScales(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f2().getArray())).setVersion("2.0")
          .addJoints(new HAnimJoint().setName("humanoid_root").setDEF("hanim_HumanoidRoot")
            .addChild(new HAnimJoint().setName("r_talocrural_joint").setDEF("r_talocrural_joint")
              .addChild(new HAnimSegment().setName("r_talus").setDEF("r_talus")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setGeometry(new Sphere().setRadius(0.025f))
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearance")
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoTCN").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt323().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f4().getArray())))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("TCtoCC").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt325().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f6().getArray()))))))
              .addComments(new CommentsBlock("TCN"))
              .addChild(new HAnimJoint().setName("r_talocalcaneonavicular_joint").setDEF("r_talocalcaneonavicular_joint").setCenter(new float[] {0f,-0.3f,0f})
                .addChild(new HAnimSegment().setName("r_navicular").setDEF("r_navicular")
                  .addChild(new Transform().setTranslation(new float[] {0f,-0.3f,0f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt327().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f8().getArray())))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt329().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f10().getArray())))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("TCNtoCN3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3211().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f12().getArray()))))))
                .addComments(new CommentsBlock("CN1"))
                .addChild(new HAnimJoint().setName("r_cuneonavicular_joint1").setDEF("r_cuneonavicular_joint1").setCenter(new float[] {0.1f,-0.45f,0f})
                  .addChild(new HAnimSegment().setName("r_cuneiform1").setDEF("r_cuneiform1")
                    .addChild(new Transform().setTranslation(new float[] {0.1f,-0.45f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN1toTMT1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3213().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f14().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_joint1").setDEF("r_tarsometatarsal_joint1").setCenter(new float[] {0.1f,-0.6f,0f})
                    .addChild(new HAnimSegment().setName("r_metatarsal1").setDEF("r_metatarsal1")
                      .addChild(new Transform().setTranslation(new float[] {0.1f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT1toMTP1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3215().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f16().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_joint1").setDEF("r_metatarsophalangeal_joint1").setCenter(new float[] {0.1f,-0.9f,0f})
                      .addChild(new HAnimSegment().setName("r_proximal_phalanges1").setDEF("r_proximal_phalanges1")
                        .addChild(new Transform().setTranslation(new float[] {0.1f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP1toIP1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3217().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f18().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_f_Interphalangeal_joint").setDEF("r_f_Interphalangeal_joint").setCenter(new float[] {0.1f,-1.05f,0f})
                        .addChild(new HAnimSegment().setName("r_distal_phalanges1").setDEF("r_distal_phalanges1")
                          .addChild(new Transform().setTranslation(new float[] {0.1f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_f_Interphalangeal_joint").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3219().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f20().getArray()))))))))))
                .addComments(new CommentsBlock("CN2"))
                .addChild(new HAnimJoint().setName("r_cuneonavicular_joint2").setDEF("r_cuneonavicular_joint2").setCenter(new float[] {0f,-0.45f,0f})
                  .addChild(new HAnimSegment().setName("r_cuneiform2").setDEF("r_cuneiform2")
                    .addChild(new Transform().setTranslation(new float[] {0f,-0.45f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN2toTMT2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3221().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f22().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_joint2").setDEF("r_tarsometatarsal_joint2").setCenter(new float[] {-0.05f,-0.6f,0f})
                    .addChild(new HAnimSegment().setName("r_metatarsal2").setDEF("r_metatarsal2")
                      .addChild(new Transform().setTranslation(new float[] {-0.05f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT2toMTP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3223().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f24().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_joint2").setDEF("r_metatarsophalangeal_joint2").setCenter(new float[] {-0.05f,-0.9f,0f})
                      .addChild(new HAnimSegment().setName("r_proximal_phalanges2").setDEF("r_proximal_phalanges2")
                        .addChild(new Transform().setTranslation(new float[] {-0.05f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP2toPIP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3225().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f26().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_f_proximal_Interphalangeal_joint2").setDEF("r_f_proximal_Interphalangeal_joint2").setCenter(new float[] {-0.05f,-1.05f,0f})
                        .addChild(new HAnimSegment().setName("r_middle_phalanges2").setDEF("r_middle_phalanges2")
                          .addChild(new Transform().setTranslation(new float[] {-0.05f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3227().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f28().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_f_distal_Interphalangeal_joint2").setDEF("r_f_distal_Interphalangeal_joint2").setCenter(new float[] {-0.05f,-1.12f,0f})
                          .addChild(new HAnimSegment().setName("r_distal_phalanges2").setDEF("r_distal_phalanges2")
                            .addChild(new Transform().setTranslation(new float[] {-0.05f,-1.12f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_f_distal_Interphalangeal_joint2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3229().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f30().getArray())))))))))))
                .addComments(new CommentsBlock("CN3"))
                .addChild(new HAnimJoint().setName("r_cuneonavicular_joint3").setDEF("r_cuneonavicular_joint3").setCenter(new float[] {-0.1f,-0.4f,0f})
                  .addChild(new HAnimSegment().setName("r_cuneiform3").setDEF("r_cuneiform3")
                    .addChild(new Transform().setTranslation(new float[] {-0.1f,-0.4f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CN3toTMT3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3231().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f32().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_joint3").setDEF("r_tarsometatarsal_joint3").setCenter(new float[] {-0.15f,-0.6f,0f})
                    .addChild(new HAnimSegment().setName("r_metatarsal3").setDEF("r_metatarsal3")
                      .addChild(new Transform().setTranslation(new float[] {-0.15f,-0.6f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT3toMTP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3233().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f34().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_joint3").setDEF("r_metatarsophalangeal_joint3").setCenter(new float[] {-0.15f,-0.9f,0f})
                      .addChild(new HAnimSegment().setName("r_proximal_phalanges3").setDEF("r_proximal_phalanges3")
                        .addChild(new Transform().setTranslation(new float[] {-0.15f,-0.9f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP3toPIP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3235().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f36().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_f_proximal_Interphalangeal_joint3").setDEF("r_f_proximal_Interphalangeal_joint3").setCenter(new float[] {-0.15f,-1.05f,0f})
                        .addChild(new HAnimSegment().setName("r_middle_phalanges3").setDEF("r_middle_phalanges3")
                          .addChild(new Transform().setTranslation(new float[] {-0.15f,-1.05f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3237().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f38().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_f_distal_Interphalangeal_joint3").setDEF("r_f_distal_Interphalangeal_joint3").setCenter(new float[] {-0.15f,-1.13f,0f})
                          .addChild(new HAnimSegment().setName("r_distal_phalanges3").setDEF("r_distal_phalanges3")
                            .addChild(new Transform().setTranslation(new float[] {-0.15f,-1.13f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_f_distal_Interphalangeal_joint3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3239().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f40().getArray()))))))))))))
              .addComments(new CommentsBlock("CC"))
              .addChild(new HAnimJoint().setName("r_calcaneuscuboid_joint").setDEF("r_calcaneuscuboid_joint").setCenter(new float[] {-0.2f,0.3f,0f})
                .addChild(new HAnimSegment().setName("r_calcaneus").setDEF("r_calcaneus")
                  .addChild(new Transform().setTranslation(new float[] {-0.2f,0.3f,0f})
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("CCtoTT").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3241().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f42().getArray()))))))
                .addComments(new CommentsBlock("TT"))
                .addChild(new HAnimJoint().setName("r_transverse_tarsal_joint").setDEF("r_transverse_tarsal_joint").setCenter(new float[] {-0.21f,-0.3f,0f})
                  .addChild(new HAnimSegment().setName("r_cuboid").setDEF("r_cuboid")
                    .addChild(new Transform().setTranslation(new float[] {-0.21f,-0.3f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3243().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f44().getArray())))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("TTtoTMT5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3245().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f46().getArray()))))))
                  .addComments(new CommentsBlock("TMT4"))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_joint4").setDEF("r_tarsometatarsal_joint4").setCenter(new float[] {-0.25f,-0.58f,0f})
                    .addChild(new HAnimSegment().setName("r_metatarsal4").setDEF("r_metatarsal4")
                      .addChild(new Transform().setTranslation(new float[] {-0.25f,-0.58f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT4toMTP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3247().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f48().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_joint4").setDEF("r_metatarsophalangeal_joint4").setCenter(new float[] {-0.25f,-0.87f,0f})
                      .addChild(new HAnimSegment().setName("r_proximal_phalanges4").setDEF("r_proximal_phalanges4")
                        .addChild(new Transform().setTranslation(new float[] {-0.25f,-0.87f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP4toPIP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3249().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f50().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_f_proximal_Interphalangeal_joint4").setDEF("r_f_proximal_Interphalangeal_joint4").setCenter(new float[] {-0.25f,-1f,0f})
                        .addChild(new HAnimSegment().setName("r_middle_phalanges4").setDEF("r_middle_phalanges4")
                          .addChild(new Transform().setTranslation(new float[] {-0.25f,-1f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3251().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f52().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_f_distal_Interphalangeal_joint4").setDEF("r_f_distal_Interphalangeal_joint4").setCenter(new float[] {-0.25f,-1.1f,0f})
                          .addChild(new HAnimSegment().setName("r_distal_phalanges4").setDEF("r_distal_phalanges4")
                            .addChild(new Transform().setTranslation(new float[] {-0.25f,-1.1f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_f_distal_Interphalangeal_joint4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3253().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f54().getArray()))))))))))
                  .addComments(new CommentsBlock("TMT5"))
                  .addChild(new HAnimJoint().setName("r_tarsometatarsal_joint5").setDEF("r_tarsometatarsal_joint5").setCenter(new float[] {-0.33f,-0.52f,0f})
                    .addChild(new HAnimSegment().setName("r_metatarsal5").setDEF("r_metatarsal5")
                      .addChild(new Transform().setTranslation(new float[] {-0.33f,-0.52f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("TMT5toMTP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3255().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f56().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_joint5").setDEF("r_metatarsophalangeal_joint5").setCenter(new float[] {-0.34f,-0.8f,0f})
                      .addChild(new HAnimSegment().setName("r_proximal_phalanges5").setDEF("r_proximal_phalanges5")
                        .addChild(new Transform().setTranslation(new float[] {-0.34f,-0.8f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("MTP5toPIP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3257().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f58().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_f_proximal_Interphalangeal_joint5").setDEF("r_f_proximal_Interphalangeal_joint5").setCenter(new float[] {-0.34f,-0.95f,0f})
                        .addChild(new HAnimSegment().setName("r_middle_phalanges5").setDEF("r_middle_phalanges5")
                          .addChild(new Transform().setTranslation(new float[] {-0.34f,-0.95f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3259().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f60().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_f_distal_Interphalangeal_joint5").setDEF("r_f_distal_Interphalangeal_joint5").setCenter(new float[] {-0.34f,-1.05f,0f})
                          .addChild(new HAnimSegment().setName("r_distal_phalanges5").setDEF("r_distal_phalanges5")
                            .addChild(new Transform().setTranslation(new float[] {-0.34f,-1.05f,0f})
                              .addChild(new Shape().setUSE("HAnimJointShape")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSet().setDEF("tiptoe_r_f_distal_Interphalangeal_joint5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3261().getArray()))
                                .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f62().getArray()))))))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJoint().setUSE("r_talocrural_joint"))
          .addJoints(new HAnimJoint().setUSE("r_talocalcaneonavicular_joint"))
          .addJoints(new HAnimJoint().setUSE("r_cuneonavicular_joint1"))
          .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint1"))
          .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint1"))
          .addJoints(new HAnimJoint().setUSE("r_f_Interphalangeal_joint"))
          .addJoints(new HAnimJoint().setUSE("r_cuneonavicular_joint2"))
          .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint2"))
          .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint2"))
          .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint2"))
          .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint2"))
          .addJoints(new HAnimJoint().setUSE("r_cuneonavicular_joint3"))
          .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint3"))
          .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint3"))
          .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint3"))
          .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint3"))
          .addJoints(new HAnimJoint().setUSE("r_calcaneuscuboid_joint"))
          .addJoints(new HAnimJoint().setUSE("r_transverse_tarsal_joint"))
          .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint4"))
          .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint4"))
          .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint4"))
          .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint4"))
          .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint5"))
          .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint5"))
          .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint5"))
          .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint5"))
          .addSegments(new HAnimSegment().setUSE("r_talus"))
          .addSegments(new HAnimSegment().setUSE("r_navicular"))
          .addSegments(new HAnimSegment().setUSE("r_cuneiform1"))
          .addSegments(new HAnimSegment().setUSE("r_metatarsal1"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges1"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges1"))
          .addSegments(new HAnimSegment().setUSE("r_cuneiform2"))
          .addSegments(new HAnimSegment().setUSE("r_metatarsal2"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("r_cuneiform3"))
          .addSegments(new HAnimSegment().setUSE("r_metatarsal3"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("r_calcaneus"))
          .addSegments(new HAnimSegment().setUSE("r_cuboid"))
          .addSegments(new HAnimSegment().setUSE("r_metatarsal4"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges4"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges4"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges4"))
          .addSegments(new HAnimSegment().setUSE("r_metatarsal5"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges5"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges5"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges5"))))      ;
    return X3D0;
    }
protected class MFVec3f0 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f});
  }
}
protected class MFRotation1 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,1f,1f});
  }
}
protected class MFInt323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.3f,0f});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,-0.2f,0.3f,0f});
  }
}
protected class MFInt327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f8 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,0.1f,-0.45f,0f});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f10 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,0f,-0.45f,0f});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.3f,0f,-0.1f,-0.4f,0f});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f14 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-0.45f,0f,0.1f,-0.6f,0f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-0.6f,0f,0.1f,-0.9f,0f});
  }
}
protected class MFInt3217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f18 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-0.9f,0f,0.1f,-1.05f,0f});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f20 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,-1.05f,0f,0.1f,-1.1f,0f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f22 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.45f,0f,-0.05f,-0.6f,0f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-0.6f,0f,-0.05f,-0.9f,0f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-0.9f,0f,-0.05f,-1.05f,0f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-1.05f,0f,-0.05f,-1.12f,0f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,-1.12f,0f,-0.05f,-1.16f,0f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,-0.4f,0f,-0.15f,-0.6f,0f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-0.6f,0f,-0.15f,-0.9f,0f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-0.9f,0f,-0.15f,-1.05f,0f});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f38 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-1.05f,0f,-0.15f,-1.13f,0f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,-1.13f,0f,-0.15f,-1.16f,0f});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.3f,0f,-0.21f,-0.3f,0f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.21f,-0.3f,0f,-0.25f,-0.58f,0f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f46 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.21f,-0.3f,0f,-0.33f,-0.52f,0f});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-0.58f,0f,-0.25f,-0.87f,0f});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-0.87f,0f,-0.25f,-1f,0f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-1f,0f,-0.25f,-1.1f,0f});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f54 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,-1.1f,0f,-0.25f,-1.15f,0f});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.33f,-0.52f,0f,-0.34f,-0.8f,0f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f58 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f,-0.8f,0f,-0.34f,-0.95f,0f});
  }
}
protected class MFInt3259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f60 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f,-0.95f,0f,-0.34f,-1.05f,0f});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f62 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.34f,-1.05f,0f,-0.34f,-1.08f,0f});
  }
}
}
