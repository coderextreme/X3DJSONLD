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
public class JoeSkinTexcoordDisplacerKick implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new JoeSkinTexcoordDisplacerKick().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/JoeSkinTexcoordDisplacerKick.new.java.x3d");
    model.toFileJSON("../data/JoeSkinTexcoordDisplacerKick.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JoeSkinTexcoordDisplacerKick.x3d"))
        .addMeta(new meta().setName("info").setContent("Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim"))
        .addMeta(new meta().setName("description").setContent("This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations."))
        .addMeta(new meta().setName("created").setContent("15 January 2004"))
        .addMeta(new meta().setName("translated").setContent("12 January 2017"))
        .addMeta(new meta().setName("modified").setContent("27 January 2023"))
        .addMeta(new meta().setName("creator").setContent("Joe D Williams"))
        .addMeta(new meta().setName("translators").setContent("Roy Walmsley and Don Brutzman"))
        .addMeta(new meta().setName("info").setContent("Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012"))
        .addMeta(new meta().setName("info").setContent("translated from .x3dv to .xml for web3d archive"))
        .addMeta(new meta().setName("TODO").setContent("Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes"))
        .addMeta(new meta().setName("info").setContent("modified to correct root and vc7 hierarchies"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d"))
        .addMeta(new meta().setName("generator").setContent("BS studio translation from .x3dv by Joe using BS Contact"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"))
        .addChild(new NavigationInfo().setDEF("Start_NavigationInfo").setHeadlight(false).setSpeed(2.5))
        .addChild(new Background().setDEF("blue_Background"))
        .addChild(new SpotLight().setDEF("light1").setAmbientIntensity(0.7).setBeamWidth(1.5).setColor(new double[] {0.8,0.8,1}).setCutOffAngle(0.6).setDirection(new double[] {0,0,0}).setLocation(new double[] {0,3,3}).setRadius(10))
        .addChild(new PointLight().setDEF("light2").setAmbientIntensity(0.7).setColor(new double[] {0.8,0.8,1}).setLocation(new double[] {0,10,-7}))
        .addComments("External from the Humanoid viewpoints")
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setCenterOfRotation(new double[] {0,0.85,0}).setDescription("Scene_Inclined View").setOrientation(new double[] {-0.113,0.993,0.0347,0.671}).setPosition(new double[] {1.62,1.05,3.06}))
        .addChild(new Viewpoint().setDEF("Scene_FrontView").setCenterOfRotation(new double[] {0,0.8,0}).setDescription("Scene Front View").setPosition(new double[] {0,0.8,2.58}))
        .addChild(new Viewpoint().setDEF("Scene_SideView").setCenterOfRotation(new double[] {0,0.8,0}).setDescription("Scene Side View").setOrientation(new double[] {0,1,0,1.5708}).setPosition(new double[] {2.6,0.5,0}))
        .addChild(new Viewpoint().setDEF("Scene_BackView").setCenterOfRotation(new double[] {0,1.5,0}).setDescription("Scene Back View").setOrientation(new double[] {0,1,0,3.14}).setPosition(new double[] {0,2.5,-3}))
        .addChild(new Viewpoint().setDEF("Scene_TopView").setCenterOfRotation(new double[] {0,1.5,0}).setDescription("Scene Top View").setOrientation(new double[] {1,0,0,-1.5708}).setPosition(new double[] {0,3.5,0}))
        .addChild(new Group().setDEF("Joe_Humanoid")
          .addChild(new HAnimHumanoid("Joe_Humanoid").setName("Human").setDEF("Joe_Human").setVersion("2.0")
            .addSkeleton(((HAnimJoint)new HAnimJoint("Joe_Human").setName("HumanoidRoot").setDEF("Joe_HumanoidRoot").setCenter(new double[] {0,0.875,0}).setContainerFieldOverride("skeleton"))
              .setMetadata(new MetadataSet().setName("warnings").setReference("HAnim")
                .addComments("TODO experimental")
                .addValue(new MetadataString().setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new MFString1().getArray())))
              .addChild(new HAnimSegment("Joe_HumanoidRoot").setName("sacrum").setDEF("Joe_sacrum")
                .addChild(new HAnimSite("Joe_sacrum").setName("RootFront_view").setDEF("Joe_RootFront_view")
                  .addChild(new Transform().setDEF("hanimcordsys").setScale(new double[] {0.175,0.175,0.175})
                    .addChild(new Viewpoint().setDEF("ViewBodyRootAxes").setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                    .addChild(new Shape().setDEF("AxisLinesShape")
                      .addComments("RGB lines showing XYZ axes")
                      .setGeometry(new IndexedLineSet().setColorIndex(new MFInt322().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt323().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f4().getArray()))
                        .setColor(new Color().setColor(new MFColor5().getArray())))))))
              .addChild(new HAnimJoint("Joe_HumanoidRoot").setName("sacroiliac").setDEF("Joe_sacroiliac").setCenter(new double[] {0,0.92,0}).setSkinCoordIndex(new MFInt326().getArray()).setSkinCoordWeight(new MFFloat7().getArray())
                .addChild(new HAnimJoint("Joe_sacroiliac").setName("l_hip").setDEF("Joe_l_hip").setCenter(new double[] {0.1,0.92,0}).setSkinCoordIndex(new MFInt328().getArray()).setSkinCoordWeight(new MFFloat9().getArray())
                  .addChild(new HAnimJoint("Joe_l_hip").setName("l_knee").setDEF("Joe_l_knee").setCenter(new double[] {0.115,0.466,0}).setSkinCoordIndex(new MFInt3210().getArray()).setSkinCoordWeight(new MFFloat11().getArray())
                    .addChild(new HAnimJoint("Joe_l_knee").setName("l_ankle").setDEF("Joe_l_ankle").setCenter(new double[] {0.115,0.069,0}).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray())
                      .addChild(new HAnimJoint("Joe_l_ankle").setName("l_subtalar").setDEF("Joe_l_subtalar").setCenter(new double[] {0.115,0.031,0.03}).setSkinCoordIndex(new MFInt3214().getArray()).setSkinCoordWeight(new MFFloat15().getArray())
                        .addChild(new HAnimJoint("Joe_l_subtalar").setName("l_midtarsal").setDEF("Joe_l_midtarsal").setCenter(new double[] {0.115,0.037,0.09}).setSkinCoordIndex(new MFInt3216().getArray()).setSkinCoordWeight(new MFFloat17().getArray())
                          .addChild(new HAnimJoint("Joe_l_midtarsal").setName("l_metatarsal").setDEF("Joe_l_metatarsal").setCenter(new double[] {0.115,0.02,0.122}).setSkinCoordIndex(new MFInt3218().getArray()).setSkinCoordWeight(new MFFloat19().getArray())))))))
                .addChild(new HAnimJoint("Joe_sacroiliac").setName("r_hip").setDEF("Joe_r_hip").setCenter(new double[] {-0.1,0.92,0}).setSkinCoordIndex(new MFInt3220().getArray()).setSkinCoordWeight(new MFFloat21().getArray())
                  .addChild(new HAnimJoint("Joe_r_hip").setName("r_knee").setDEF("Joe_r_knee").setCenter(new double[] {-0.05,0.466,0}).setSkinCoordIndex(new MFInt3222().getArray()).setSkinCoordWeight(new MFFloat23().getArray())
                    .addChild(new HAnimJoint("Joe_r_knee").setName("r_ankle").setDEF("Joe_r_ankle").setCenter(new double[] {-0.115,0.069,0}).setSkinCoordIndex(new MFInt3224().getArray()).setSkinCoordWeight(new MFFloat25().getArray())
                      .addChild(new HAnimJoint("Joe_r_ankle").setName("r_subtalar").setDEF("Joe_r_subtalar").setCenter(new double[] {-0.1,0.015,-0.01}).setSkinCoordIndex(new MFInt3226().getArray()).setSkinCoordWeight(new MFFloat27().getArray())
                        .addChild(new HAnimJoint("Joe_r_subtalar").setName("r_midtarsal").setDEF("Joe_r_midtarsal").setCenter(new double[] {-0.115,0.037,0.09}).setSkinCoordIndex(new MFInt3228().getArray()).setSkinCoordWeight(new MFFloat29().getArray())
                          .addChild(new HAnimJoint("Joe_r_midtarsal").setName("r_metatarsal").setDEF("Joe_r_metatarsal").setCenter(new double[] {-0.1,0.01,0.14}).setSkinCoordIndex(new MFInt3230().getArray()).setSkinCoordWeight(new MFFloat31().getArray()))))))))
              .addChild(new HAnimJoint("Joe_HumanoidRoot").setName("vl5").setDEF("Joe_vl5").setCenter(new double[] {0,1.045,-0.095}).setSkinCoordIndex(new MFInt3232().getArray()).setSkinCoordWeight(new MFFloat33().getArray())
                .addChild(new HAnimJoint("Joe_vl5").setName("vl4").setDEF("Joe_vl4").setCenter(new double[] {0,1.068,-0.085})
                  .addChild(new HAnimJoint("Joe_vl4").setName("vl3").setDEF("Joe_vl3").setCenter(new double[] {0,1.092,-0.0725})
                    .addChild(new HAnimJoint("Joe_vl3").setName("vl2").setDEF("Joe_vl2").setCenter(new double[] {0,1.12,-0.065}).setSkinCoordIndex(new MFInt3234().getArray()).setSkinCoordWeight(new MFFloat35().getArray())
                      .addChild(new HAnimJoint("Joe_vl2").setName("vl1").setDEF("Joe_vl1").setCenter(new double[] {0,1.1459,-0.0625})
                        .addChild(new HAnimJoint("Joe_vl1").setName("vt12").setDEF("Joe_vt12").setCenter(new double[] {0,1.179,-0.068})
                          .addChild(new HAnimJoint("Joe_vt12").setName("vt11").setDEF("Joe_vt11").setCenter(new double[] {0,1.2679,-0.081})
                            .addChild(new HAnimJoint("Joe_vt11").setName("vt10").setDEF("Joe_vt10").setCenter(new double[] {0,1.242,-0.09}).setSkinCoordIndex(new MFInt3236().getArray()).setSkinCoordWeight(new MFFloat37().getArray())
                              .addChild(new HAnimJoint("Joe_vt10").setName("vt9").setDEF("Joe_vt9").setCenter(new double[] {0,1.268,-0.1}).setSkinCoordIndex(new MFInt3238().getArray()).setSkinCoordWeight(new MFFloat39().getArray())
                                .addChild(new HAnimJoint("Joe_vt9").setName("vt8").setDEF("Joe_vt8").setCenter(new double[] {0,1.294,-0.11})
                                  .addChild(new HAnimJoint("Joe_vt8").setName("vt7").setDEF("Joe_vt7").setCenter(new double[] {0,1.323,-0.1155})
                                    .addChild(new HAnimJoint("Joe_vt7").setName("vt6").setDEF("Joe_vt6").setCenter(new double[] {0,1.352,-0.12})
                                      .addChild(new HAnimJoint("Joe_vt6").setName("vt5").setDEF("Joe_vt5").setCenter(new double[] {0,1.381,-0.1235})
                                        .addChild(new HAnimJoint("Joe_vt5").setName("vt4").setDEF("Joe_vt4").setCenter(new double[] {0,1.41,-0.1235}).setSkinCoordIndex(new MFInt3240().getArray()).setSkinCoordWeight(new MFFloat41().getArray())
                                          .addChild(new HAnimJoint("Joe_vt4").setName("vt3").setDEF("Joe_vt3").setCenter(new double[] {0,1.438,-0.12})
                                            .addChild(new HAnimJoint("Joe_vt3").setName("vt2").setDEF("Joe_vt2").setCenter(new double[] {0,1.468,-0.105})
                                              .addChild(new HAnimJoint("Joe_vt2").setName("vt1").setDEF("Joe_vt1").setCenter(new double[] {0,1.497,-0.09}).setSkinCoordIndex(new MFInt3242().getArray()).setSkinCoordWeight(new MFFloat43().getArray())
                                                .addChild(new HAnimJoint("Joe_vt1").setName("vc7").setDEF("Joe_vc7").setCenter(new double[] {0,1.525,-0.072}).setSkinCoordIndex(new MFInt3244().getArray()).setSkinCoordWeight(new MFFloat45().getArray())
                                                  .addChild(new HAnimJoint("Joe_vc7").setName("vc6").setDEF("Joe_vc6").setCenter(new double[] {0,1.54,-0.05})
                                                    .addChild(new HAnimJoint("Joe_vc6").setName("vc5").setDEF("Joe_vc5").setCenter(new double[] {0,1.552,-0.035})
                                                      .addChild(new HAnimJoint("Joe_vc5").setName("vc4").setDEF("Joe_vc4").setCenter(new double[] {0,1.5675,-0.0256})
                                                        .addChild(new HAnimJoint("Joe_vc4").setName("vc3").setDEF("Joe_vc3").setCenter(new double[] {0,1.58225,-0.0185})
                                                          .addChild(new HAnimJoint("Joe_vc3").setName("vc2").setDEF("Joe_vc2").setCenter(new double[] {0,1.595,-0.0175})
                                                            .addChild(new HAnimJoint("Joe_vc2").setName("vc1").setDEF("Joe_vc1").setCenter(new double[] {0,1.61,-0.015})
                                                              .addChild(new HAnimJoint("Joe_vc1").setName("skullbase").setDEF("Joe_skullbase").setCenter(new double[] {0,1.63,-0.01}).setSkinCoordIndex(new MFInt3246().getArray()).setSkinCoordWeight(new MFFloat47().getArray())
                                                                .addDisplacers(new HAnimDisplacer("Joe_skullbase").setName("skull_tip_raiser_action").setDEF("Joe_skull_tip_raiser_action").setCoordIndex(new MFInt3248().getArray()).setDisplacements(new MFVec3f49().getArray()))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setName("l_eyelid_joint").setDEF("Joe_l_eyelid_joint").setCenter(new double[] {0.034,1.659,0.06}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setName("l_eyeball_joint").setDEF("Joe_l_eyeball_joint").setCenter(new double[] {0.034,1.659,0.06}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setName("l_eyebrow_joint").setDEF("Joe_l_eyebrow_joint").setCenter(new double[] {0.034,1.659,0.06}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setName("r_eyelid_joint").setDEF("Joe_r_eyelid_joint").setCenter(new double[] {-0.034,1.659,0.06}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setName("r_eyeball_joint").setDEF("Joe_r_eyeball_joint").setCenter(new double[] {-0.034,1.659,0.06}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setName("r_eyebrow_joint").setDEF("Joe_r_eyebrow_joint").setCenter(new double[] {-0.034,1.659,0.06}))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setName("temporomandibular").setDEF("Joe_temporomandibular").setCenter(new double[] {0.034,1.659,0.06}))))))))))
                                                .addChild(new HAnimJoint("Joe_vt1").setName("l_sternoclavicular").setDEF("Joe_l_sternoclavicular").setCenter(new double[] {0.082,1.4488,-0.0353}).setSkinCoordIndex(new MFInt3250().getArray()).setSkinCoordWeight(new MFFloat51().getArray())
                                                  .addChild(new HAnimJoint("Joe_l_sternoclavicular").setName("l_acromioclavicular").setDEF("Joe_l_acromioclavicular").setCenter(new double[] {0.0962,1.4269,-0.0424}).setSkinCoordIndex(new MFInt3252().getArray()).setSkinCoordWeight(new MFFloat53().getArray())
                                                    .addChild(new HAnimJoint("Joe_l_acromioclavicular").setName("l_shoulder").setDEF("Joe_l_shoulder").setCenter(new double[] {0.2,1.44,-0.04}).setSkinCoordIndex(new MFInt3254().getArray()).setSkinCoordWeight(new MFFloat55().getArray())
                                                      .addChild(new HAnimJoint("Joe_l_shoulder").setName("l_elbow").setDEF("Joe_l_elbow").setCenter(new double[] {0.2,1.1388,-0.04}).setSkinCoordIndex(new MFInt3256().getArray()).setSkinCoordWeight(new MFFloat57().getArray())
                                                        .addChild(new HAnimJoint("Joe_l_elbow").setName("l_wrist").setDEF("Joe_l_wrist").setCenter(new double[] {0.2,0.87,-0.04}).setSkinCoordIndex(new MFInt3258().getArray()).setSkinCoordWeight(new MFFloat59().getArray())
                                                          .addChild(new HAnimJoint("Joe_l_wrist").setName("l_thumb1").setDEF("Joe_l_thumb1").setCenter(new double[] {0.1924,0.8472,-0.0534}).setSkinCoordIndex(new MFInt3260().getArray()).setSkinCoordWeight(new MFFloat61().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_thumb1").setName("l_thumb2").setDEF("Joe_l_thumb2").setCenter(new double[] {0.1951,0.8226,0.0246}).setSkinCoordIndex(new MFInt3262().getArray()).setSkinCoordWeight(new MFFloat63().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_thumb2").setName("l_thumb3").setDEF("Joe_l_thumb3").setCenter(new double[] {0.1955,0.8159,0.0464}).setSkinCoordIndex(new MFInt3264().getArray()).setSkinCoordWeight(new MFFloat65().getArray()))))
                                                          .addChild(new HAnimJoint("Joe_l_wrist").setName("l_index0").setDEF("Joe_l_index0").setCenter(new double[] {0.1983,0.8024,-0.028}).setSkinCoordIndex(new MFInt3266().getArray()).setSkinCoordWeight(new MFFloat67().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_index0").setName("l_index1").setDEF("Joe_l_index1").setCenter(new double[] {0.1983,0.7815,-0.028}).setSkinCoordIndex(new MFInt3268().getArray()).setSkinCoordWeight(new MFFloat69().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_index1").setName("l_index2").setDEF("Joe_l_index2").setCenter(new double[] {0.2017,0.7363,-0.0248}).setSkinCoordIndex(new MFInt3270().getArray()).setSkinCoordWeight(new MFFloat71().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_index2").setName("l_index3").setDEF("Joe_l_index3").setCenter(new double[] {0.2028,0.7139,-0.0236}).setSkinCoordIndex(new MFInt3272().getArray()).setSkinCoordWeight(new MFFloat73().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_l_wrist").setName("l_middle0").setDEF("Joe_l_middle0").setCenter(new double[] {0.1987,0.8029,-0.053}).setSkinCoordIndex(new MFInt3274().getArray()).setSkinCoordWeight(new MFFloat75().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_middle0").setName("l_middle1").setDEF("Joe_l_middle1").setCenter(new double[] {0.1987,0.7818,-0.053}).setSkinCoordIndex(new MFInt3276().getArray()).setSkinCoordWeight(new MFFloat77().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_middle1").setName("l_middle2").setDEF("Joe_l_middle2").setCenter(new double[] {0.2013,0.7273,-0.0503}).setSkinCoordIndex(new MFInt3278().getArray()).setSkinCoordWeight(new MFFloat79().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_middle2").setName("l_middle3").setDEF("Joe_l_middle3").setCenter(new double[] {0.2026,0.7011,-0.0494}).setSkinCoordIndex(new MFInt3280().getArray()).setSkinCoordWeight(new MFFloat81().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_l_wrist").setName("l_ring0").setDEF("Joe_l_ring0").setCenter(new double[] {0.1956,0.8019,-0.0794}).setSkinCoordIndex(new MFInt3282().getArray()).setSkinCoordWeight(new MFFloat83().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_ring0").setName("l_ring1").setDEF("Joe_l_ring1").setCenter(new double[] {0.1956,0.7815,-0.0794}).setSkinCoordIndex(new MFInt3284().getArray()).setSkinCoordWeight(new MFFloat85().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_ring1").setName("l_ring2").setDEF("Joe_l_ring2").setCenter(new double[] {0.1973,0.7287,-0.0777}).setSkinCoordIndex(new MFInt3286().getArray()).setSkinCoordWeight(new MFFloat87().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_ring2").setName("l_ring3").setDEF("Joe_l_ring3").setCenter(new double[] {0.1983,0.7045,-0.0767}).setSkinCoordIndex(new MFInt3288().getArray()).setSkinCoordWeight(new MFFloat89().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_l_wrist").setName("l_pinky0").setDEF("Joe_l_pinky0").setCenter(new double[] {0.1925,0.8066,-0.1036}).setSkinCoordIndex(new MFInt3290().getArray()).setSkinCoordWeight(new MFFloat91().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_pinky0").setName("l_pinky1").setDEF("Joe_l_pinky1").setCenter(new double[] {0.1925,0.7866,-0.1036}).setSkinCoordIndex(new MFInt3292().getArray()).setSkinCoordWeight(new MFFloat93().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_pinky1").setName("l_pinky2").setDEF("Joe_l_pinky2").setCenter(new double[] {0.1938,0.7452,-0.1024}).setSkinCoordIndex(new MFInt3294().getArray()).setSkinCoordWeight(new MFFloat95().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_pinky2").setName("l_pinky3").setDEF("Joe_l_pinky3").setCenter(new double[] {0.1948,0.7277,-0.1017}).setSkinCoordIndex(new MFInt3296().getArray()).setSkinCoordWeight(new MFFloat97().getArray()))))))))))
                                                .addChild(new HAnimJoint("Joe_vt1").setName("r_sternoclavicular").setDEF("Joe_r_sternoclavicular").setCenter(new double[] {-0.03,1.46,0}).setSkinCoordIndex(new MFInt3298().getArray()).setSkinCoordWeight(new MFFloat99().getArray())
                                                  .addChild(new HAnimJoint("Joe_r_sternoclavicular").setName("r_acromioclavicular").setDEF("Joe_r_acromioclavicular").setCenter(new double[] {-0.09,1.41,-0.11}).setSkinCoordIndex(new MFInt32100().getArray()).setSkinCoordWeight(new MFFloat101().getArray())
                                                    .addChild(new HAnimJoint("Joe_r_acromioclavicular").setName("r_shoulder").setDEF("Joe_r_shoulder").setCenter(new double[] {-0.2,1.44,-0.04}).setSkinCoordIndex(new MFInt32102().getArray()).setSkinCoordWeight(new MFFloat103().getArray())
                                                      .addChild(new HAnimJoint("Joe_r_shoulder").setName("r_elbow").setDEF("Joe_r_elbow").setCenter(new double[] {-0.2,1.1388,-0.04}).setSkinCoordIndex(new MFInt32104().getArray()).setSkinCoordWeight(new MFFloat105().getArray())
                                                        .addChild(new HAnimJoint("Joe_r_elbow").setName("r_wrist").setDEF("Joe_r_wrist").setCenter(new double[] {-0.2,0.89,-0.04}).setSkinCoordIndex(new MFInt32106().getArray()).setSkinCoordWeight(new MFFloat107().getArray())
                                                          .addChild(new HAnimJoint("Joe_r_wrist").setName("r_thumb1").setDEF("Joe_r_thumb1").setCenter(new double[] {-0.2,0.85,0}).setSkinCoordIndex(new MFInt32108().getArray()).setSkinCoordWeight(new MFFloat109().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_thumb1").setName("r_thumb2").setDEF("Joe_r_thumb2").setCenter(new double[] {-0.2,0.82,0.03}).setSkinCoordIndex(new MFInt32110().getArray()).setSkinCoordWeight(new MFFloat111().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_thumb2").setName("r_thumb3").setDEF("Joe_r_thumb3").setCenter(new double[] {-0.2,0.8,0.05}).setSkinCoordIndex(new MFInt32112().getArray()).setSkinCoordWeight(new MFFloat113().getArray()))))
                                                          .addChild(new HAnimJoint("Joe_r_wrist").setName("r_index0").setDEF("Joe_r_index0").setCenter(new double[] {-0.2,0.84,-0.015}).setSkinCoordIndex(new MFInt32114().getArray()).setSkinCoordWeight(new MFFloat115().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_index0").setName("r_index1").setDEF("Joe_r_index1").setCenter(new double[] {-0.2,0.793,-0.015}).setSkinCoordIndex(new MFInt32116().getArray()).setSkinCoordWeight(new MFFloat117().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_index1").setName("r_index2").setDEF("Joe_r_index2").setCenter(new double[] {-0.2,0.745,-0.015}).setSkinCoordIndex(new MFInt32118().getArray()).setSkinCoordWeight(new MFFloat119().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_index2").setName("r_index3").setDEF("Joe_r_index3").setCenter(new double[] {-0.2,0.72,-0.015}).setSkinCoordIndex(new MFInt32120().getArray()).setSkinCoordWeight(new MFFloat121().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_r_wrist").setName("r_middle0").setDEF("Joe_r_middle0").setCenter(new double[] {-0.2,0.835,-0.04}).setSkinCoordIndex(new MFInt32122().getArray()).setSkinCoordWeight(new MFFloat123().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_middle0").setName("r_middle1").setDEF("Joe_r_middle1").setCenter(new double[] {-0.2,0.788,-0.04}).setSkinCoordIndex(new MFInt32124().getArray()).setSkinCoordWeight(new MFFloat125().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_middle1").setName("r_middle2").setDEF("Joe_r_middle2").setCenter(new double[] {-0.2,0.74,-0.04}).setSkinCoordIndex(new MFInt32126().getArray()).setSkinCoordWeight(new MFFloat127().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_middle2").setName("r_middle3").setDEF("Joe_r_middle3").setCenter(new double[] {-0.2,0.7142,-0.04}).setSkinCoordIndex(new MFInt32128().getArray()).setSkinCoordWeight(new MFFloat129().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_r_wrist").setName("r_ring0").setDEF("Joe_r_ring0").setCenter(new double[] {-0.2,0.835,-0.065}).setSkinCoordIndex(new MFInt32130().getArray()).setSkinCoordWeight(new MFFloat131().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_ring0").setName("r_ring1").setDEF("Joe_r_ring1").setCenter(new double[] {-0.2,0.793,-0.065}).setSkinCoordIndex(new MFInt32132().getArray()).setSkinCoordWeight(new MFFloat133().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_ring1").setName("r_ring2").setDEF("Joe_r_ring2").setCenter(new double[] {-0.2,0.74,-0.065}).setSkinCoordIndex(new MFInt32134().getArray()).setSkinCoordWeight(new MFFloat135().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_ring2").setName("r_ring3").setDEF("Joe_r_ring3").setCenter(new double[] {-0.2,0.7177,-0.065}).setSkinCoordIndex(new MFInt32136().getArray()).setSkinCoordWeight(new MFFloat137().getArray())))))
                                                          .addChild(new HAnimJoint("Joe_r_wrist").setName("r_pinky0").setDEF("Joe_r_pinky0").setCenter(new double[] {-0.2,0.84,-0.085}).setSkinCoordIndex(new MFInt32138().getArray()).setSkinCoordWeight(new MFFloat139().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_pinky0").setName("r_pinky1").setDEF("Joe_r_pinky1").setCenter(new double[] {-0.2,0.79,-0.085}).setSkinCoordIndex(new MFInt32140().getArray()).setSkinCoordWeight(new MFFloat141().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_pinky1").setName("r_pinky2").setDEF("Joe_r_pinky2").setCenter(new double[] {-0.2,0.755,-0.085}).setSkinCoordIndex(new MFInt32142().getArray()).setSkinCoordWeight(new MFFloat143().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_pinky2").setName("r_pinky3").setDEF("Joe_r_pinky3").setCenter(new double[] {-0.2,0.735,-0.09}).setSkinCoordIndex(new MFInt32144().getArray()).setSkinCoordWeight(new MFFloat145().getArray()))))))))))))))))))))))))))))
            .addSkin(((Shape)new Shape().setDEF("Joe_Shape").setContainerFieldOverride("skin"))
              .setAppearance(new Appearance().setDEF("Joe_skin_Appearance")
                .setMaterial(new Material().setDEF("Joe_skin_Material").setDiffuseColor(new double[] {0.3,0.3,0.6}).setEmissiveColor(new double[] {0.3,0.3,0.6}))
                .setTexture(new ImageTexture().setDEF("JoeSkinImageTexture").setUrl(new MFString146().getArray()))
                .setTextureTransform(new TextureTransform().setDEF("KickTextureTransform")))
              .setGeometry(new IndexedFaceSet().setDEF("Joe_skin_IndexedFaceSet").setCoordIndex(new MFInt32147().getArray().append(new MFInt32148().getArray()).append(new MFInt32149().getArray()).append(new MFInt32150().getArray())).setCreaseAngle(3.14)
                .setCoord(new Coordinate().setDEF("Joe_SkinCoord").setPoint(new MFVec3f151().getArray().append(new MFVec3f152().getArray())))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f153().getArray()))))
            .setSkinCoord(((Coordinate)new Coordinate().setContainerFieldOverride("skinCoord")).setUSE("Joe_SkinCoord"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_HumanoidRoot"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_sacroiliac"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vl5"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vl4"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vl3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vl2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vl1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt12"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt11"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt10"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt9"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt8"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt7"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt6"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt5"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt4"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vt1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vc7"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vc6"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vc5"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vc4"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vc3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vc2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_vc1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_skullbase"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_temporomandibular"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_acromioclavicular"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_acromioclavicular"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_ankle"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_ankle"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_elbow"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_elbow"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_eyeball_joint"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_eyeball_joint"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_eyebrow_joint"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_eyebrow_joint"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_eyelid_joint"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_eyelid_joint"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_hip"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_hip"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_index0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_index0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_index1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_index1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_index2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_index2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_index3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_index3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_knee"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_knee"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_metatarsal"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_metatarsal"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_middle0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_middle0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_middle1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_middle1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_middle2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_middle2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_middle3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_middle3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_midtarsal"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_midtarsal"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_pinky0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_pinky0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_pinky1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_pinky1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_pinky2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_pinky2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_pinky3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_pinky3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_ring0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_ring0"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_ring1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_ring1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_ring2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_ring2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_ring3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_ring3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_shoulder"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_shoulder"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_sternoclavicular"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_sternoclavicular"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_subtalar"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_subtalar"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_thumb1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_thumb1"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_thumb2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_thumb2"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_thumb3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_thumb3"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_l_wrist"))
            .addJoints(((HAnimJoint)new HAnimJoint("Joe_Human").setContainerFieldOverride("joints")).setUSE("Joe_r_wrist"))
            .addSegments(((HAnimSegment)new HAnimSegment("Joe_Human").setContainerFieldOverride("segments")).setUSE("Joe_sacrum"))
            .addSites(((HAnimSite)new HAnimSite("Joe_Human").setContainerFieldOverride("sites")).setUSE("Joe_RootFront_view"))))
        .addChild(new Group()
          .addChild(new TimeSensor().setDEF("KickTimer").setCycleInterval(3.73).setLoop(true))
          .addComments("Interpolators")
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
        .addComments("TimeSensor to Interpolators")
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("HumanoidRoot_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("HumanoidRoot_TranslationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("sacroiliac_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_hip_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_knee_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ankle_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_subtalar_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_midtarsal_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_metatarsal_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_hip_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_knee_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ankle_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_subtalar_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_midtarsal_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_metatarsal_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl5_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl4_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt12_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt11_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt10_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt9_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt8_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt7_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt6_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt5_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt4_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc7_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc6_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc5_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc4_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("skullbase_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_eyelid_joint_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_eyeball_joint_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_eyebrow_joint_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_eyelid_joint_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_eyeball_joint_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_eyebrow_joint_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("temporomandibular_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_sternoclavicular_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_acromioclavicular_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_shoulder_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_elbow_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_wrist_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_thumb1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_thumb2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_thumb3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_sternoclavicular_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_acromioclavicular_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_shoulder_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_elbow_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_wrist_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_thumb1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_thumb2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_thumb3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring3_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky0_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky1_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky2_RotationInterpolator"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky3_RotationInterpolator"))
        .addComments("Routes from Interpolators to Joe_ model Joints")
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("HumanoidRoot_RotationInterpolator").setToField("set_rotation").setToNode("Joe_HumanoidRoot"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("HumanoidRoot_TranslationInterpolator").setToField("set_translation").setToNode("Joe_HumanoidRoot"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("sacroiliac_RotationInterpolator").setToField("set_rotation").setToNode("Joe_sacroiliac"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_hip_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_knee_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ankle_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_subtalar_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_subtalar"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_midtarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_midtarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_metatarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_metatarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_hip_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_knee_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ankle_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_subtalar_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_subtalar"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_midtarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_midtarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_metatarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_metatarsal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vl5_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vl5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vl4_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vl4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vl3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vl3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vl2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vl2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vl1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vl1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt12_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt12"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt11_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt11"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt10_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt10"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt9_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt9"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt8_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt8"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt7_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt7"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt6_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt6"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt5_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt4_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vt1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vt1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc7_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vc7"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc6_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vc6"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc5_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vc5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc4_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vc4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vc3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vc2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("vc1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_vc1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("skullbase_RotationInterpolator").setToField("set_rotation").setToNode("Joe_skullbase"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_eyelid_joint_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_eyelid_joint"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_eyeball_joint_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_eyeball_joint"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_eyebrow_joint_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_eyebrow_joint"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_eyelid_joint_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_eyelid_joint"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_eyeball_joint_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_eyeball_joint"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_eyebrow_joint_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_eyebrow_joint"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("temporomandibular_RotationInterpolator").setToField("set_rotation").setToNode("Joe_temporomandibular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_sternoclavicular_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_sternoclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_acromioclavicular_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_acromioclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_shoulder_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_elbow_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_wrist_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_thumb1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_thumb1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_thumb2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_thumb2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_thumb3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_thumb3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_index0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_index1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_index2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_index3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_middle0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_middle1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_middle2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_middle3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_ring0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_ring1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_ring2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_ring3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_pinky0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_pinky1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_pinky2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_pinky3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_sternoclavicular_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_sternoclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_acromioclavicular_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_acromioclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_shoulder_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_elbow_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_wrist_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_thumb1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_thumb2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_thumb3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_index0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_index1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_index2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_index3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_middle0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_middle1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_middle2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_middle3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_ring0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_ring1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_ring2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_ring3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_pinky0"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_pinky1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_pinky2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_pinky3"))
        .addChild(new Group().setDEF("DisplacersAnimationGroup")
          .addComments("TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor")
          .addChild(new ScalarInterpolator().setDEF("skull_tipInterpolator").setKey(new MFFloat344().getArray()).setKeyValue(new MFFloat345().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("skull_tipInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("skull_tipInterpolator").setToField("weight").setToNode("Joe_skull_tip_raiser_action")))
        .addChild(new Group().setDEF("SkinTextureTransformAnimationGroup")
          .addChild(new ScalarInterpolator().setDEF("SkinTextureTransformInterpolator").setKey(new MFFloat346().getArray()).setKeyValue(new MFFloat347().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("SkinTextureTransformInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("SkinTextureTransformInterpolator").setToField("rotation").setToNode("KickTextureTransform")))
        .addChild(new Group()
          .addChild(new Transform().setDEF("SBall").setRotation(new double[] {0.7,0,0.7,0.1}).setScale(new double[] {0.23,0.23,0.23}).setTranslation(new double[] {-0.916,0.37,-0.92})
            .addChild(new Shape().setDEF("ball_Shape")
              .setAppearance(new Appearance().setDEF("ball_Appearance")
                .setMaterial(new Material().setDEF("ball_Material").setDiffuseColor(new double[] {0.3,0.3,1}).setEmissiveColor(new double[] {0.3,0.3,0.33}))
                .setTexture(new ImageTexture().setUSE("JoeSkinImageTexture")))
              .setGeometry(new IndexedFaceSet().setDEF("ball_IndexedFaceSet").setCoordIndex(new MFInt32348().getArray())
                .setCoord(new Coordinate().setDEF("Ball_Coordinates").setPoint(new MFVec3f349().getArray()))))
            .addChild(new Viewpoint().setDEF("ballView_1").setDescription("Ball View")))
          .addComments("Ball Animation interpolators")
          .addChild(new PositionInterpolator().setDEF("ball_TranslationInterpolator").setKey(new MFFloat350().getArray()).setKeyValue(new MFVec3f351().getArray()))
          .addChild(new OrientationInterpolator().setDEF("ball_RotationInterpolator").setKey(new MFFloat352().getArray()).setKeyValue(new MFRotation353().getArray()))
          .addComments("Ball Animation Routes")
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("ball_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("ball_TranslationInterpolator").setToField("set_translation").setToNode("SBall"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("ball_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("ball_RotationInterpolator").setToField("set_rotation").setToNode("SBall")))
        .addChild(new Group()
          .addChild(new Transform().setScale(new double[] {0.2,0.2,0.2})
            .addChild(new Shape().setUSE("AxisLinesShape")))
          .addChild(new Transform().setDEF("Circle0").setScale(new double[] {1.175,1,1.175})
            .addChild(new Shape().setDEF("circle_Shape")
              .setAppearance(new Appearance().setDEF("circle0_Appearance")
                .setMaterial(new Material().setDEF("circle0_Material").setAmbientIntensity(0.9).setDiffuseColor(new double[] {0.9,0,0.7}).setEmissiveColor(new double[] {0.425,0.486,1})))
              .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt32354().getArray())
                .setCoord(new Coordinate().setDEF("circle_Coordinates").setPoint(new MFVec3f355().getArray())))))
          .addChild(new Transform().setDEF("Circle1").setScale(new double[] {0.5,1,0.5})
            .addChild(new Shape().setDEF("circle1_Shape")
              .setAppearance(new Appearance().setDEF("circle1_Appearance")
                .setMaterial(new Material().setDEF("circle1_Material").setDiffuseColor(new double[] {0.9,0,0.7}).setEmissiveColor(new double[] {0.424956,0.483976,1})))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
          .addChild(new Transform().setDEF("Circle2").setScale(new double[] {0.25,1,0.25})
            .addChild(new Shape().setDEF("circle2_Shape")
              .setAppearance(new Appearance().setDEF("circle2_Appearance")
                .setMaterial(new Material().setDEF("circle2_Material").setDiffuseColor(new double[] {0.9,0,0.7}).setEmissiveColor(new double[] {0.424956,0.483976,1})))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"});
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
private class MFVec3f4 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,1,0,0,0,1,0,0,0,1});
  }
}
private class MFColor5 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {1,0,0,0,0.6,0,0,0,1});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1,1,0.35,0.35,1});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.65,1,1,1,1,1});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3216 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3218 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101,362,363});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.65,1,0.8,1,1,1,0.4,0.8});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369,98});
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.6,0.2,1,1,1,1,1,1,0.2});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,0.7,1,0.8});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1});
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1});
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFVec3f49 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1});
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.5,0.5,0.5,1,1,1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.5,0.5,0.5,1,1,1,0.5});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
private class MFFloat71 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,0.5,0.5});
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,0.5,0.5});
  }
}
private class MFInt3286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,0.5});
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1});
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt3298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,0.9});
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.1,1,1,1,1,1,1,1,0.3,0.2});
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
private class MFFloat105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
private class MFFloat109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt32110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.5,0.5,0.5,1,1,1});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
private class MFFloat113 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.5,0.5,0.5,1,1,1,0.5});
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
private class MFFloat119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
private class MFFloat121 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt32122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
private class MFFloat123 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
private class MFFloat125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,0.5,0.5});
  }
}
private class MFInt32126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
private class MFFloat131 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1});
  }
}
private class MFInt32132 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
private class MFFloat133 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,0.5,0.5});
  }
}
private class MFInt32134 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt32136 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
private class MFFloat137 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFInt32138 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,0.5});
  }
}
private class MFInt32140 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
private class MFFloat141 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1});
  }
}
private class MFInt32142 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1});
  }
}
private class MFInt32144 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1,1,1,1,1,1,1,1,1});
  }
}
private class MFString146 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png"});
  }
}
private class MFInt32147 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
private class MFInt32148 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
private class MFInt32149 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
private class MFVec3f151 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275});
  }
}
private class MFVec3f152 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
  }
}
private class MFVec2f153 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5});
  }
}
private class MFFloat154 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.1,0.4,0.6,1});
  }
}
private class MFRotation155 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5});
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.2,0.6,1});
  }
}
private class MFVec3f157 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15});
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation159 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat160 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.1,0.3,0.45,1});
  }
}
private class MFRotation161 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1});
  }
}
private class MFFloat162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.2,0.35,0.5,1});
  }
}
private class MFRotation163 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4});
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.25,1});
  }
}
private class MFRotation165 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,0,0,1,0,0,1,0,1,0,0,1});
  }
}
private class MFFloat166 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation167 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat168 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation169 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation171 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.25,0.5,0.75,1});
  }
}
private class MFRotation173 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1});
  }
}
private class MFFloat174 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.25,0.5,0.75,1});
  }
}
private class MFRotation175 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5});
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.25,0.5,0.75,1});
  }
}
private class MFRotation177 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5});
  }
}
private class MFFloat178 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation179 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation181 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat182 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation183 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation185 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat186 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation187 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation189 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat190 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation191 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat192 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation193 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation195 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation197 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat198 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation199 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation201 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat202 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation203 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation205 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat206 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation207 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation209 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat210 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation211 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation213 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation215 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat216 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation217 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation219 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat220 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation221 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat222 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation223 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.3,0.4,1});
  }
}
private class MFRotation225 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5});
  }
}
private class MFFloat226 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation227 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation229 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat230 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation231 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.2,0.75,1});
  }
}
private class MFRotation233 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35});
  }
}
private class MFFloat234 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation235 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation237 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat238 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation239 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation241 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat242 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation243 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation245 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation247 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation249 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat250 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation251 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat252 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.4,1});
  }
}
private class MFRotation253 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,1.5,-1,0,1,1.75});
  }
}
private class MFFloat254 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation255 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.4,0.8,1});
  }
}
private class MFRotation257 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0});
  }
}
private class MFFloat258 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation259 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation261 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat262 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation263 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation265 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat266 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation267 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation269 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat270 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation271 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation273 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat274 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation275 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation277 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat278 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation279 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation281 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat282 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation283 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation285 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat286 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation287 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat288 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation289 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat290 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation291 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation293 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat294 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation295 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation297 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat298 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation299 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat300 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation301 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75});
  }
}
private class MFFloat302 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation303 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5});
  }
}
private class MFFloat304 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.7,1});
  }
}
private class MFRotation305 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3});
  }
}
private class MFFloat306 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation307 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation309 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat310 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,1});
  }
}
private class MFRotation311 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,0});
  }
}
private class MFFloat312 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation313 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
  }
}
private class MFFloat314 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation315 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation317 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat318 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation319 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation321 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
  }
}
private class MFFloat322 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation323 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat324 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation325 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat326 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation327 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat328 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation329 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
  }
}
private class MFFloat330 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation331 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat332 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation333 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat334 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation335 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat336 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation337 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0});
  }
}
private class MFFloat338 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation339 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat340 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation341 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat342 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.5,0.75,1});
  }
}
private class MFRotation343 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0});
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1});
  }
}
private class MFFloat345 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0,0,0.2,0.4,1,0,1,0.4,0});
  }
}
private class MFFloat346 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.2,0.4,0.5,0.6,0.7,0.8,1});
  }
}
private class MFFloat347 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0,0,0,0,1,2,0});
  }
}
private class MFInt32348 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
private class MFVec3f349 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0});
  }
}
private class MFFloat350 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.4,0.409,1});
  }
}
private class MFVec3f351 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10});
  }
}
private class MFFloat352 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.4,0.41,0.71,1});
  }
}
private class MFRotation353 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3});
  }
}
private class MFInt32354 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
private class MFVec3f355 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0});
  }
}
}
