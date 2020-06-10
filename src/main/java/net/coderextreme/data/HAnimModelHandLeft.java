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
public class HAnimModelHandLeft {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HAnimModelHandLeft().initialize().toFileJSON("../data/HAnimModelHandLeft.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnimModelHandLeft.x3d"))
        .addMeta(new meta().setName("description").setContent("Left hand, using high-fidelity definitions for H-Anim version 2.2"))
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
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelHandLeft.x3d"))
        .addChild(new HAnimHumanoid().setName("Humanoid_Left_hand").setDEF("Humanoid_Left_hand").setJointBindingPositions(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f0().getArray())).setJointBindingRotations(new org.web3d.x3d.jsail.fields.MFRotation(new MFRotation1().getArray())).setJointBindingScales(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f2().getArray())).setVersion("2.0")
          .addJoints(new HAnimJoint().setName("humanoid_root").setDEF("hanim_HumanoidRoot")
            .addChild(new HAnimJoint().setName("l_radiocarpal_joint").setDEF("l_radiocarpal_joint")
              .addChild(new HAnimSegment().setName("l_wrist").setDEF("l_wrist")
                .addChild(new Transform()
                  .addChild(new Shape().setDEF("HAnimJointShape")
                    .setGeometry(new Sphere().setRadius(0.025f))
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearanceBlue")
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC12").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt323().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f4().getArray())))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt325().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f6().getArray())))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC45").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt327().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f8().getArray()))))))
              .addComments(new CommentsBlock("MC12"))
              .addChild(new HAnimJoint().setName("l_midcarpal_joint_12").setDEF("l_midcarpal_joint_12").setCenter(new float[] {0.1f,0.1f,0f})
                .addChild(new HAnimSegment().setName("l_trapezoid").setDEF("l_trapezoid")
                  .addChild(new Transform().setTranslation(new float[] {0.1f,0.1f,0f})
                    .addChild(new Shape().setDEF("HAnimNewJointShape")
                      .setGeometry(new Sphere().setRadius(0.025f))
                      .setAppearance(new Appearance().setDEF("HAnimJointAppearanceRed")
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt329().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f10().getArray())))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3211().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f12().getArray()))))))
                .addComments(new CommentsBlock("thumb finger"))
                .addChild(new HAnimJoint().setName("l_carpometacarpal_joint_1").setDEF("l_carpometacarpal_joint_1").setCenter(new float[] {0.2f,0.15f,0f})
                  .addChild(new HAnimSegment().setName("l_metacarpal_1").setDEF("l_metacarpal_1")
                    .addChild(new Transform().setTranslation(new float[] {0.2f,0.15f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC1toMCP1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3213().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f14().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_metacarpophalangeal_joint_1").setDEF("l_metacarpophalangeal_joint_1").setCenter(new float[] {0.3f,0.3f,0f})
                    .addChild(new HAnimSegment().setName("l_proximal_phalanges1").setDEF("l_proximal_phalanges1")
                      .addChild(new Transform().setTranslation(new float[] {0.3f,0.3f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP11toIP1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3215().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f16().getArray()))))))
                    .addChild(new HAnimJoint().setName("l_interphalangeal_joint_1").setDEF("l_interphalangeal_joint_1").setCenter(new float[] {0.35f,0.4f,0f})
                      .addChild(new HAnimSegment().setName("l_distal_phalanges1").setDEF("l_distal_phalanges1")
                        .addChild(new Transform().setTranslation(new float[] {0.35f,0.4f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("fingertip_l_interphalangeal_joint_1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3217().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f18().getArray())))))))))
                .addComments(new CommentsBlock("index finger"))
                .addChild(new HAnimJoint().setName("l_carpometacarpal_joint_2").setDEF("l_carpometacarpal_joint_2").setCenter(new float[] {0.1f,0.2f,0f})
                  .addChild(new HAnimSegment().setName("l_metacarpal2").setDEF("l_metacarpal2")
                    .addChild(new Transform().setTranslation(new float[] {0.1f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC2toMCP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3219().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f20().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_metacarpophalangeal_joint_2").setDEF("l_metacarpophalangeal_joint_2").setCenter(new float[] {0.15f,0.5f,0f})
                    .addChild(new HAnimSegment().setName("l_proximal_phalanges2").setDEF("l_proximal_phalanges2")
                      .addChild(new Transform().setTranslation(new float[] {0.15f,0.5f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP2toPIP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3221().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f22().getArray()))))))
                    .addChild(new HAnimJoint().setName("l_proximal_interphalangeal_joint_2").setDEF("l_proximal_interphalangeal_joint_2").setCenter(new float[] {0.2f,0.7f,0f})
                      .addChild(new HAnimSegment().setName("l_middle_phalanges2").setDEF("l_middle_phalanges2")
                        .addChild(new Transform().setTranslation(new float[] {0.2f,0.7f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3223().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f24().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_distal_interphalangeal_joint_2").setDEF("l_distal_interphalangeal_joint_2").setCenter(new float[] {0.24f,0.87f,0f})
                        .addChild(new HAnimSegment().setName("l_distal_phalanges2").setDEF("l_distal_phalanges2")
                          .addChild(new Transform().setTranslation(new float[] {0.24f,0.87f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_distal_interphalangeal_joint_2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3225().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f26().getArray())))))))))))
              .addComments(new CommentsBlock("MC3"))
              .addChild(new HAnimJoint().setName("l_midcarpal_joint_3").setDEF("l_midcarpal_joint_3").setCenter(new float[] {0f,0.07f,0f})
                .addChild(new HAnimSegment().setName("l_capitate").setDEF("l_capitate")
                  .addChild(new Transform().setTranslation(new float[] {0f,0.07f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC3toCMC3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3227().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f28().getArray()))))))
                .addComments(new CommentsBlock("Middle fingle"))
                .addChild(new HAnimJoint().setName("l_carpometacarpal_joint_3").setDEF("l_carpometacarpal_joint_3").setCenter(new float[] {0f,0.2f,0f})
                  .addChild(new HAnimSegment().setName("l_metacarpal3").setDEF("l_metacarpal3")
                    .addChild(new Transform().setTranslation(new float[] {0f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC3toMCP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3229().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f30().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_metacarpophalangeal_joint_3").setDEF("l_metacarpophalangeal_joint_3").setCenter(new float[] {0.03f,0.5f,0f})
                    .addChild(new HAnimSegment().setName("l_proximal_phalanges3").setDEF("l_proximal_phalanges3")
                      .addChild(new Transform().setTranslation(new float[] {0.03f,0.5f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP3toPIP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3231().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f32().getArray()))))))
                    .addChild(new HAnimJoint().setName("l_proximal_interphalangeal_joint_3").setDEF("l_proximal_interphalangeal_joint_3").setCenter(new float[] {0.05f,0.75f,0f})
                      .addChild(new HAnimSegment().setName("l_middle_phalanges3").setDEF("l_middle_phalanges3")
                        .addChild(new Transform().setTranslation(new float[] {0.05f,0.75f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3233().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f34().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_distal_interphalangeal_joint_3").setDEF("l_distal_interphalangeal_joint_3").setCenter(new float[] {0.08f,0.96f,0f})
                        .addChild(new HAnimSegment().setName("l_distal_phalanges3").setDEF("l_distal_phalanges3")
                          .addChild(new Transform().setTranslation(new float[] {0.08f,0.96f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_distal_interphalangeal_joint_3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3235().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f36().getArray())))))))))))
              .addComments(new CommentsBlock("MC45"))
              .addChild(new HAnimJoint().setName("l_midcarpal_joint_12").setDEF("l_midcarpal_joint_45").setCenter(new float[] {-0.1f,0.1f,0f})
                .addChild(new HAnimSegment().setName("l_hamate").setDEF("l_hamate")
                  .addChild(new Transform().setTranslation(new float[] {-0.1f,0.1f,0f})
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3237().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f38().getArray())))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3239().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f40().getArray()))))))
                .addComments(new CommentsBlock("ring finger"))
                .addChild(new HAnimJoint().setName("l_carpometacarpal_joint_4").setDEF("l_carpometacarpal_joint_4").setCenter(new float[] {-0.1f,0.2f,0f})
                  .addChild(new HAnimSegment().setName("l_metacarpal4").setDEF("l_metacarpal4")
                    .addChild(new Transform().setTranslation(new float[] {-0.1f,0.2f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC4toMCP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3241().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f42().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_metacarpophalangeal_joint_4").setDEF("l_metacarpophalangeal_joint_4").setCenter(new float[] {-0.1f,0.47f,0f})
                    .addChild(new HAnimSegment().setName("l_proximal_phalanges4").setDEF("l_proximal_phalanges4")
                      .addChild(new Transform().setTranslation(new float[] {-0.1f,0.47f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP4toPIP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3243().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f44().getArray()))))))
                    .addChild(new HAnimJoint().setName("l_proximal_interphalangeal_joint_4").setDEF("l_proximal_interphalangeal_joint_4").setCenter(new float[] {-0.1f,0.7f,0f})
                      .addChild(new HAnimSegment().setName("l_middle_phalanges4").setDEF("l_middle_phalanges4")
                        .addChild(new Transform().setTranslation(new float[] {-0.1f,0.7f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3245().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f46().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_distal_interphalangeal_joint_4").setDEF("l_distal_interphalangeal_joint_4").setCenter(new float[] {-0.1f,0.93f,0f})
                        .addChild(new HAnimSegment().setName("l_distal_phalanx4").setDEF("l_distal_phalanx4")
                          .addChild(new Transform().setTranslation(new float[] {-0.1f,0.93f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_distal_interphalangeal_joint_4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3247().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f48().getArray()))))))))))
                .addComments(new CommentsBlock("pinky finger"))
                .addChild(new HAnimJoint().setName("l_carpometacarpal_joint_5").setDEF("l_carpometacarpal_joint_5").setCenter(new float[] {-0.15f,0.17f,0f})
                  .addChild(new HAnimSegment().setName("l_metacarpal5").setDEF("l_metacarpal5")
                    .addChild(new Transform().setTranslation(new float[] {-0.15f,0.17f,0f})
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC5toMCP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3249().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f50().getArray()))))))
                  .addChild(new HAnimJoint().setName("l_metacarpophalangeal_joint_5").setDEF("l_metacarpophalangeal_joint_5").setCenter(new float[] {-0.2f,0.4f,0f})
                    .addChild(new HAnimSegment().setName("l_proximal_phalanges2").setDEF("l_proximal_phalanges5")
                      .addChild(new Transform().setTranslation(new float[] {-0.2f,0.4f,0f})
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP5toPIP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3251().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f52().getArray()))))))
                    .addChild(new HAnimJoint().setName("l_proximal_interphalangeal_joint_5").setDEF("l_proximal_interphalangeal_joint_5").setCenter(new float[] {-0.23f,0.63f,0f})
                      .addChild(new HAnimSegment().setName("l_middle_phalanges5").setDEF("l_middle_phalanges5")
                        .addChild(new Transform().setTranslation(new float[] {-0.23f,0.63f,0f})
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3253().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f54().getArray()))))))
                      .addChild(new HAnimJoint().setName("l_distal_interphalangeal_joint_5").setDEF("l_distal_interphalangeal_joint_5").setCenter(new float[] {-0.25f,0.79f,0f})
                        .addChild(new HAnimSegment().setName("l_distal_phalanges5").setDEF("l_distal_phalanges5")
                          .addChild(new Transform().setTranslation(new float[] {-0.25f,0.79f,0f})
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_l_distal_interphalangeal_joint_5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3255().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f56().getArray())))))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJoint().setUSE("l_radiocarpal_joint"))
          .addJoints(new HAnimJoint().setUSE("l_midcarpal_joint_12"))
          .addJoints(new HAnimJoint().setUSE("l_carpometacarpal_joint_1"))
          .addJoints(new HAnimJoint().setUSE("l_metacarpophalangeal_joint_1"))
          .addJoints(new HAnimJoint().setUSE("l_interphalangeal_joint_1"))
          .addJoints(new HAnimJoint().setUSE("l_carpometacarpal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("l_metacarpophalangeal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("l_proximal_interphalangeal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("l_distal_interphalangeal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("l_midcarpal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("l_carpometacarpal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("l_metacarpophalangeal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("l_proximal_interphalangeal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("l_distal_interphalangeal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("l_midcarpal_joint_45"))
          .addJoints(new HAnimJoint().setUSE("l_carpometacarpal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("l_metacarpophalangeal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("l_proximal_interphalangeal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("l_distal_interphalangeal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("l_carpometacarpal_joint_5"))
          .addJoints(new HAnimJoint().setUSE("l_metacarpophalangeal_joint_5"))
          .addJoints(new HAnimJoint().setUSE("l_proximal_interphalangeal_joint_5"))
          .addJoints(new HAnimJoint().setUSE("l_distal_interphalangeal_joint_5"))
          .addSegments(new HAnimSegment().setUSE("l_wrist"))
          .addSegments(new HAnimSegment().setUSE("l_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("l_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("l_proximal_phalanges1"))
          .addSegments(new HAnimSegment().setUSE("l_distal_phalanges1"))
          .addSegments(new HAnimSegment().setUSE("l_metacarpal2"))
          .addSegments(new HAnimSegment().setUSE("l_proximal_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("l_middle_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("l_distal_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("l_capitate"))
          .addSegments(new HAnimSegment().setUSE("l_metacarpal3"))
          .addSegments(new HAnimSegment().setUSE("l_proximal_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("l_middle_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("l_distal_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("l_hamate"))
          .addSegments(new HAnimSegment().setUSE("l_metacarpal4"))
          .addSegments(new HAnimSegment().setUSE("l_proximal_phalanges4"))
          .addSegments(new HAnimSegment().setUSE("l_middle_phalanges4"))
          .addSegments(new HAnimSegment().setUSE("l_distal_phalanx4"))
          .addSegments(new HAnimSegment().setUSE("l_metacarpal5"))
          .addSegments(new HAnimSegment().setUSE("l_proximal_phalanges5"))
          .addSegments(new HAnimSegment().setUSE("l_middle_phalanges5"))
          .addSegments(new HAnimSegment().setUSE("l_distal_phalanges5"))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.1f,0.1f,0f});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0.07f,0f});
  }
}
protected class MFInt327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f8 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,-0.1f,0.1f,0f});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f10 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.2f,0.15f,0f});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.1f,0.2f,0f});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f14 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f,0.15f,0f,0.3f,0.3f,0f});
  }
}
protected class MFInt3215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f16 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.3f,0.3f,0f,0.35f,0.4f,0f});
  }
}
protected class MFInt3217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f18 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.35f,0.4f,0f,0.36f,0.45f,0f});
  }
}
protected class MFInt3219 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f20 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.2f,0f,0.15f,0.5f,0f});
  }
}
protected class MFInt3221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f22 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,0.5f,0f,0.2f,0.7f,0f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f,0.7f,0f,0.24f,0.87f,0f});
  }
}
protected class MFInt3225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.24f,0.87f,0f,0.26f,0.93f,0f});
  }
}
protected class MFInt3227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.07f,0f,0f,0.2f,0f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.2f,0f,0.03f,0.5f,0f});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.03f,0.5f,0f,0.05f,0.75f,0f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.05f,0.75f,0f,0.08f,0.96f,0f});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.08f,0.96f,0f,0.09f,1.05f,0f});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f38 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.1f,0.2f,0f});
  }
}
protected class MFInt3239 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.15f,0.17f,0f});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.2f,0f,-0.1f,0.47f,0f});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.47f,0f,-0.1f,0.7f,0f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f46 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.7f,0f,-0.1f,0.93f,0f});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.93f,0f,-0.1f,1f,0f});
  }
}
protected class MFInt3249 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f50 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,0.17f,0f,-0.2f,0.4f,0f});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.4f,0f,-0.23f,0.63f,0f});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f54 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.23f,0.63f,0f,-0.25f,0.79f,0f});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f56 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.25f,0.79f,0f,-0.26f,0.85f,0f});
  }
}
}
