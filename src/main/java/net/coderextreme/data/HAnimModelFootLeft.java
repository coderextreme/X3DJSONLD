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
public class HAnimModelFootLeft {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HAnimModelFootLeft().initialize().toFileJSON("../data/HAnimModelFootLeft.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("4.0")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("H-Anim").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("HAnimModelFootLeft.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Left foot, using high-fidelity definitions for H-Anim version 2.2"))
        .addMeta(new metaObject().setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("26 January 2015"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("warning").setContent("not yet to scale"))
        .addMeta(new metaObject().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
        .addMeta(new metaObject().setName("subject").setContent("X3D H-Anim humanoid animation"))
        .addMeta(new metaObject().setName("warning").setContent("scene, DOCTYPE and Schema under development."))
        .addMeta(new metaObject().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("HAnimModelFootLeft.x3d"))
        .addChild(new HAnimHumanoidObject().setName("Humanoid_Left_Foot").setDEF("Humanoid_Left_Foot").setInfo(new MFStringObject(new MFString0().getArray())).setJointBindingPositions(new MFVec3fObject(new MFVec3f1().getArray())).setJointBindingRotations(new MFRotationObject(new MFRotation2().getArray())).setJointBindingScales(new MFVec3fObject(new MFVec3f3().getArray())).setLoa(-1).setSkeletalConfiguration("BASIC").setVersion("2.0")
          .addJoints(new HAnimJointObject().setName("humanoid_root").setDEF("hanim_HumanoidRoot")
            .addChild(new HAnimJointObject().setName("l_talocrural_joint").setDEF("l_talocrural_joint")
              .addChild(new HAnimSegmentObject().setName("l_talus").setDEF("l_talus")
                .addChild(new TransformObject()
                  .addChild(new ShapeObject().setDEF("HAnimJointShape")
                    .setGeometry(new SphereObject().setRadius(0.025f))
                    .setAppearance(new AppearanceObject().setDEF("HAnimJointAppearance")
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f})))))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSetObject().setDEF("TCtoTCN").setCoordIndex(new MFInt32Object(new MFInt324().getArray()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f5().getArray())))))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSetObject().setDEF("TCtoCC").setCoordIndex(new MFInt32Object(new MFInt326().getArray()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f7().getArray()))))))
              .addComments(new CommentsBlock("TCN"))
              .addChild(new HAnimJointObject().setName("l_talocalcaneonavicular_joint").setDEF("l_talocalcaneonavicular_joint").setCenter(new float[] {0f,-0.3f,0f})
                .addChild(new HAnimSegmentObject().setName("l_navicular").setDEF("l_navicular")
                  .addChild(new TransformObject().setTranslation(new float[] {0f,-0.3f,0f})
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("TCNtoCN1").setCoordIndex(new MFInt32Object(new MFInt328().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f9().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("TCNtoCN2").setCoordIndex(new MFInt32Object(new MFInt3210().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f11().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("TCNtoCN3").setCoordIndex(new MFInt32Object(new MFInt3212().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f13().getArray()))))))
                .addComments(new CommentsBlock("CN1"))
                .addChild(new HAnimJointObject().setName("l_cuneonavicular_joint1").setDEF("l_cuneonavicular_joint1").setCenter(new float[] {-0.1f,-0.45f,0f})
                  .addChild(new HAnimSegmentObject().setName("l_cuneiform1").setDEF("l_cuneiform1")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.1f,-0.45f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("CN1toTMT1").setCoordIndex(new MFInt32Object(new MFInt3214().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f15().getArray()))))))
                  .addChild(new HAnimJointObject().setName("l_tarsometatarsal_joint1").setDEF("l_tarsometatarsal_joint1").setCenter(new float[] {-0.1f,-0.6f,0f})
                    .addChild(new HAnimSegmentObject().setName("l_metatarsal1").setDEF("l_metatarsal1")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.1f,-0.6f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT1toMTP1").setCoordIndex(new MFInt32Object(new MFInt3216().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f17().getArray()))))))
                    .addChild(new HAnimJointObject().setName("l_metatarsophalangeal_joint1").setDEF("l_metatarsophalangeal_joint1").setCenter(new float[] {-0.1f,-0.9f,0f})
                      .addChild(new HAnimSegmentObject().setName("l_proximal_phalanges1").setDEF("l_proximal_phalanges1")
                        .addChild(new TransformObject().setTranslation(new float[] {-0.1f,-0.9f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP1toIP1").setCoordIndex(new MFInt32Object(new MFInt3218().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f19().getArray()))))))
                      .addChild(new HAnimJointObject().setName("l_f_Interphalangeal_joint").setDEF("l_f_Interphalangeal_joint").setCenter(new float[] {-0.1f,-1.05f,0f})
                        .addChild(new HAnimSegmentObject().setName("l_distal_phalanges1").setDEF("l_distal_phalanges1")
                          .addChild(new TransformObject().setTranslation(new float[] {-0.1f,-1.05f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_l_distal_phalanges1").setCoordIndex(new MFInt32Object(new MFInt3220().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f21().getArray()))))))))))
                .addComments(new CommentsBlock("CN2"))
                .addChild(new HAnimJointObject().setName("l_cuneonavicular_joint2").setDEF("l_cuneonavicular_joint2").setCenter(new float[] {0f,-0.45f,0f})
                  .addChild(new HAnimSegmentObject().setName("l_cuneiform2").setDEF("l_cuneiform2")
                    .addChild(new TransformObject().setTranslation(new float[] {0f,-0.45f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("CN2toTMT2").setCoordIndex(new MFInt32Object(new MFInt3222().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f23().getArray()))))))
                  .addChild(new HAnimJointObject().setName("l_tarsometatarsal_joint2").setDEF("l_tarsometatarsal_joint2").setCenter(new float[] {0.05f,-0.6f,0f})
                    .addChild(new HAnimSegmentObject().setName("l_metatarsal2").setDEF("l_metatarsal2")
                      .addChild(new TransformObject().setTranslation(new float[] {0.05f,-0.6f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT2toMTP2").setCoordIndex(new MFInt32Object(new MFInt3224().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f25().getArray()))))))
                    .addChild(new HAnimJointObject().setName("l_metatarsophalangeal_joint2").setDEF("l_metatarsophalangeal_joint2").setCenter(new float[] {0.05f,-0.9f,0f})
                      .addChild(new HAnimSegmentObject().setName("l_proximal_phalanges2").setDEF("l_proximal_phalanges2")
                        .addChild(new TransformObject().setTranslation(new float[] {0.05f,-0.9f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP2toPIP2").setCoordIndex(new MFInt32Object(new MFInt3226().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f27().getArray()))))))
                      .addChild(new HAnimJointObject().setName("l_f_proximal_Interphalangeal_joint2").setDEF("l_f_proximal_Interphalangeal_joint2").setCenter(new float[] {0.05f,-1.05f,0f})
                        .addChild(new HAnimSegmentObject().setName("l_middle_phalanges2").setDEF("l_middle_phalanges2")
                          .addChild(new TransformObject().setTranslation(new float[] {0.05f,-1.05f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP2toDIP2").setCoordIndex(new MFInt32Object(new MFInt3228().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f29().getArray()))))))
                        .addChild(new HAnimJointObject().setName("l_f_distal_Interphalangeal_joint2").setDEF("l_f_distal_Interphalangeal_joint2").setCenter(new float[] {0.05f,-1.12f,0f})
                          .addChild(new HAnimSegmentObject().setName("l_distal_phalanges2").setDEF("l_distal_phalanges2")
                            .addChild(new TransformObject().setTranslation(new float[] {0.05f,-1.12f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_l_f_distal_Interphalangeal_joint2").setCoordIndex(new MFInt32Object(new MFInt3230().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f31().getArray())))))))))))
                .addComments(new CommentsBlock("CN3"))
                .addChild(new HAnimJointObject().setName("l_cuneonavicular_joint3").setDEF("l_cuneonavicular_joint3").setCenter(new float[] {0.1f,-0.4f,0f})
                  .addChild(new HAnimSegmentObject().setName("l_cuneiform3").setDEF("l_cuneiform3")
                    .addChild(new TransformObject().setTranslation(new float[] {0.1f,-0.4f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("CN3toTMT3").setCoordIndex(new MFInt32Object(new MFInt3232().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f33().getArray()))))))
                  .addChild(new HAnimJointObject().setName("l_tarsometatarsal_joint3").setDEF("l_tarsometatarsal_joint3").setCenter(new float[] {0.15f,-0.6f,0f})
                    .addChild(new HAnimSegmentObject().setName("l_metatarsal3").setDEF("l_metatarsal3")
                      .addChild(new TransformObject().setTranslation(new float[] {0.15f,-0.6f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT3toMTP3").setCoordIndex(new MFInt32Object(new MFInt3234().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f35().getArray()))))))
                    .addChild(new HAnimJointObject().setName("l_metatarsophalangeal_joint3").setDEF("l_metatarsophalangeal_joint3").setCenter(new float[] {0.15f,-0.9f,0f})
                      .addChild(new HAnimSegmentObject().setName("l_proximal_phalanges3").setDEF("l_proximal_phalanges3")
                        .addChild(new TransformObject().setTranslation(new float[] {0.15f,-0.9f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP3toPIP3").setCoordIndex(new MFInt32Object(new MFInt3236().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f37().getArray()))))))
                      .addChild(new HAnimJointObject().setName("l_f_proximal_Interphalangeal_joint3").setDEF("l_f_proximal_Interphalangeal_joint3").setCenter(new float[] {0.15f,-1.05f,0f})
                        .addChild(new HAnimSegmentObject().setName("l_middle_phalanges3").setDEF("l_middle_phalanges3")
                          .addChild(new TransformObject().setTranslation(new float[] {0.15f,-1.05f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP3toDIP3").setCoordIndex(new MFInt32Object(new MFInt3238().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f39().getArray()))))))
                        .addChild(new HAnimJointObject().setName("l_f_distal_Interphalangeal_joint3").setDEF("l_f_distal_Interphalangeal_joint3").setCenter(new float[] {0.15f,-1.13f,0f})
                          .addChild(new HAnimSegmentObject().setName("l_distal_phalanges3").setDEF("l_distal_phalanges3")
                            .addChild(new TransformObject().setTranslation(new float[] {0.15f,-1.13f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_l_f_distal_Interphalangeal_joint3").setCoordIndex(new MFInt32Object(new MFInt3240().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f41().getArray()))))))))))))
              .addComments(new CommentsBlock("CC"))
              .addChild(new HAnimJointObject().setName("l_calcaneuscuboid_joint").setDEF("l_calcaneuscuboid_joint").setCenter(new float[] {0.2f,0.3f,0f})
                .addChild(new HAnimSegmentObject().setName("l_calcaneus").setDEF("l_calcaneus")
                  .addChild(new TransformObject().setTranslation(new float[] {0.2f,0.3f,0f})
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSetObject().setDEF("CCtoTT").setCoordIndex(new MFInt32Object(new MFInt3242().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f43().getArray()))))))
                .addComments(new CommentsBlock("TT"))
                .addChild(new HAnimJointObject().setName("l_transverse_tarsal_joint").setDEF("l_transverse_tarsal_joint").setCenter(new float[] {0.21f,-0.3f,0f})
                  .addChild(new HAnimSegmentObject().setName("l_cuboid").setDEF("l_cuboid")
                    .addChild(new TransformObject().setTranslation(new float[] {0.21f,-0.3f,0f})
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("TTtoTMT4").setCoordIndex(new MFInt32Object(new MFInt3244().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f45().getArray())))))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSetObject().setDEF("TTtoTMT5").setCoordIndex(new MFInt32Object(new MFInt3246().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f47().getArray()))))))
                  .addComments(new CommentsBlock("TMT4"))
                  .addChild(new HAnimJointObject().setName("l_tarsometatarsal_joint4").setDEF("l_tarsometatarsal_joint4").setCenter(new float[] {0.25f,-0.58f,0f})
                    .addChild(new HAnimSegmentObject().setName("l_metatarsal4").setDEF("l_metatarsal4")
                      .addChild(new TransformObject().setTranslation(new float[] {0.25f,-0.58f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT4toMTP4").setCoordIndex(new MFInt32Object(new MFInt3248().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f49().getArray()))))))
                    .addChild(new HAnimJointObject().setName("l_metatarsophalangeal_joint4").setDEF("l_metatarsophalangeal_joint4").setCenter(new float[] {0.25f,-0.87f,0f})
                      .addChild(new HAnimSegmentObject().setName("l_proximal_phalanges4").setDEF("l_proximal_phalanges4")
                        .addChild(new TransformObject().setTranslation(new float[] {0.25f,-0.87f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP4toPIP4").setCoordIndex(new MFInt32Object(new MFInt3250().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f51().getArray()))))))
                      .addChild(new HAnimJointObject().setName("l_f_proximal_Interphalangeal_joint4").setDEF("l_f_proximal_Interphalangeal_joint4").setCenter(new float[] {0.25f,-1f,0f})
                        .addChild(new HAnimSegmentObject().setName("l_middle_phalanges4").setDEF("l_middle_phalanges4")
                          .addChild(new TransformObject().setTranslation(new float[] {0.25f,-1f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP4toDIP4").setCoordIndex(new MFInt32Object(new MFInt3252().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f53().getArray()))))))
                        .addChild(new HAnimJointObject().setName("l_f_distal_Interphalangeal_joint4").setDEF("l_f_distal_Interphalangeal_joint4").setCenter(new float[] {0.25f,-1.1f,0f})
                          .addChild(new HAnimSegmentObject().setName("l_distal_phalanges4").setDEF("l_distal_phalanges4")
                            .addChild(new TransformObject().setTranslation(new float[] {0.25f,-1.1f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_l_f_distal_Interphalangeal_joint4").setCoordIndex(new MFInt32Object(new MFInt3254().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f55().getArray()))))))))))
                  .addComments(new CommentsBlock("TMT5"))
                  .addChild(new HAnimJointObject().setName("l_tarsometatarsal_joint5").setDEF("l_tarsometatarsal_joint5").setCenter(new float[] {0.33f,-0.52f,0f})
                    .addChild(new HAnimSegmentObject().setName("l_metatarsal5").setDEF("l_metatarsal5")
                      .addChild(new TransformObject().setTranslation(new float[] {0.33f,-0.52f,0f})
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSetObject().setDEF("TMT5toMTP5").setCoordIndex(new MFInt32Object(new MFInt3256().getArray()))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f57().getArray()))))))
                    .addChild(new HAnimJointObject().setName("l_metatarsophalangeal_joint5").setDEF("l_metatarsophalangeal_joint5").setCenter(new float[] {0.34f,-0.8f,0f})
                      .addChild(new HAnimSegmentObject().setName("l_proximal_phalanges5").setDEF("l_proximal_phalanges5")
                        .addChild(new TransformObject().setTranslation(new float[] {0.34f,-0.8f,0f})
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSetObject().setDEF("MTP5toPIP5").setCoordIndex(new MFInt32Object(new MFInt3258().getArray()))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f59().getArray()))))))
                      .addChild(new HAnimJointObject().setName("l_f_proximal_Interphalangeal_joint5").setDEF("l_f_proximal_Interphalangeal_joint5").setCenter(new float[] {0.34f,-0.95f,0f})
                        .addChild(new HAnimSegmentObject().setName("l_middle_phalanges5").setDEF("l_middle_phalanges5")
                          .addChild(new TransformObject().setTranslation(new float[] {0.34f,-0.95f,0f})
                            .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                          .addChild(new ShapeObject()
                            .setAppearance(new AppearanceObject()
                              .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSetObject().setDEF("PIP5toDIP5").setCoordIndex(new MFInt32Object(new MFInt3260().getArray()))
                              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f61().getArray()))))))
                        .addChild(new HAnimJointObject().setName("l_f_distal_Interphalangeal_joint5").setDEF("l_f_distal_Interphalangeal_joint5").setCenter(new float[] {0.34f,-1.05f,0f})
                          .addChild(new HAnimSegmentObject().setName("l_distal_phalanges5").setDEF("l_distal_phalanges5")
                            .addChild(new TransformObject().setTranslation(new float[] {0.34f,-1.05f,0f})
                              .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                            .addChild(new ShapeObject()
                              .setAppearance(new AppearanceObject()
                                .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,1f})))
                              .setGeometry(new IndexedLineSetObject().setDEF("tiptoe_l_f_distal_Interphalangeal_joint5").setCoordIndex(new MFInt32Object(new MFInt3262().getArray()))
                                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f63().getArray()))))))))))))))
          .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJointObject().setUSE("l_talocrural_joint"))
          .addJoints(new HAnimJointObject().setUSE("l_talocalcaneonavicular_joint"))
          .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint1"))
          .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint1"))
          .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint1"))
          .addJoints(new HAnimJointObject().setUSE("l_f_Interphalangeal_joint"))
          .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint2"))
          .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint2"))
          .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint3"))
          .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint3"))
          .addJoints(new HAnimJointObject().setUSE("l_calcaneuscuboid_joint"))
          .addJoints(new HAnimJointObject().setUSE("l_transverse_tarsal_joint"))
          .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint4"))
          .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint5"))
          .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint5"))
          .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint5"))
          .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint5"))
          .addSegments(new HAnimSegmentObject().setUSE("l_talus"))
          .addSegments(new HAnimSegmentObject().setUSE("l_navicular"))
          .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform1"))
          .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal1"))
          .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges1"))
          .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges1"))
          .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform2"))
          .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal2"))
          .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges2"))
          .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges2"))
          .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges2"))
          .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform3"))
          .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal3"))
          .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges3"))
          .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges3"))
          .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges3"))
          .addSegments(new HAnimSegmentObject().setUSE("l_calcaneus"))
          .addSegments(new HAnimSegmentObject().setUSE("l_cuboid"))
          .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal4"))
          .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges4"))
          .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges4"))
          .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges4"))
          .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal5"))
          .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges5"))
          .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges5"))
          .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges5"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"humanoidVersion=2.0"});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f});
  }
}
protected class MFRotation2 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt324 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f5 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,-0.3f,0f});
  }
}
protected class MFInt326 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f7 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0.2f,0.3f,0f});
  }
}
protected class MFInt328 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.3f,0f,-0.1f,-0.45f,0f});
  }
}
protected class MFInt3210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f11 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.3f,0f,0f,-0.45f,0f});
  }
}
protected class MFInt3212 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f13 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.3f,0f,0.1f,-0.4f,0f});
  }
}
protected class MFInt3214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f15 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.1f,-0.45f,0f,-0.1f,-0.6f,0f});
  }
}
protected class MFInt3216 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f17 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.1f,-0.6f,0f,-0.1f,-0.9f,0f});
  }
}
protected class MFInt3218 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f19 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.1f,-0.9f,0f,-0.1f,-1.05f,0f});
  }
}
protected class MFInt3220 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f21 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.1f,-1.05f,0f,-0.1f,-1.1f,0f});
  }
}
protected class MFInt3222 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f23 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.45f,0f,0.05f,-0.6f,0f});
  }
}
protected class MFInt3224 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f25 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.05f,-0.6f,0f,0.05f,-0.9f,0f});
  }
}
protected class MFInt3226 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f27 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.05f,-0.9f,0f,0.05f,-1.05f,0f});
  }
}
protected class MFInt3228 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f29 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.05f,-1.05f,0f,0.05f,-1.12f,0f});
  }
}
protected class MFInt3230 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f31 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.05f,-1.12f,0f,0.05f,-1.16f,0f});
  }
}
protected class MFInt3232 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f33 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1f,-0.4f,0f,0.15f,-0.6f,0f});
  }
}
protected class MFInt3234 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f35 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15f,-0.6f,0f,0.15f,-0.9f,0f});
  }
}
protected class MFInt3236 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f37 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15f,-0.9f,0f,0.15f,-1.05f,0f});
  }
}
protected class MFInt3238 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f39 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15f,-1.05f,0f,0.15f,-1.13f,0f});
  }
}
protected class MFInt3240 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f41 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15f,-1.13f,0f,0.15f,-1.16f,0f});
  }
}
protected class MFInt3242 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f43 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.2f,0.3f,0f,0.21f,-0.3f,0f});
  }
}
protected class MFInt3244 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f45 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21f,-0.3f,0f,0.25f,-0.58f,0f});
  }
}
protected class MFInt3246 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f47 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21f,-0.3f,0f,0.33f,-0.52f,0f});
  }
}
protected class MFInt3248 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f49 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25f,-0.58f,0f,0.25f,-0.87f,0f});
  }
}
protected class MFInt3250 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f51 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25f,-0.87f,0f,0.25f,-1f,0f});
  }
}
protected class MFInt3252 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f53 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25f,-1f,0f,0.25f,-1.1f,0f});
  }
}
protected class MFInt3254 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f55 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25f,-1.1f,0f,0.25f,-1.15f,0f});
  }
}
protected class MFInt3256 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f57 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.33f,-0.52f,0f,0.34f,-0.8f,0f});
  }
}
protected class MFInt3258 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f59 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34f,-0.8f,0f,0.34f,-0.95f,0f});
  }
}
protected class MFInt3260 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f61 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34f,-0.95f,0f,0.34f,-1.05f,0f});
  }
}
protected class MFInt3262 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f63 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34f,-1.05f,0f,0.34f,-1.08f,0f});
  }
}
}
