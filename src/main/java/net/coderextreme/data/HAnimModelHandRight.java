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
public class HAnimModelHandRight {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new HAnimModelHandRight().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/HAnimModelHandRight.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("HAnimModelHandRight.x3d"))
        .addMeta(new meta().setName("description").setContent("Right hand using high-fidelity definitions for HAnim version 2.0"))
        .addMeta(new meta().setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("created").setContent("26 January 2015"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 07:43:09 GMT"))
        .addMeta(new meta().setName("TODO").setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"))
        .addMeta(new meta().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
        .addMeta(new meta().setName("Image").setContent("HAnimModelHandRightSegmentVisualizationError.png"))
        .addMeta(new meta().setName("error").setContent("not yet to scale, also relatively flat"))
        .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta(new meta().setName("info").setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
        .addMeta(new meta().setName("subject").setContent("X3D HAnim humanoid animation"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"))
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelHandRight.x3d"))
        .addChild(new HAnimHumanoid().setDEF("hanim_Hand_Right").setName("Hand_Right").setLoa(4)
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorName")))
          .addSkeleton(new HAnimJoint("hanim_Hand_Right").setDEF("hanim_humanoid_root").setName("humanoid_root")
            .addChild(new HAnimJoint("hanim_humanoid_root").setDEF("hanim_r_radiocarpal").setDescription("connection joint of hand to leg above").setName("r_radiocarpal")
              .addChild(new HAnimSegment("hanim_r_radiocarpal").setDEF("hanim_r_carpal").setName("r_carpal")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearanceBlue")
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))
                    .setGeometry(new Sphere().setRadius(0.025f))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC12").setCoordIndex(new MFInt320().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f1().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC3").setCoordIndex(new MFInt322().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC45").setCoordIndex(new MFInt324().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray())))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_1").setName("r_midcarpal_1").setCenter(new float[] {-0.14f,0.09f,0f})
                .addChild(new HAnimSegment("hanim_r_midcarpal_1").setDEF("hanim_r_trapezium").setName("r_trapezium")
                  .addChild(new Transform().setTranslation(new float[] {-0.14f,0.09f,0f})
                    .addChild(new Shape().setDEF("HAnimNewJointShape")
                      .setAppearance(new Appearance().setDEF("HAnimJointAppearanceRed")
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))
                      .setGeometry(new Sphere().setRadius(0.025f))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC1").setCoordIndex(new MFInt326().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f7().getArray())))))
                .addChild(new HAnimJoint("hanim_r_midcarpal_1").setDEF("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(new float[] {-0.2f,0.15f,0f})
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpal_1").setName("r_metacarpal_1")
                    .addChild(new Transform().setTranslation(new float[] {-0.2f,0.15f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC1toMCP1xxx").setCoordIndex(new MFInt328().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setDEF("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(new float[] {-0.3f,0.3f,0f})
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_proximal_phalanx_1")
                      .addChild(new Transform().setTranslation(new float[] {-0.3f,0.3f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP11toIP1").setCoordIndex(new MFInt3210().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(new float[] {-0.35f,0.4f,0f})
                      .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_distal_phalanx_1").setName("r_carpal_distal_phalanx_1")
                        .addChild(new Transform().setTranslation(new float[] {-0.35f,0.4f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_interphalangeal_1").setCoordIndex(new MFInt3212().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f13().getArray())))))))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_2").setName("r_midcarpal_2").setCenter(new float[] {-0.07f,0.07f,0f})
                .addChild(new HAnimSegment("hanim_r_midcarpal_2").setDEF("hanim_r_trapezoid").setName("r_trapezoid")
                  .addChild(new Transform().setTranslation(new float[] {-0.07f,0.07f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC2").setCoordIndex(new MFInt3214().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f15().getArray())))))
                .addChild(new HAnimJoint("hanim_r_midcarpal_2").setDEF("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(new float[] {-0.1f,0.2f,0f})
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpal_2").setName("r_metacarpal_2")
                    .addChild(new Transform().setTranslation(new float[] {-0.1f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC2toMCP2").setCoordIndex(new MFInt3216().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setDEF("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(new float[] {-0.15f,0.5f,0f})
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_phalanx_2").setName("r_carpal_proximal_phalanx_2")
                      .addChild(new Transform().setTranslation(new float[] {-0.15f,0.5f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP2toPIP2").setCoordIndex(new MFInt3218().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f19().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.2f,0.7f,0f})
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_middle_phalanx_2")
                        .addChild(new Transform().setTranslation(new float[] {-0.2f,0.7f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new MFInt3220().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f21().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.24f,0.87f,0f})
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_phalanx_2").setName("r_carpal_distal_phalanx_2")
                          .addChild(new Transform().setTranslation(new float[] {-0.24f,0.87f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_2").setCoordIndex(new MFInt3222().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))))))))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_3").setName("r_midcarpal_3").setCenter(new float[] {0f,0.07f,0f})
                .addChild(new HAnimSegment("hanim_r_midcarpal_3").setDEF("hanim_r_capitate").setName("r_capitate")
                  .addChild(new Transform().setTranslation(new float[] {0f,0.07f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC3toCMC3").setCoordIndex(new MFInt3224().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f25().getArray())))))
                .addChild(new HAnimJoint("hanim_r_midcarpal_3").setDEF("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(new float[] {0f,0.2f,0f})
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpal_3").setName("r_metacarpal_3")
                    .addChild(new Transform().setTranslation(new float[] {0f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC3toMCP3").setCoordIndex(new MFInt3226().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f27().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setDEF("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(new float[] {-0.03f,0.5f,0f})
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_phalanx_3").setName("r_carpal_proximal_phalanx_3")
                      .addChild(new Transform().setTranslation(new float[] {-0.03f,0.5f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP3toPIP3").setCoordIndex(new MFInt3228().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.05f,0.75f,0f})
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_middle_phalanx_3")
                        .addChild(new Transform().setTranslation(new float[] {-0.05f,0.75f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new MFInt3230().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f31().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.08f,0.96f,0f})
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_phalanx_3").setName("r_carpal_distal_phalanx_3")
                          .addChild(new Transform().setTranslation(new float[] {-0.08f,0.96f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_3").setCoordIndex(new MFInt3232().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray()))))))))))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setDEF("hanim_r_midcarpal_4_5").setName("r_midcarpal_4_5").setCenter(new float[] {0.1f,0.1f,0f})
                .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setDEF("hanim_r_hamate").setName("r_hamate")
                  .addChild(new Transform().setTranslation(new float[] {0.1f,0.1f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC4").setCoordIndex(new MFInt3234().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC5").setCoordIndex(new MFInt3236().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f37().getArray())))))
                .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setDEF("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(new float[] {0.1f,0.2f,0f})
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpal_4").setName("r_metacarpal_4")
                    .addChild(new Transform().setTranslation(new float[] {0.1f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC4toMCP4").setCoordIndex(new MFInt3238().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f39().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setDEF("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(new float[] {0.1f,0.47f,0f})
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_phalanx_4").setName("r_carpal_proximal_phalanx_4")
                      .addChild(new Transform().setTranslation(new float[] {0.1f,0.47f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP4toPIP4").setCoordIndex(new MFInt3240().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1f,0.7f,0f})
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_middle_phalanx_4")
                        .addChild(new Transform().setTranslation(new float[] {0.1f,0.7f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new MFInt3242().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f43().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1f,0.93f,0f})
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_phalanx_4").setName("r_carpal_distal_phalanx_4")
                          .addChild(new Transform().setTranslation(new float[] {0.1f,0.93f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_4").setCoordIndex(new MFInt3244().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f45().getArray())))))))))
                .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setDEF("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(new float[] {0.15f,0.17f,0f})
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpal_5").setName("r_metacarpal_5")
                    .addChild(new Transform().setTranslation(new float[] {0.15f,0.17f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC5toMCP5").setCoordIndex(new MFInt3246().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setDEF("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(new float[] {0.2f,0.4f,0f})
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_phalanx_5").setName("r_carpal_proximal_phalanx_5")
                      .addChild(new Transform().setTranslation(new float[] {0.2f,0.4f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP5toPIP5").setCoordIndex(new MFInt3248().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.23f,0.63f,0f})
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_middle_phalanx_5").setName("r_carpal_middle_phalanx_5")
                        .addChild(new Transform().setTranslation(new float[] {0.23f,0.63f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new MFInt3250().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f51().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(new float[] {0.25f,0.79f,0f})
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_phalanx_5").setName("r_carpal_distal_phalanx_5")
                          .addChild(new Transform().setTranslation(new float[] {0.25f,0.79f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_5").setCoordIndex(new MFInt3252().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))))))))))))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_capitate"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_hamate"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_trapezium"))
          .addSegments(new HAnimSegment("hanim_Hand_Right").setUSE("hanim_r_trapezoid"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_midcarpal_1"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_midcarpal_2"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE("hanim_r_radiocarpal"))))      ;
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,-0.1f,0.1f,0f});
  }
}
private class MFInt322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0.07f,0f});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.1f,0.1f,0f});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f7 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.2f,0.15f,0f});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.15f,0f,-0.3f,0.3f,0f});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f11 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3f,0.3f,0f,-0.35f,0.4f,0f});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f13 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.35f,0.4f,0f,-0.36f,0.45f,0f});
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f15 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.1f,0.2f,0f});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.2f,0f,-0.15f,0.5f,0f});
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f19 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,0.5f,0f,-0.2f,0.7f,0f});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f21 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.7f,0f,-0.24f,0.87f,0f});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f23 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.24f,0.87f,0f,-0.26f,0.93f,0f});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f25 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.07f,0f,0f,0.2f,0f});
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f27 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.2f,0f,-0.03f,0.5f,0f});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f29 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03f,0.5f,0f,-0.05f,0.75f,0f});
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f31 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,0.75f,0f,-0.08f,0.96f,0f});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f33 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.08f,0.96f,0f,-0.09f,1.05f,0f});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f35 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.1f,0.2f,0f});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f37 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.15f,0.17f,0f});
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f39 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.2f,0f,0.1f,0.47f,0f});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f41 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.47f,0f,0.1f,0.7f,0f});
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f43 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.7f,0f,0.1f,0.93f,0f});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f45 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.93f,0f,0.1f,1f,0f});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f47 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,0.17f,0f,0.2f,0.4f,0f});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f,0.4f,0f,0.23f,0.63f,0f});
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f51 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.23f,0.63f,0f,0.25f,0.79f,0f});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f53 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f,0.79f,0f,0.26f,0.85f,0f});
  }
}
}
