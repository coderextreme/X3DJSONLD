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
    new HAnimModelHandRight().initialize().toFileJSON("../data/HAnimModelHandRight.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnimModelHandRight.x3d"))
        .addMeta(new meta().setName("description").setContent("Right hand using high-fidelity definitions for HAnim version 2.0"))
        .addMeta(new meta().setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("created").setContent("26 January 2015"))
        .addMeta(new meta().setName("modified").setContent("14 March 2021"))
        .addMeta(new meta().setName("TODO").setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"))
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
        .addMeta(new meta().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelHandRight.x3d"))
        .addChild(new HAnimHumanoid().setName("Hand_Right").setDEF("hanim_Hand_Right").setLoa(4).setVersion("2.0")
          .addComments("HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'")
          .addValue(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorName").setValue(new MFString0().getArray())))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
            .addComments("Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model")
            .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setDescription("connection joint of hand to leg above").setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
              .addChild(new HAnimSegment().setName("r_carpal").setDEF("hanim_r_carpal")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setGeometry(new Sphere().setRadius(0.025f))
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearanceBlue")
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC12").setCoordIndex(new MFInt321().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC3").setCoordIndex(new MFInt323().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f4().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC45").setCoordIndex(new MFInt325().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
              .addComments("MC1")
              .addChild(new HAnimJoint().setName("r_midcarpal_1").setDEF("hanim_r_midcarpal_1").setCenter(new float[] {-0.14f,0.09f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                .addChild(new HAnimSegment().setName("r_trapezium").setDEF("hanim_r_trapezium")
                  .addChild(new Transform().setTranslation(new float[] {-0.14f,0.09f,0f})
                    .addChild(new Shape().setDEF("HAnimNewJointShape")
                      .setGeometry(new Sphere().setRadius(0.025f))
                      .setAppearance(new Appearance().setDEF("HAnimJointAppearanceRed")
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC1").setCoordIndex(new MFInt327().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray())))))
                .addComments("thumb finger")
                .addChild(new HAnimJoint().setName("r_carpometacarpal_1").setDEF("hanim_r_carpometacarpal_1").setCenter(new float[] {-0.2f,0.15f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                  .addChild(new HAnimSegment().setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1")
                    .addChild(new Transform().setTranslation(new float[] {-0.2f,0.15f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC1toMCP1xxx").setCoordIndex(new MFInt329().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray())))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_1").setDEF("hanim_r_metacarpophalangeal_1").setCenter(new float[] {-0.3f,0.3f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                    .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1")
                      .addChild(new Transform().setTranslation(new float[] {-0.3f,0.3f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP11toIP1").setCoordIndex(new MFInt3211().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray())))))
                    .addChild(new HAnimJoint().setName("r_carpal_interphalangeal_1").setDEF("hanim_r_carpal_interphalangeal_1").setCenter(new float[] {-0.35f,0.4f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                      .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1")
                        .addChild(new Transform().setTranslation(new float[] {-0.35f,0.4f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_interphalangeal_1").setCoordIndex(new MFInt3213().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray())))))))))
              .addComments("MC2")
              .addChild(new HAnimJoint().setName("r_midcarpal_2").setDEF("hanim_r_midcarpal_2").setCenter(new float[] {-0.07f,0.07f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                .addChild(new HAnimSegment().setName("r_trapezoid").setDEF("hanim_r_trapezoid")
                  .addChild(new Transform().setTranslation(new float[] {-0.07f,0.07f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC2").setCoordIndex(new MFInt3215().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray())))))
                .addComments("index finger")
                .addChild(new HAnimJoint().setName("r_carpometacarpal_2").setDEF("hanim_r_carpometacarpal_2").setCenter(new float[] {-0.1f,0.2f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                  .addChild(new HAnimSegment().setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2")
                    .addChild(new Transform().setTranslation(new float[] {-0.1f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC2toMCP2").setCoordIndex(new MFInt3217().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray())))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_2").setDEF("hanim_r_metacarpophalangeal_2").setCenter(new float[] {-0.15f,0.5f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                    .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2")
                      .addChild(new Transform().setTranslation(new float[] {-0.15f,0.5f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP2toPIP2").setCoordIndex(new MFInt3219().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray())))))
                    .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_2").setDEF("hanim_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.2f,0.7f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                      .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2")
                        .addChild(new Transform().setTranslation(new float[] {-0.2f,0.7f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new MFInt3221().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray())))))
                      .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_2").setDEF("hanim_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.24f,0.87f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2")
                          .addChild(new Transform().setTranslation(new float[] {-0.24f,0.87f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_2").setCoordIndex(new MFInt3223().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))))))))))
              .addComments("MC3")
              .addChild(new HAnimJoint().setName("r_midcarpal_3").setDEF("hanim_r_midcarpal_3").setCenter(new float[] {0f,0.07f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                .addChild(new HAnimSegment().setName("r_capitate").setDEF("hanim_r_capitate")
                  .addChild(new Transform().setTranslation(new float[] {0f,0.07f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC3toCMC3").setCoordIndex(new MFInt3225().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray())))))
                .addComments("Middle fingle")
                .addChild(new HAnimJoint().setName("r_carpometacarpal_3").setDEF("hanim_r_carpometacarpal_3").setCenter(new float[] {0f,0.2f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                  .addChild(new HAnimSegment().setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3")
                    .addChild(new Transform().setTranslation(new float[] {0f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC3toMCP3").setCoordIndex(new MFInt3227().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray())))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_3").setDEF("hanim_r_metacarpophalangeal_3").setCenter(new float[] {-0.03f,0.5f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                    .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3")
                      .addChild(new Transform().setTranslation(new float[] {-0.03f,0.5f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP3toPIP3").setCoordIndex(new MFInt3229().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray())))))
                    .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_3").setDEF("hanim_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.05f,0.75f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                      .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3")
                        .addChild(new Transform().setTranslation(new float[] {-0.05f,0.75f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new MFInt3231().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))
                      .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_3").setDEF("hanim_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.08f,0.96f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3")
                          .addChild(new Transform().setTranslation(new float[] {-0.08f,0.96f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_3").setCoordIndex(new MFInt3233().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray()))))))))))
              .addComments("MC4_5")
              .addChild(new HAnimJoint().setName("r_midcarpal_4_5").setDEF("hanim_r_midcarpal_4_5").setCenter(new float[] {0.1f,0.1f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                .addChild(new HAnimSegment().setName("r_hamate").setDEF("hanim_r_hamate")
                  .addChild(new Transform().setTranslation(new float[] {0.1f,0.1f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC4").setCoordIndex(new MFInt3235().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC5").setCoordIndex(new MFInt3237().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray())))))
                .addComments("ring finger")
                .addChild(new HAnimJoint().setName("r_carpometacarpal_4").setDEF("hanim_r_carpometacarpal_4").setCenter(new float[] {0.1f,0.2f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                  .addChild(new HAnimSegment().setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4")
                    .addChild(new Transform().setTranslation(new float[] {0.1f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC4toMCP4").setCoordIndex(new MFInt3239().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray())))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_4").setDEF("hanim_r_metacarpophalangeal_4").setCenter(new float[] {0.1f,0.47f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                    .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4")
                      .addChild(new Transform().setTranslation(new float[] {0.1f,0.47f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP4toPIP4").setCoordIndex(new MFInt3241().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray())))))
                    .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_4").setDEF("hanim_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1f,0.7f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                      .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4")
                        .addChild(new Transform().setTranslation(new float[] {0.1f,0.7f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new MFInt3243().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray())))))
                      .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_4").setDEF("hanim_r_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1f,0.93f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4")
                          .addChild(new Transform().setTranslation(new float[] {0.1f,0.93f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_4").setCoordIndex(new MFInt3245().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray())))))))))
                .addComments("pinky finger")
                .addChild(new HAnimJoint().setName("r_carpometacarpal_5").setDEF("hanim_r_carpometacarpal_5").setCenter(new float[] {0.15f,0.17f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                  .addChild(new HAnimSegment().setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5")
                    .addChild(new Transform().setTranslation(new float[] {0.15f,0.17f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC5toMCP5").setCoordIndex(new MFInt3247().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray())))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_5").setDEF("hanim_r_metacarpophalangeal_5").setCenter(new float[] {0.2f,0.4f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                    .addChild(new HAnimSegment().setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5")
                      .addChild(new Transform().setTranslation(new float[] {0.2f,0.4f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP5toPIP5").setCoordIndex(new MFInt3249().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray())))))
                    .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_5").setDEF("hanim_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.23f,0.63f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                      .addChild(new HAnimSegment().setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5")
                        .addChild(new Transform().setTranslation(new float[] {0.23f,0.63f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new MFInt3251().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray())))))
                      .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_5").setDEF("hanim_r_carpal_distal_interphalangeal_5").setCenter(new float[] {0.25f,0.79f,0f}).setUlimit(new float[] {0f,0f,0f}).setLlimit(new float[] {0f,0f,0f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5")
                          .addChild(new Transform().setTranslation(new float[] {0.25f,0.79f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_carpal_distal_interphalangeal_5").setCoordIndex(new MFInt3253().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray()))))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_4"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_3"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_4_5"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_capitate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_distal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_middle_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal_proximal_phalanx_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_hamate"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezium"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_trapezoid"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kwan-Hee YOO, Don Brutzman and Joe Williams"});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,-0.1f,0.1f,0f});
  }
}
protected class MFInt323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0.07f,0f});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.1f,0.1f,0f});
  }
}
protected class MFInt327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f8 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.2f,0.15f,0f});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f10 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.15f,0f,-0.3f,0.3f,0f});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3f,0.3f,0f,-0.35f,0.4f,0f});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f14 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.35f,0.4f,0f,-0.36f,0.45f,0f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.1f,0.2f,0f});
  }
}
protected class MFInt3217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f18 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.2f,0f,-0.15f,0.5f,0f});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f20 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,0.5f,0f,-0.2f,0.7f,0f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f22 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.7f,0f,-0.24f,0.87f,0f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.24f,0.87f,0f,-0.26f,0.93f,0f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.07f,0f,0f,0.2f,0f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.2f,0f,-0.03f,0.5f,0f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03f,0.5f,0f,-0.05f,0.75f,0f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,0.75f,0f,-0.08f,0.96f,0f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.08f,0.96f,0f,-0.09f,1.05f,0f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.1f,0.2f,0f});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f38 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.15f,0.17f,0f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.2f,0f,0.1f,0.47f,0f});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.47f,0f,0.1f,0.7f,0f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.7f,0f,0.1f,0.93f,0f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f46 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.93f,0f,0.1f,1f,0f});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,0.17f,0f,0.2f,0.4f,0f});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f,0.4f,0f,0.23f,0.63f,0f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.23f,0.63f,0f,0.25f,0.79f,0f});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f54 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f,0.79f,0f,0.26f,0.85f,0f});
  }
}
}
