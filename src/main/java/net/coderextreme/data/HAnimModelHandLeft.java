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
public class HAnimModelHandLeft implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimModelHandLeft().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimModelHandLeft.new.java.x3d");
    model.toFileJSON("../data/HAnimModelHandLeft.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("HAnimModelHandLeft.x3d"))
        .addMeta(new meta().setName("description").setContent("Left hand, using high-fidelity definitions for HAnim version 2.0"))
        .addMeta(new meta().setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
        .addMeta(new meta().setName("created").setContent("26 January 2015"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
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
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelHandLeft.x3d"))
        .addChild(new HAnimHumanoid().setName("Hand_Left").setDEF("hanim_Hand_Left").setLoa(4).setVersion("2.0")
          .addComments("original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorName").setValue(new MFString0().getArray())))
          .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setName("humanoid_root").setDEF("hanim_humanoid_root").setContainerFieldOverride("skeleton"))
            .addComments("Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model")
            .addChild(new HAnimJoint("hanim_humanoid_root").setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setDescription("connection joint of hand to leg above")
              .addChild(new HAnimSegment("hanim_l_radiocarpal").setName("l_carpal").setDEF("hanim_l_carpal")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setGeometry(new Sphere().setRadius(0.025))
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearanceBlue")
                      .setMaterial(new Material().setDiffuseColor(new double[] {0,0,1})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC12").setCoordIndex(new MFInt321().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC3").setCoordIndex(new MFInt323().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f4().getArray()))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC45").setCoordIndex(new MFInt325().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray())))))
              .addComments("MC1")
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_1").setDEF("hanim_l_midcarpal_1").setCenter(new double[] {0.14,0.09,0})
                .addChild(new HAnimSegment("hanim_l_midcarpal_1").setName("l_trapezium").setDEF("hanim_l_trapezium")
                  .addChild(new Transform().setTranslation(new double[] {0.14,0.09,0})
                    .addChild(new Shape().setDEF("HAnimNewJointShape")
                      .setGeometry(new Sphere().setRadius(0.025))
                      .setAppearance(new Appearance().setDEF("HAnimJointAppearanceRed")
                        .setMaterial(new Material().setDiffuseColor(new double[] {1,0,0})))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC1").setCoordIndex(new MFInt327().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("MC1toCMC1").setCoordIndex(new MFInt329().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray())))))
                .addComments("thumb finger")
                .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new double[] {0.2,0.15,0})
                  .addChild(new HAnimSegment("hanim_l_carpometacarpal_1").setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                    .addChild(new Transform().setTranslation(new double[] {0.2,0.15,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC1toMCP1").setCoordIndex(new MFInt3211().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new double[] {0.3,0.3,0})
                    .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_1").setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                      .addChild(new Transform().setTranslation(new double[] {0.3,0.3,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP11toIP1").setCoordIndex(new MFInt3213().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new double[] {0.35,0.4,0})
                      .addChild(new HAnimSegment("hanim_l_carpal_interphalangeal_1").setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1")
                        .addChild(new Transform().setTranslation(new double[] {0.35,0.4,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("fingertip_l_carpal_interphalangeal_1").setCoordIndex(new MFInt3215().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f16().getArray())))))))))
              .addComments("MC2")
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_2").setDEF("hanim_l_midcarpal_2").setCenter(new double[] {0.07,0.07,0})
                .addChild(new HAnimSegment("hanim_l_midcarpal_2").setName("l_trapezoid").setDEF("hanim_l_trapezoid")
                  .addChild(new Transform().setTranslation(new double[] {0.07,0.07,0})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("MC2toCMC2").setCoordIndex(new MFInt3217().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f18().getArray())))))
                .addComments("index finger")
                .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new double[] {0.1,0.2,0})
                  .addChild(new HAnimSegment("hanim_l_carpometacarpal_2").setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                    .addChild(new Transform().setTranslation(new double[] {0.1,0.2,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC2toMCP2").setCoordIndex(new MFInt3219().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f20().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new double[] {0.15,0.5,0})
                    .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                      .addChild(new Transform().setTranslation(new double[] {0.15,0.5,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP2toPIP2").setCoordIndex(new MFInt3221().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f22().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new double[] {0.2,0.7,0})
                      .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                        .addChild(new Transform().setTranslation(new double[] {0.2,0.7,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new MFInt3223().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new double[] {0.24,0.87,0})
                        .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2")
                          .addChild(new Transform().setTranslation(new double[] {0.24,0.87,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_carpal_distal_interphalangeal_2").setCoordIndex(new MFInt3225().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f26().getArray()))))))))))
              .addComments("MC3")
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_3").setDEF("hanim_l_midcarpal_3").setCenter(new double[] {0,0.07,0})
                .addChild(new HAnimSegment("hanim_l_midcarpal_3").setName("l_capitate").setDEF("hanim_l_capitate")
                  .addChild(new Transform().setTranslation(new double[] {0,0.07,0})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("MC3toCMC3").setCoordIndex(new MFInt3227().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f28().getArray())))))
                .addComments("Middle fingle")
                .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_carpometacarpal_3").setDEF("hanim_l_carpometacarpal_3").setCenter(new double[] {0,0.2,0})
                  .addChild(new HAnimSegment("hanim_l_carpometacarpal_3").setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3")
                    .addChild(new Transform().setTranslation(new double[] {0,0.2,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC3toMCP3").setCoordIndex(new MFInt3229().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_metacarpophalangeal_3").setDEF("hanim_l_metacarpophalangeal_3").setCenter(new double[] {0.03,0.5,0})
                    .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3")
                      .addChild(new Transform().setTranslation(new double[] {0.03,0.5,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP3toPIP3").setCoordIndex(new MFInt3231().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f32().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setDEF("hanim_l_carpal_proximal_interphalangeal_3").setCenter(new double[] {0.05,0.75,0})
                      .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3")
                        .addChild(new Transform().setTranslation(new double[] {0.05,0.75,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new MFInt3233().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f34().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setDEF("hanim_l_carpal_distal_interphalangeal_3").setCenter(new double[] {0.08,0.96,0})
                        .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3")
                          .addChild(new Transform().setTranslation(new double[] {0.08,0.96,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_carpal_distal_interphalangeal_3").setCoordIndex(new MFInt3235().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f36().getArray()))))))))))
              .addComments("MC45")
              .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_midcarpal_4_5").setDEF("hanim_l_midcarpal_4_5").setCenter(new double[] {-0.1,0.1,0})
                .addChild(new HAnimSegment("hanim_l_midcarpal_4_5").setName("l_hamate").setDEF("hanim_l_hamate")
                  .addChild(new Transform().setTranslation(new double[] {-0.1,0.1,0})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC4").setCoordIndex(new MFInt3237().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f38().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC5").setCoordIndex(new MFInt3239().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f40().getArray())))))
                .addComments("ring finger")
                .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_4").setDEF("hanim_l_carpometacarpal_4").setCenter(new double[] {-0.1,0.2,0})
                  .addChild(new HAnimSegment("hanim_l_carpometacarpal_4").setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4")
                    .addChild(new Transform().setTranslation(new double[] {-0.1,0.2,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC4toMCP4").setCoordIndex(new MFInt3241().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_metacarpophalangeal_4").setDEF("hanim_l_metacarpophalangeal_4").setCenter(new double[] {-0.1,0.47,0})
                    .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4")
                      .addChild(new Transform().setTranslation(new double[] {-0.1,0.47,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP4toPIP4").setCoordIndex(new MFInt3243().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f44().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setDEF("hanim_l_carpal_proximal_interphalangeal_4").setCenter(new double[] {-0.1,0.7,0})
                      .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4")
                        .addChild(new Transform().setTranslation(new double[] {-0.1,0.7,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new MFInt3245().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f46().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setDEF("hanim_l_carpal_distal_interphalangeal_4").setCenter(new double[] {-0.1,0.93,0})
                        .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4")
                          .addChild(new Transform().setTranslation(new double[] {-0.1,0.93,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_carpal_distal_interphalangeal_4").setCoordIndex(new MFInt3247().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f48().getArray())))))))))
                .addComments("pinky finger")
                .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_carpometacarpal_5").setDEF("hanim_l_carpometacarpal_5").setCenter(new double[] {-0.15,0.17,0})
                  .addChild(new HAnimSegment("hanim_l_carpometacarpal_5").setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5")
                    .addChild(new Transform().setTranslation(new double[] {-0.15,0.17,0})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC5toMCP5").setCoordIndex(new MFInt3249().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f50().getArray())))))
                  .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_metacarpophalangeal_5").setDEF("hanim_l_metacarpophalangeal_5").setCenter(new double[] {-0.2,0.4,0})
                    .addChild(new HAnimSegment("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5")
                      .addChild(new Transform().setTranslation(new double[] {-0.2,0.4,0})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP5toPIP5").setCoordIndex(new MFInt3251().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f52().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setDEF("hanim_l_carpal_proximal_interphalangeal_5").setCenter(new double[] {-0.23,0.63,0})
                      .addChild(new HAnimSegment("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5")
                        .addChild(new Transform().setTranslation(new double[] {-0.23,0.63,0})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new MFInt3253().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f54().getArray())))))
                      .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setDEF("hanim_l_carpal_distal_interphalangeal_5").setCenter(new double[] {-0.25,0.79,0})
                        .addChild(new HAnimSegment("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5")
                          .addChild(new Transform().setTranslation(new double[] {-0.25,0.79,0})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new double[] {1,1,1})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_carpal_distal_interphalangeal_5").setCoordIndex(new MFInt3255().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f56().getArray()))))))))))))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_humanoid_root"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_carpometacarpal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_4"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpophalangeal_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_1"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_2"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_3"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_midcarpal_4_5"))
          .addJoints(((HAnimJoint)new HAnimJoint("hanim_Hand_Left").setContainerFieldOverride("joints")).setUSE("hanim_l_radiocarpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_capitate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_distal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_distal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_distal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_middle_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_carpal_proximal_phalanx_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_hamate"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_1"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_2"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_3"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_4"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_metacarpal_5"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_trapezium"))
          .addSegments(((HAnimSegment)new HAnimSegment("hanim_Hand_Left").setContainerFieldOverride("segments")).setUSE("hanim_l_trapezoid"))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kwan-Hee YOO, Don Brutzman and Joe Williams"});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0.1,0.1,0});
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f4 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0,0.07,0});
  }
}
private class MFInt325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,-0.1,0.1,0});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f8 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1,0.1,0,0.2,0.15,0});
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1,0.1,0,0.1,0.2,0});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f12 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2,0.15,0,0.3,0.3,0});
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.3,0.3,0,0.35,0.4,0});
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.35,0.4,0,0.36,0.45,0});
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f18 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,0.1,0,-0.1,0.2,0});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f20 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.1,0.2,0,0.15,0.5,0});
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f22 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.15,0.5,0,0.2,0.7,0});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f24 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.2,0.7,0,0.24,0.87,0});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f26 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.24,0.87,0,0.26,0.93,0});
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f28 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.07,0,0,0.2,0});
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.2,0,0.03,0.5,0});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.03,0.5,0,0.05,0.75,0});
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.05,0.75,0,0.08,0.96,0});
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0.08,0.96,0,0.09,1.05,0});
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,0.1,0,-0.1,0.2,0});
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,0.1,0,-0.15,0.17,0});
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f42 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,0.2,0,-0.1,0.47,0});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,0.47,0,-0.1,0.7,0});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f46 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,0.7,0,-0.1,0.93,0});
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.1,0.93,0,-0.1,1,0});
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f50 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.15,0.17,0,-0.2,0.4,0});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.2,0.4,0,-0.23,0.63,0});
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f54 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.23,0.63,0,-0.25,0.79,0});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
private class MFVec3f56 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.25,0.79,0,-0.26,0.85,0});
  }
}
}
