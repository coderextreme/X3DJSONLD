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
public class HAnimModelHandRight implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimModelHandRight().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimModelHandRight.new.java.x3d");
    model.toFileJSON("../data/HAnimModelHandRight.new.java.x3dj");
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
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("HAnimModelHandRight.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Right hand using high-fidelity definitions for HAnim version 2.0")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("26 January 2015")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("23 December 2021")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("HAnimModelHandRightSegmentVisualizationError.png")))
        .addMeta(new meta().setName(new SFString("error")).setContent(new SFString("not yet to scale, also relatively flat")))
        .addMeta(new meta().setName(new SFString("warning")).setContent(new SFString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")))
        .addMeta(new meta().setName(new SFString("info")).setContent(new SFString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/working-groups/humanoid-animation-HAnim")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("X3D HAnim humanoid animation")))
        .addMeta(new meta().setName(new SFString("TODO")).setContent(new SFString("Integrate and confirm Segment/Joint names, Viewpoints.")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("HAnimModelHandRight.x3d")))
        .addChild(new HAnimHumanoid().setName(new SFString("Hand_Right")).setDEF(new SFString("hanim_Hand_Right")).setLoa(4).setVersion(new SFString("2.0"))
          .addComments(new CommentsBlock("original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'"))
          .setMetadata(new MetadataSet().setName(new SFString("HAnimHumanoid.info")).setReference(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"))
            .setMetadata(new MetadataString().setName(new SFString("authorName")).setValue(new MFString0().getArray())))
          .addSkeleton(new HAnimJoint("hanim_Hand_Right").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setUlimit(new MFFloat1().getArray()).setLlimit(new MFFloat2().getArray())
            .addComments(new CommentsBlock("Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model"))
            .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("r_radiocarpal")).setDEF(new SFString("hanim_r_radiocarpal")).setDescription(new SFString("connection joint of hand to leg above")).setUlimit(new MFFloat3().getArray()).setLlimit(new MFFloat4().getArray())
              .addChild(new HAnimSegment("hanim_r_radiocarpal").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal"))
                .addChild(new Transform()
                  .addChild(new Shape().setDEF(new SFString("HAnimJointShape"))
                    .setGeometry(new Sphere().setRadius(0.025f ))
                    .setAppearance(new Appearance().setDEF(new SFString("HAnimJointAppearanceBlue"))
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new IndexedLineSet().setDEF(new SFString("RCToMC12")).setCoordIndex(new MFInt325().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new IndexedLineSet().setDEF(new SFString("RCToMC3")).setCoordIndex(new MFInt327().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new IndexedLineSet().setDEF(new SFString("RCToMC45")).setCoordIndex(new MFInt329().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray())))))
              .addComments(new CommentsBlock("MC1"))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_1")).setDEF(new SFString("hanim_r_midcarpal_1")).setCenter(new float[] {-0.14f ,0.09f ,0f }).setUlimit(new MFFloat11().getArray()).setLlimit(new MFFloat12().getArray())
                .addChild(new HAnimSegment("hanim_r_midcarpal_1").setName(new SFString("r_trapezium")).setDEF(new SFString("hanim_r_trapezium"))
                  .addChild(new Transform().setTranslation(new float[] {-0.14f ,0.09f ,0f })
                    .addChild(new Shape().setDEF(new SFString("HAnimNewJointShape"))
                      .setGeometry(new Sphere().setRadius(0.025f ))
                      .setAppearance(new Appearance().setDEF(new SFString("HAnimJointAppearanceRed"))
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f })))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("MC12toCMC1")).setCoordIndex(new MFInt3213().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray())))))
                .addComments(new CommentsBlock("thumb finger"))
                .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName(new SFString("r_carpometacarpal_1")).setDEF(new SFString("hanim_r_carpometacarpal_1")).setCenter(new float[] {-0.2f ,0.15f ,0f }).setUlimit(new MFFloat15().getArray()).setLlimit(new MFFloat16().getArray())
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("hanim_r_metacarpal_1"))
                    .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.15f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CMC1toMCP1xxx")).setCoordIndex(new MFInt3217().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName(new SFString("r_metacarpophalangeal_1")).setDEF(new SFString("hanim_r_metacarpophalangeal_1")).setCenter(new float[] {-0.3f ,0.3f ,0f }).setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_1"))
                      .addChild(new Transform().setTranslation(new float[] {-0.3f ,0.3f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("MCP11toIP1")).setCoordIndex(new MFInt3221().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName(new SFString("r_carpal_interphalangeal_1")).setDEF(new SFString("hanim_r_carpal_interphalangeal_1")).setCenter(new float[] {-0.35f ,0.4f ,0f }).setUlimit(new MFFloat23().getArray()).setLlimit(new MFFloat24().getArray())
                      .addChild(new HAnimSegment("hanim_r_carpal_interphalangeal_1").setName(new SFString("r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_1"))
                        .addChild(new Transform().setTranslation(new float[] {-0.35f ,0.4f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("fingertip_r_carpal_interphalangeal_1")).setCoordIndex(new MFInt3225().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray())))))))))
              .addComments(new CommentsBlock("MC2"))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_2")).setDEF(new SFString("hanim_r_midcarpal_2")).setCenter(new float[] {-0.07f ,0.07f ,0f }).setUlimit(new MFFloat27().getArray()).setLlimit(new MFFloat28().getArray())
                .addChild(new HAnimSegment("hanim_r_midcarpal_2").setName(new SFString("r_trapezoid")).setDEF(new SFString("hanim_r_trapezoid"))
                  .addChild(new Transform().setTranslation(new float[] {-0.07f ,0.07f ,0f })
                    .addChild(new Shape().setUSE(new SFString("HAnimNewJointShape"))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("MC12toCMC2")).setCoordIndex(new MFInt3229().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray())))))
                .addComments(new CommentsBlock("index finger"))
                .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName(new SFString("r_carpometacarpal_2")).setDEF(new SFString("hanim_r_carpometacarpal_2")).setCenter(new float[] {-0.1f ,0.2f ,0f }).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("hanim_r_metacarpal_2"))
                    .addChild(new Transform().setTranslation(new float[] {-0.1f ,0.2f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CMC2toMCP2")).setCoordIndex(new MFInt3233().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName(new SFString("r_metacarpophalangeal_2")).setDEF(new SFString("hanim_r_metacarpophalangeal_2")).setCenter(new float[] {-0.15f ,0.5f ,0f }).setUlimit(new MFFloat35().getArray()).setLlimit(new MFFloat36().getArray())
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_2"))
                      .addChild(new Transform().setTranslation(new float[] {-0.15f ,0.5f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("MCP2toPIP2")).setCoordIndex(new MFInt3237().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_2")).setCenter(new float[] {-0.2f ,0.7f ,0f }).setUlimit(new MFFloat39().getArray()).setLlimit(new MFFloat40().getArray())
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_2"))
                        .addChild(new Transform().setTranslation(new float[] {-0.2f ,0.7f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP2toDIP2")).setCoordIndex(new MFInt3241().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_distal_interphalangeal_2")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_2")).setCenter(new float[] {-0.24f ,0.87f ,0f }).setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_2").setName(new SFString("r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_2"))
                          .addChild(new Transform().setTranslation(new float[] {-0.24f ,0.87f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("fingertip_r_carpal_distal_interphalangeal_2")).setCoordIndex(new MFInt3245().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray()))))))))))
              .addComments(new CommentsBlock("MC3"))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_3")).setDEF(new SFString("hanim_r_midcarpal_3")).setCenter(new float[] {0f ,0.07f ,0f }).setUlimit(new MFFloat47().getArray()).setLlimit(new MFFloat48().getArray())
                .addChild(new HAnimSegment("hanim_r_midcarpal_3").setName(new SFString("r_capitate")).setDEF(new SFString("hanim_r_capitate"))
                  .addChild(new Transform().setTranslation(new float[] {0f ,0.07f ,0f })
                    .addChild(new Shape().setUSE(new SFString("HAnimNewJointShape"))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("MC3toCMC3")).setCoordIndex(new MFInt3249().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray())))))
                .addComments(new CommentsBlock("Middle fingle"))
                .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName(new SFString("r_carpometacarpal_3")).setDEF(new SFString("hanim_r_carpometacarpal_3")).setCenter(new float[] {0f ,0.2f ,0f }).setUlimit(new MFFloat51().getArray()).setLlimit(new MFFloat52().getArray())
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("hanim_r_metacarpal_3"))
                    .addChild(new Transform().setTranslation(new float[] {0f ,0.2f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CMC3toMCP3")).setCoordIndex(new MFInt3253().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName(new SFString("r_metacarpophalangeal_3")).setDEF(new SFString("hanim_r_metacarpophalangeal_3")).setCenter(new float[] {-0.03f ,0.5f ,0f }).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_3"))
                      .addChild(new Transform().setTranslation(new float[] {-0.03f ,0.5f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("MCP3toPIP3")).setCoordIndex(new MFInt3257().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f58().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_3")).setCenter(new float[] {-0.05f ,0.75f ,0f }).setUlimit(new MFFloat59().getArray()).setLlimit(new MFFloat60().getArray())
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_3"))
                        .addChild(new Transform().setTranslation(new float[] {-0.05f ,0.75f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP3toDIP3")).setCoordIndex(new MFInt3261().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f62().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_distal_interphalangeal_3")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_3")).setCenter(new float[] {-0.08f ,0.96f ,0f }).setUlimit(new MFFloat63().getArray()).setLlimit(new MFFloat64().getArray())
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_3").setName(new SFString("r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_3"))
                          .addChild(new Transform().setTranslation(new float[] {-0.08f ,0.96f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("fingertip_r_carpal_distal_interphalangeal_3")).setCoordIndex(new MFInt3265().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f66().getArray()))))))))))
              .addComments(new CommentsBlock("MC4_5"))
              .addChild(new HAnimJoint("hanim_r_radiocarpal").setName(new SFString("r_midcarpal_4_5")).setDEF(new SFString("hanim_r_midcarpal_4_5")).setCenter(new float[] {0.1f ,0.1f ,0f }).setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                .addChild(new HAnimSegment("hanim_r_midcarpal_4_5").setName(new SFString("r_hamate")).setDEF(new SFString("hanim_r_hamate"))
                  .addChild(new Transform().setTranslation(new float[] {0.1f ,0.1f ,0f })
                    .addChild(new Shape().setUSE(new SFString("HAnimNewJointShape"))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("MC45toCMC4")).setCoordIndex(new MFInt3269().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f70().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("MC45toCMC5")).setCoordIndex(new MFInt3271().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f72().getArray())))))
                .addComments(new CommentsBlock("ring finger"))
                .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_4")).setDEF(new SFString("hanim_r_carpometacarpal_4")).setCenter(new float[] {0.1f ,0.2f ,0f }).setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("hanim_r_metacarpal_4"))
                    .addChild(new Transform().setTranslation(new float[] {0.1f ,0.2f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CMC4toMCP4")).setCoordIndex(new MFInt3275().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f76().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName(new SFString("r_metacarpophalangeal_4")).setDEF(new SFString("hanim_r_metacarpophalangeal_4")).setCenter(new float[] {0.1f ,0.47f ,0f }).setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_4"))
                      .addChild(new Transform().setTranslation(new float[] {0.1f ,0.47f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("MCP4toPIP4")).setCoordIndex(new MFInt3279().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f80().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_4")).setCenter(new float[] {0.1f ,0.7f ,0f }).setUlimit(new MFFloat81().getArray()).setLlimit(new MFFloat82().getArray())
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_4"))
                        .addChild(new Transform().setTranslation(new float[] {0.1f ,0.7f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP4toDIP4")).setCoordIndex(new MFInt3283().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f84().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_distal_interphalangeal_4")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_4")).setCenter(new float[] {0.1f ,0.93f ,0f }).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_4").setName(new SFString("r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_4"))
                          .addChild(new Transform().setTranslation(new float[] {0.1f ,0.93f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("fingertip_r_carpal_distal_interphalangeal_4")).setCoordIndex(new MFInt3287().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f88().getArray())))))))))
                .addComments(new CommentsBlock("pinky finger"))
                .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName(new SFString("r_carpometacarpal_5")).setDEF(new SFString("hanim_r_carpometacarpal_5")).setCenter(new float[] {0.15f ,0.17f ,0f }).setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
                  .addChild(new HAnimSegment("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("hanim_r_metacarpal_5"))
                    .addChild(new Transform().setTranslation(new float[] {0.15f ,0.17f ,0f })
                      .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                      .setGeometry(new IndexedLineSet().setDEF(new SFString("CMC5toMCP5")).setCoordIndex(new MFInt3291().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f92().getArray())))))
                  .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName(new SFString("r_metacarpophalangeal_5")).setDEF(new SFString("hanim_r_metacarpophalangeal_5")).setCenter(new float[] {0.2f ,0.4f ,0f }).setUlimit(new MFFloat93().getArray()).setLlimit(new MFFloat94().getArray())
                    .addChild(new HAnimSegment("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_5"))
                      .addChild(new Transform().setTranslation(new float[] {0.2f ,0.4f ,0f })
                        .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                        .setGeometry(new IndexedLineSet().setDEF(new SFString("MCP5toPIP5")).setCoordIndex(new MFInt3295().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f96().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_proximal_interphalangeal_5")).setCenter(new float[] {0.23f ,0.63f ,0f }).setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray())
                      .addChild(new HAnimSegment("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_5"))
                        .addChild(new Transform().setTranslation(new float[] {0.23f ,0.63f ,0f })
                          .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                          .setGeometry(new IndexedLineSet().setDEF(new SFString("PIP5toDIP5")).setCoordIndex(new MFInt3299().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f100().getArray())))))
                      .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_distal_interphalangeal_5")).setDEF(new SFString("hanim_r_carpal_distal_interphalangeal_5")).setCenter(new float[] {0.25f ,0.79f ,0f }).setUlimit(new MFFloat101().getArray()).setLlimit(new MFFloat102().getArray())
                        .addChild(new HAnimSegment("hanim_r_carpal_distal_interphalangeal_5").setName(new SFString("r_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_5"))
                          .addChild(new Transform().setTranslation(new float[] {0.25f ,0.79f ,0f })
                            .addChild(new Shape().setUSE(new SFString("HAnimJointShape"))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f ,1f ,1f })))
                            .setGeometry(new IndexedLineSet().setDEF(new SFString("fingertip_r_carpal_distal_interphalangeal_5")).setCoordIndex(new MFInt32103().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f104().getArray()))))))))))))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_humanoid_root")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_distal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_interphalangeal_1")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_3")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_4")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpal_proximal_interphalangeal_5")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpometacarpal_1")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpometacarpal_2")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpometacarpal_3")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpometacarpal_4")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_carpometacarpal_5")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_metacarpophalangeal_1")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_metacarpophalangeal_2")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_metacarpophalangeal_3")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_metacarpophalangeal_4")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_metacarpophalangeal_5")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_midcarpal_1")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_midcarpal_2")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_midcarpal_3")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_midcarpal_4_5")))
          .addJoints(new HAnimJoint("hanim_Hand_Right").setUSE(new SFString("hanim_r_radiocarpal")))));
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,-0.1f ,0.1f ,0f });
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0.07f ,0f });
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0.1f ,0.1f ,0f });
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.1f ,0f ,-0.2f ,0.15f ,0f });
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.15f ,0f ,-0.3f ,0.3f ,0f });
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3f ,0.3f ,0f ,-0.35f ,0.4f ,0f });
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.35f ,0.4f ,0f ,-0.36f ,0.45f ,0f });
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.1f ,0f ,-0.1f ,0.2f ,0f });
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f ,0.2f ,0f ,-0.15f ,0.5f ,0f });
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f ,0.5f ,0f ,-0.2f ,0.7f ,0f });
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f ,0.7f ,0f ,-0.24f ,0.87f ,0f });
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.24f ,0.87f ,0f ,-0.26f ,0.93f ,0f });
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat48 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.07f ,0f ,0f ,0.2f ,0f });
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.2f ,0f ,-0.03f ,0.5f ,0f });
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f58 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03f ,0.5f ,0f ,-0.05f ,0.75f ,0f });
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f62 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f ,0.75f ,0f ,-0.08f ,0.96f ,0f });
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f66 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.08f ,0.96f ,0f ,-0.09f ,1.05f ,0f });
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f70 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.1f ,0f ,0.1f ,0.2f ,0f });
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.1f ,0f ,0.15f ,0.17f ,0f });
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.2f ,0f ,0.1f ,0.47f ,0f });
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.47f ,0f ,0.1f ,0.7f ,0f });
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f84 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.7f ,0f ,0.1f ,0.93f ,0f });
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f88 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f ,0.93f ,0f ,0.1f ,1f ,0f });
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f92 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f ,0.17f ,0f ,0.2f ,0.4f ,0f });
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f96 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f ,0.4f ,0f ,0.23f ,0.63f ,0f });
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f100 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.23f ,0.63f ,0f ,0.25f ,0.79f ,0f });
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f104 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f ,0.79f ,0f ,0.26f ,0.85f ,0f });
  }
}
}
