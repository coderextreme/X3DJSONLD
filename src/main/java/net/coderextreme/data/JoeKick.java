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
public class JoeKick {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JoeKick().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JoeKick.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("JoeKick.x3d"))
        .addMeta(new meta().setName("description").setContent("This Joe model is a HAnim version 2 LOA-3 Humanoid with textured skin based on the original HAnim Specification and data from CAESAR models."))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("created").setContent("9 January 2004"))
        .addMeta(new meta().setName("translated").setContent("12 January 2017"))
        .addMeta(new meta().setName("modified").setContent("29 January 2023"))
        .addMeta(new meta().setName("TODO").setContent("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"))
        .addMeta(new meta().setName("translators").setContent("Roy Walmsley, Don Brutzman, John Carlson"))
        .addMeta(new meta().setName("reference").setContent("../Characters/JoeSkinTexcoordDisplacerKick.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeKick.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("generator").setContent("BS studio translation from .x3dv by Joe using BS Contact"))
        .addComponent(new component().setName("HAnim").setLevel(1)))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe").setInfo(new MFString0().getArray()))
        .addChild(new NavigationInfo().setDEF("Start_NavigationInfo").setSpeed(2.5f).setHeadlight(false))
        .addChild(new Background().setDEF("blue_Background"))
        .addChild(new SpotLight().setDEF("light1").setColor(new float[] {0.8f,0.8f,1f}).setAmbientIntensity(0.7f).setLocation(new float[] {0f,3f,3f}).setDirection(new float[] {0f,0f,0f}).setRadius(10f).setBeamWidth(1.5f).setCutOffAngle(0.6f))
        .addChild(new PointLight().setDEF("light2").setColor(new float[] {0.8f,0.8f,1f}).setAmbientIntensity(0.7f).setLocation(new float[] {0f,10f,-7f}))
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setDescription("Scene_Inclined View").setPosition(new float[] {1.62f,1.05f,3.06f}).setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setCenterOfRotation(new float[] {0f,0.85f,0f}))
        .addChild(new Viewpoint().setDEF("Scene_IFrontView").setDescription("Scene_Front View").setPosition(new float[] {0f,0.8f,2.58f}).setCenterOfRotation(new float[] {0f,0.8f,0f}))
        .addChild(new Viewpoint().setDEF("Scene_ISideView").setDescription("Scene_Side View").setPosition(new float[] {2.6f,0.8f,0f}).setOrientation(new float[] {0f,1f,0f,1.5708f}).setCenterOfRotation(new float[] {0f,0.8f,0f}))
        .addChild(new Viewpoint().setDEF("Scene_BackView").setDescription("Scene_Back View").setPosition(new float[] {0f,1.5f,-3f}).setOrientation(new float[] {0f,1f,0f,3.14f}).setCenterOfRotation(new float[] {0f,1.5f,0f}))
        .addChild(new Viewpoint().setDEF("Scene_TopView").setDescription("Scene_Top View").setPosition(new float[] {0f,3.5f,0f}).setOrientation(new float[] {1f,0f,0f,-1.5708f}).setCenterOfRotation(new float[] {0f,1.5f,0f}))
        .addChild(new Group().setDEF("Joe_Humanoid")
          .addChild(new HAnimHumanoid("Joe_Humanoid").setDEF("Joe_Kick").setVersion("2.0").setName("Kick").setLoa(3)
            .setMetadata(new MetadataSet().setName("warnings").setReference("HAnim")
              .addMetadata(new MetadataString().setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new MFString1().getArray())))
            .addSkeleton(new HAnimJoint("Joe_Kick").setDEF("Joe_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f,0.875f,0f})
              .addChild(new HAnimSegment("Joe_humanoid_root").setDEF("Joe_sacrum").setName("sacrum")
                .addChild(new HAnimSite("Joe_sacrum").setDEF("Joe_RootFront_view").setName("RootFront_view")
                  .addChild(new Transform().setDEF("hanimcordsys").setScale(new float[] {0.175f,0.175f,0.175f})
                    .addChild(new Viewpoint().setDEF("ViewBodyRootAxes").setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                    .addChild(new Shape().setDEF("AxisLinesShape")
                      .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new MFInt322().getArray()).setCoordIndex(new MFInt323().getArray())
                        .setColor(new Color().setColor(new MFColor4().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray())))))))
              .addChild(new HAnimJoint("Joe_humanoid_root").setDEF("Joe_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f,0.92f,0f}).setSkinCoordIndex(new MFInt326().getArray()).setSkinCoordWeight(new MFFloat7().getArray())
                .addChild(new HAnimJoint("Joe_sacroiliac").setDEF("Joe_l_hip").setName("l_hip").setCenter(new float[] {0.1f,0.92f,0f}).setSkinCoordIndex(new MFInt328().getArray()).setSkinCoordWeight(new MFFloat9().getArray())
                  .addChild(new HAnimJoint("Joe_l_hip").setDEF("Joe_l_knee").setName("l_knee").setCenter(new float[] {0.115f,0.466f,0f}).setSkinCoordIndex(new MFInt3210().getArray()).setSkinCoordWeight(new MFFloat11().getArray())
                    .addChild(new HAnimJoint("Joe_l_knee").setDEF("Joe_l_talocrural").setName("l_talocrural").setCenter(new float[] {0.115f,0.069f,0f}).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray())
                      .addChild(new HAnimJoint("Joe_l_talocrural").setDEF("Joe_l_tarsometatarsal_1").setName("l_tarsometatarsal_2").setCenter(new float[] {0.115f,0.031f,0.03f}).setSkinCoordIndex(new MFInt3214().getArray()).setSkinCoordWeight(new MFFloat15().getArray())
                        .addChild(new HAnimJoint("Joe_l_tarsometatarsal_1").setDEF("Joe_l_metatarsophalangeal_1").setName("l_metatarsophalangeal_2").setCenter(new float[] {0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt3216().getArray()).setSkinCoordWeight(new MFFloat17().getArray())
                          .addChild(new HAnimJoint("Joe_l_metatarsophalangeal_1").setDEF("Joe_l_tarsal_distal_interphalangeal_1").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.115f,0.02f,0.122f}).setSkinCoordIndex(new MFInt3218().getArray()).setSkinCoordWeight(new MFFloat19().getArray())))))))
                .addChild(new HAnimJoint("Joe_sacroiliac").setDEF("Joe_r_hip").setName("r_hip").setCenter(new float[] {-0.1f,0.92f,0f}).setSkinCoordIndex(new MFInt3220().getArray()).setSkinCoordWeight(new MFFloat21().getArray())
                  .addChild(new HAnimJoint("Joe_r_hip").setDEF("Joe_r_knee").setName("r_knee").setCenter(new float[] {-0.05f,0.466f,0f}).setSkinCoordIndex(new MFInt3222().getArray()).setSkinCoordWeight(new MFFloat23().getArray())
                    .addChild(new HAnimJoint("Joe_r_knee").setDEF("Joe_r_talocrural").setName("r_talocrural").setCenter(new float[] {-0.115f,0.069f,0f}).setSkinCoordIndex(new MFInt3224().getArray()).setSkinCoordWeight(new MFFloat25().getArray())
                      .addChild(new HAnimJoint("Joe_r_talocrural").setDEF("Joe_r_tarsometatarsal_1").setName("r_tarsometatarsal_2").setCenter(new float[] {-0.1f,0.015f,-0.01f}).setSkinCoordIndex(new MFInt3226().getArray()).setSkinCoordWeight(new MFFloat27().getArray())
                        .addChild(new HAnimJoint("Joe_r_tarsometatarsal_1").setDEF("Joe_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_2").setCenter(new float[] {-0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt3228().getArray()).setSkinCoordWeight(new MFFloat29().getArray())
                          .addChild(new HAnimJoint("Joe_r_metatarsophalangeal_1").setDEF("Joe_r_tarsal_distal_interphalangeal_1").setName("r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.1f,0.01f,0.14f}).setSkinCoordIndex(new MFInt3230().getArray()).setSkinCoordWeight(new MFFloat31().getArray()))))))))
              .addChild(new HAnimJoint("Joe_humanoid_root").setDEF("Joe_vl5").setName("vl5").setCenter(new float[] {0f,1.045f,-0.095f}).setSkinCoordIndex(new MFInt3232().getArray()).setSkinCoordWeight(new MFFloat33().getArray())
                .addChild(new HAnimJoint("Joe_vl5").setDEF("Joe_vl4").setName("vl4").setCenter(new float[] {0f,1.068f,-0.085f})
                  .addChild(new HAnimJoint("Joe_vl4").setDEF("Joe_vl3").setName("vl3").setCenter(new float[] {0f,1.092f,-0.0725f})
                    .addChild(new HAnimJoint("Joe_vl3").setDEF("Joe_vl2").setName("vl2").setCenter(new float[] {0f,1.12f,-0.065f}).setSkinCoordIndex(new MFInt3234().getArray()).setSkinCoordWeight(new MFFloat35().getArray())
                      .addChild(new HAnimJoint("Joe_vl2").setDEF("Joe_vl1").setName("vl1").setCenter(new float[] {0f,1.1459f,-0.0625f})
                        .addChild(new HAnimJoint("Joe_vl1").setDEF("Joe_vt12").setName("vt12").setCenter(new float[] {0f,1.179f,-0.068f})
                          .addChild(new HAnimJoint("Joe_vt12").setDEF("Joe_vt11").setName("vt11").setCenter(new float[] {0f,1.2679f,-0.081f})
                            .addChild(new HAnimJoint("Joe_vt11").setDEF("Joe_vt10").setName("vt10").setCenter(new float[] {0f,1.242f,-0.09f}).setSkinCoordIndex(new MFInt3236().getArray()).setSkinCoordWeight(new MFFloat37().getArray())
                              .addChild(new HAnimJoint("Joe_vt10").setDEF("Joe_vt9").setName("vt9").setCenter(new float[] {0f,1.268f,-0.1f}).setSkinCoordIndex(new MFInt3238().getArray()).setSkinCoordWeight(new MFFloat39().getArray())
                                .addChild(new HAnimJoint("Joe_vt9").setDEF("Joe_vt8").setName("vt8").setCenter(new float[] {0f,1.294f,-0.11f})
                                  .addChild(new HAnimJoint("Joe_vt8").setDEF("Joe_vt7").setName("vt7").setCenter(new float[] {0f,1.323f,-0.1155f})
                                    .addChild(new HAnimJoint("Joe_vt7").setDEF("Joe_vt6").setName("vt6").setCenter(new float[] {0f,1.352f,-0.12f})
                                      .addChild(new HAnimJoint("Joe_vt6").setDEF("Joe_vt5").setName("vt5").setCenter(new float[] {0f,1.381f,-0.1235f})
                                        .addChild(new HAnimJoint("Joe_vt5").setDEF("Joe_vt4").setName("vt4").setCenter(new float[] {0f,1.41f,-0.1235f}).setSkinCoordIndex(new MFInt3240().getArray()).setSkinCoordWeight(new MFFloat41().getArray())
                                          .addChild(new HAnimJoint("Joe_vt4").setDEF("Joe_vt3").setName("vt3").setCenter(new float[] {0f,1.438f,-0.12f})
                                            .addChild(new HAnimJoint("Joe_vt3").setDEF("Joe_vt2").setName("vt2").setCenter(new float[] {0f,1.468f,-0.105f})
                                              .addChild(new HAnimJoint("Joe_vt2").setDEF("Joe_vt1").setName("vt1").setCenter(new float[] {0f,1.497f,-0.09f}).setSkinCoordIndex(new MFInt3242().getArray()).setSkinCoordWeight(new MFFloat43().getArray())
                                                .addChild(new HAnimJoint("Joe_vt1").setDEF("Joe_vc7").setName("vc7").setCenter(new float[] {0f,1.525f,-0.072f}).setSkinCoordIndex(new MFInt3244().getArray()).setSkinCoordWeight(new MFFloat45().getArray())
                                                  .addChild(new HAnimJoint("Joe_vc7").setDEF("Joe_vc6").setName("vc6").setCenter(new float[] {0f,1.54f,-0.05f})
                                                    .addChild(new HAnimJoint("Joe_vc6").setDEF("Joe_vc5").setName("vc5").setCenter(new float[] {0f,1.552f,-0.035f})
                                                      .addChild(new HAnimJoint("Joe_vc5").setDEF("Joe_vc4").setName("vc4").setCenter(new float[] {0f,1.5675f,-0.0256f})
                                                        .addChild(new HAnimJoint("Joe_vc4").setDEF("Joe_vc3").setName("vc3").setCenter(new float[] {0f,1.58225f,-0.0185f})
                                                          .addChild(new HAnimJoint("Joe_vc3").setDEF("Joe_vc2").setName("vc2").setCenter(new float[] {0f,1.595f,-0.0175f})
                                                            .addChild(new HAnimJoint("Joe_vc2").setDEF("Joe_vc1").setName("vc1").setCenter(new float[] {0f,1.61f,-0.015f})
                                                              .addChild(new HAnimJoint("Joe_vc1").setDEF("Joe_skullbase").setName("skullbase").setCenter(new float[] {0f,1.63f,-0.01f}).setSkinCoordIndex(new MFInt3246().getArray()).setSkinCoordWeight(new MFFloat47().getArray())
                                                                .addDisplacers(new HAnimDisplacer("Joe_skullbase").setDEF("Joe_skull_tip_raiser_action").setName("skull_tip_raiser_action").setCoordIndex(new MFInt3248().getArray()).setDisplacements(new MFVec3f49().getArray()))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_l_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_r_eyelid_joint").setName("r_eyelid_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_r_eyeball_joint").setName("r_eyeball_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_temporomandibular").setName("temporomandibular").setCenter(new float[] {0.034f,1.659f,0.06f}))))))))))
                                                .addChild(new HAnimJoint("Joe_vt1").setDEF("Joe_l_acromioclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setSkinCoordIndex(new MFInt3250().getArray()).setSkinCoordWeight(new MFFloat51().getArray())
                                                  .addChild(new HAnimJoint("Joe_l_acromioclavicular").setDEF("Joe_l_sternoclavicular").setName("l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setSkinCoordIndex(new MFInt3252().getArray()).setSkinCoordWeight(new MFFloat53().getArray())
                                                    .addChild(new HAnimJoint("Joe_l_sternoclavicular").setDEF("Joe_l_shoulder").setName("l_shoulder").setCenter(new float[] {0.2f,1.44f,-0.04f}).setSkinCoordIndex(new MFInt3254().getArray()).setSkinCoordWeight(new MFFloat55().getArray())
                                                      .addChild(new HAnimJoint("Joe_l_shoulder").setDEF("Joe_l_elbow").setName("l_elbow").setCenter(new float[] {0.2f,1.1388f,-0.04f}).setSkinCoordIndex(new MFInt3256().getArray()).setSkinCoordWeight(new MFFloat57().getArray())
                                                        .addChild(new HAnimJoint("Joe_l_elbow").setDEF("Joe_l_radiocarpal").setName("l_radiocarpal").setCenter(new float[] {0.2f,0.87f,-0.04f}).setSkinCoordIndex(new MFInt3258().getArray()).setSkinCoordWeight(new MFFloat59().getArray())
                                                          .addChild(new HAnimJoint("Joe_l_radiocarpal").setDEF("Joe_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setSkinCoordIndex(new MFInt3260().getArray()).setSkinCoordWeight(new MFFloat61().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_carpometacarpal_1").setDEF("Joe_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setSkinCoordIndex(new MFInt3262().getArray()).setSkinCoordWeight(new MFFloat63().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_1").setDEF("Joe_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setSkinCoordIndex(new MFInt3264().getArray()).setSkinCoordWeight(new MFFloat65().getArray()))))
                                                          .addChild(new HAnimJoint("Joe_l_radiocarpal").setDEF("Joe_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setSkinCoordIndex(new MFInt3266().getArray()).setSkinCoordWeight(new MFFloat67().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_carpometacarpal_2").setDEF("Joe_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setSkinCoordIndex(new MFInt3268().getArray()).setSkinCoordWeight(new MFFloat69().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_2").setDEF("Joe_l_carpal_proximal_interphalangeal_1").setName("l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setSkinCoordIndex(new MFInt3270().getArray()).setSkinCoordWeight(new MFFloat71().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_1").setDEF("Joe_l_carpal_distal_interphalangeal_1").setName("l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setSkinCoordIndex(new MFInt3272().getArray()).setSkinCoordWeight(new MFFloat73().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_l_radiocarpal").setDEF("Joe_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setSkinCoordIndex(new MFInt3274().getArray()).setSkinCoordWeight(new MFFloat75().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_carpometacarpal_3").setDEF("Joe_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setSkinCoordIndex(new MFInt3276().getArray()).setSkinCoordWeight(new MFFloat77().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_3").setDEF("Joe_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setSkinCoordIndex(new MFInt3278().getArray()).setSkinCoordWeight(new MFFloat79().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_2").setDEF("Joe_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setSkinCoordIndex(new MFInt3280().getArray()).setSkinCoordWeight(new MFFloat81().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_l_radiocarpal").setDEF("Joe_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setSkinCoordIndex(new MFInt3282().getArray()).setSkinCoordWeight(new MFFloat83().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_carpometacarpal_4").setDEF("Joe_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setSkinCoordIndex(new MFInt3284().getArray()).setSkinCoordWeight(new MFFloat85().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_4").setDEF("Joe_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setSkinCoordIndex(new MFInt3286().getArray()).setSkinCoordWeight(new MFFloat87().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_3").setDEF("Joe_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setSkinCoordIndex(new MFInt3288().getArray()).setSkinCoordWeight(new MFFloat89().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_l_radiocarpal").setDEF("Joe_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setSkinCoordIndex(new MFInt3290().getArray()).setSkinCoordWeight(new MFFloat91().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_carpometacarpal_5").setDEF("Joe_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setSkinCoordIndex(new MFInt3292().getArray()).setSkinCoordWeight(new MFFloat93().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_5").setDEF("Joe_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setSkinCoordIndex(new MFInt3294().getArray()).setSkinCoordWeight(new MFFloat95().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_4").setDEF("Joe_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setSkinCoordIndex(new MFInt3296().getArray()).setSkinCoordWeight(new MFFloat97().getArray()))))))))))
                                                .addChild(new HAnimJoint("Joe_vt1").setDEF("Joe_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-0.03f,1.46f,0f}).setSkinCoordIndex(new MFInt3298().getArray()).setSkinCoordWeight(new MFFloat99().getArray())
                                                  .addChild(new HAnimJoint("Joe_r_sternoclavicular").setDEF("Joe_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-0.09f,1.41f,-0.11f}).setSkinCoordIndex(new MFInt32100().getArray()).setSkinCoordWeight(new MFFloat101().getArray())
                                                    .addChild(new HAnimJoint("Joe_r_acromioclavicular").setDEF("Joe_r_shoulder").setName("r_shoulder").setCenter(new float[] {-0.2f,1.44f,-0.04f}).setSkinCoordIndex(new MFInt32102().getArray()).setSkinCoordWeight(new MFFloat103().getArray())
                                                      .addChild(new HAnimJoint("Joe_r_shoulder").setDEF("Joe_r_elbow").setName("r_elbow").setCenter(new float[] {-0.2f,1.1388f,-0.04f}).setSkinCoordIndex(new MFInt32104().getArray()).setSkinCoordWeight(new MFFloat105().getArray())
                                                        .addChild(new HAnimJoint("Joe_r_elbow").setDEF("Joe_r_radiocarpal").setName("r_radiocarpal").setCenter(new float[] {-0.2f,0.89f,-0.04f}).setSkinCoordIndex(new MFInt32106().getArray()).setSkinCoordWeight(new MFFloat107().getArray())
                                                          .addChild(new HAnimJoint("Joe_r_radiocarpal").setDEF("Joe_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(new float[] {-0.2f,0.85f,0f}).setSkinCoordIndex(new MFInt32108().getArray()).setSkinCoordWeight(new MFFloat109().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_carpometacarpal_1").setDEF("Joe_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(new float[] {-0.2f,0.82f,0.03f}).setSkinCoordIndex(new MFInt32110().getArray()).setSkinCoordWeight(new MFFloat111().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_1").setDEF("Joe_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(new float[] {-0.2f,0.8f,0.05f}).setSkinCoordIndex(new MFInt32112().getArray()).setSkinCoordWeight(new MFFloat113().getArray()))))
                                                          .addChild(new HAnimJoint("Joe_r_radiocarpal").setDEF("Joe_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(new float[] {-0.2f,0.84f,-0.015f}).setSkinCoordIndex(new MFInt32114().getArray()).setSkinCoordWeight(new MFFloat115().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_carpometacarpal_2").setDEF("Joe_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(new float[] {-0.2f,0.793f,-0.015f}).setSkinCoordIndex(new MFInt32116().getArray()).setSkinCoordWeight(new MFFloat117().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_2").setDEF("Joe_r_carpal_proximal_interphalangeal_1").setName("r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.2f,0.745f,-0.015f}).setSkinCoordIndex(new MFInt32118().getArray()).setSkinCoordWeight(new MFFloat119().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_1").setDEF("Joe_r_carpal_distal_interphalangeal_1").setName("r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.2f,0.72f,-0.015f}).setSkinCoordIndex(new MFInt32120().getArray()).setSkinCoordWeight(new MFFloat121().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_r_radiocarpal").setDEF("Joe_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(new float[] {-0.2f,0.835f,-0.04f}).setSkinCoordIndex(new MFInt32122().getArray()).setSkinCoordWeight(new MFFloat123().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_carpometacarpal_3").setDEF("Joe_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(new float[] {-0.2f,0.788f,-0.04f}).setSkinCoordIndex(new MFInt32124().getArray()).setSkinCoordWeight(new MFFloat125().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_3").setDEF("Joe_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.2f,0.74f,-0.04f}).setSkinCoordIndex(new MFInt32126().getArray()).setSkinCoordWeight(new MFFloat127().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_2").setDEF("Joe_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.2f,0.7142f,-0.04f}).setSkinCoordIndex(new MFInt32128().getArray()).setSkinCoordWeight(new MFFloat129().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_r_radiocarpal").setDEF("Joe_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(new float[] {-0.2f,0.835f,-0.065f}).setSkinCoordIndex(new MFInt32130().getArray()).setSkinCoordWeight(new MFFloat131().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_carpometacarpal_4").setDEF("Joe_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(new float[] {-0.2f,0.793f,-0.065f}).setSkinCoordIndex(new MFInt32132().getArray()).setSkinCoordWeight(new MFFloat133().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_4").setDEF("Joe_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.2f,0.74f,-0.065f}).setSkinCoordIndex(new MFInt32134().getArray()).setSkinCoordWeight(new MFFloat135().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_3").setDEF("Joe_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.2f,0.7177f,-0.065f}).setSkinCoordIndex(new MFInt32136().getArray()).setSkinCoordWeight(new MFFloat137().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_r_radiocarpal").setDEF("Joe_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(new float[] {-0.2f,0.84f,-0.085f}).setSkinCoordIndex(new MFInt32138().getArray()).setSkinCoordWeight(new MFFloat139().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_carpometacarpal_5").setDEF("Joe_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(new float[] {-0.2f,0.79f,-0.085f}).setSkinCoordIndex(new MFInt32140().getArray()).setSkinCoordWeight(new MFFloat141().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_5").setDEF("Joe_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.2f,0.755f,-0.085f}).setSkinCoordIndex(new MFInt32142().getArray()).setSkinCoordWeight(new MFFloat143().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_4").setDEF("Joe_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.2f,0.735f,-0.09f}).setSkinCoordIndex(new MFInt32144().getArray()).setSkinCoordWeight(new MFFloat145().getArray()))))))))))))))))))))))))))))
            .addSites(new HAnimSite("Joe_Kick").setUSE("Joe_RootFront_view"))
            .addSegments(new HAnimSegment("Joe_Kick").setUSE("Joe_sacrum"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_humanoid_root"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_sacroiliac"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_skullbase"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_temporomandibular"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vc1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vc2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vc3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vc4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vc5"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vc6"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vc7"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vl1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vl2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vl3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vl4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vl5"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt10"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt11"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt12"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt5"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt6"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt7"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt8"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_vt9"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_acromioclavicular"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_acromioclavicular"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_distal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_distal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_distal_interphalangeal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_distal_interphalangeal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_distal_interphalangeal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_distal_interphalangeal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_distal_interphalangeal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_distal_interphalangeal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_proximal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_proximal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_proximal_interphalangeal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_proximal_interphalangeal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_proximal_interphalangeal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_proximal_interphalangeal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpal_proximal_interphalangeal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpal_proximal_interphalangeal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpometacarpal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpometacarpal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpometacarpal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpometacarpal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpometacarpal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpometacarpal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpometacarpal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpometacarpal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_carpometacarpal_5"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_carpometacarpal_5"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_elbow"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_elbow"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_eyeball_joint"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_eyeball_joint"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_eyebrow_joint"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_eyebrow_joint"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_eyelid_joint"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_eyelid_joint"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_hip"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_hip"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_knee"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_knee"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_metacarpophalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_metacarpophalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_metacarpophalangeal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_metacarpophalangeal_2"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_metacarpophalangeal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_metacarpophalangeal_3"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_metacarpophalangeal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_metacarpophalangeal_4"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_metacarpophalangeal_5"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_metacarpophalangeal_5"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_metatarsophalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_metatarsophalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_radiocarpal"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_radiocarpal"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_shoulder"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_shoulder"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_sternoclavicular"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_sternoclavicular"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_talocrural"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_talocrural"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_tarsal_distal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_tarsal_distal_interphalangeal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_l_tarsometatarsal_1"))
            .addJoints(new HAnimJoint("Joe_Kick").setUSE("Joe_r_tarsometatarsal_1"))
            .setSkinCoord(new Coordinate().setDEF("Joe_SkinCoord").setPoint(new MFVec3f146().getArray().append(new MFVec3f147().getArray())))
            .addSkin(new Shape().setDEF("Joe_Shape")
              .setAppearance(new Appearance().setDEF("Joe_skin_Appearance")
                .setMaterial(new Material().setDEF("Joe_skin_Material").setDiffuseColor(new float[] {0.3f,0.3f,0.6f}).setEmissiveColor(new float[] {0.3f,0.3f,0.6f}))
                .setTexture(new ImageTexture().setDEF("JoeSkinImageTexture").setUrl(new MFString148().getArray()))
                .setTextureTransform(new TextureTransform().setDEF("KickTextureTransform")))
              .setGeometry(new IndexedFaceSet().setDEF("Joe_skin_IndexedFaceSet").setCreaseAngle(3.14f).setCoordIndex(new MFInt32149().getArray().append(new MFInt32150().getArray()).append(new MFInt32151().getArray()).append(new MFInt32152().getArray()))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f153().getArray()))
                .setCoord(new Coordinate().setUSE("Joe_SkinCoord"))))))
        .addChild(new Group()
          .addChild(new TimeSensor().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("HumanoidRoot_RotationInterpolator").setKey(new MFFloat154().getArray()).setKeyValue(new MFRotation155().getArray()))
          .addChild(new PositionInterpolator().setDEF("HumanoidRoot_TranslationInterpolator").setKey(new MFFloat156().getArray()).setKeyValue(new MFVec3f157().getArray()))
          .addChild(new OrientationInterpolator().setDEF("sacroiliac_RotationInterpolator").setKey(new MFFloat158().getArray()).setKeyValue(new MFRotation159().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_hip_RotationInterpolator").setKey(new MFFloat160().getArray()).setKeyValue(new MFRotation161().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_knee_RotationInterpolator").setKey(new MFFloat162().getArray()).setKeyValue(new MFRotation163().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ankle_RotationInterpolator").setKey(new MFFloat164().getArray()).setKeyValue(new MFRotation165().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_subtalar_RotationInterpolator").setKey(new MFFloat166().getArray()).setKeyValue(new MFRotation167().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_midtarsal_RotationInterpolator").setKey(new MFFloat168().getArray()).setKeyValue(new MFRotation169().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_metatarsal_RotationInterpolator").setKey(new MFFloat170().getArray()).setKeyValue(new MFRotation171().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_hip_RotationInterpolator").setKey(new MFFloat172().getArray()).setKeyValue(new MFRotation173().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_knee_RotationInterpolator").setKey(new MFFloat174().getArray()).setKeyValue(new MFRotation175().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ankle_RotationInterpolator").setKey(new MFFloat176().getArray()).setKeyValue(new MFRotation177().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_subtalar_RotationInterpolator").setKey(new MFFloat178().getArray()).setKeyValue(new MFRotation179().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_midtarsal_RotationInterpolator").setKey(new MFFloat180().getArray()).setKeyValue(new MFRotation181().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_metatarsal_RotationInterpolator").setKey(new MFFloat182().getArray()).setKeyValue(new MFRotation183().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl5_RotationInterpolator").setKey(new MFFloat184().getArray()).setKeyValue(new MFRotation185().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl4_RotationInterpolator").setKey(new MFFloat186().getArray()).setKeyValue(new MFRotation187().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl3_RotationInterpolator").setKey(new MFFloat188().getArray()).setKeyValue(new MFRotation189().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl2_RotationInterpolator").setKey(new MFFloat190().getArray()).setKeyValue(new MFRotation191().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl1_RotationInterpolator").setKey(new MFFloat192().getArray()).setKeyValue(new MFRotation193().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt12_RotationInterpolator").setKey(new MFFloat194().getArray()).setKeyValue(new MFRotation195().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt11_RotationInterpolator").setKey(new MFFloat196().getArray()).setKeyValue(new MFRotation197().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt10_RotationInterpolator").setKey(new MFFloat198().getArray()).setKeyValue(new MFRotation199().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt9_RotationInterpolator").setKey(new MFFloat200().getArray()).setKeyValue(new MFRotation201().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt8_RotationInterpolator").setKey(new MFFloat202().getArray()).setKeyValue(new MFRotation203().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt7_RotationInterpolator").setKey(new MFFloat204().getArray()).setKeyValue(new MFRotation205().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt6_RotationInterpolator").setKey(new MFFloat206().getArray()).setKeyValue(new MFRotation207().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt5_RotationInterpolator").setKey(new MFFloat208().getArray()).setKeyValue(new MFRotation209().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt4_RotationInterpolator").setKey(new MFFloat210().getArray()).setKeyValue(new MFRotation211().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt3_RotationInterpolator").setKey(new MFFloat212().getArray()).setKeyValue(new MFRotation213().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt2_RotationInterpolator").setKey(new MFFloat214().getArray()).setKeyValue(new MFRotation215().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt1_RotationInterpolator").setKey(new MFFloat216().getArray()).setKeyValue(new MFRotation217().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc7_RotationInterpolator").setKey(new MFFloat218().getArray()).setKeyValue(new MFRotation219().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc6_RotationInterpolator").setKey(new MFFloat220().getArray()).setKeyValue(new MFRotation221().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc5_RotationInterpolator").setKey(new MFFloat222().getArray()).setKeyValue(new MFRotation223().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc4_RotationInterpolator").setKey(new MFFloat224().getArray()).setKeyValue(new MFRotation225().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc3_RotationInterpolator").setKey(new MFFloat226().getArray()).setKeyValue(new MFRotation227().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc2_RotationInterpolator").setKey(new MFFloat228().getArray()).setKeyValue(new MFRotation229().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc1_RotationInterpolator").setKey(new MFFloat230().getArray()).setKeyValue(new MFRotation231().getArray()))
          .addChild(new OrientationInterpolator().setDEF("skullbase_RotationInterpolator").setKey(new MFFloat232().getArray()).setKeyValue(new MFRotation233().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_eyelid_joint_RotationInterpolator").setKey(new MFFloat234().getArray()).setKeyValue(new MFRotation235().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_eyeball_joint_RotationInterpolator").setKey(new MFFloat236().getArray()).setKeyValue(new MFRotation237().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_eyebrow_joint_RotationInterpolator").setKey(new MFFloat238().getArray()).setKeyValue(new MFRotation239().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_eyelid_joint_RotationInterpolator").setKey(new MFFloat240().getArray()).setKeyValue(new MFRotation241().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_eyeball_joint_RotationInterpolator").setKey(new MFFloat242().getArray()).setKeyValue(new MFRotation243().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_eyebrow_joint_RotationInterpolator").setKey(new MFFloat244().getArray()).setKeyValue(new MFRotation245().getArray()))
          .addChild(new OrientationInterpolator().setDEF("temporomandibular_RotationInterpolator").setKey(new MFFloat246().getArray()).setKeyValue(new MFRotation247().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_sternoclavicular_RotationInterpolator").setKey(new MFFloat248().getArray()).setKeyValue(new MFRotation249().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_acromioclavicular_RotationInterpolator").setKey(new MFFloat250().getArray()).setKeyValue(new MFRotation251().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_shoulder_RotationInterpolator").setKey(new MFFloat252().getArray()).setKeyValue(new MFRotation253().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_elbow_RotationInterpolator").setKey(new MFFloat254().getArray()).setKeyValue(new MFRotation255().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_wrist_RotationInterpolator").setKey(new MFFloat256().getArray()).setKeyValue(new MFRotation257().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_thumb1_RotationInterpolator").setKey(new MFFloat258().getArray()).setKeyValue(new MFRotation259().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_thumb2_RotationInterpolator").setKey(new MFFloat260().getArray()).setKeyValue(new MFRotation261().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_thumb3_RotationInterpolator").setKey(new MFFloat262().getArray()).setKeyValue(new MFRotation263().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index0_RotationInterpolator").setKey(new MFFloat264().getArray()).setKeyValue(new MFRotation265().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index1_RotationInterpolator").setKey(new MFFloat266().getArray()).setKeyValue(new MFRotation267().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index2_RotationInterpolator").setKey(new MFFloat268().getArray()).setKeyValue(new MFRotation269().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index3_RotationInterpolator").setKey(new MFFloat270().getArray()).setKeyValue(new MFRotation271().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle0_RotationInterpolator").setKey(new MFFloat272().getArray()).setKeyValue(new MFRotation273().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle1_RotationInterpolator").setKey(new MFFloat274().getArray()).setKeyValue(new MFRotation275().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle2_RotationInterpolator").setKey(new MFFloat276().getArray()).setKeyValue(new MFRotation277().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle3_RotationInterpolator").setKey(new MFFloat278().getArray()).setKeyValue(new MFRotation279().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring0_RotationInterpolator").setKey(new MFFloat280().getArray()).setKeyValue(new MFRotation281().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring1_RotationInterpolator").setKey(new MFFloat282().getArray()).setKeyValue(new MFRotation283().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring2_RotationInterpolator").setKey(new MFFloat284().getArray()).setKeyValue(new MFRotation285().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring3_RotationInterpolator").setKey(new MFFloat286().getArray()).setKeyValue(new MFRotation287().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky0_RotationInterpolator").setKey(new MFFloat288().getArray()).setKeyValue(new MFRotation289().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky1_RotationInterpolator").setKey(new MFFloat290().getArray()).setKeyValue(new MFRotation291().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky2_RotationInterpolator").setKey(new MFFloat292().getArray()).setKeyValue(new MFRotation293().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky3_RotationInterpolator").setKey(new MFFloat294().getArray()).setKeyValue(new MFRotation295().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_sternoclavicular_RotationInterpolator").setKey(new MFFloat296().getArray()).setKeyValue(new MFRotation297().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_acromioclavicular_RotationInterpolator").setKey(new MFFloat298().getArray()).setKeyValue(new MFRotation299().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_shoulder_RotationInterpolator").setKey(new MFFloat300().getArray()).setKeyValue(new MFRotation301().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_elbow_RotationInterpolator").setKey(new MFFloat302().getArray()).setKeyValue(new MFRotation303().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_wrist_RotationInterpolator").setKey(new MFFloat304().getArray()).setKeyValue(new MFRotation305().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_thumb1_RotationInterpolator").setKey(new MFFloat306().getArray()).setKeyValue(new MFRotation307().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_thumb2_RotationInterpolator").setKey(new MFFloat308().getArray()).setKeyValue(new MFRotation309().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_thumb3_RotationInterpolator").setKey(new MFFloat310().getArray()).setKeyValue(new MFRotation311().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index0_RotationInterpolator").setKey(new MFFloat312().getArray()).setKeyValue(new MFRotation313().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index1_RotationInterpolator").setKey(new MFFloat314().getArray()).setKeyValue(new MFRotation315().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index2_RotationInterpolator").setKey(new MFFloat316().getArray()).setKeyValue(new MFRotation317().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index3_RotationInterpolator").setKey(new MFFloat318().getArray()).setKeyValue(new MFRotation319().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle0_RotationInterpolator").setKey(new MFFloat320().getArray()).setKeyValue(new MFRotation321().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle1_RotationInterpolator").setKey(new MFFloat322().getArray()).setKeyValue(new MFRotation323().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle2_RotationInterpolator").setKey(new MFFloat324().getArray()).setKeyValue(new MFRotation325().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle3_RotationInterpolator").setKey(new MFFloat326().getArray()).setKeyValue(new MFRotation327().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring0_RotationInterpolator").setKey(new MFFloat328().getArray()).setKeyValue(new MFRotation329().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring1_RotationInterpolator").setKey(new MFFloat330().getArray()).setKeyValue(new MFRotation331().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring2_RotationInterpolator").setKey(new MFFloat332().getArray()).setKeyValue(new MFRotation333().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring3_RotationInterpolator").setKey(new MFFloat334().getArray()).setKeyValue(new MFRotation335().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky0_RotationInterpolator").setKey(new MFFloat336().getArray()).setKeyValue(new MFRotation337().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky1_RotationInterpolator").setKey(new MFFloat338().getArray()).setKeyValue(new MFRotation339().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky2_RotationInterpolator").setKey(new MFFloat340().getArray()).setKeyValue(new MFRotation341().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky3_RotationInterpolator").setKey(new MFFloat342().getArray()).setKeyValue(new MFRotation343().getArray())))
        .addChild(new Group().setDEF("DisplacersAnimationGroup")
          .addChild(new ScalarInterpolator().setDEF("skull_tipInterpolator").setKey(new MFFloat344().getArray()).setKeyValue(new MFFloat345().getArray())))
        .addChild(new Group().setDEF("SkinTextureTransformAnimationGroup")
          .addChild(new ScalarInterpolator().setDEF("SkinInterpolator").setKey(new MFFloat346().getArray()).setKeyValue(new MFFloat347().getArray())))
        .addChild(new Group()
          .addChild(new Transform().setDEF("SBall").setTranslation(new float[] {-0.916f,0.37f,-0.92f}).setRotation(new float[] {0.7f,0f,0.7f,0.1f}).setScale(new float[] {0.23f,0.23f,0.23f})
            .addChild(new Shape().setDEF("ball_Shape")
              .setAppearance(new Appearance().setDEF("ball_Appearance")
                .setMaterial(new Material().setDEF("ball_Material").setDiffuseColor(new float[] {0.3f,0.3f,1f}).setEmissiveColor(new float[] {0.3f,0.3f,0.33f}))
                .setTexture(new ImageTexture().setUSE("JoeSkinImageTexture")))
              .setGeometry(new IndexedFaceSet().setDEF("ball_IndexedFaceSet").setCoordIndex(new MFInt32348().getArray())
                .setCoord(new Coordinate().setDEF("Ball_Coordinates").setPoint(new MFVec3f349().getArray()))))
            .addChild(new Viewpoint().setDEF("ballView_1").setDescription("Ball View")))
          .addChild(new PositionInterpolator().setDEF("ball_TranslationInterpolator").setKey(new MFFloat350().getArray()).setKeyValue(new MFVec3f351().getArray()))
          .addChild(new OrientationInterpolator().setDEF("ball_RotationInterpolator").setKey(new MFFloat352().getArray()).setKeyValue(new MFRotation353().getArray())))
        .addChild(new Group()
          .addChild(new Transform().setScale(new float[] {0.2f,0.2f,0.2f})
            .addChild(new Shape().setUSE("AxisLinesShape")))
          .addChild(new Transform().setDEF("Circle0").setScale(new float[] {1.175f,1f,1.175f})
            .addChild(new Shape().setDEF("circle_Shape")
              .setAppearance(new Appearance().setDEF("circle0_Appearance")
                .setMaterial(new Material().setDEF("circle0_Material").setAmbientIntensity(0.9f).setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.425f,0.486f,1f})))
              .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt32354().getArray())
                .setCoord(new Coordinate().setDEF("circle_Coordinates").setPoint(new MFVec3f355().getArray())))))
          .addChild(new Transform().setDEF("Circle1").setScale(new float[] {0.5f,1f,0.5f})
            .addChild(new Shape().setDEF("circle1_Shape")
              .setAppearance(new Appearance().setDEF("circle1_Appearance")
                .setMaterial(new Material().setDEF("circle1_Material").setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
          .addChild(new Transform().setDEF("Circle2").setScale(new float[] {0.25f,1f,0.25f})
            .addChild(new Shape().setDEF("circle2_Shape")
              .setAppearance(new Appearance().setDEF("circle2_Appearance")
                .setMaterial(new Material().setDEF("circle2_Material").setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("HumanoidRoot_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("sacroiliac_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_subtalar_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_midtarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_metatarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_hip_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_knee_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ankle_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_subtalar_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_midtarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_metatarsal_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt12_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt11_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt10_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt9_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt8_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt7_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt6_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc7_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc6_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc5_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc4_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("skullbase_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyelid_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyebrow_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyelid_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyeball_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyebrow_joint_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("temporomandibular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_sternoclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_acromioclavicular_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_shoulder_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_elbow_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_wrist_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky0_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky1_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky2_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky3_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("HumanoidRoot_RotationInterpolator").setFromField("value_changed").setToNode("Joe_humanoid_root").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Joe_humanoid_root").setToField("translation"))
        .addChild(new ROUTE().setFromNode("sacroiliac_RotationInterpolator").setFromField("value_changed").setToNode("Joe_sacroiliac").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_hip_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_hip").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_knee_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_knee").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_ankle_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_talocrural").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_subtalar_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_tarsometatarsal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metatarsophalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_metatarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_tarsal_distal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_hip_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_hip").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_knee_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_knee").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_ankle_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_talocrural").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_subtalar_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_tarsometatarsal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_midtarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metatarsophalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_metatarsal_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_tarsal_distal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vl5_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl5").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vl4_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vl3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vl2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vl1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vl1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt12_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt12").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt11_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt11").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt10_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt10").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt9_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt9").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt8_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt8").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt7_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt7").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt6_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt6").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt5_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt5").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt4_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vt1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vt1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vc7_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc7").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vc6_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc6").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vc5_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc5").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vc4_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vc3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vc2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("vc1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_vc1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("skullbase_RotationInterpolator").setFromField("value_changed").setToNode("Joe_skullbase").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_eyelid_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_eyelid_joint").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_eyeball_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_eyeball_joint").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_eyebrow_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_eyebrow_joint").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_eyelid_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_eyelid_joint").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_eyeball_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_eyeball_joint").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_eyebrow_joint_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_eyebrow_joint").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("temporomandibular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_temporomandibular").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_sternoclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_sternoclavicular").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_acromioclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_acromioclavicular").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_elbow_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_elbow").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_wrist_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_radiocarpal").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_thumb1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_thumb2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_thumb3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_index0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_index1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_index2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_index3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_middle0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_middle1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_middle2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_middle3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_ring0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_ring1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_ring2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_ring3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_pinky0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpometacarpal_5").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_pinky1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_metacarpophalangeal_5").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_pinky2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_proximal_interphalangeal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("l_pinky3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_l_carpal_distal_interphalangeal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_sternoclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_sternoclavicular").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_acromioclavicular_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_acromioclavicular").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_shoulder_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_elbow_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_wrist_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_radiocarpal").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_thumb3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_index0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_index1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_index2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_index3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_1").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_middle0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_middle1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_middle2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_middle3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_2").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_ring0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_ring1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_ring2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_ring3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_3").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_pinky0_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpometacarpal_5").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_pinky1_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_metacarpophalangeal_5").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_pinky2_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_proximal_interphalangeal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("r_pinky3_RotationInterpolator").setFromField("value_changed").setToNode("Joe_r_carpal_distal_interphalangeal_4").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("skull_tipInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("skull_tipInterpolator").setFromField("value_changed").setToNode("Joe_skull_tip_raiser_action").setToField("weight"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("SkinInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SkinInterpolator").setFromField("value_changed").setToNode("KickTextureTransform").setToField("rotation"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("ball_TranslationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("ball_TranslationInterpolator").setFromField("value_changed").setToNode("SBall").setToField("translation"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("ball_RotationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("ball_RotationInterpolator").setFromField("value_changed").setToNode("SBall").setToField("rotation")))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ignore"});
  }
}
private class MFInt322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFColor4 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f});
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.35f,0.35f,1f});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101,362,363});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f,1f,0.8f,1f,1f,1f,0.4f,0.8f});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369,98});
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.6f,0.2f,1f,1f,1f,1f,1f,1f,0.2f});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,0.7f,1f,0.8f});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.15f,0f,0f,0f,0.15f,-0.1f,0f,0.15f,0.1f,0f,0.05f,0f,-0.02f,0.05f,-0.15f,0f,0f,-0.05f,0f,0f,0.15f,0f,0f,0.05f,0f,0f,0f,0f,-0.15f});
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
private class MFFloat71 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
private class MFInt3286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt3298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,0.9f});
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.1f,1f,1f,1f,1f,1f,1f,1f,0.3f,0.2f});
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
private class MFFloat105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
private class MFFloat109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt32110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
private class MFFloat113 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
private class MFFloat119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
private class MFFloat121 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt32122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
private class MFFloat123 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
private class MFFloat125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
private class MFInt32126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
private class MFFloat131 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
private class MFFloat133 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
private class MFInt32134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
private class MFFloat137 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFInt32138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
private class MFFloat141 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.77f,0f,0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.11f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0f,0.05f,0.4867f,0f,0.165f,0.01f,0.12f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.11f,0.011f,0.19f,0f,0.875f,0f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0f,1.41f,-0.145f,0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.9f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.9f,0.075f,0f,0.87f,0f,0.171f,0.65f,0f,0.02f,0.65f,0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0f,-0.02f,0.65f,0f,-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1f,-0.01f,0.225f,1f,-0.07f,0.185f,1f,-0.01f,0.185f,1f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0f,0.21f,0.85f,0f,0.1854f,0.85f,0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.19f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.19f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0f,0.193f,0.815f,0.005f,0.198f,0.8f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f,0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.255f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1f,-0.01f,-0.225f,1f,-0.07f,-0.185f,1f,-0.01f,-0.185f,1f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0f,-0.21f,0.85f,0f,-0.1854f,0.85f,0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.19f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.19f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0f,-0.193f,0.815f,0.005f,-0.198f,0.8f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f});
  }
}
private class MFVec3f147 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f,-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0f,0.05f,0.466f,0f,0.17f,0.3f,0f,0.06f,0.3f,0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0f,0.07f,0.165f,0f,0.07f,0.095f,0f,0.07f,0.115f,0.04f,0.13f,0.125f,0f,0.12f,0.165f,0f,0.12f,0.087f,0f,0.122f,0.09f,0.012f,0.188f,0.11f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.01f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.17f,0.3f,0f,-0.06f,0.3f,0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0f,0.07f,-0.165f,0f,0.07f,-0.095f,0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0f,0.12f,-0.165f,0f,0.12f,-0.087f,0f,0.122f,-0.09f,0.012f,0.188f,-0.11f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.01f,0.168f});
  }
}
private class MFString148 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"});
  }
}
private class MFInt32149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
private class MFInt32152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
private class MFVec2f153 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f,0f,0.5f,0.5f,0.5f,0f,0f,0.5f});
  }
}
private class MFFloat154 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.4f,0.6f,1f});
  }
}
private class MFRotation155 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.5f,1f,0f,0f,0.5f,-1f,0f,0f,0.1f,-1f,0f,0f,0.5f,-1f,0f,0f,0.5f});
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.6f,1f});
  }
}
private class MFVec3f157 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,0.3f,-1f,0.4f,-0.04f,-0.4f,-0.18f,0.1f,0f,-0.2f,0.15f,0.15f});
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation159 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat160 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.3f,0.45f,1f});
  }
}
private class MFRotation161 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1.5f,-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,0.5f,1f,0f,0f,1f});
  }
}
private class MFFloat162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.35f,0.5f,1f});
  }
}
private class MFRotation163 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,0f,1f,0.2f,1f,0f,1f,0.5f,1f,0f,0f,1.4f});
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,1f});
  }
}
private class MFRotation165 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f});
  }
}
private class MFFloat166 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation167 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat168 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation169 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation171 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
private class MFRotation173 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,1f,1f,0f,0f,1f,-1f,0f,0f,1f,-1f,0f,0f,1f,-1f,0f,0f,1f});
  }
}
private class MFFloat174 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
private class MFRotation175 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.1f,0f,0f,1f,0f,1f,0f,0f,1f,1f,0f,0f,1f,1f,0f,0f,1.5f});
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
private class MFRotation177 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,1f,0f,0f,1f,1f,0f,0f,0.5f});
  }
}
private class MFFloat178 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation179 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation181 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat182 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation183 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation185 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat186 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation187 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation189 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat190 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation191 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat192 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation193 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation195 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation197 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat198 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation199 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation201 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat202 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation203 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation205 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat206 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation207 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation209 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat210 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation211 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation213 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation215 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat216 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation217 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation219 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat220 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation221 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat222 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation223 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.3f,0.4f,1f});
  }
}
private class MFRotation225 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,1f,0.25f,-1f,0f,-1f,0.35f,1f,0f,0f,0.75f,1f,0f,1f,0.5f});
  }
}
private class MFFloat226 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation227 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation229 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat230 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation231 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.75f,1f});
  }
}
private class MFRotation233 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.5f,0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0.35f});
  }
}
private class MFFloat234 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation235 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation237 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat238 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation239 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation241 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat242 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation243 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation245 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation247 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation249 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat250 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation251 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat252 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,1f});
  }
}
private class MFRotation253 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,-1f,0f,1f,1.75f});
  }
}
private class MFFloat254 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation255 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,3f,-1f,0f,0f,0.75f,-1f,-1f,0f,0.5f});
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.8f,1f});
  }
}
private class MFRotation257 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.3f,0f,-0.5f,1f,1.3f,0f,0f,1f,0f});
  }
}
private class MFFloat258 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation259 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation261 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat262 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation263 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation265 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat266 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation267 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation269 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat270 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation271 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation273 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat274 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation275 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation277 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat278 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation279 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation281 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat282 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation283 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation285 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat286 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation287 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat288 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation289 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat290 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation291 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation293 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat294 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation295 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation297 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat298 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation299 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat300 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation301 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,-1f,2.5f,0f,0f,-1f,1.5f,0f,0f,-1f,1.75f});
  }
}
private class MFFloat302 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation303 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,3f,-1f,0f,0f,0.75f,-1f,-1f,0f,0.5f});
  }
}
private class MFFloat304 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.7f,1f});
  }
}
private class MFRotation305 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.3f,0f,0f,1f,0f,0f,0f,-1f,1f,0f,-1f,0f,0.3f});
  }
}
private class MFFloat306 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation307 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation309 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat310 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
private class MFRotation311 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
private class MFFloat312 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation313 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
private class MFFloat314 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation315 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation317 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat318 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation319 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation321 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
private class MFFloat322 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation323 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat324 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation325 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat326 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation327 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat328 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation329 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
private class MFFloat330 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation331 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat332 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation333 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat334 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation335 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat336 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation337 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
private class MFFloat338 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation339 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat340 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation341 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat342 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
private class MFRotation343 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.2f,0.35f,0.6f,0.7f,0.85f,0.88f,0.94f,0.97f,1f});
  }
}
private class MFFloat345 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f,0f,0.2f,0.4f,1f,0f,1f,0.4f,0f});
  }
}
private class MFFloat346 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.7f,0.8f,1f});
  }
}
private class MFFloat347 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f,0f,0f,1f,2f,0f});
  }
}
private class MFInt32348 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f349 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.4675f,0f,0f,0.4049f,-0.2338f,-0.1169f,0.4049f,-0.2024f,-0.2024f,0.4049f,-0.1169f,-0.2338f,0.4049f,0f,-0.2024f,0.4049f,0.1169f,-0.1169f,0.4049f,0.2024f,0f,0.4049f,0.2338f,0.1169f,0.4049f,0.2024f,0.2024f,0.4049f,0.1169f,0.2338f,0.4049f,0f,0.2024f,0.4049f,-0.1169f,0.1169f,0.4049f,-0.2024f,0f,0.2338f,-0.4049f,-0.2024f,0.2338f,-0.3506f,-0.3506f,0.2338f,-0.2024f,-0.4049f,0.2338f,0f,-0.3506f,0.2338f,0.2024f,-0.2024f,0.2338f,0.3506f,0f,0.2338f,0.4049f,0.2024f,0.2338f,0.3506f,0.3506f,0.2338f,0.2024f,0.4049f,0.2338f,0f,0.3506f,0.2338f,-0.2024f,0.2024f,0.2338f,-0.3506f,0f,0f,-0.4675f,-0.2338f,0f,-0.4049f,-0.4049f,0f,-0.2338f,-0.4675f,0f,0f,-0.4049f,0f,0.2338f,-0.2338f,0f,0.4049f,0f,0f,0.4675f,0.2338f,0f,0.4049f,0.4049f,0f,0.2338f,0.4675f,0f,0f,0.4049f,0f,-0.2338f,0.2338f,0f,-0.4049f,0f,-0.2338f,-0.4049f,-0.2024f,-0.2338f,-0.3506f,-0.3506f,-0.2338f,-0.2024f,-0.4049f,-0.2338f,0f,-0.3506f,-0.2338f,0.2024f,-0.2024f,-0.2338f,0.3506f,0f,-0.2338f,0.4049f,0.2024f,-0.2338f,0.3506f,0.3506f,-0.2338f,0.2024f,0.4049f,-0.2338f,0f,0.3506f,-0.2338f,-0.2024f,0.2024f,-0.2338f,-0.3506f,0f,-0.4049f,-0.2338f,-0.1169f,-0.4049f,-0.2024f,-0.2024f,-0.4049f,-0.1169f,-0.2338f,-0.4049f,0f,-0.2024f,-0.4049f,0.1169f,-0.1169f,-0.4049f,0.2024f,0f,-0.4049f,0.2338f,0.1169f,-0.4049f,0.2024f,0.2024f,-0.4049f,0.1169f,0.2338f,-0.4049f,0f,0.2024f,-0.4049f,-0.1169f,0.1169f,-0.4049f,-0.2024f,0f,-0.4675f,0f});
  }
}
private class MFFloat350 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.409f,1f});
  }
}
private class MFVec3f351 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1f,0.4f,-1f,0f,0.07f,0f,0.05f,0.06f,0.05f,2f,4f,10f});
  }
}
private class MFFloat352 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.41f,0.71f,1f});
  }
}
private class MFRotation353 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,1f,0.25f,-1f,0f,-1f,1.35f,-1f,1f,-1f,3.35f,-1f,0.2f,-1f,3f,-1f,0.2f,-1f,3f});
  }
}
private class MFInt32354 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
private class MFVec3f355 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,0f,0f,0.995f,0f,-0.105f,0.979f,0f,-0.208f,0.951f,0f,-0.309f,0.914f,0f,-0.407f,0.866f,0f,-0.5f,0.809f,0f,-0.588f,0.743f,0f,-0.669f,0.669f,0f,-0.743f,0.588f,0f,-0.809f,0.5f,0f,-0.866f,0.407f,0f,-0.914f,0.309f,0f,-0.951f,0.208f,0f,-0.978f,0.105f,0f,-0.995f,0f,0f,-1f,-0.105f,0f,-0.994522f,-0.208f,0f,-0.978f,-0.309f,0f,-0.951f,-0.407f,0f,-0.914f,-0.5f,0f,-0.866f,-0.588f,0f,-0.809f,-0.669f,0f,-0.743f,-0.743f,0f,-0.669f,-0.809f,0f,-0.588f,-0.866f,0f,-0.5f,-0.914f,0f,-0.407f,-0.951f,0f,-0.309f,-0.978f,0f,-0.208f,-0.995f,0f,-0.105f,-1f,0f,0f,-0.995f,0f,0.105f,-0.978f,0f,0.208f,-0.951f,0f,0.309f,-0.914f,0f,0.407f,-0.866f,0f,0.5f,-0.809f,0f,0.588f,-0.743f,0f,0.669f,-0.669f,0f,0.743f,-0.588f,0f,0.809f,-0.5f,0f,0.866f,-0.407f,0f,0.914f,-0.309f,0f,0.951f,-0.208f,0f,0.978f,-0.105f,0f,0.995f,0f,0f,1f,0.105f,0f,0.995f,0.208f,0f,0.978f,0.309f,0f,0.951f,0.407f,0f,0.914f,0.5f,0f,0.866f,0.588f,0f,0.809f,0.669f,0f,0.743f,0.743f,0f,0.669f,0.809f,0f,0.588f,0.866f,0f,0.5f,0.914f,0f,0.407f,0.951f,0f,0.309f,0.978f,0f,0.208f,0.995f,0f,0.104f,1f,0f,0f});
  }
}
}
