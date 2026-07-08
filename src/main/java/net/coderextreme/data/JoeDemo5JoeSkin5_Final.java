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
import org.web3d.x3d.jsail.Interpolation.OrientationInterpolator;
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
public class JoeDemo5JoeSkin5_Final implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JoeDemo5JoeSkin5_Final().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/JoeDemo5JoeSkin5_Final.new.java.x3d");
    model.toFileJSON("../data/JoeDemo5JoeSkin5_Final.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.1"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("JoeDemo5JoeSkin5.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("joe kick into std anims"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("JoeDemo5JoeSkin.x3d, Only Skin")))
        .addChild(new NavigationInfo().setHeadlight(false))
        .addChild(new Background().setDEF(new SFString("Background1")).setSkyColor(new MFColor0().getArray()).setGroundColor(new MFColor1().getArray()))
        .addChild(new DirectionalLight().setGlobal(true))
        .addChild(new DirectionalLight().setDirection(new float[] {0f ,0.5f ,0f }).setGlobal(true).setIntensity(0.75f ))
        .addChild(new DirectionalLight().setDirection(new float[] {0f ,0f ,1f }).setGlobal(true))
        .addChild(new Group().setDEF(new SFString("SceneViewpoints"))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,1f ,0f }).setDescription(new SFString("JinLOA4")).setPosition(new float[] {0f ,1f ,3f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Front")).setPosition(new float[] {0f ,0.4f ,4f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Front Close")).setPosition(new float[] {0f ,0.8f ,2f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Front Closer")).setPosition(new float[] {0f ,1.2f ,1f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,1.5f ,0.0016f }).setDescription(new SFString("JinLOA4 Front Face")).setPosition(new float[] {0f ,1.63f ,1f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Right Side")).setOrientation(new float[] {0f ,1f ,0f ,1.57f }).setPosition(new float[] {2.6f ,0.8f ,0f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Right Side Close")).setOrientation(new float[] {0f ,1f ,0f ,1.2f }).setPosition(new float[] {1f ,0.8f ,0.5f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Left Side Close")).setOrientation(new float[] {0f ,1f ,0f ,-1.2f }).setPosition(new float[] {-1f ,0.8f ,0.5f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Left Side")).setOrientation(new float[] {0f ,1f ,0f ,-1.57f }).setPosition(new float[] {-2.6f ,0.8f ,0f }))
          .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f ,0.9f ,0.0016f }).setDescription(new SFString("JinLOA4 Top")).setOrientation(new float[] {1f ,0f ,0f ,-1.5708f }).setPosition(new float[] {0f ,3.5f ,0f })))
        .addChild(new Transform().setDEF(new SFString("HostCoordSys")).setScale(new float[] {0.17f ,0.17f ,0.17f })
          .addChild(new Inline().setUrl(new MFString2().getArray()))
          .addChild(new Viewpoint().setDEF(new SFString("HostCoordSysView")).setDescription(new SFString("Host 0 0 0 View"))))
        .addChild(new Group().setDEF(new SFString("Joe_Humanoid"))
          .addChild(new HAnimHumanoid("Joe_Humanoid").setDEF(new SFString("JoeHuman")).setVersion(new SFString("2.0"))
            .addJoints(new HAnimJoint("JoeHuman").setName(new SFString("humanoid_root")).setDEF(new SFString("hanim_humanoid_root")).setCenter(new float[] {0f ,0.875f ,0f })
              .addChild(new HAnimSegment("hanim_humanoid_root")
                .addChild(new HAnimSite().setName(new SFString("RootFront")).setDEF(new SFString("Joe_RootView1"))
                  .addChild(new Transform().setDEF(new SFString("HAnimCoordSys")).setScale(new float[] {0.17f ,0.17f ,0.17f })
                    .addChild(new Inline().setUrl(new MFString3().getArray()))
                    .addChild(new Viewpoint().setDEF(new SFString("HAnimCoordSysView")).setDescription(new SFString("HAnim 0 0 0 View"))))))
              .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("sacroiliac")).setDEF(new SFString("Joe_sacroiliac")).setCenter(new float[] {0f ,0.920000016689301f ,0f }).setSkinCoordIndex(new MFInt324().getArray()).setSkinCoordWeight(new MFFloat5().getArray())
                .addChild(new HAnimJoint("Joe_sacroiliac").setName(new SFString("l_hip")).setDEF(new SFString("hanim_l_hip")).setCenter(new float[] {0.100000001490116f ,0.920000016689301f ,0f }).setSkinCoordIndex(new MFInt326().getArray()).setSkinCoordWeight(new MFFloat7().getArray())
                  .addChild(new HAnimJoint("hanim_l_hip").setName(new SFString("l_knee")).setDEF(new SFString("hanim_l_knee")).setCenter(new float[] {0.115000002086163f ,0.465999990701675f ,0f }).setSkinCoordIndex(new MFInt328().getArray()).setSkinCoordWeight(new MFFloat9().getArray())
                    .addChild(new HAnimJoint("hanim_l_knee").setName(new SFString("l_talocrural")).setDEF(new SFString("hanim_l_talocrural")).setCenter(new float[] {0.115000002086163f ,0.0689999982714653f ,0f }).setSkinCoordIndex(new MFInt3210().getArray()).setSkinCoordWeight(new MFFloat11().getArray())
                      .addChild(new HAnimJoint("hanim_l_talocrural").setName(new SFString("l_tarsometatarsal_2")).setDEF(new SFString("Joe_l_tarsometatarsal_2")).setCenter(new float[] {0.115000002086163f ,0.0309999994933605f ,0.0299999993294477f }).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray())
                        .addChild(new HAnimJoint("Joe_l_tarsometatarsal_2").setName(new SFString("l_metatarsophalangeal_2")).setDEF(new SFString("Joe_l_metatarsophalangeal_2")).setCenter(new float[] {0.115000002086163f ,0.0370000004768372f ,0.0900000035762787f }).setSkinCoordIndex(new MFInt3214().getArray()).setSkinCoordWeight(new MFFloat15().getArray())
                          .addChild(new HAnimJoint("Joe_l_metatarsophalangeal_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("Joe_l_metatarsal_2")).setCenter(new float[] {0.115000002086163f ,0.0199999995529652f ,0.122000001370907f }).setSkinCoordIndex(new MFInt3216().getArray()).setSkinCoordWeight(new MFFloat17().getArray())))))))
                .addChild(new HAnimJoint("Joe_sacroiliac").setName(new SFString("r_hip")).setDEF(new SFString("hanim_r_hip")).setCenter(new float[] {-0.100000001490116f ,0.920000016689301f ,0f }).setSkinCoordIndex(new MFInt3218().getArray()).setSkinCoordWeight(new MFFloat19().getArray())
                  .addChild(new HAnimJoint("hanim_r_hip").setName(new SFString("r_knee")).setDEF(new SFString("hanim_r_knee")).setCenter(new float[] {-0.0500000007450581f ,0.465999990701675f ,0f }).setSkinCoordIndex(new MFInt3220().getArray()).setSkinCoordWeight(new MFFloat21().getArray())
                    .addChild(new HAnimJoint("hanim_r_knee").setName(new SFString("r_talocrural")).setDEF(new SFString("hanim_r_talocrural")).setCenter(new float[] {-0.115000002086163f ,0.0689999982714653f ,0f }).setSkinCoordIndex(new MFInt3222().getArray()).setSkinCoordWeight(new MFFloat23().getArray())
                      .addChild(new HAnimJoint("hanim_r_talocrural").setName(new SFString("r_tarsometatarsal_2")).setDEF(new SFString("Joe_r_tarsometatarsal_2")).setCenter(new float[] {-0.100000001490116f ,0.0149999996647239f ,-0.00999999977648258f }).setSkinCoordIndex(new MFInt3224().getArray()).setSkinCoordWeight(new MFFloat25().getArray())
                        .addChild(new HAnimJoint("Joe_r_tarsometatarsal_2").setName(new SFString("r_metatarsophalangeal_2")).setDEF(new SFString("Joe_r_metatarsophalangeal_2")).setCenter(new float[] {-0.115000002086163f ,0.0370000004768372f ,0.0900000035762787f }).setSkinCoordIndex(new MFInt3226().getArray()).setSkinCoordWeight(new MFFloat27().getArray())
                          .addChild(new HAnimJoint("Joe_r_metatarsophalangeal_2").setName(new SFString("r_tarsal_distal_interphalangeal_2")).setDEF(new SFString("Joe_r_tarsal_distal_interphalangeal_2")).setCenter(new float[] {-0.100000001490116f ,0.00999999977648258f ,0.140000000596046f }).setSkinCoordIndex(new MFInt3228().getArray()).setSkinCoordWeight(new MFFloat29().getArray()))))))))
              .addChild(new HAnimJoint("hanim_humanoid_root").setName(new SFString("vl5")).setDEF(new SFString("hanim_vl5")).setCenter(new float[] {0f ,1.04499995708466f ,-0.0949999988079071f }).setSkinCoordIndex(new MFInt3230().getArray()).setSkinCoordWeight(new MFFloat31().getArray())
                .addChild(new HAnimJoint("hanim_vl5").setName(new SFString("vl4")).setDEF(new SFString("hanim_vl4")).setCenter(new float[] {0f ,1.067999958992f ,-0.0850000008940697f })
                  .addChild(new HAnimJoint("hanim_vl4").setName(new SFString("vl3")).setDEF(new SFString("hanim_vl3")).setCenter(new float[] {0f ,1.09200000762939f ,-0.0724999979138374f })
                    .addChild(new HAnimJoint("hanim_vl3").setName(new SFString("vl2")).setDEF(new SFString("hanim_vl2")).setCenter(new float[] {0f ,1.12000000476837f ,-0.0649999976158142f }).setSkinCoordIndex(new MFInt3232().getArray()).setSkinCoordWeight(new MFFloat33().getArray())
                      .addChild(new HAnimJoint("hanim_vl2").setName(new SFString("vl1")).setDEF(new SFString("hanim_vl1")).setCenter(new float[] {0f ,1.14590001106262f ,-0.0625f })
                        .addChild(new HAnimJoint("hanim_vl1").setName(new SFString("vt12")).setDEF(new SFString("hanim_vt12")).setCenter(new float[] {0f ,1.17900002002716f ,-0.068000003695488f })
                          .addChild(new HAnimJoint("hanim_vt12").setName(new SFString("vt11")).setDEF(new SFString("hanim_vt11")).setCenter(new float[] {0f ,1.26789999008179f ,-0.0810000002384186f })
                            .addChild(new HAnimJoint("hanim_vt11").setName(new SFString("vt10")).setDEF(new SFString("hanim_vt10")).setCenter(new float[] {0f ,1.24199998378754f ,-0.0900000035762787f }).setSkinCoordIndex(new MFInt3234().getArray()).setSkinCoordWeight(new MFFloat35().getArray())
                              .addChild(new HAnimJoint("hanim_vt10").setName(new SFString("vt9")).setDEF(new SFString("hanim_vt9")).setCenter(new float[] {0f ,1.26800000667572f ,-0.100000001490116f }).setSkinCoordIndex(new MFInt3236().getArray()).setSkinCoordWeight(new MFFloat37().getArray())
                                .addChild(new HAnimJoint("hanim_vt9").setName(new SFString("vt8")).setDEF(new SFString("hanim_vt8")).setCenter(new float[] {0f ,1.2940000295639f ,-0.109999999403954f })
                                  .addChild(new HAnimJoint("hanim_vt8").setName(new SFString("vt7")).setDEF(new SFString("hanim_vt7")).setCenter(new float[] {0f ,1.32299995422363f ,-0.115500003099442f })
                                    .addChild(new HAnimJoint("hanim_vt7").setName(new SFString("vt6")).setDEF(new SFString("hanim_vt6")).setCenter(new float[] {0f ,1.35199999809265f ,-0.119999997317791f })
                                      .addChild(new HAnimJoint("hanim_vt6").setName(new SFString("vt5")).setDEF(new SFString("hanim_vt5")).setCenter(new float[] {0f ,1.38100004196167f ,-0.123499996960163f })
                                        .addChild(new HAnimJoint("hanim_vt5").setName(new SFString("vt4")).setDEF(new SFString("hanim_vt4")).setCenter(new float[] {0f ,1.4099999666214f ,-0.123499996960163f }).setSkinCoordIndex(new MFInt3238().getArray()).setSkinCoordWeight(new MFFloat39().getArray())
                                          .addChild(new HAnimJoint("hanim_vt4").setName(new SFString("vt3")).setDEF(new SFString("hanim_vt3")).setCenter(new float[] {0f ,1.43799996376038f ,-0.119999997317791f })
                                            .addChild(new HAnimJoint("hanim_vt3").setName(new SFString("vt2")).setDEF(new SFString("hanim_vt2")).setCenter(new float[] {0f ,1.46800005435944f ,-0.104999996721745f })
                                              .addChild(new HAnimJoint("hanim_vt2").setName(new SFString("vt1")).setDEF(new SFString("hanim_vt1")).setCenter(new float[] {0f ,1.49699997901917f ,-0.0900000035762787f }).setSkinCoordIndex(new MFInt3240().getArray()).setSkinCoordWeight(new MFFloat41().getArray())
                                                .addChild(new HAnimJoint("hanim_vt1").setName(new SFString("vc7")).setDEF(new SFString("hanim_vc7")).setCenter(new float[] {0f ,1.52499997615814f ,-0.0719999969005585f }).setSkinCoordIndex(new MFInt3242().getArray()).setSkinCoordWeight(new MFFloat43().getArray())
                                                  .addChild(new HAnimJoint("hanim_vc7").setName(new SFString("vc6")).setDEF(new SFString("hanim_vc6")).setCenter(new float[] {0f ,1.53999996185303f ,-0.0500000007450581f })
                                                    .addChild(new HAnimJoint("hanim_vc6").setName(new SFString("vc5")).setDEF(new SFString("hanim_vc5")).setCenter(new float[] {0f ,1.55200004577637f ,-0.0350000001490116f })
                                                      .addChild(new HAnimJoint("hanim_vc5").setName(new SFString("vc4")).setDEF(new SFString("hanim_vc4")).setCenter(new float[] {0f ,1.56749999523163f ,-0.0255999993532896f })
                                                        .addChild(new HAnimJoint("hanim_vc4").setName(new SFString("vc3")).setDEF(new SFString("hanim_vc3")).setCenter(new float[] {0f ,1.58224999904633f ,-0.0185000002384186f })
                                                          .addChild(new HAnimJoint("hanim_vc3").setName(new SFString("vc2")).setDEF(new SFString("hanim_vc2")).setCenter(new float[] {0f ,1.59500002861023f ,-0.0175000000745058f })
                                                            .addChild(new HAnimJoint("hanim_vc2").setName(new SFString("vc1")).setDEF(new SFString("hanim_vc1")).setCenter(new float[] {0f ,1.61000001430511f ,-0.0149999996647239f })
                                                              .addChild(new HAnimJoint("hanim_vc1").setName(new SFString("skullbase")).setDEF(new SFString("hanim_skullbase")).setCenter(new float[] {0f ,1.62999999523163f ,-0.00999999977648258f }).setSkinCoordIndex(new MFInt3244().getArray()).setSkinCoordWeight(new MFFloat45().getArray())
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("l_eyeball_joint")).setDEF(new SFString("hanim_l_eyeball_joint")).setCenter(new float[] {0.034000001847744f ,1.65900003910065f ,0.0599999986588955f }))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName(new SFString("r_eyeball_joint")).setDEF(new SFString("hanim_r_eyeball_joint")).setCenter(new float[] {-0.034000001847744f ,1.65900003910065f ,0.0599999986588955f })))))))))
                                                  .addChild(new HAnimJoint("hanim_vc7").setName(new SFString("l_sternoclavicular")).setDEF(new SFString("hanim_l_sternoclavicular")).setCenter(new float[] {0.0820000022649765f ,1.44879996776581f ,-0.035300001502037f }).setSkinCoordIndex(new MFInt3246().getArray()).setSkinCoordWeight(new MFFloat47().getArray())
                                                    .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName(new SFString("l_acromioclavicular")).setDEF(new SFString("hanim_l_acromioclavicular")).setCenter(new float[] {0.0961999967694283f ,1.42690002918243f ,-0.0423999987542629f }).setSkinCoordIndex(new MFInt3248().getArray()).setSkinCoordWeight(new MFFloat49().getArray())
                                                      .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName(new SFString("l_shoulder")).setDEF(new SFString("hanim_l_shoulder")).setCenter(new float[] {0.200000002980232f ,1.44000005722046f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt3250().getArray()).setSkinCoordWeight(new MFFloat51().getArray())
                                                        .addChild(new HAnimJoint("hanim_l_shoulder").setName(new SFString("l_elbow")).setDEF(new SFString("hanim_l_elbow")).setCenter(new float[] {0.200000002980232f ,1.13880002498627f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt3252().getArray()).setSkinCoordWeight(new MFFloat53().getArray())
                                                          .addChild(new HAnimJoint("hanim_l_elbow").setName(new SFString("l_radiocarpal")).setDEF(new SFString("Joe_l_radiocarpal")).setCenter(new float[] {0.200000002980232f ,0.870000004768372f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt3254().getArray()).setSkinCoordWeight(new MFFloat55().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_1")).setDEF(new SFString("Joe_l_carpometacarpal_1")).setCenter(new float[] {0.192399993538857f ,0.847199976444244f ,-0.0533999986946583f }).setSkinCoordIndex(new MFInt3256().getArray()).setSkinCoordWeight(new MFFloat57().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_1").setName(new SFString("l_metacarpophalangeal_1")).setDEF(new SFString("Joe_l_metacarpophalangeal_1")).setCenter(new float[] {0.195099994540215f ,0.82260000705719f ,0.0245999991893768f }).setSkinCoordIndex(new MFInt3258().getArray()).setSkinCoordWeight(new MFFloat59().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_1").setName(new SFString("l_carpal_interphalangeal_1")).setDEF(new SFString("Joe_l_carpal_interphalangeal_1")).setCenter(new float[] {0.195500001311302f ,0.815900027751923f ,0.046399999409914f }).setSkinCoordIndex(new MFInt3260().getArray()).setSkinCoordWeight(new MFFloat61().getArray()))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_2")).setDEF(new SFString("Joe_l_carpometacarpal_2")).setCenter(new float[] {0.198300004005432f ,0.80239999294281f ,-0.0280000008642673f }).setSkinCoordIndex(new MFInt3262().getArray()).setSkinCoordWeight(new MFFloat63().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_2").setName(new SFString("l_metacarpophalangeal_2")).setDEF(new SFString("Joe_l_metacarpophalangeal_2")).setCenter(new float[] {0.198300004005432f ,0.781499981880188f ,-0.0280000008642673f }).setSkinCoordIndex(new MFInt3264().getArray()).setSkinCoordWeight(new MFFloat65().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_2").setName(new SFString("l_carpal_proximal_interphalangeal_2")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_2")).setCenter(new float[] {0.201700001955032f ,0.736299991607666f ,-0.0248000007122755f }).setSkinCoordIndex(new MFInt3266().getArray()).setSkinCoordWeight(new MFFloat67().getArray())
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_2").setName(new SFString("l_carpal_distal_interphalangeal_2")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_2")).setCenter(new float[] {0.202800005674362f ,0.713900029659271f ,-0.0236000008881092f }).setSkinCoordIndex(new MFInt3268().getArray()).setSkinCoordWeight(new MFFloat69().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_3")).setDEF(new SFString("Joe_l_carpometacarpal_3")).setCenter(new float[] {0.198699995875359f ,0.802900016307831f ,-0.0529999993741512f }).setSkinCoordIndex(new MFInt3270().getArray()).setSkinCoordWeight(new MFFloat71().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_3").setName(new SFString("l_metacarpophalangeal_3")).setDEF(new SFString("Joe_l_metacarpophalangeal_3")).setCenter(new float[] {0.198699995875359f ,0.781799972057343f ,-0.0529999993741512f }).setSkinCoordIndex(new MFInt3272().getArray()).setSkinCoordWeight(new MFFloat73().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_3").setName(new SFString("l_carpal_proximal_interphalangeal_3")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_3")).setCenter(new float[] {0.201299995183945f ,0.727299988269806f ,-0.0502999983727932f }).setSkinCoordIndex(new MFInt3274().getArray()).setSkinCoordWeight(new MFFloat75().getArray())
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_3").setName(new SFString("l_carpal_distal_interphalangeal_3")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_3")).setCenter(new float[] {0.202600002288818f ,0.701099991798401f ,-0.0494000017642975f }).setSkinCoordIndex(new MFInt3276().getArray()).setSkinCoordWeight(new MFFloat77().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_4")).setDEF(new SFString("Joe_l_carpometacarpal_4")).setCenter(new float[] {0.195600003004074f ,0.801900029182434f ,-0.0794000029563904f }).setSkinCoordIndex(new MFInt3278().getArray()).setSkinCoordWeight(new MFFloat79().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_4").setName(new SFString("l_metacarpophalangeal_4")).setDEF(new SFString("Joe_l_metacarpophalangeal_4")).setCenter(new float[] {0.195600003004074f ,0.781499981880188f ,-0.0794000029563904f }).setSkinCoordIndex(new MFInt3280().getArray()).setSkinCoordWeight(new MFFloat81().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_4").setName(new SFString("l_carpal_proximal_interphalangeal_4")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_4")).setCenter(new float[] {0.197300001978874f ,0.72869998216629f ,-0.0776999965310097f }).setSkinCoordIndex(new MFInt3282().getArray()).setSkinCoordWeight(new MFFloat83().getArray())
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_4").setName(new SFString("l_carpal_distal_interphalangeal_4")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_4")).setCenter(new float[] {0.198300004005432f ,0.704500019550323f ,-0.0767000019550323f }).setSkinCoordIndex(new MFInt3284().getArray()).setSkinCoordWeight(new MFFloat85().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_l_radiocarpal").setName(new SFString("l_carpometacarpal_5")).setDEF(new SFString("Joe_l_carpometacarpal_5")).setCenter(new float[] {0.192499995231628f ,0.806599974632263f ,-0.10360000282526f }).setSkinCoordIndex(new MFInt3286().getArray()).setSkinCoordWeight(new MFFloat87().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_carpometacarpal_5").setName(new SFString("l_metacarpophalangeal_5")).setDEF(new SFString("Joe_l_metacarpophalangeal_5")).setCenter(new float[] {0.192499995231628f ,0.78659999370575f ,-0.10360000282526f }).setSkinCoordIndex(new MFInt3288().getArray()).setSkinCoordWeight(new MFFloat89().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_metacarpophalangeal_5").setName(new SFString("l_carpal_proximal_interphalangeal_5")).setDEF(new SFString("Joe_l_carpal_proximal_interphalangeal_5")).setCenter(new float[] {0.193800002336502f ,0.745199978351593f ,-0.102399997413158f }).setSkinCoordIndex(new MFInt3290().getArray()).setSkinCoordWeight(new MFFloat91().getArray())
                                                                  .addChild(new HAnimJoint("Joe_l_carpal_proximal_interphalangeal_5").setName(new SFString("l_carpal_distal_interphalangeal_5")).setDEF(new SFString("Joe_l_carpal_distal_interphalangeal_5")).setCenter(new float[] {0.19480000436306f ,0.727699995040894f ,-0.101700000464916f }).setSkinCoordIndex(new MFInt3292().getArray()).setSkinCoordWeight(new MFFloat93().getArray()))))))))))
                                                  .addChild(new HAnimJoint("hanim_vc7").setName(new SFString("r_sternoclavicular")).setDEF(new SFString("hanim_r_sternoclavicular")).setCenter(new float[] {-0.0299999993294477f ,1.46000003814697f ,0f }).setSkinCoordIndex(new MFInt3294().getArray()).setSkinCoordWeight(new MFFloat95().getArray())
                                                    .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName(new SFString("r_acromioclavicular")).setDEF(new SFString("hanim_r_acromioclavicular")).setCenter(new float[] {-0.0900000035762787f ,1.4099999666214f ,-0.109999999403954f }).setSkinCoordIndex(new MFInt3296().getArray()).setSkinCoordWeight(new MFFloat97().getArray())
                                                      .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName(new SFString("r_shoulder")).setDEF(new SFString("hanim_r_shoulder")).setCenter(new float[] {-0.200000002980232f ,1.44000005722046f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt3298().getArray()).setSkinCoordWeight(new MFFloat99().getArray())
                                                        .addChild(new HAnimJoint("hanim_r_shoulder").setName(new SFString("r_elbow")).setDEF(new SFString("hanim_r_elbow")).setCenter(new float[] {-0.200000002980232f ,1.13880002498627f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt32100().getArray()).setSkinCoordWeight(new MFFloat101().getArray())
                                                          .addChild(new HAnimJoint("hanim_r_elbow").setName(new SFString("r_radiocarpal")).setDEF(new SFString("Joe_r_radiocarpal")).setCenter(new float[] {-0.200000002980232f ,0.889999985694885f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt32102().getArray()).setSkinCoordWeight(new MFFloat103().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_1")).setDEF(new SFString("Joe_r_carpometacarpal_1")).setCenter(new float[] {-0.200000002980232f ,0.850000023841858f ,0f }).setSkinCoordIndex(new MFInt32104().getArray()).setSkinCoordWeight(new MFFloat105().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_1").setName(new SFString("r_metacarpophalangeal_1")).setDEF(new SFString("Joe_r_metacarpophalangeal_1")).setCenter(new float[] {-0.200000002980232f ,0.819999992847443f ,0.0299999993294477f }).setSkinCoordIndex(new MFInt32106().getArray()).setSkinCoordWeight(new MFFloat107().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_1").setName(new SFString("r_carpal_interphalangeal_1")).setDEF(new SFString("Joe_r_carpal_interphalangeal_1")).setCenter(new float[] {-0.200000002980232f ,0.800000011920929f ,0.0500000007450581f }).setSkinCoordIndex(new MFInt32108().getArray()).setSkinCoordWeight(new MFFloat109().getArray()))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_2")).setDEF(new SFString("Joe_r_carpometacarpal_2")).setCenter(new float[] {-0.200000002980232f ,0.839999973773956f ,-0.0149999996647239f }).setSkinCoordIndex(new MFInt32110().getArray()).setSkinCoordWeight(new MFFloat111().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_2").setName(new SFString("r_metacarpophalangeal_2")).setDEF(new SFString("Joe_r_metacarpophalangeal_2")).setCenter(new float[] {-0.200000002980232f ,0.792999982833862f ,-0.0149999996647239f }).setSkinCoordIndex(new MFInt32112().getArray()).setSkinCoordWeight(new MFFloat113().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_2").setName(new SFString("r_carpal_proximal_interphalangeal_2")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_2")).setCenter(new float[] {-0.200000002980232f ,0.745000004768372f ,-0.0149999996647239f }).setSkinCoordIndex(new MFInt32114().getArray()).setSkinCoordWeight(new MFFloat115().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_2").setName(new SFString("r_carpal_distal_interphalangeal_2")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_2")).setCenter(new float[] {-0.200000002980232f ,0.720000028610229f ,-0.0149999996647239f }).setSkinCoordIndex(new MFInt32116().getArray()).setSkinCoordWeight(new MFFloat117().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_3")).setDEF(new SFString("Joe_r_carpometacarpal_3")).setCenter(new float[] {-0.200000002980232f ,0.834999978542328f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt32118().getArray()).setSkinCoordWeight(new MFFloat119().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_3").setName(new SFString("r_metacarpophalangeal_3")).setDEF(new SFString("Joe_r_metacarpophalangeal_3")).setCenter(new float[] {-0.200000002980232f ,0.787999987602234f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt32120().getArray()).setSkinCoordWeight(new MFFloat121().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_3").setName(new SFString("r_carpal_proximal_interphalangeal_3")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_3")).setCenter(new float[] {-0.200000002980232f ,0.740000009536743f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt32122().getArray()).setSkinCoordWeight(new MFFloat123().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_3").setName(new SFString("r_carpal_distal_interphalangeal_3")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_3")).setCenter(new float[] {-0.200000002980232f ,0.714200019836426f ,-0.0399999991059303f }).setSkinCoordIndex(new MFInt32124().getArray()).setSkinCoordWeight(new MFFloat125().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_4")).setDEF(new SFString("Joe_r_carpometacarpal_4")).setCenter(new float[] {-0.200000002980232f ,0.834999978542328f ,-0.0649999976158142f }).setSkinCoordIndex(new MFInt32126().getArray()).setSkinCoordWeight(new MFFloat127().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_4").setName(new SFString("r_metacarpophalangeal_4")).setDEF(new SFString("Joe_r_metacarpophalangeal_4")).setCenter(new float[] {-0.200000002980232f ,0.792999982833862f ,-0.0649999976158142f }).setSkinCoordIndex(new MFInt32128().getArray()).setSkinCoordWeight(new MFFloat129().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_4").setName(new SFString("r_carpal_proximal_interphalangeal_4")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_4")).setCenter(new float[] {-0.200000002980232f ,0.740000009536743f ,-0.0649999976158142f }).setSkinCoordIndex(new MFInt32130().getArray()).setSkinCoordWeight(new MFFloat131().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_4").setName(new SFString("r_carpal_distal_interphalangeal_4")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_4")).setCenter(new float[] {-0.200000002980232f ,0.717700004577637f ,-0.0649999976158142f }).setSkinCoordIndex(new MFInt32132().getArray()).setSkinCoordWeight(new MFFloat133().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_r_radiocarpal").setName(new SFString("r_carpometacarpal_5")).setDEF(new SFString("Joe_r_carpometacarpal_5")).setCenter(new float[] {-0.200000002980232f ,0.839999973773956f ,-0.0850000008940697f }).setSkinCoordIndex(new MFInt32134().getArray()).setSkinCoordWeight(new MFFloat135().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_carpometacarpal_5").setName(new SFString("r_metacarpophalangeal_5")).setDEF(new SFString("Joe_r_metacarpophalangeal_5")).setCenter(new float[] {-0.200000002980232f ,0.790000021457672f ,-0.0850000008940697f }).setSkinCoordIndex(new MFInt32136().getArray()).setSkinCoordWeight(new MFFloat137().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_metacarpophalangeal_5").setName(new SFString("r_carpal_proximal_interphalangeal_5")).setDEF(new SFString("Joe_r_carpal_proximal_interphalangeal_5")).setCenter(new float[] {-0.200000002980232f ,0.754999995231628f ,-0.0850000008940697f }).setSkinCoordIndex(new MFInt32138().getArray()).setSkinCoordWeight(new MFFloat139().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_carpal_proximal_interphalangeal_5").setName(new SFString("r_carpal_distal_interphalangeal_5")).setDEF(new SFString("Joe_r_carpal_distal_interphalangeal_5")).setCenter(new float[] {-0.200000002980232f ,0.735000014305115f ,-0.0900000035762787f }).setSkinCoordIndex(new MFInt32140().getArray()).setSkinCoordWeight(new MFFloat141().getArray())))))))))))))))))))))))))))))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_sacroiliac")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_hip")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_knee")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_talocrural")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_tarsometatarsal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_metatarsophalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_metatarsal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_hip")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_knee")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_talocrural")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_tarsometatarsal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_metatarsophalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_tarsal_distal_interphalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vl5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vl4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vl3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vl2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vl1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt12")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt11")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt10")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt9")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt8")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt7")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt6")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vt1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vc7")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vc6")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vc5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vc4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vc3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vc2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_vc1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_skullbase")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_eyeball_joint")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_eyeball_joint")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_sternoclavicular")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_acromioclavicular")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_shoulder")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_l_elbow")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_radiocarpal")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpometacarpal_1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_metacarpophalangeal_1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_interphalangeal_1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpometacarpal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_metacarpophalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpometacarpal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_metacarpophalangeal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpometacarpal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_metacarpophalangeal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpometacarpal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_metacarpophalangeal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_proximal_interphalangeal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_l_carpal_distal_interphalangeal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_sternoclavicular")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_acromioclavicular")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_shoulder")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_r_elbow")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_radiocarpal")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpometacarpal_1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_metacarpophalangeal_1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_interphalangeal_1")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpometacarpal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_metacarpophalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_2")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpometacarpal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_metacarpophalangeal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_3")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpometacarpal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_metacarpophalangeal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_4")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpometacarpal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_metacarpophalangeal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_proximal_interphalangeal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("Joe_r_carpal_distal_interphalangeal_5")))
            .addJoints(new HAnimJoint("JoeHuman").setUSE(new SFString("hanim_humanoid_root")))
            .addSkin(new Shape()
              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32142().getArray().append(new MFInt32143().getArray()).append(new MFInt32144().getArray()).append(new MFInt32145().getArray())).setCreaseAngle(3.09999990463257f ).setColorPerVertex(false)
                .setCoord(new Coordinate().setDEF(new SFString("JoeSkinCoord")).setPoint(new MFVec3f146().getArray().append(new MFVec3f147().getArray()))))
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setUrl(new MFString148().getArray()))
                .setMaterial(new Material().setAmbientIntensity(0.699999988079071f ).setShininess(0.600000023841858f ).setDiffuseColor(new float[] {0.5f ,0f ,0.5f }).setSpecularColor(new float[] {1f ,1f ,1f }).setEmissiveColor(new float[] {0.129999995231628f ,0.349999994039536f ,0.129999995231628f }))))
            .setSkinCoord(new Coordinate().setUSE(new SFString("JoeSkinCoord")))))
        .addChild(new Transform().setDEF(new SFString("SBall")).setTranslation(new float[] {-0.42091f ,0.2089f ,-0.42091f }).setRotation(new float[] {-0.70711f ,0f ,-0.70711f ,0.67654f }).setScale(new float[] {0.23f ,0.23f ,0.23f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0.8353f ,0f }).setSpecularColor(new float[] {0f ,0.6849f ,0f }).setEmissiveColor(new float[] {1f ,1f ,1f }))
              .setTexture(new ImageTexture().setUrl(new MFString149().getArray())))
            .setGeometry(new IndexedFaceSet().setDEF(new SFString("ball")).setCoordIndex(new MFInt32150().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f151().getArray()))))
          .addChild(new Viewpoint().setDEF(new SFString("ballView")).setDescription(new SFString("ball View"))))
        .addChild(new Transform().setDEF(new SFString("scenecordsys")).setScale(new float[] {0.275f ,0.275f ,0.275f })
          .addChild(new Inline().setGlobal(true).setUrl(new MFString152().getArray())))
        .addChild(new Transform().setDEF(new SFString("Circle0")).setScale(new float[] {1.175f ,1f ,1.175f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.42496f ,0.48398f ,1f })))
            .setGeometry(new IndexedLineSet().setDEF(new SFString("Orbit1")).setCoordIndex(new MFInt32153().getArray())
              .setCoord(new Coordinate().setPoint(new MFVec3f154().getArray())))))
        .addChild(new Transform().setDEF(new SFString("Circle1")).setScale(new float[] {0.5f ,1f ,0.5f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.42496f ,0.48398f ,1f })))
            .setGeometry(new IndexedLineSet().setUSE(new SFString("Orbit1")))))
        .addChild(new Transform().setDEF(new SFString("Circle2")).setScale(new float[] {0.25f ,1f ,0.25f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.42496f ,0.48398f ,1f })))
            .setGeometry(new IndexedLineSet().setUSE(new SFString("Orbit1"))))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.4f ,0.4f ,0.4f });
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.5f ,0.5f ,0.5f });
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.349999994039536f ,0.349999994039536f ,1f });
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.649999976158142f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101,362,363});
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.649999976158142f ,1f ,0.800000011920929f ,1f ,1f ,1f ,0.400000005960464f ,0.800000011920929f });
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369,98});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.600000023841858f ,0.200000002980232f ,1f ,1f ,1f ,1f ,1f ,1f ,0.200000002980232f });
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,0.699999988079071f ,1f ,0.800000011920929f });
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
private class MFFloat71 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,0.899999976158142f });
  }
}
private class MFInt3298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.100000001490116f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.300000011920929f ,0.200000002980232f });
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
private class MFFloat105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
private class MFFloat109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
private class MFFloat113 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
private class MFFloat119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
private class MFFloat121 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
private class MFFloat123 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
private class MFFloat125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
private class MFFloat131 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
private class MFFloat133 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
private class MFFloat137 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt32138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
private class MFFloat141 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
private class MFVec3f146 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.76999998092651f ,0f ,0f ,1.66499996185303f ,0.0900000035762787f ,-0.0329999998211861f ,1.62000000476837f ,0.0869999974966049f ,0.0329999998211861f ,1.62000000476837f ,0.0869999974966049f ,0f ,1.54999995231628f ,0.0970000028610229f ,-0.0769999995827675f ,1.63999998569489f ,-0.00999999977648258f ,-0.0527000017464161f ,1.58000004291534f ,0.0149999996647239f ,0.0769999995827675f ,1.63999998569489f ,-0.00999999977648258f ,0.0527000017464161f ,1.58000004291534f ,0.0149999996647239f ,0f ,1.625f ,-0.0925000011920929f ,-0.0299999993294477f ,1.46000003814697f ,0.0350000001490116f ,0f ,1.44000005722046f ,0.0299999993294477f ,0.0299999993294477f ,1.46000003814697f ,0.0350000001490116f ,-0.113499999046326f ,1.317999958992f ,0.0949999988079071f ,0.113499999046326f ,1.317999958992f ,0.0949999988079071f ,0f ,1.25f ,0.112999998033047f ,-0.0869999974966049f ,1.19000005722046f ,0.0900000035762787f ,-0.0935000032186508f ,1.02999997138977f ,0.0750000029802322f ,0.0869999974966049f ,1.19000005722046f ,0.0900000035762787f ,0.0935000032186508f ,1.02999997138977f ,0.0750000029802322f ,-0.142499998211861f ,1.06500005722046f ,0.00329999998211861f ,-0.150000005960464f ,0.899999976158142f ,-0.00999999977648258f ,0.142499998211861f ,1.06500005722046f ,0.00329999998211861f ,0.150000005960464f ,0.899999976158142f ,-0.00999999977648258f ,0f ,1.52999997138977f ,-0.0839999988675117f ,0.00490000005811453f ,1.19079995155334f ,-0.111299999058247f ,-0.0772999972105026f ,1.01900005340576f ,-0.119999997317791f ,0.0772999972105026f ,1.01900005340576f ,-0.119999997317791f ,0.00499999988824129f ,1.09150004386902f ,-0.109099999070168f ,-0.178000003099442f ,1.48249995708466f ,-0.0625f ,-0.170000001788139f ,1.37999999523163f ,0.00700000021606684f ,-0.188400000333786f ,0.86760002374649f ,-0.0359999984502792f ,-0.159999996423721f ,1.37999999523163f ,-0.127000004053116f ,-0.200000002980232f ,1.13880002498627f ,-0.0799999982118607f ,-0.244000002741814f ,1.13880002498627f ,-0.0399999991059303f ,-0.165000006556511f ,1.13880002498627f ,-0.0399999991059303f ,-0.230000004172325f ,1.13300001621246f ,-0.0549999997019768f ,-0.197699993848801f ,0.816900014877319f ,-0.0176999997347593f ,-0.194100007414818f ,0.677200019359589f ,-0.0423000007867813f ,-0.21170000731945f ,0.856199979782104f ,-0.0584000013768673f ,-0.192900002002716f ,0.788999974727631f ,-0.10639999806881f ,0.174999997019768f ,1.48249995708466f ,-0.0599999986588955f ,0.170000001788139f ,1.37999999523163f ,0.00700000021606684f ,0.190099999308586f ,0.864499986171722f ,-0.0414999984204769f ,0.159999996423721f ,1.37999999523163f ,-0.125f ,0.200000002980232f ,1.13880002498627f ,-0.0799999982118607f ,0.165000006556511f ,1.13880002498627f ,-0.0399999991059303f ,0.244000002741814f ,1.13880002498627f ,-0.0399999991059303f ,0.230000004172325f ,1.13300001621246f ,-0.0549999997019768f ,0.200900003314018f ,0.813899993896484f ,-0.023700000718236f ,0.205599993467331f ,0.674300014972687f ,-0.048200000077486f ,0.214200004935265f ,0.85290002822876f ,-0.064800001680851f ,0.192900002002716f ,0.78600001335144f ,-0.112199999392033f ,-0.100000001490116f ,0.491299986839294f ,-0.0299999993294477f ,-0.170000001788139f ,0.465999990701675f ,0f ,-0.0500000007450581f ,0.465999990701675f ,0f ,-0.165000006556511f ,0.00999999977648258f ,0.119999997317791f ,-0.150000005960464f ,0.0700000002980232f ,0f ,-0.0850000008940697f ,0.0860000029206276f ,0.0125000001862645f ,-0.0900000035762787f ,0.0560000017285347f ,0.0125000001862645f ,-0.115000002086163f ,0.0199999995529652f ,0.122000001370907f ,-0.115000002086163f ,0.0399999991059303f ,-0.0549999997019768f ,-0.109999999403954f ,0.0109999999403954f ,0.189999997615814f ,0.0992999970912933f ,0.488099992275238f ,-0.0308999996632338f ,0.170000001788139f ,0.465999990701675f ,0f ,0.0500000007450581f ,0.486699998378754f ,0f ,0.165000006556511f ,0.00999999977648258f ,0.119999997317791f ,0.150000005960464f ,0.0700000002980232f ,0f ,0.0850000008940697f ,0.0860000029206276f ,0.0125000001862645f ,0.0900000035762787f ,0.0560000017285347f ,0.0125000001862645f ,0.115000002086163f ,0.0199999995529652f ,0.122000001370907f ,0.115000002086163f ,0.0399999991059303f ,-0.0549999997019768f ,0.109999999403954f ,0.0109999999403954f ,0.189999997615814f ,0f ,0.875f ,0f ,-0.0645999982953072f ,1.51489996910095f ,-0.0379999987781048f ,0.0645999982953072f ,1.51489996910095f ,-0.0379999987781048f ,0f ,1.07225000858307f ,0.0900000035762787f ,-0.109999999403954f ,1.42700004577637f ,-0.137500002980232f ,-0.234999999403954f ,1.41999995708466f ,-0.0625f ,0.109999999403954f ,1.42700004577637f ,-0.137500002980232f ,0.234999999403954f ,1.41999995708466f ,-0.0625f ,0f ,1.4099999666214f ,-0.144999995827675f ,0f ,0.925000011920929f ,0.0799999982118607f ,-0.0869999974966049f ,1.19000005722046f ,-0.0900000035762787f ,0.0869999974966049f ,1.19000005722046f ,-0.0900000035762787f ,0.172000005841255f ,1.32000005245209f ,-0.0299999993294477f ,-0.172000005841255f ,1.32000005245209f ,-0.0300000011920929f ,0.150000005960464f ,1.23000001907349f ,-0.0149999996647239f ,-0.150000005960464f ,1.23000001907349f ,-0.0150000005960464f ,0.0790000036358833f ,0.919999957084656f ,-0.140000000596046f ,0.100000001490116f ,0.899999976158142f ,0.0769999995827675f ,-0.0790000036358833f ,0.919999957084656f ,-0.140000000596046f ,-0.100000001490116f ,0.899999976158142f ,0.0750000029802322f ,0f ,0.870000004768372f ,0f ,0.171000003814697f ,0.649999976158142f ,0f ,0.0199999995529652f ,0.649999976158142f ,0f ,0.100000001490116f ,0.649999976158142f ,-0.0799999982118607f ,0.100000001490116f ,0.649999976158142f ,0.0700000002980232f ,-0.171000003814697f ,0.649999976158142f ,0f ,-0.0199999995529652f ,0.649999976158142f ,0f ,-0.100000001490116f ,0.649999976158142f ,-0.0799999982118607f ,-0.100000001490116f ,0.649999976158142f ,0.0700000002980232f ,0.25f ,1.26999998092651f ,-0.0399999991059303f ,0.170000001788139f ,1.26999998092651f ,-0.0399999991059303f ,0.200000002980232f ,1.26999998092651f ,-0.0900000035762787f ,0.200000002980232f ,1.26999998092651f ,0.0199999995529652f ,0.244000002741814f ,1.13880002498627f ,-0.0399999991059303f ,0.165000006556511f ,1.13880002498627f ,-0.0399999991059303f ,0.200000002980232f ,1.13880002498627f ,-0.0799999982118607f ,0.200000002980232f ,1.13880002498627f ,-0.0130000002682209f ,0.224999994039536f ,1f ,-0.00999999977648258f ,0.224999994039536f ,1f ,-0.0700000002980232f ,0.185000002384186f ,1f ,-0.00999999977648258f ,0.185000002384186f ,1f ,-0.0700000002980232f ,0.200000002980232f ,1.13880002498627f ,-0.0399999991059303f ,0.224999994039536f ,0.920000016689301f ,-0.0399999991059303f ,0.174999997019768f ,0.920000016689301f ,-0.0399999991059303f ,0.200000002980232f ,0.920000016689301f ,-0.0649999976158142f ,0.200000002980232f ,0.920000016689301f ,-0.0149999996647239f ,0.224999994039536f ,0.889999985694885f ,-0.0399999991059303f ,0.174999997019768f ,0.889999985694885f ,-0.0399999991059303f ,0.200000002980232f ,0.889999985694885f ,-0.0649999976158142f ,0.200000002980232f ,0.889999985694885f ,-0.0149999996647239f ,0.217999994754791f ,0.860000014305115f ,-0.0399999991059303f ,0.184000000357628f ,0.860000014305115f ,-0.0399999991059303f ,0.200000002980232f ,0.870000004768372f ,-0.0700000002980232f ,0.200000002980232f ,0.870000004768372f ,0f ,0.209999993443489f ,0.850000023841858f ,0f ,0.185399994254112f ,0.850000023841858f ,0f ,0.211999997496605f ,0.839999973773956f ,-0.0149999996647239f ,0.18299999833107f ,0.839999973773956f ,-0.0149999996647239f ,0.212999999523163f ,0.834999978542328f ,-0.0399999991059303f ,0.189999997615814f ,0.834999978542328f ,-0.0399999991059303f ,0.210999995470047f ,0.834999978542328f ,-0.0649999976158142f ,0.19200000166893f ,0.834999978542328f ,-0.0649999976158142f ,0.208000004291534f ,0.839999973773956f ,-0.0850000008940697f ,0.189999997615814f ,0.839999973773956f ,-0.0850000008940697f ,0.200000002980232f ,0.839999973773956f ,-0.0949999988079071f ,0.215000003576279f ,0.819999992847443f ,0f ,0.193000003695488f ,0.814999997615814f ,0.00499999988824129f ,0.197999998927116f ,0.800000011920929f ,0.0120000001043081f ,0.209999993443489f ,0.819999992847443f ,0.0299999993294477f ,0.189999997615814f ,0.819999992847443f ,0.0299999993294477f ,0.200000002980232f ,0.834999978542328f ,0.0390000008046627f ,0.211999997496605f ,0.800000011920929f ,0.0500000007450581f ,0.187999993562698f ,0.800000011920929f ,0.0500000007450581f ,0.200000002980232f ,0.806999981403351f ,0.0570000000298023f ,0.200000002980232f ,0.792999982833862f ,0.0350000001490116f ,0.200000002980232f ,0.773999989032745f ,0.0759999975562096f ,0.211999997496605f ,0.779999971389771f ,0.0700000002980232f ,0.187999993562698f ,0.779999971389771f ,0.0700000002980232f ,0.200000002980232f ,0.785000026226044f ,0.0750000029802322f ,0.200000002980232f ,0.769999980926514f ,0.061999998986721f ,0.215000003576279f ,0.792999982833862f ,-0.0149999996647239f ,0.187000006437302f ,0.792999982833862f ,-0.0149999996647239f ,0.200000002980232f ,0.792999982833862f ,-0.00499999988824129f ,0.215000003576279f ,0.787999987602234f ,-0.0399999991059303f ,0.187000006437302f ,0.787999987602234f ,-0.0399999991059303f ,0.215000003576279f ,0.792999982833862f ,-0.0649999976158142f ,0.187000006437302f ,0.792999982833862f ,-0.0649999976158142f ,0.209999993443489f ,0.790000021457672f ,-0.0850000008940697f ,0.189999997615814f ,0.790000021457672f ,-0.0850000008940697f ,0.200000002980232f ,0.790000021457672f ,-0.0949999988079071f ,0.189999997615814f ,0.769999980926514f ,-0.0274999998509884f ,0.189999997615814f ,0.769999980926514f ,-0.0524999983608723f ,0.189999997615814f ,0.779999971389771f ,-0.0775000005960464f ,0.211999997496605f ,0.745000004768372f ,-0.0149999996647239f ,0.187999993562698f ,0.745000004768372f ,-0.0199999995529652f ,0.200000002980232f ,0.745000004768372f ,-0.0254999995231628f ,0.200000002980232f ,0.745000004768372f ,-0.0044999998062849f ,0.210999995470047f ,0.720000028610229f ,-0.0149999996647239f ,0.188999995589256f ,0.720000028610229f ,-0.0149999996647239f ,0.200000002980232f ,0.720000028610229f ,-0.0252000000327826f ,0.200000002980232f ,0.720000028610229f ,-0.00480000022798777f ,0.209999993443489f ,0.694999992847443f ,-0.0149999996647239f ,0.189999997615814f ,0.694999992847443f ,-0.0149999996647239f ,0.200000002980232f ,0.694999992847443f ,-0.025000000372529f ,0.200000002980232f ,0.694999992847443f ,-0.00499999988824129f ,0.200000002980232f ,0.685000002384186f ,-0.0149999996647239f ,0.215000003576279f ,0.740000009536743f ,-0.0399999991059303f ,0.185000002384186f ,0.740000009536743f ,-0.0399999991059303f ,0.200000002980232f ,0.740000009536743f ,-0.0549999997019768f ,0.200000002980232f ,0.740000009536743f ,-0.025000000372529f ,0.209999993443489f ,0.714200019836426f ,-0.0399999991059303f ,0.189999997615814f ,0.714200019836426f ,-0.0399999991059303f ,0.200000002980232f ,0.714200019836426f ,-0.0529999993741512f ,0.200000002980232f ,0.714200019836426f ,-0.0270000007003546f ,0.209999993443489f ,0.680000007152557f ,-0.0399999991059303f ,0.189999997615814f ,0.680000007152557f ,-0.0399999991059303f ,0.200000002980232f ,0.680000007152557f ,-0.0500000007450581f ,0.200000002980232f ,0.680000007152557f ,-0.0299999993294477f ,0.200000002980232f ,0.670000016689301f ,-0.0399999991059303f ,0.211999997496605f ,0.740000009536743f ,-0.0649999976158142f ,0.187999993562698f ,0.740000009536743f ,-0.0649999976158142f ,0.200000002980232f ,0.740000009536743f ,-0.0755999982357025f ,0.200000002980232f ,0.740000009536743f ,-0.0542000010609627f ,0.209999993443489f ,0.717700004577637f ,-0.0649999976158142f ,0.189999997615814f ,0.717700004577637f ,-0.0649999976158142f ,0.200000002980232f ,0.717700004577637f ,-0.0750999972224236f ,0.200000002980232f ,0.717700004577637f ,-0.0549000017344952f ,0.209999993443489f ,0.694999992847443f ,-0.0649999976158142f ,0.189999997615814f ,0.694999992847443f ,-0.0649999976158142f ,0.200000002980232f ,0.694999992847443f ,-0.0750000029802322f ,0.200000002980232f ,0.694999992847443f ,-0.0549999997019768f ,0.200000002980232f ,0.685000002384186f ,-0.0649999976158142f ,0.210999995470047f ,0.754999995231628f ,-0.0850000008940697f ,0.188999995589256f ,0.754999995231628f ,-0.0850000008940697f ,0.200000002980232f ,0.754999995231628f ,-0.0952000021934509f ,0.200000002980232f ,0.754999995231628f ,-0.0747999995946884f ,0.209999993443489f ,0.735000014305115f ,-0.0850000008940697f ,0.189999997615814f ,0.735000014305115f ,-0.0850000008940697f ,0.200000002980232f ,0.735000014305115f ,-0.095100000500679f ,0.200000002980232f ,0.735000014305115f ,-0.0749000012874603f ,0.209999993443489f ,0.720000028610229f ,-0.0850000008940697f ,0.189999997615814f ,0.720000028610229f ,-0.0850000008940697f ,0.200000002980232f ,0.720000028610229f ,-0.0949999988079071f ,0.200000002980232f ,0.720000028610229f ,-0.0750000029802322f ,0.200000002980232f ,0.709999978542328f ,-0.0850000008940697f ,-0.230000004172325f ,1.23000001907349f ,-0.0399999991059303f ,-0.159999996423721f ,1.23000001907349f ,-0.0399999991059303f ,-0.200000002980232f ,1.23500001430511f ,-0.104999996721745f ,-0.200000002980232f ,1.25499999523163f ,0.0199999995529652f ,-0.244000002741814f ,1.13880002498627f ,-0.0399999991059303f ,-0.165000006556511f ,1.13880002498627f ,-0.0399999991059303f ,-0.200000002980232f ,1.13880002498627f ,-0.0799999982118607f ,-0.200000002980232f ,1.13880002498627f ,0.0130000002682209f ,-0.224999994039536f ,1f ,-0.00999999977648258f ,-0.224999994039536f ,1f ,-0.0700000002980232f ,-0.185000002384186f ,1f ,-0.00999999977648258f ,-0.185000002384186f ,1f ,-0.0700000002980232f ,-0.200000002980232f ,1.13880002498627f ,-0.0399999991059303f ,-0.224999994039536f ,0.920000016689301f ,-0.0399999991059303f ,-0.174999997019768f ,0.920000016689301f ,-0.0399999991059303f ,-0.200000002980232f ,0.920000016689301f ,-0.0649999976158142f ,-0.200000002980232f ,0.920000016689301f ,-0.0149999996647239f ,-0.224999994039536f ,0.889999985694885f ,-0.0399999991059303f ,-0.174999997019768f ,0.889999985694885f ,-0.0399999991059303f ,-0.200000002980232f ,0.889999985694885f ,-0.0649999976158142f ,-0.200000002980232f ,0.889999985694885f ,-0.0149999996647239f ,-0.217999994754791f ,0.860000014305115f ,-0.0399999991059303f ,-0.184000000357628f ,0.860000014305115f ,-0.0399999991059303f ,-0.200000002980232f ,0.870000004768372f ,-0.0700000002980232f ,-0.200000002980232f ,0.870000004768372f ,0f ,-0.209999993443489f ,0.850000023841858f ,0f ,-0.185399994254112f ,0.850000023841858f ,0f ,-0.211999997496605f ,0.839999973773956f ,-0.0149999996647239f ,-0.18299999833107f ,0.839999973773956f ,-0.0149999996647239f ,-0.212999999523163f ,0.834999978542328f ,-0.0399999991059303f ,-0.189999997615814f ,0.834999978542328f ,-0.0399999991059303f ,-0.210999995470047f ,0.834999978542328f ,-0.0649999976158142f ,-0.19200000166893f ,0.834999978542328f ,-0.0649999976158142f ,-0.208000004291534f ,0.839999973773956f ,-0.0850000008940697f ,-0.189999997615814f ,0.839999973773956f ,-0.0850000008940697f ,-0.200000002980232f ,0.839999973773956f ,-0.0949999988079071f ,-0.215000003576279f ,0.819999992847443f ,0f ,-0.193000003695488f ,0.814999997615814f ,0.00499999988824129f ,-0.197999998927116f ,0.800000011920929f ,0.0120000001043081f ,-0.209999993443489f ,0.819999992847443f ,0.0299999993294477f ,-0.189999997615814f ,0.819999992847443f ,0.0299999993294477f ,-0.200000002980232f ,0.834999978542328f ,0.0390000008046627f ,-0.211999997496605f ,0.800000011920929f ,0.0500000007450581f ,-0.187999993562698f ,0.800000011920929f ,0.0500000007450581f ,-0.200000002980232f ,0.806999981403351f ,0.0570000000298023f ,-0.200000002980232f ,0.792999982833862f ,0.0350000001490116f ,-0.200000002980232f ,0.773999989032745f ,0.0759999975562096f ,-0.211999997496605f ,0.779999971389771f ,0.0700000002980232f ,-0.187999993562698f ,0.779999971389771f ,0.0700000002980232f ,-0.200000002980232f ,0.785000026226044f ,0.0750000029802322f ,-0.200000002980232f ,0.769999980926514f ,0.061999998986721f ,-0.215000003576279f ,0.792999982833862f ,-0.0149999996647239f ,-0.187000006437302f ,0.792999982833862f ,-0.0149999996647239f ,-0.200000002980232f ,0.792999982833862f ,-0.00499999988824129f ,-0.215000003576279f ,0.787999987602234f ,-0.0399999991059303f ,-0.187000006437302f ,0.787999987602234f ,-0.0399999991059303f ,-0.215000003576279f ,0.792999982833862f ,-0.0649999976158142f ,-0.187000006437302f ,0.792999982833862f ,-0.0649999976158142f ,-0.209999993443489f ,0.790000021457672f ,-0.0850000008940697f ,-0.189999997615814f ,0.790000021457672f ,-0.0850000008940697f ,-0.200000002980232f ,0.790000021457672f ,-0.0949999988079071f ,-0.189999997615814f ,0.769999980926514f ,-0.0274999998509884f });
  }
}
private class MFVec3f147 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.189999997615814f ,0.769999980926514f ,-0.0524999983608723f ,-0.189999997615814f ,0.779999971389771f ,-0.0775000005960464f ,-0.211999997496605f ,0.745000004768372f ,-0.0149999996647239f ,-0.187999993562698f ,0.745000004768372f ,-0.0199999995529652f ,-0.200000002980232f ,0.745000004768372f ,-0.0254999995231628f ,-0.200000002980232f ,0.745000004768372f ,-0.0044999998062849f ,-0.210999995470047f ,0.720000028610229f ,-0.0149999996647239f ,-0.188999995589256f ,0.720000028610229f ,-0.0149999996647239f ,-0.200000002980232f ,0.720000028610229f ,-0.0252000000327826f ,-0.200000002980232f ,0.720000028610229f ,-0.00480000022798777f ,-0.209999993443489f ,0.694999992847443f ,-0.0149999996647239f ,-0.189999997615814f ,0.694999992847443f ,-0.0149999996647239f ,-0.200000002980232f ,0.694999992847443f ,-0.025000000372529f ,-0.200000002980232f ,0.694999992847443f ,-0.00499999988824129f ,-0.200000002980232f ,0.685000002384186f ,-0.0149999996647239f ,-0.215000003576279f ,0.740000009536743f ,-0.0399999991059303f ,-0.185000002384186f ,0.740000009536743f ,-0.0399999991059303f ,-0.200000002980232f ,0.740000009536743f ,-0.0549999997019768f ,-0.200000002980232f ,0.740000009536743f ,-0.025000000372529f ,-0.209999993443489f ,0.714200019836426f ,-0.0399999991059303f ,-0.189999997615814f ,0.714200019836426f ,-0.0399999991059303f ,-0.200000002980232f ,0.714200019836426f ,-0.0529999993741512f ,-0.200000002980232f ,0.714200019836426f ,-0.0270000007003546f ,-0.209999993443489f ,0.680000007152557f ,-0.0399999991059303f ,-0.189999997615814f ,0.680000007152557f ,-0.0399999991059303f ,-0.200000002980232f ,0.680000007152557f ,-0.0500000007450581f ,-0.200000002980232f ,0.680000007152557f ,-0.0299999993294477f ,-0.200000002980232f ,0.670000016689301f ,-0.0399999991059303f ,-0.211999997496605f ,0.740000009536743f ,-0.0649999976158142f ,-0.187999993562698f ,0.740000009536743f ,-0.0649999976158142f ,-0.200000002980232f ,0.740000009536743f ,-0.0755999982357025f ,-0.200000002980232f ,0.740000009536743f ,-0.0542000010609627f ,-0.209999993443489f ,0.717700004577637f ,-0.0649999976158142f ,-0.189999997615814f ,0.717700004577637f ,-0.0649999976158142f ,-0.200000002980232f ,0.717700004577637f ,-0.0750999972224236f ,-0.200000002980232f ,0.717700004577637f ,-0.0549000017344952f ,-0.209999993443489f ,0.694999992847443f ,-0.0649999976158142f ,-0.189999997615814f ,0.694999992847443f ,-0.0649999976158142f ,-0.200000002980232f ,0.694999992847443f ,-0.0750000029802322f ,-0.200000002980232f ,0.694999992847443f ,-0.0549999997019768f ,-0.200000002980232f ,0.685000002384186f ,-0.0649999976158142f ,-0.210999995470047f ,0.754999995231628f ,-0.0850000008940697f ,-0.188999995589256f ,0.754999995231628f ,-0.0850000008940697f ,-0.200000002980232f ,0.754999995231628f ,-0.0952000021934509f ,-0.200000002980232f ,0.754999995231628f ,-0.0747999995946884f ,-0.209999993443489f ,0.735000014305115f ,-0.0850000008940697f ,-0.189999997615814f ,0.735000014305115f ,-0.0850000008940697f ,-0.200000002980232f ,0.735000014305115f ,-0.095100000500679f ,-0.200000002980232f ,0.735000014305115f ,-0.0749000012874603f ,-0.209999993443489f ,0.720000028610229f ,-0.0850000008940697f ,-0.189999997615814f ,0.720000028610229f ,-0.0850000008940697f ,-0.200000002980232f ,0.720000028610229f ,-0.0949999988079071f ,-0.200000002980232f ,0.720000028610229f ,-0.0750000029802322f ,-0.200000002980232f ,0.709999978542328f ,-0.0850000008940697f ,0.115000002086163f ,0.465999990701675f ,0.0599999986588955f ,0.115000002086163f ,0.465999990701675f ,-0.0549999997019768f ,0.150000005960464f ,0.465999990701675f ,0f ,0.0500000007450581f ,0.465999990701675f ,0f ,0.170000001788139f ,0.300000011920929f ,0f ,0.0599999986588955f ,0.300000011920929f ,0f ,0.100000001490116f ,0.300000011920929f ,-0.0500000007450581f ,0.100000001490116f ,0.300000011920929f ,0.0500000007450581f ,0.150000005960464f ,0.0700000002980232f ,0f ,0.0850000008940697f ,0.0860000029206276f ,0.0125000001862645f ,0.115000002086163f ,0.0689999982714653f ,-0.0450000017881393f ,0.116999998688698f ,0.0974999964237213f ,0.0615000016987324f ,0.137500002980232f ,0.00600000005215406f ,-0.0299999993294477f ,0.0949999988079071f ,0.00600000005215406f ,-0.0299999993294477f ,0.115000002086163f ,0.0149999996647239f ,-0.0450000017881393f ,0.115000002086163f ,0.0599999986588955f ,0.100000001490116f ,0.115000002086163f ,0f ,0.0700000002980232f ,0.165000006556511f ,0f ,0.0700000002980232f ,0.0949999988079071f ,0f ,0.0700000002980232f ,0.115000002086163f ,0.0399999991059303f ,0.129999995231628f ,0.125f ,0f ,0.119999997317791f ,0.165000006556511f ,0f ,0.119999997317791f ,0.0869999974966049f ,0f ,0.122000001370907f ,0.0900000035762787f ,0.0120000001043081f ,0.187999993562698f ,0.109999999403954f ,0.0109999999403954f ,0.189999997615814f ,0.128000006079674f ,0.0109999999403954f ,0.185000002384186f ,0.142000004649162f ,0.0109999999403954f ,0.178000003099442f ,0.153999999165535f ,0.00999999977648258f ,0.167999997735024f ,-0.115000009536743f ,0.465999990701675f ,0.0600000023841858f ,-0.115000002086163f ,0.465999990701675f ,-0.0549999997019768f ,-0.170000001788139f ,0.465999990701675f ,0f ,-0.0500000007450581f ,0.465999990701675f ,0f ,-0.170000001788139f ,0.300000011920929f ,0f ,-0.0599999986588955f ,0.300000011920929f ,0f ,-0.100000001490116f ,0.300000011920929f ,-0.0500000007450581f ,-0.100000001490116f ,0.300000011920929f ,0.0500000007450581f ,-0.150000005960464f ,0.0700000002980232f ,0f ,-0.0850000008940697f ,0.0860000029206276f ,0.0125000001862645f ,-0.115000002086163f ,0.0689999982714653f ,-0.0450000017881393f ,-0.116999998688698f ,0.0974999964237213f ,0.0615000016987324f ,-0.137500002980232f ,0.00600000005215406f ,-0.0299999993294477f ,-0.0949999988079071f ,0.00600000005215406f ,-0.0299999993294477f ,-0.0949999988079071f ,0.00600000005215406f ,-0.0299999993294477f ,-0.115000002086163f ,0.0599999986588955f ,0.100000001490116f ,-0.115000002086163f ,0f ,0.0700000002980232f ,-0.165000006556511f ,0f ,0.0700000002980232f ,-0.0949999988079071f ,0f ,0.0700000002980232f ,-0.115000002086163f ,0.0399999991059303f ,0.129999995231628f ,-0.125f ,0f ,0.119999997317791f ,-0.165000006556511f ,0f ,0.119999997317791f ,-0.0869999974966049f ,0f ,0.122000001370907f ,-0.0900000035762787f ,0.0120000001043081f ,0.187999993562698f ,-0.109999999403954f ,0.0109999999403954f ,0.189999997615814f ,-0.128000006079674f ,0.0109999999403954f ,0.185000002384186f ,-0.142000004649162f ,0.0109999999403954f ,0.178000003099442f ,-0.153999999165535f ,0.00999999977648258f ,0.167999997735024f });
  }
}
private class MFString148 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"bodytexture28.png"});
  }
}
private class MFString149 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"bodytexture28.png"});
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f151 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.4675f ,0f ,0f ,0.4049f ,-0.2338f ,-0.1169f ,0.4049f ,-0.2024f ,-0.2024f ,0.4049f ,-0.1169f ,-0.2338f ,0.4049f ,0f ,-0.2024f ,0.4049f ,0.1169f ,-0.1169f ,0.4049f ,0.2024f ,0f ,0.4049f ,0.2338f ,0.1169f ,0.4049f ,0.2024f ,0.2024f ,0.4049f ,0.1169f ,0.2338f ,0.4049f ,0f ,0.2024f ,0.4049f ,-0.1169f ,0.1169f ,0.4049f ,-0.2024f ,0f ,0.2338f ,-0.4049f ,-0.2024f ,0.2338f ,-0.3506f ,-0.3506f ,0.2338f ,-0.2024f ,-0.4049f ,0.2338f ,0f ,-0.3506f ,0.2338f ,0.2024f ,-0.2024f ,0.2338f ,0.3506f ,0f ,0.2338f ,0.4049f ,0.2024f ,0.2338f ,0.3506f ,0.3506f ,0.2338f ,0.2024f ,0.4049f ,0.2338f ,0f ,0.3506f ,0.2338f ,-0.2024f ,0.2024f ,0.2338f ,-0.3506f ,0f ,0f ,-0.4675f ,-0.2338f ,0f ,-0.4049f ,-0.4049f ,0f ,-0.2338f ,-0.4675f ,0f ,0f ,-0.4049f ,0f ,0.2338f ,-0.2338f ,0f ,0.4049f ,0f ,0f ,0.4675f ,0.2338f ,0f ,0.4049f ,0.4049f ,0f ,0.2338f ,0.4675f ,0f ,0f ,0.4049f ,0f ,-0.2338f ,0.2338f ,0f ,-0.4049f ,0f ,-0.2338f ,-0.4049f ,-0.2024f ,-0.2338f ,-0.3506f ,-0.3506f ,-0.2338f ,-0.2024f ,-0.4049f ,-0.2338f ,0f ,-0.3506f ,-0.2338f ,0.2024f ,-0.2024f ,-0.2338f ,0.3506f ,0f ,-0.2338f ,0.4049f ,0.2024f ,-0.2338f ,0.3506f ,0.3506f ,-0.2338f ,0.2024f ,0.4049f ,-0.2338f ,0f ,0.3506f ,-0.2338f ,-0.2024f ,0.2024f ,-0.2338f ,-0.3506f ,0f ,-0.4049f ,-0.2338f ,-0.1169f ,-0.4049f ,-0.2024f ,-0.2024f ,-0.4049f ,-0.1169f ,-0.2338f ,-0.4049f ,0f ,-0.2024f ,-0.4049f ,0.1169f ,-0.1169f ,-0.4049f ,0.2024f ,0f ,-0.4049f ,0.2338f ,0.1169f ,-0.4049f ,0.2024f ,0.2024f ,-0.4049f ,0.1169f ,0.2338f ,-0.4049f ,0f ,0.2024f ,-0.4049f ,-0.1169f ,0.1169f ,-0.4049f ,-0.2024f ,0f ,-0.4675f ,0f });
  }
}
private class MFString152 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
private class MFVec3f154 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f ,0f ,0f ,0.995f ,0f ,-0.105f ,0.979f ,0f ,-0.208f ,0.951f ,0f ,-0.309f ,0.914f ,0f ,-0.407f ,0.866f ,0f ,-0.5f ,0.809f ,0f ,-0.588f ,0.743f ,0f ,-0.669f ,0.669f ,0f ,-0.743f ,0.588f ,0f ,-0.809f ,0.5f ,0f ,-0.866f ,0.407f ,0f ,-0.914f ,0.309f ,0f ,-0.951f ,0.208f ,0f ,-0.978f ,0.105f ,0f ,-0.995f ,0f ,0f ,-1f ,-0.105f ,0f ,-0.99452f ,-0.208f ,0f ,-0.978f ,-0.309f ,0f ,-0.951f ,-0.407f ,0f ,-0.914f ,-0.5f ,0f ,-0.866f ,-0.588f ,0f ,-0.809f ,-0.669f ,0f ,-0.743f ,-0.743f ,0f ,-0.669f ,-0.809f ,0f ,-0.588f ,-0.866f ,0f ,-0.5f ,-0.914f ,0f ,-0.407f ,-0.951f ,0f ,-0.309f ,-0.978f ,0f ,-0.208f ,-0.995f ,0f ,-0.105f ,-1f ,0f ,0f ,-0.995f ,0f ,0.105f ,-0.978f ,0f ,0.208f ,-0.951f ,0f ,0.309f ,-0.914f ,0f ,0.407f ,-0.866f ,0f ,0.5f ,-0.809f ,0f ,0.588f ,-0.743f ,0f ,0.669f ,-0.669f ,0f ,0.743f ,-0.588f ,0f ,0.809f ,-0.5f ,0f ,0.866f ,-0.407f ,0f ,0.914f ,-0.309f ,0f ,0.951f ,-0.208f ,0f ,0.978f ,-0.105f ,0f ,0.995f ,0f ,0f ,1f ,0.105f ,0f ,0.995f ,0.208f ,0f ,0.978f ,0.309f ,0f ,0.951f ,0.407f ,0f ,0.914f ,0.5f ,0f ,0.866f ,0.588f ,0f ,0.809f ,0.669f ,0f ,0.743f ,0.743f ,0f ,0.669f ,0.809f ,0f ,0.588f ,0.866f ,0f ,0.5f ,0.914f ,0f ,0.407f ,0.951f ,0f ,0.309f ,0.978f ,0f ,0.208f ,0.995f ,0f ,0.104f ,1f ,0f ,0f });
  }
}
}
