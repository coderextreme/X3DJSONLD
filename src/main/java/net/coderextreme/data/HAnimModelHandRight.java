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
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnimModelHandRight.x3d"))
        .addMeta(new meta().setName("description").setContent("Right hand using high-fidelity definitions for H-Anim version 2.2"))
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
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelHandRight.x3d"))
        .addChild(new HAnimHumanoid().setName("Humanoid_Right_hand").setDEF("Humanoid_Right_hand").setVersion("2.0").setBboxDisplay(false).setVisible(true)
          .addJoints(new HAnimJoint().setName("humanoid_root").setDEF("hanim_HumanoidRoot").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
            .addChild(new HAnimJoint().setName("r_radiocarpal_joint").setDEF("r_radiocarpal_joint").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
              .addChild(new HAnimSegment().setName("r_wrist").setDEF("r_wrist").setBboxDisplay(false).setVisible(true)
                .addChild(new Transform().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .addChild(new Shape().setDEF("HAnimJointShape").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .setGeometry(new Sphere().setRadius(0.025f))
                    .setAppearance(new Appearance().setDEF("HAnimJointAppearanceBlue")
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))))
                .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC12").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt320().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f1().getArray())))))
                .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt322().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f3().getArray())))))
                .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                  .setGeometry(new IndexedLineSet().setDEF("RCToMC45").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt324().getArray()))
                    .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f5().getArray()))))))
              .addComments(new CommentsBlock("MC12"))
              .addChild(new HAnimJoint().setName("r_midcarpal_joint_12").setDEF("r_midcarpal_joint_12").setCenter(new float[] {-0.1f,0.1f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                .addChild(new HAnimSegment().setName("r_trapezoid").setDEF("r_trapezoid").setBboxDisplay(false).setVisible(true)
                  .addChild(new Transform().setTranslation(new float[] {-0.1f,0.1f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new Shape().setDEF("HAnimNewJointShape").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .setGeometry(new Sphere().setRadius(0.025f))
                      .setAppearance(new Appearance().setDEF("HAnimJointAppearanceRed")
                        .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
                  .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt326().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f7().getArray())))))
                  .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC12toCMC2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt328().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f9().getArray()))))))
                .addComments(new CommentsBlock("thumb finger"))
                .addChild(new HAnimJoint().setName("r_carpometacarpal_joint_1").setDEF("r_carpometacarpal_joint_1").setCenter(new float[] {-0.2f,0.15f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .addChild(new HAnimSegment().setName("r_metacarpal_1").setDEF("r_metacarpal_1").setBboxDisplay(false).setVisible(true)
                    .addChild(new Transform().setTranslation(new float[] {-0.2f,0.15f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC1toMCP1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3210().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f11().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_joint_1").setDEF("r_metacarpophalangeal_joint_1").setCenter(new float[] {-0.3f,0.3f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new HAnimSegment().setName("r_proximal_phalanges1").setDEF("r_proximal_phalanges1").setBboxDisplay(false).setVisible(true)
                      .addChild(new Transform().setTranslation(new float[] {-0.3f,0.3f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP11toIP1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3212().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f13().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_interphalangeal_joint_1").setDEF("r_interphalangeal_joint_1").setCenter(new float[] {-0.35f,0.4f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new HAnimSegment().setName("r_distal_phalanges1").setDEF("r_distal_phalanges1").setBboxDisplay(false).setVisible(true)
                        .addChild(new Transform().setTranslation(new float[] {-0.35f,0.4f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("fingertip_r_interphalangeal_joint_1").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3214().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f15().getArray())))))))))
                .addComments(new CommentsBlock("index finger"))
                .addChild(new HAnimJoint().setName("r_carpometacarpal_joint_2").setDEF("r_carpometacarpal_joint_2").setCenter(new float[] {-0.1f,0.2f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .addChild(new HAnimSegment().setName("r_metacarpal_2").setDEF("r_metacarpal_2").setBboxDisplay(false).setVisible(true)
                    .addChild(new Transform().setTranslation(new float[] {-0.1f,0.2f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC2toMCP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3216().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f17().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_joint_2").setDEF("r_metacarpophalangeal_joint_2").setCenter(new float[] {-0.15f,0.5f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new HAnimSegment().setName("r_proximal_phalanges2").setDEF("r_proximal_phalanges2").setBboxDisplay(false).setVisible(true)
                      .addChild(new Transform().setTranslation(new float[] {-0.15f,0.5f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP2toPIP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3218().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f19().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_proximal_interphalangeal_joint_2").setDEF("r_proximal_interphalangeal_joint_2").setCenter(new float[] {-0.2f,0.7f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new HAnimSegment().setName("r_middle_phalanges2").setDEF("r_middle_phalanges2").setBboxDisplay(false).setVisible(true)
                        .addChild(new Transform().setTranslation(new float[] {-0.2f,0.7f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP2toDIP2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3220().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f21().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_distal_interphalangeal_joint_2").setDEF("r_distal_interphalangeal_joint_2").setCenter(new float[] {-0.24f,0.87f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new HAnimSegment().setName("r_distal_phalanges2").setDEF("r_distal_phalanges2").setBboxDisplay(false).setVisible(true)
                          .addChild(new Transform().setTranslation(new float[] {-0.24f,0.87f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_distal_interphalangeal_joint_2").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3222().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f23().getArray())))))))))))
              .addComments(new CommentsBlock("MC3"))
              .addChild(new HAnimJoint().setName("r_midcarpal_joint_3").setDEF("r_midcarpal_joint_3").setCenter(new float[] {0f,0.07f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                .addChild(new HAnimSegment().setName("r_capitate").setDEF("r_capitate").setBboxDisplay(false).setVisible(true)
                  .addChild(new Transform().setTranslation(new float[] {0f,0.07f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC3toCMC3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3224().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f25().getArray()))))))
                .addComments(new CommentsBlock("Middle fingle"))
                .addChild(new HAnimJoint().setName("r_carpometacarpal_joint_3").setDEF("r_carpometacarpal_joint_3").setCenter(new float[] {0f,0.2f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .addChild(new HAnimSegment().setName("r_metacarpal_3").setDEF("r_metacarpal_3").setBboxDisplay(false).setVisible(true)
                    .addChild(new Transform().setTranslation(new float[] {0f,0.2f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC3toMCP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3226().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f27().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_joint_3").setDEF("r_metacarpophalangeal_joint_3").setCenter(new float[] {-0.03f,0.5f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new HAnimSegment().setName("r_proximal_phalanges3").setDEF("r_proximal_phalanges3").setBboxDisplay(false).setVisible(true)
                      .addChild(new Transform().setTranslation(new float[] {-0.03f,0.5f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP3toPIP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3228().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f29().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_proximal_interphalangeal_joint_3").setDEF("r_proximal_interphalangeal_joint_3").setCenter(new float[] {-0.05f,0.75f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new HAnimSegment().setName("r_middle_phalanges3").setDEF("r_middle_phalanges3").setBboxDisplay(false).setVisible(true)
                        .addChild(new Transform().setTranslation(new float[] {-0.05f,0.75f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP3toDIP3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3230().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f31().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_distal_interphalangeal_joint_3").setDEF("r_distal_interphalangeal_joint_3").setCenter(new float[] {-0.08f,0.96f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new HAnimSegment().setName("r_distal_phalanges3").setDEF("r_distal_phalanges3").setBboxDisplay(false).setVisible(true)
                          .addChild(new Transform().setTranslation(new float[] {-0.08f,0.96f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_distal_interphalangeal_joint_3").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3232().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f33().getArray())))))))))))
              .addComments(new CommentsBlock("MC45"))
              .addChild(new HAnimJoint().setName("r_midcarpal_joint_45").setDEF("r_midcarpal_joint_45").setCenter(new float[] {0.1f,0.1f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                .addChild(new HAnimSegment().setName("r_hamate").setDEF("r_hamate").setBboxDisplay(false).setVisible(true)
                  .addChild(new Transform().setTranslation(new float[] {0.1f,0.1f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new Shape().setUSE("HAnimNewJointShape")))
                  .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3234().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f35().getArray())))))
                  .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                    .setGeometry(new IndexedLineSet().setDEF("MC45toCMC5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3236().getArray()))
                      .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f37().getArray()))))))
                .addComments(new CommentsBlock("ring finger"))
                .addChild(new HAnimJoint().setName("r_carpometacarpal_joint_4").setDEF("r_carpometacarpal_joint_4").setCenter(new float[] {0.1f,0.2f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .addChild(new HAnimSegment().setName("r_metacarpal_4").setDEF("r_metacarpal_4").setBboxDisplay(false).setVisible(true)
                    .addChild(new Transform().setTranslation(new float[] {0.1f,0.2f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC4toMCP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3238().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f39().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_joint_4").setDEF("r_metacarpophalangeal_joint_4").setCenter(new float[] {0.1f,0.47f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new HAnimSegment().setName("r_proximal_phalanges4").setDEF("r_proximal_phalanges4").setBboxDisplay(false).setVisible(true)
                      .addChild(new Transform().setTranslation(new float[] {0.1f,0.47f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP4toPIP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3240().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f41().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_proximal_interphalangeal_joint_4").setDEF("r_proximal_interphalangeal_joint_4").setCenter(new float[] {0.1f,0.7f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new HAnimSegment().setName("r_middle_phalanges4").setDEF("r_middle_phalanges4").setBboxDisplay(false).setVisible(true)
                        .addChild(new Transform().setTranslation(new float[] {0.1f,0.7f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP4toDIP4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3242().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f43().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_distal_interphalangeal_joint_4").setDEF("r_distal_interphalangeal_joint_4").setCenter(new float[] {0.1f,0.93f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new HAnimSegment().setName("r_distal_phalanx4").setDEF("r_distal_phalanx4").setBboxDisplay(false).setVisible(true)
                          .addChild(new Transform().setTranslation(new float[] {0.1f,0.93f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_distal_interphalangeal_joint_4").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3244().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f45().getArray()))))))))))
                .addComments(new CommentsBlock("pinky finger"))
                .addChild(new HAnimJoint().setName("r_carpometacarpal_joint_5").setDEF("r_carpometacarpal_joint_5").setCenter(new float[] {0.15f,0.17f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                  .addChild(new HAnimSegment().setName("r_metacarpal_5").setDEF("r_metacarpal_5").setBboxDisplay(false).setVisible(true)
                    .addChild(new Transform().setTranslation(new float[] {0.15f,0.17f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                      .setGeometry(new IndexedLineSet().setDEF("CMC5toMCP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3246().getArray()))
                        .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f47().getArray()))))))
                  .addChild(new HAnimJoint().setName("r_metacarpophalangeal_joint_5").setDEF("r_metacarpophalangeal_joint_5").setCenter(new float[] {0.2f,0.4f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                    .addChild(new HAnimSegment().setName("r_proximal_phalanges2").setDEF("r_proximal_phalanges5").setBboxDisplay(false).setVisible(true)
                      .addChild(new Transform().setTranslation(new float[] {0.2f,0.4f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                        .setGeometry(new IndexedLineSet().setDEF("MCP5toPIP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3248().getArray()))
                          .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f49().getArray()))))))
                    .addChild(new HAnimJoint().setName("r_proximal_interphalangeal_joint_5").setDEF("r_proximal_interphalangeal_joint_5").setCenter(new float[] {0.23f,0.63f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                      .addChild(new HAnimSegment().setName("r_middle_phalanges5").setDEF("r_middle_phalanges5").setBboxDisplay(false).setVisible(true)
                        .addChild(new Transform().setTranslation(new float[] {0.23f,0.63f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                          .setGeometry(new IndexedLineSet().setDEF("PIP5toDIP5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3250().getArray()))
                            .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f51().getArray()))))))
                      .addChild(new HAnimJoint().setName("r_distal_interphalangeal_joint_5").setDEF("r_distal_interphalangeal_joint_5").setCenter(new float[] {0.25f,0.79f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                        .addChild(new HAnimSegment().setName("r_distal_phalanges5").setDEF("r_distal_phalanges5").setBboxDisplay(false).setVisible(true)
                          .addChild(new Transform().setTranslation(new float[] {0.25f,0.79f,0f}).setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .addChild(new Shape().setUSE("HAnimJointShape")))
                          .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setBboxDisplay(false).setVisible(true)
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setEmissiveColor(new float[] {1f,1f,1f})))
                            .setGeometry(new IndexedLineSet().setDEF("fingertip_r_distal_interphalangeal_joint_5").setCoordIndex(new org.web3d.x3d.jsail.fields.MFInt32(new MFInt3252().getArray()))
                              .setCoord(new Coordinate().setPoint(new org.web3d.x3d.jsail.fields.MFVec3f(new MFVec3f53().getArray())))))))))))))
          .addJoints(new HAnimJoint().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJoint().setUSE("r_radiocarpal_joint"))
          .addJoints(new HAnimJoint().setUSE("r_midcarpal_joint_12"))
          .addJoints(new HAnimJoint().setUSE("r_carpometacarpal_joint_1"))
          .addJoints(new HAnimJoint().setUSE("r_metacarpophalangeal_joint_1"))
          .addJoints(new HAnimJoint().setUSE("r_interphalangeal_joint_1"))
          .addJoints(new HAnimJoint().setUSE("r_carpometacarpal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("r_metacarpophalangeal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("r_proximal_interphalangeal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("r_distal_interphalangeal_joint_2"))
          .addJoints(new HAnimJoint().setUSE("r_midcarpal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("r_carpometacarpal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("r_metacarpophalangeal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("r_proximal_interphalangeal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("r_distal_interphalangeal_joint_3"))
          .addJoints(new HAnimJoint().setUSE("r_midcarpal_joint_45"))
          .addJoints(new HAnimJoint().setUSE("r_carpometacarpal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("r_metacarpophalangeal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("r_proximal_interphalangeal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("r_distal_interphalangeal_joint_4"))
          .addJoints(new HAnimJoint().setUSE("r_carpometacarpal_joint_5"))
          .addJoints(new HAnimJoint().setUSE("r_metacarpophalangeal_joint_5"))
          .addJoints(new HAnimJoint().setUSE("r_proximal_interphalangeal_joint_5"))
          .addJoints(new HAnimJoint().setUSE("r_distal_interphalangeal_joint_5"))
          .addSegments(new HAnimSegment().setUSE("r_wrist"))
          .addSegments(new HAnimSegment().setUSE("r_trapezoid"))
          .addSegments(new HAnimSegment().setUSE("r_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges1"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges1"))
          .addSegments(new HAnimSegment().setUSE("r_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges2"))
          .addSegments(new HAnimSegment().setUSE("r_capitate"))
          .addSegments(new HAnimSegment().setUSE("r_metacarpal_3"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges3"))
          .addSegments(new HAnimSegment().setUSE("r_hamate"))
          .addSegments(new HAnimSegment().setUSE("r_metacarpal_4"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges4"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges4"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanx4"))
          .addSegments(new HAnimSegment().setUSE("r_metacarpal_5"))
          .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges5"))
          .addSegments(new HAnimSegment().setUSE("r_middle_phalanges5"))
          .addSegments(new HAnimSegment().setUSE("r_distal_phalanges5"))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,-0.1f,0.1f,0f});
  }
}
protected class MFInt322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0.07f,0f});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f5 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.1f,0.1f,0f});
  }
}
protected class MFInt326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.2f,0.15f,0f});
  }
}
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.1f,0f,-0.1f,0.2f,0f});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.15f,0f,-0.3f,0.3f,0f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f13 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.3f,0.3f,0f,-0.35f,0.4f,0f});
  }
}
protected class MFInt3214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f15 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.35f,0.4f,0f,-0.36f,0.45f,0f});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1f,0.2f,0f,-0.15f,0.5f,0f});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.15f,0.5f,0f,-0.2f,0.7f,0f});
  }
}
protected class MFInt3220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f21 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,0.7f,0f,-0.24f,0.87f,0f});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.24f,0.87f,0f,-0.26f,0.93f,0f});
  }
}
protected class MFInt3224 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f25 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.07f,0f,0f,0.2f,0f});
  }
}
protected class MFInt3226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f27 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.2f,0f,-0.03f,0.5f,0f});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f29 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03f,0.5f,0f,-0.05f,0.75f,0f});
  }
}
protected class MFInt3230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f31 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.05f,0.75f,0f,-0.08f,0.96f,0f});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f33 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.08f,0.96f,0f,-0.09f,1.05f,0f});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.1f,0.2f,0f});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f37 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.1f,0f,0.15f,0.17f,0f});
  }
}
protected class MFInt3238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f39 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.2f,0f,0.1f,0.47f,0f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.47f,0f,0.1f,0.7f,0f});
  }
}
protected class MFInt3242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f43 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.7f,0f,0.1f,0.93f,0f});
  }
}
protected class MFInt3244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f45 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1f,0.93f,0f,0.1f,1f,0f});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f47 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.15f,0.17f,0f,0.2f,0.4f,0f});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f49 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2f,0.4f,0f,0.23f,0.63f,0f});
  }
}
protected class MFInt3250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f51 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.23f,0.63f,0f,0.25f,0.79f,0f});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.25f,0.79f,0f,0.26f,0.85f,0f});
  }
}
}
