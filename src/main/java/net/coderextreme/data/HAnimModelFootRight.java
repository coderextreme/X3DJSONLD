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
public class HAnimModelFootRight {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HAnimModelFootRight().initialize().toFileJSON("../data/HAnimModelFootRight.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("4.0")
      .setHead(new headObject()
        .addComponent(new componentObject().setLevel(1).setName("H-Anim"))
        .addMeta(new metaObject().setContent("HAnimModelFootRight.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Right foot, using high-fidelity definitions for H-Anim version 2.2").setName("description"))
        .addMeta(new metaObject().setContent("YOO Kwan Hee and Don Brutzman").setName("creator"))
        .addMeta(new metaObject().setContent("26 January 2015").setName("created"))
        .addMeta(new metaObject().setContent("20 October 2019").setName("modified"))
        .addMeta(new metaObject().setContent("not yet to scale").setName("warning"))
        .addMeta(new metaObject().setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?").setName("warning"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim").setName("reference"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/files/specifications/19774/V1.0").setName("reference"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html").setName("reference"))
        .addMeta(new metaObject().setContent("X3D H-Anim humanoid animation").setName("subject"))
        .addMeta(new metaObject().setContent("scene, DOCTYPE and Schema under development.").setName("warning"))
        .addMeta(new metaObject().setContent("Integrate and confirm Segment/Joint names, Viewpoints.").setName("TODO"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("HAnimModelFootRight.x3d"))
        .addChild(new HAnimHumanoidObject().setDEF("Humanoid_Right_Foot").setJointBindingPositions(new MFVec3fObject(new MFVec3f0().getArray())).setJointBindingRotations(new MFRotationObject(new MFRotation1().getArray())).setJointBindingScales(new MFVec3fObject(new MFVec3f2().getArray())).setLoa(-1).setName("Humanoid_Right_Foot").setSkeletalConfiguration("BASIC").setVersion("2.0")
          .addJoints(new HAnimJointObject().setDEF("hanim_HumanoidRoot").setName("humanoid_root")
            .addChild(new HAnimJointObject().setDEF("r_talocrural_joint").setName("r_talocrural_joint")
              .addChild(new HAnimSegmentObject().setDEF("r_talus").setName("r_talus")
                .addChild(new TransformObject()
                  .addChild(new ShapeObject().setDEF("HAnimJointShape")
                    .setGeometry(new SphereObject().setRadius(0.025f))
                    .setAppearance(new AppearanceObject().setDEF("HAnimJointAppearance")
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f})))))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSetObject().setDEF("TCtoTCN").setCoordIndex(new MFInt32Object(new MFInt323().getArray()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f4().getArray())))))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSetObject().setDEF("TCtoCC").setCoordIndex(new MFInt32Object(new MFInt325().getArray()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f6().getArray()))))))
              .addComments(new CommentsBlock(" TCN "))
              .addChild(new HAnimJointObject().setDEF("r_talocalcaneonavicular_joint").setCenter(new float[] {0f,-0.3f,0f}).setName("r_talocalcaneonavicular_joint")
                .addChild(new HAnimSegmentObject().setDEF("r_navicular").setName("r_navicular")
                  .addChild(new TransformObject().setTranslation(new float[] {0f,-0.3f,0f})
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("TCNtoCN1").setCoordIndex(new MFInt32Object(new MFInt327().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f8().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("TCNtoCN2").setCoordIndex(new MFInt32Object(new MFInt329().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f10().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("TCNtoCN3").setCoordIndex(new MFInt32Object(new MFInt3211().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f12().getArray()))))))
                .addComments(new CommentsBlock(" CN1 "))
                .addChild(new HAnimJointObject().setDEF("r_cuneonavicular_joint1").setCenter(new float[] {0.1f,-0.45f,0f}).setName("r_cuneonavicular_joint1")
                  .addChild(new HAnimSegmentObject().setDEF("r_cuneiform1").setName("r_cuneiform1")
                    .addChild(new TransformObject().setTranslation(new float[] {0.1f,-0.45f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("CN1toTMT1").setCoordIndex(new MFInt32Object(new MFInt3213().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f14().getArray()))))))
                  .addChild(new HAnimJointObject().setDEF("r_tarsometatarsal_joint1").setCenter(new float[] {0.1f,-0.6f,0f}).setName("r_tarsometatarsal_joint1")
                    .addChild(new HAnimSegmentObject().setDEF("r_metatarsal1").setName("r_metatarsal1")
                      .addChild(new TransformObject().setTranslation(new float[] {0.1f,-0.6f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT1toMTP1").setCoordIndex(new MFInt32Object(new MFInt3215().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f16().getArray()))))))
                    .addChild(new HAnimJointObject().setDEF("r_metatarsophalangeal_joint1").setCenter(new float[] {0.1f,-0.9f,0f}).setName("r_metatarsophalangeal_joint1")
                      .addChild(new HAnimSegmentObject().setDEF("r_proximal_phalanges1").setName("r_proximal_phalanges1")
                        .addChild(new TransformObject().setTranslation(new float[] {0.1f,-0.9f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP1toIP1").setCoordIndex(new MFInt32Object(new MFInt3217().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f18().getArray()))))))
                      .addChild(new HAnimJointObject().setDEF("r_f_Interphalangeal_joint").setCenter(new float[] {0.1f,-1.05f,0f}).setName("r_f_Interphalangeal_joint")
                        .addChild(new HAnimSegmentObject().setDEF("r_distal_phalanges1").setName("r_distal_phalanges1")
                          .addChild(new TransformObject().setTranslation(new float[] {0.1f,-1.05f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_r_f_Interphalangeal_joint").setCoordIndex(new MFInt32Object(new MFInt3219().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f20().getArray()))))))))))
                .addComments(new CommentsBlock(" CN2 "))
                .addChild(new HAnimJointObject().setDEF("r_cuneonavicular_joint2").setCenter(new float[] {0f,-0.45f,0f}).setName("r_cuneonavicular_joint2")
                  .addChild(new HAnimSegmentObject().setDEF("r_cuneiform2").setName("r_cuneiform2")
                    .addChild(new TransformObject().setTranslation(new float[] {0f,-0.45f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("CN2toTMT2").setCoordIndex(new MFInt32Object(new MFInt3221().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f22().getArray()))))))
                  .addChild(new HAnimJointObject().setDEF("r_tarsometatarsal_joint2").setCenter(new float[] {-0.05f,-0.6f,0f}).setName("r_tarsometatarsal_joint2")
                    .addChild(new HAnimSegmentObject().setDEF("r_metatarsal2").setName("r_metatarsal2")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.05f,-0.6f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT2toMTP2").setCoordIndex(new MFInt32Object(new MFInt3223().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f24().getArray()))))))
                    .addChild(new HAnimJointObject().setDEF("r_metatarsophalangeal_joint2").setCenter(new float[] {-0.05f,-0.9f,0f}).setName("r_metatarsophalangeal_joint2")
                      .addChild(new HAnimSegmentObject().setDEF("r_proximal_phalanges2").setName("r_proximal_phalanges2")
                        .addChild(new TransformObject().setTranslation(new float[] {-0.05f,-0.9f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP2toPIP2").setCoordIndex(new MFInt32Object(new MFInt3225().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f26().getArray()))))))
                      .addChild(new HAnimJointObject().setDEF("r_f_proximal_Interphalangeal_joint2").setCenter(new float[] {-0.05f,-1.05f,0f}).setName("r_f_proximal_Interphalangeal_joint2")
                        .addChild(new HAnimSegmentObject().setDEF("r_middle_phalanges2").setName("r_middle_phalanges2")
                          .addChild(new TransformObject().setTranslation(new float[] {-0.05f,-1.05f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP2toDIP2").setCoordIndex(new MFInt32Object(new MFInt3227().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f28().getArray()))))))
                        .addChild(new HAnimJointObject().setDEF("r_f_distal_Interphalangeal_joint2").setCenter(new float[] {-0.05f,-1.12f,0f}).setName("r_f_distal_Interphalangeal_joint2")
                          .addChild(new HAnimSegmentObject().setDEF("r_distal_phalanges2").setName("r_distal_phalanges2")
                            .addChild(new TransformObject().setTranslation(new float[] {-0.05f,-1.12f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_r_f_distal_Interphalangeal_joint2").setCoordIndex(new MFInt32Object(new MFInt3229().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f30().getArray())))))))))))
                .addComments(new CommentsBlock(" CN3 "))
                .addChild(new HAnimJointObject().setDEF("r_cuneonavicular_joint3").setCenter(new float[] {-0.1f,-0.4f,0f}).setName("r_cuneonavicular_joint3")
                  .addChild(new HAnimSegmentObject().setDEF("r_cuneiform3").setName("r_cuneiform3")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.1f,-0.4f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("CN3toTMT3").setCoordIndex(new MFInt32Object(new MFInt3231().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f32().getArray()))))))
                  .addChild(new HAnimJointObject().setDEF("r_tarsometatarsal_joint3").setCenter(new float[] {-0.15f,-0.6f,0f}).setName("r_tarsometatarsal_joint3")
                    .addChild(new HAnimSegmentObject().setDEF("r_metatarsal3").setName("r_metatarsal3")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.15f,-0.6f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT3toMTP3").setCoordIndex(new MFInt32Object(new MFInt3233().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f34().getArray()))))))
                    .addChild(new HAnimJointObject().setDEF("r_metatarsophalangeal_joint3").setCenter(new float[] {-0.15f,-0.9f,0f}).setName("r_metatarsophalangeal_joint3")
                      .addChild(new HAnimSegmentObject().setDEF("r_proximal_phalanges3").setName("r_proximal_phalanges3")
                        .addChild(new TransformObject().setTranslation(new float[] {-0.15f,-0.9f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP3toPIP3").setCoordIndex(new MFInt32Object(new MFInt3235().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f36().getArray()))))))
                      .addChild(new HAnimJointObject().setDEF("r_f_proximal_Interphalangeal_joint3").setCenter(new float[] {-0.15f,-1.05f,0f}).setName("r_f_proximal_Interphalangeal_joint3")
                        .addChild(new HAnimSegmentObject().setDEF("r_middle_phalanges3").setName("r_middle_phalanges3")
                          .addChild(new TransformObject().setTranslation(new float[] {-0.15f,-1.05f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP3toDIP3").setCoordIndex(new MFInt32Object(new MFInt3237().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f38().getArray()))))))
                        .addChild(new HAnimJointObject().setDEF("r_f_distal_Interphalangeal_joint3").setCenter(new float[] {-0.15f,-1.13f,0f}).setName("r_f_distal_Interphalangeal_joint3")
                          .addChild(new HAnimSegmentObject().setDEF("r_distal_phalanges3").setName("r_distal_phalanges3")
                            .addChild(new TransformObject().setTranslation(new float[] {-0.15f,-1.13f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_r_f_distal_Interphalangeal_joint3").setCoordIndex(new MFInt32Object(new MFInt3239().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f40().getArray()))))))))))))
              .addComments(new CommentsBlock(" CC "))
              .addChild(new HAnimJointObject().setDEF("r_calcaneuscuboid_joint").setCenter(new float[] {-0.2f,0.3f,0f}).setName("r_calcaneuscuboid_joint")
                .addChild(new HAnimSegmentObject().setDEF("r_calcaneus").setName("r_calcaneus")
                  .addChild(new TransformObject().setTranslation(new float[] {-0.2f,0.3f,0f})
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("CCtoTT").setCoordIndex(new MFInt32Object(new MFInt3241().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f42().getArray()))))))
                .addComments(new CommentsBlock(" TT "))
                .addChild(new HAnimJointObject().setDEF("r_transverse_tarsal_joint").setCenter(new float[] {-0.21f,-0.3f,0f}).setName("r_transverse_tarsal_joint")
                  .addChild(new HAnimSegmentObject().setDEF("r_cuboid").setName("r_cuboid")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.21f,-0.3f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("TTtoTMT4").setCoordIndex(new MFInt32Object(new MFInt3243().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f44().getArray())))))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("TTtoTMT5").setCoordIndex(new MFInt32Object(new MFInt3245().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f46().getArray()))))))
                  .addComments(new CommentsBlock(" TMT4 "))
                  .addChild(new HAnimJointObject().setDEF("r_tarsometatarsal_joint4").setCenter(new float[] {-0.25f,-0.58f,0f}).setName("r_tarsometatarsal_joint4")
                    .addChild(new HAnimSegmentObject().setDEF("r_metatarsal4").setName("r_metatarsal4")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.25f,-0.58f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT4toMTP4").setCoordIndex(new MFInt32Object(new MFInt3247().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f48().getArray()))))))
                    .addChild(new HAnimJointObject().setDEF("r_metatarsophalangeal_joint4").setCenter(new float[] {-0.25f,-0.87f,0f}).setName("r_metatarsophalangeal_joint4")
                      .addChild(new HAnimSegmentObject().setDEF("r_proximal_phalanges4").setName("r_proximal_phalanges4")
                        .addChild(new TransformObject().setTranslation(new float[] {-0.25f,-0.87f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP4toPIP4").setCoordIndex(new MFInt32Object(new MFInt3249().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f50().getArray()))))))
                      .addChild(new HAnimJointObject().setDEF("r_f_proximal_Interphalangeal_joint4").setCenter(new float[] {-0.25f,-1f,0f}).setName("r_f_proximal_Interphalangeal_joint4")
                        .addChild(new HAnimSegmentObject().setDEF("r_middle_phalanges4").setName("r_middle_phalanges4")
                          .addChild(new TransformObject().setTranslation(new float[] {-0.25f,-1f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP4toDIP4").setCoordIndex(new MFInt32Object(new MFInt3251().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f52().getArray()))))))
                        .addChild(new HAnimJointObject().setDEF("r_f_distal_Interphalangeal_joint4").setCenter(new float[] {-0.25f,-1.1f,0f}).setName("r_f_distal_Interphalangeal_joint4")
                          .addChild(new HAnimSegmentObject().setDEF("r_distal_phalanges4").setName("r_distal_phalanges4")
                            .addChild(new TransformObject().setTranslation(new float[] {-0.25f,-1.1f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_r_f_distal_Interphalangeal_joint4").setCoordIndex(new MFInt32Object(new MFInt3253().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f54().getArray()))))))))))
                  .addComments(new CommentsBlock(" TMT5 "))
                  .addChild(new HAnimJointObject().setDEF("r_tarsometatarsal_joint5").setCenter(new float[] {-0.33f,-0.52f,0f}).setName("r_tarsometatarsal_joint5")
                    .addChild(new HAnimSegmentObject().setDEF("r_metatarsal5").setName("r_metatarsal5")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.33f,-0.52f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT5toMTP5").setCoordIndex(new MFInt32Object(new MFInt3255().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f56().getArray()))))))
                    .addChild(new HAnimJointObject().setDEF("r_metatarsophalangeal_joint5").setCenter(new float[] {-0.34f,-0.8f,0f}).setName("r_metatarsophalangeal_joint5")
                      .addChild(new HAnimSegmentObject().setDEF("r_proximal_phalanges5").setName("r_proximal_phalanges5")
                        .addChild(new TransformObject().setTranslation(new float[] {-0.34f,-0.8f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP5toPIP5").setCoordIndex(new MFInt32Object(new MFInt3257().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f58().getArray()))))))
                      .addChild(new HAnimJointObject().setDEF("r_f_proximal_Interphalangeal_joint5").setCenter(new float[] {-0.34f,-0.95f,0f}).setName("r_f_proximal_Interphalangeal_joint5")
                        .addChild(new HAnimSegmentObject().setDEF("r_middle_phalanges5").setName("r_middle_phalanges5")
                          .addChild(new TransformObject().setTranslation(new float[] {-0.34f,-0.95f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP5toDIP5").setCoordIndex(new MFInt32Object(new MFInt3259().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f60().getArray()))))))
                        .addChild(new HAnimJointObject().setDEF("r_f_distal_Interphalangeal_joint5").setCenter(new float[] {-0.34f,-1.05f,0f}).setName("r_f_distal_Interphalangeal_joint5")
                          .addChild(new HAnimSegmentObject().setDEF("r_distal_phalanges5").setName("r_distal_phalanges5")
                            .addChild(new TransformObject().setTranslation(new float[] {-0.34f,-1.05f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_r_f_distal_Interphalangeal_joint5").setCoordIndex(new MFInt32Object(new MFInt3261().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f62().getArray()))))))))))))))
          .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJointObject().setUSE("r_talocrural_joint"))
          .addJoints(new HAnimJointObject().setUSE("r_talocalcaneonavicular_joint"))
          .addJoints(new HAnimJointObject().setUSE("r_cuneonavicular_joint1"))
          .addJoints(new HAnimJointObject().setUSE("r_tarsometatarsal_joint1"))
          .addJoints(new HAnimJointObject().setUSE("r_metatarsophalangeal_joint1"))
          .addJoints(new HAnimJointObject().setUSE("r_f_Interphalangeal_joint"))
          .addJoints(new HAnimJointObject().setUSE("r_cuneonavicular_joint2"))
          .addJoints(new HAnimJointObject().setUSE("r_tarsometatarsal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("r_metatarsophalangeal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("r_f_proximal_Interphalangeal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("r_f_distal_Interphalangeal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("r_cuneonavicular_joint3"))
          .addJoints(new HAnimJointObject().setUSE("r_tarsometatarsal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("r_metatarsophalangeal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("r_f_proximal_Interphalangeal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("r_f_distal_Interphalangeal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("r_calcaneuscuboid_joint"))
          .addJoints(new HAnimJointObject().setUSE("r_transverse_tarsal_joint"))
          .addJoints(new HAnimJointObject().setUSE("r_tarsometatarsal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("r_metatarsophalangeal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("r_f_proximal_Interphalangeal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("r_f_distal_Interphalangeal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("r_tarsometatarsal_joint5"))
          .addJoints(new HAnimJointObject().setUSE("r_metatarsophalangeal_joint5"))
          .addJoints(new HAnimJointObject().setUSE("r_f_proximal_Interphalangeal_joint5"))
          .addJoints(new HAnimJointObject().setUSE("r_f_distal_Interphalangeal_joint5"))
          .addSegments(new HAnimSegmentObject().setUSE("r_talus"))
          .addSegments(new HAnimSegmentObject().setUSE("r_navicular"))
          .addSegments(new HAnimSegmentObject().setUSE("r_cuneiform1"))
          .addSegments(new HAnimSegmentObject().setUSE("r_metatarsal1"))
          .addSegments(new HAnimSegmentObject().setUSE("r_proximal_phalanges1"))
          .addSegments(new HAnimSegmentObject().setUSE("r_distal_phalanges1"))
          .addSegments(new HAnimSegmentObject().setUSE("r_cuneiform2"))
          .addSegments(new HAnimSegmentObject().setUSE("r_metatarsal2"))
          .addSegments(new HAnimSegmentObject().setUSE("r_proximal_phalanges2"))
          .addSegments(new HAnimSegmentObject().setUSE("r_middle_phalanges2"))
          .addSegments(new HAnimSegmentObject().setUSE("r_distal_phalanges2"))
          .addSegments(new HAnimSegmentObject().setUSE("r_cuneiform3"))
          .addSegments(new HAnimSegmentObject().setUSE("r_metatarsal3"))
          .addSegments(new HAnimSegmentObject().setUSE("r_proximal_phalanges3"))
          .addSegments(new HAnimSegmentObject().setUSE("r_middle_phalanges3"))
          .addSegments(new HAnimSegmentObject().setUSE("r_distal_phalanges3"))
          .addSegments(new HAnimSegmentObject().setUSE("r_calcaneus"))
          .addSegments(new HAnimSegmentObject().setUSE("r_cuboid"))
          .addSegments(new HAnimSegmentObject().setUSE("r_metatarsal4"))
          .addSegments(new HAnimSegmentObject().setUSE("r_proximal_phalanges4"))
          .addSegments(new HAnimSegmentObject().setUSE("r_middle_phalanges4"))
          .addSegments(new HAnimSegmentObject().setUSE("r_distal_phalanges4"))
          .addSegments(new HAnimSegmentObject().setUSE("r_metatarsal5"))
          .addSegments(new HAnimSegmentObject().setUSE("r_proximal_phalanges5"))
          .addSegments(new HAnimSegmentObject().setUSE("r_middle_phalanges5"))
          .addSegments(new HAnimSegmentObject().setUSE("r_distal_phalanges5"))))      ;
    return X3D0;
    }
protected class MFVec3f0 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f});
  }
}
protected class MFRotation1 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt323 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f4 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,-0.3f,0f});
  }
}
protected class MFInt325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,-0.2f,0.3f,0f});
  }
}
protected class MFInt327 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.3f,0f,0.1f,-0.45f,0f});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f10 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.3f,0f,0f,-0.45f,0f});
  }
}
protected class MFInt3211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f12 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.3f,0f,-0.1f,-0.4f,0f});
  }
}
protected class MFInt3213 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f14 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1f,-0.45f,0f,0.1f,-0.6f,0f});
  }
}
protected class MFInt3215 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f16 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1f,-0.6f,0f,0.1f,-0.9f,0f});
  }
}
protected class MFInt3217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f18 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1f,-0.9f,0f,0.1f,-1.05f,0f});
  }
}
protected class MFInt3219 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f20 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1f,-1.05f,0f,0.1f,-1.1f,0f});
  }
}
protected class MFInt3221 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f22 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.45f,0f,-0.05f,-0.6f,0f});
  }
}
protected class MFInt3223 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f24 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.05f,-0.6f,0f,-0.05f,-0.9f,0f});
  }
}
protected class MFInt3225 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f26 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.05f,-0.9f,0f,-0.05f,-1.05f,0f});
  }
}
protected class MFInt3227 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f28 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.05f,-1.05f,0f,-0.05f,-1.12f,0f});
  }
}
protected class MFInt3229 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f30 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.05f,-1.12f,0f,-0.05f,-1.16f,0f});
  }
}
protected class MFInt3231 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f32 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.1f,-0.4f,0f,-0.15f,-0.6f,0f});
  }
}
protected class MFInt3233 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f34 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15f,-0.6f,0f,-0.15f,-0.9f,0f});
  }
}
protected class MFInt3235 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f36 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15f,-0.9f,0f,-0.15f,-1.05f,0f});
  }
}
protected class MFInt3237 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f38 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15f,-1.05f,0f,-0.15f,-1.13f,0f});
  }
}
protected class MFInt3239 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f40 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15f,-1.13f,0f,-0.15f,-1.16f,0f});
  }
}
protected class MFInt3241 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f42 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.2f,0.3f,0f,-0.21f,-0.3f,0f});
  }
}
protected class MFInt3243 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f44 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21f,-0.3f,0f,-0.25f,-0.58f,0f});
  }
}
protected class MFInt3245 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f46 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21f,-0.3f,0f,-0.33f,-0.52f,0f});
  }
}
protected class MFInt3247 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f48 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.25f,-0.58f,0f,-0.25f,-0.87f,0f});
  }
}
protected class MFInt3249 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f50 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.25f,-0.87f,0f,-0.25f,-1f,0f});
  }
}
protected class MFInt3251 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f52 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.25f,-1f,0f,-0.25f,-1.1f,0f});
  }
}
protected class MFInt3253 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f54 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.25f,-1.1f,0f,-0.25f,-1.15f,0f});
  }
}
protected class MFInt3255 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f56 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.33f,-0.52f,0f,-0.34f,-0.8f,0f});
  }
}
protected class MFInt3257 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f58 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.34f,-0.8f,0f,-0.34f,-0.95f,0f});
  }
}
protected class MFInt3259 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f60 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.34f,-0.95f,0f,-0.34f,-1.05f,0f});
  }
}
protected class MFInt3261 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f62 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.34f,-1.05f,0f,-0.34f,-1.08f,0f});
  }
}
}
