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
public class HAnimDisplacerExamples implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimDisplacerExamples().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimDisplacerExamples.new.java.x3d");
    model.toFileJSON("../data/HAnimDisplacerExamples.new.java.x3dj");
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
        .addMeta(new meta().setName("title").setContent("HAnimDisplacerExamples.x3d"))
        .addMeta(new meta().setName("description").setContent("This model illustrates use of the HAnimDisplacer node."))
        .addMeta(new meta().setName("creator").setContent("Joe Williams"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("9 January 2014"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:09 GMT"))
        .addMeta(new meta().setName("TODO").setContent("Provide clear HAnimDisplacer examples that other can use, with initial displacements of head and left-hand index figure."))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/HAnimDisplacerExamples.x3d"))
        .addMeta(new meta().setName("reference").setContent("../Legacy/JoeSkinTexcoordDisplacerKick.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe").setInfo(new MFString0().getArray()))
        .addChild(new NavigationInfo().setDEF("Start_NavigationInfo").setSpeed(2.5f ).setHeadlight(false))
        .addChild(new Background().setDEF("blue_Background"))
        .addChild(new SpotLight().setDEF("light1").setColor(new float[] {0.8f ,0.8f ,1f }).setAmbientIntensity(0.7f ).setLocation(new float[] {0f ,3f ,3f }).setDirection(new float[] {0f ,0f ,0f }).setRadius(10f ).setBeamWidth(1.5f ).setCutOffAngle(0.6f ))
        .addChild(new PointLight().setDEF("light2").setColor(new float[] {0.8f ,0.8f ,1f }).setAmbientIntensity(0.7f ).setLocation(new float[] {0f ,10f ,-7f }))
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setDescription("Scene_Inclined View").setPosition(new float[] {1.62f ,1.05f ,3.06f }).setOrientation(new float[] {-0.113f ,0.993f ,0.0347f ,0.671f }).setCenterOfRotation(new float[] {0f ,0.85f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_IFrontView").setDescription("Scene_Front View").setPosition(new float[] {0f ,0.8f ,2.58f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_ISideView").setDescription("Scene_Side View").setPosition(new float[] {2.6f ,0.5f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_BackView").setDescription("Scene_Back View").setPosition(new float[] {0f ,2.5f ,-3f }).setOrientation(new float[] {0f ,1f ,0f ,3.14f }).setCenterOfRotation(new float[] {0f ,1.5f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_TopView").setDescription("Scene_Top View").setPosition(new float[] {0f ,3.5f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,-1.5708f }).setCenterOfRotation(new float[] {0f ,1.5f ,0f }))
        .addChild(new Group().setDEF("Joe_Humanoid")
          .addChild(new HAnimHumanoid("Joe_Humanoid").setDEF("Joe_Human").setName("Human")
            .addSkeleton(new HAnimJoint("Joe_Human").setDEF("Joe_humanoid_root").setName("humanoid_root").setCenter(new float[] {0f ,0.875f ,0f })
              .addChild(new HAnimSegment("Joe_humanoid_root").setDEF("Joe_sacrum").setName("sacrum")
                .addChild(new HAnimSite("Joe_sacrum").setDEF("Joe_humanoid_sacrum_pt").setName("humanoid_sacrum_pt").setTranslation(new float[] {0f ,0.875f ,0f })
                  .addChild(new Shape().setDEF("RedBox")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f })))
                    .setGeometry(new Box().setSize(new float[] {0.01f ,0.01f ,0.01f }))))
                .addChild(new HAnimSite("Joe_sacrum").setDEF("Joe_humanoid_origin_view").setName("humanoid_origin_view")
                  .addChild(new Transform().setDEF("HAnimHumanoidOrigin").setScale(new float[] {0.175f ,0.175f ,0.175f })
                    .addChild(new Viewpoint().setDEF("ViewBodyRootAxes").setDescription("Joe_HAnim Root Coordinate Axes View"))
                    .addChild(new Shape().setDEF("AxisLinesShape")
                      .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new MFInt321().getArray()).setCoordIndex(new MFInt322().getArray())
                        .setColor(new Color().setColor(new MFColor3().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f4().getArray())))))))
              .addChild(new HAnimJoint("Joe_humanoid_root").setDEF("Joe_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f ,0.92f ,0f }).setSkinCoordIndex(new MFInt325().getArray()).setSkinCoordWeight(new MFFloat6().getArray())
                .addChild(new HAnimJoint("Joe_sacroiliac").setDEF("Joe_l_hip").setName("l_hip").setCenter(new float[] {0.1f ,0.92f ,0f }).setSkinCoordIndex(new MFInt327().getArray()).setSkinCoordWeight(new MFFloat8().getArray())
                  .addChild(new HAnimJoint("Joe_l_hip").setDEF("Joe_l_knee").setName("l_knee").setCenter(new float[] {0.115f ,0.466f ,0f }).setSkinCoordIndex(new MFInt329().getArray()).setSkinCoordWeight(new MFFloat10().getArray())
                    .addChild(new HAnimJoint("Joe_l_knee").setDEF("Joe_l_talocrural").setName("l_talocrural").setCenter(new float[] {0.115f ,0.069f ,0f }).setSkinCoordIndex(new MFInt3211().getArray()).setSkinCoordWeight(new MFFloat12().getArray())
                      .addChild(new HAnimJoint("Joe_l_talocrural").setDEF("Joe_l_subtalar").setName("l_subtalar").setCenter(new float[] {0.115f ,0.031f ,0.03f }).setSkinCoordIndex(new MFInt3213().getArray()).setSkinCoordWeight(new MFFloat14().getArray())
                        .addChild(new HAnimJoint("Joe_l_subtalar").setDEF("Joe_l_midtarsal").setName("l_midtarsal").setCenter(new float[] {0.115f ,0.037f ,0.09f }).setSkinCoordIndex(new MFInt3215().getArray()).setSkinCoordWeight(new MFFloat16().getArray())
                          .addChild(new HAnimJoint("Joe_l_midtarsal").setDEF("Joe_l_metatarsal").setName("l_metatarsal").setCenter(new float[] {0.115f ,0.02f ,0.122f }).setSkinCoordIndex(new MFInt3217().getArray()).setSkinCoordWeight(new MFFloat18().getArray())))))))
                .addChild(new HAnimJoint("Joe_sacroiliac").setDEF("Joe_r_hip").setName("r_hip").setCenter(new float[] {-0.1f ,0.92f ,0f }).setSkinCoordIndex(new MFInt3219().getArray()).setSkinCoordWeight(new MFFloat20().getArray())
                  .addChild(new HAnimJoint("Joe_r_hip").setDEF("Joe_r_knee").setName("r_knee").setCenter(new float[] {-0.05f ,0.466f ,0f }).setSkinCoordIndex(new MFInt3221().getArray()).setSkinCoordWeight(new MFFloat22().getArray())
                    .addChild(new HAnimJoint("Joe_r_knee").setDEF("Joe_r_talocrural").setName("r_talocrural").setCenter(new float[] {-0.115f ,0.069f ,0f }).setSkinCoordIndex(new MFInt3223().getArray()).setSkinCoordWeight(new MFFloat24().getArray())
                      .addChild(new HAnimJoint("Joe_r_talocrural").setDEF("Joe_r_subtalar").setName("r_subtalar").setCenter(new float[] {-0.1f ,0.015f ,-0.01f }).setSkinCoordIndex(new MFInt3225().getArray()).setSkinCoordWeight(new MFFloat26().getArray())
                        .addChild(new HAnimJoint("Joe_r_subtalar").setDEF("Joe_r_midtarsal").setName("r_midtarsal").setCenter(new float[] {-0.115f ,0.037f ,0.09f }).setSkinCoordIndex(new MFInt3227().getArray()).setSkinCoordWeight(new MFFloat28().getArray())
                          .addChild(new HAnimJoint("Joe_r_midtarsal").setDEF("Joe_r_metatarsal").setName("r_metatarsal").setCenter(new float[] {-0.1f ,0.01f ,0.14f }).setSkinCoordIndex(new MFInt3229().getArray()).setSkinCoordWeight(new MFFloat30().getArray()))))))))
              .addChild(new HAnimJoint("Joe_humanoid_root").setDEF("Joe_vl5").setName("vl5").setCenter(new float[] {0f ,1.045f ,-0.095f }).setSkinCoordIndex(new MFInt3231().getArray()).setSkinCoordWeight(new MFFloat32().getArray())
                .addChild(new HAnimJoint("Joe_vl5").setDEF("Joe_vl4").setName("vl4").setCenter(new float[] {0f ,1.068f ,-0.085f })
                  .addChild(new HAnimJoint("Joe_vl4").setDEF("Joe_vl3").setName("vl3").setCenter(new float[] {0f ,1.092f ,-0.0725f })
                    .addChild(new HAnimJoint("Joe_vl3").setDEF("Joe_vl2").setName("vl2").setCenter(new float[] {0f ,1.12f ,-0.065f }).setSkinCoordIndex(new MFInt3233().getArray()).setSkinCoordWeight(new MFFloat34().getArray())
                      .addChild(new HAnimJoint("Joe_vl2").setDEF("Joe_vl1").setName("vl1").setCenter(new float[] {0f ,1.1459f ,-0.0625f })
                        .addChild(new HAnimJoint("Joe_vl1").setDEF("Joe_vt12").setName("vt12").setCenter(new float[] {0f ,1.179f ,-0.068f })
                          .addChild(new HAnimJoint("Joe_vt12").setDEF("Joe_vt11").setName("vt11").setCenter(new float[] {0f ,1.2679f ,-0.081f })
                            .addChild(new HAnimJoint("Joe_vt11").setDEF("Joe_vt10").setName("vt10").setCenter(new float[] {0f ,1.242f ,-0.09f }).setSkinCoordIndex(new MFInt3235().getArray()).setSkinCoordWeight(new MFFloat36().getArray())
                              .addChild(new HAnimJoint("Joe_vt10").setDEF("Joe_vt9").setName("vt9").setCenter(new float[] {0f ,1.268f ,-0.1f }).setSkinCoordIndex(new MFInt3237().getArray()).setSkinCoordWeight(new MFFloat38().getArray())
                                .addChild(new HAnimJoint("Joe_vt9").setDEF("Joe_vt8").setName("vt8").setCenter(new float[] {0f ,1.294f ,-0.11f })
                                  .addChild(new HAnimJoint("Joe_vt8").setDEF("Joe_vt7").setName("vt7").setCenter(new float[] {0f ,1.323f ,-0.1155f })
                                    .addChild(new HAnimJoint("Joe_vt7").setDEF("Joe_vt6").setName("vt6").setCenter(new float[] {0f ,1.352f ,-0.12f })
                                      .addChild(new HAnimJoint("Joe_vt6").setDEF("Joe_vt5").setName("vt5").setCenter(new float[] {0f ,1.381f ,-0.1235f })
                                        .addChild(new HAnimJoint("Joe_vt5").setDEF("Joe_vt4").setName("vt4").setCenter(new float[] {0f ,1.41f ,-0.1235f }).setSkinCoordIndex(new MFInt3239().getArray()).setSkinCoordWeight(new MFFloat40().getArray())
                                          .addChild(new HAnimJoint("Joe_vt4").setDEF("Joe_vt3").setName("vt3").setCenter(new float[] {0f ,1.438f ,-0.12f })
                                            .addChild(new HAnimJoint("Joe_vt3").setDEF("Joe_vt2").setName("vt2").setCenter(new float[] {0f ,1.468f ,-0.105f })
                                              .addChild(new HAnimJoint("Joe_vt2").setDEF("Joe_vt1").setName("vt1").setCenter(new float[] {0f ,1.497f ,-0.09f }).setSkinCoordIndex(new MFInt3241().getArray()).setSkinCoordWeight(new MFFloat42().getArray())
                                                .addChild(new HAnimJoint("Joe_vt1").setDEF("Joe_vc7").setName("vc7").setCenter(new float[] {0f ,1.525f ,-0.072f }).setSkinCoordIndex(new MFInt3243().getArray()).setSkinCoordWeight(new MFFloat44().getArray())
                                                  .addChild(new HAnimJoint("Joe_vc7").setDEF("Joe_vc6").setName("vc6").setCenter(new float[] {0f ,1.54f ,-0.05f })
                                                    .addChild(new HAnimJoint("Joe_vc6").setDEF("Joe_vc5").setName("vc5").setCenter(new float[] {0f ,1.552f ,-0.035f })
                                                      .addChild(new HAnimJoint("Joe_vc5").setDEF("Joe_vc4").setName("vc4").setCenter(new float[] {0f ,1.5675f ,-0.0256f })
                                                        .addChild(new HAnimJoint("Joe_vc4").setDEF("Joe_vc3").setName("vc3").setCenter(new float[] {0f ,1.58225f ,-0.0185f })
                                                          .addChild(new HAnimJoint("Joe_vc3").setDEF("Joe_vc2").setName("vc2").setCenter(new float[] {0f ,1.595f ,-0.0175f })
                                                            .addChild(new HAnimJoint("Joe_vc2").setDEF("Joe_vc1").setName("vc1").setCenter(new float[] {0f ,1.61f ,-0.015f })
                                                              .addChild(new HAnimJoint("Joe_vc1").setDEF("Joe_skullbase").setName("skullbase").setCenter(new float[] {0f ,1.63f ,-0.01f }).setSkinCoordIndex(new MFInt3245().getArray()).setSkinCoordWeight(new MFFloat46().getArray())
                                                                .addDisplacers(new HAnimDisplacer("Joe_skullbase").setDEF("Joe_skull_tip").setName("skull_tip_raiser_action").setWeight(0.9682372f ).setCoordIndex(new MFInt3247().getArray()).setDisplacements(new MFVec3f48().getArray()))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_l_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {0.034f ,1.659f ,0.06f }))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_l_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {0.034f ,1.659f ,0.06f }))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {0.034f ,1.659f ,0.06f }))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_r_eyelid_joint").setName("l_eyelid_joint").setCenter(new float[] {-0.034f ,1.659f ,0.06f }))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_r_eyeball_joint").setName("l_eyeball_joint").setCenter(new float[] {-0.034f ,1.659f ,0.06f }))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_r_eyebrow_joint").setName("l_eyebrow_joint").setCenter(new float[] {-0.034f ,1.659f ,0.06f }))
                                                                .addChild(new HAnimJoint("Joe_skullbase").setDEF("Joe_temporomandibular").setName("temporomandibular").setCenter(new float[] {0.034f ,1.659f ,0.06f })))))))))
                                                  .addChild(new HAnimJoint("Joe_vc7").setDEF("Joe_l_sternoclavicular").setName("l_sternoclavicular").setCenter(new float[] {0.082f ,1.4488f ,-0.0353f }).setSkinCoordIndex(new MFInt3249().getArray()).setSkinCoordWeight(new MFFloat50().getArray())
                                                    .addChild(new HAnimJoint("Joe_l_sternoclavicular").setDEF("Joe_l_acromioclavicular").setName("l_acromioclavicular").setCenter(new float[] {0.0962f ,1.4269f ,-0.0424f }).setSkinCoordIndex(new MFInt3251().getArray()).setSkinCoordWeight(new MFFloat52().getArray())
                                                      .addChild(new HAnimJoint("Joe_l_acromioclavicular").setDEF("Joe_l_shoulder").setName("l_shoulder").setRotation(new float[] {-0.999999999999989f ,0f ,0f ,0.177942317505106f }).setCenter(new float[] {0.2f ,1.44f ,-0.04f }).setSkinCoordIndex(new MFInt3253().getArray()).setSkinCoordWeight(new MFFloat54().getArray())
                                                        .addChild(new HAnimJoint("Joe_l_shoulder").setDEF("Joe_l_elbow").setName("l_elbow").setCenter(new float[] {0.2f ,1.1388f ,-0.04f }).setSkinCoordIndex(new MFInt3255().getArray()).setSkinCoordWeight(new MFFloat56().getArray())
                                                          .addChild(new HAnimJoint("Joe_l_elbow").setDEF("Joe_l_wrist").setName("l_wrist").setCenter(new float[] {0.2f ,0.87f ,-0.04f }).setSkinCoordIndex(new MFInt3257().getArray()).setSkinCoordWeight(new MFFloat58().getArray())
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_thumb1").setName("l_thumb1").setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f }).setSkinCoordIndex(new MFInt3259().getArray()).setSkinCoordWeight(new MFFloat60().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_thumb1").setDEF("Joe_l_thumb2").setName("l_thumb2").setCenter(new float[] {0.1951f ,0.8226f ,0.0246f }).setSkinCoordIndex(new MFInt3261().getArray()).setSkinCoordWeight(new MFFloat62().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_thumb2").setDEF("Joe_l_thumb3").setName("l_thumb3").setCenter(new float[] {0.1955f ,0.8159f ,0.0464f }).setSkinCoordIndex(new MFInt3263().getArray()).setSkinCoordWeight(new MFFloat64().getArray()))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_index0").setName("l_index0").setCenter(new float[] {0.1983f ,0.8024f ,-0.028f }).setSkinCoordIndex(new MFInt3265().getArray()).setSkinCoordWeight(new MFFloat66().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_index0").setDEF("Joe_l_index1").setName("l_index1").setCenter(new float[] {0.1983f ,0.7815f ,-0.028f }).setSkinCoordIndex(new MFInt3267().getArray()).setSkinCoordWeight(new MFFloat68().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_index1").setDEF("Joe_l_index2").setName("l_index2").setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f }).setSkinCoordIndex(new MFInt3269().getArray()).setSkinCoordWeight(new MFFloat70().getArray())
                                                                  .addDisplacers(new HAnimDisplacer("Joe_l_index2").setDEF("Joe_L_finger_tips").setName("Joe_L_finger_tips_raiser_action").setWeight(0.2205769f ).setCoordIndex(new MFInt3271().getArray()).setDisplacements(new MFVec3f72().getArray()))
                                                                  .addChild(new HAnimJoint("Joe_l_index2").setDEF("Joe_l_index3").setName("l_index3").setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f }).setSkinCoordIndex(new MFInt3273().getArray()).setSkinCoordWeight(new MFFloat74().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_middle0").setName("l_middle0").setCenter(new float[] {0.1987f ,0.8029f ,-0.053f }).setSkinCoordIndex(new MFInt3275().getArray()).setSkinCoordWeight(new MFFloat76().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_middle0").setDEF("Joe_l_middle1").setName("l_middle1").setCenter(new float[] {0.1987f ,0.7818f ,-0.053f }).setSkinCoordIndex(new MFInt3277().getArray()).setSkinCoordWeight(new MFFloat78().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_middle1").setDEF("Joe_l_middle2").setName("l_middle2").setCenter(new float[] {0.2013f ,0.7273f ,-0.0503f }).setSkinCoordIndex(new MFInt3279().getArray()).setSkinCoordWeight(new MFFloat80().getArray())
                                                                  .addChild(new HAnimJoint("Joe_l_middle2").setDEF("Joe_l_middle3").setName("l_middle3").setCenter(new float[] {0.2026f ,0.7011f ,-0.0494f }).setSkinCoordIndex(new MFInt3281().getArray()).setSkinCoordWeight(new MFFloat82().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_ring0").setName("l_ring0").setCenter(new float[] {0.1956f ,0.8019f ,-0.0794f }).setSkinCoordIndex(new MFInt3283().getArray()).setSkinCoordWeight(new MFFloat84().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_ring0").setDEF("Joe_l_ring1").setName("l_ring1").setCenter(new float[] {0.1956f ,0.7815f ,-0.0794f }).setSkinCoordIndex(new MFInt3285().getArray()).setSkinCoordWeight(new MFFloat86().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_ring1").setDEF("Joe_l_ring2").setName("l_ring2").setCenter(new float[] {0.1973f ,0.7287f ,-0.0777f }).setSkinCoordIndex(new MFInt3287().getArray()).setSkinCoordWeight(new MFFloat88().getArray())
                                                                  .addChild(new HAnimJoint("Joe_l_ring2").setDEF("Joe_l_ring3").setName("l_ring3").setCenter(new float[] {0.1983f ,0.7045f ,-0.0767f }).setSkinCoordIndex(new MFInt3289().getArray()).setSkinCoordWeight(new MFFloat90().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_l_wrist").setDEF("Joe_l_pinky0").setName("l_pinky0").setCenter(new float[] {0.1925f ,0.8066f ,-0.1036f }).setSkinCoordIndex(new MFInt3291().getArray()).setSkinCoordWeight(new MFFloat92().getArray())
                                                              .addChild(new HAnimJoint("Joe_l_pinky0").setDEF("Joe_l_pinky1").setName("l_pinky1").setCenter(new float[] {0.1925f ,0.7866f ,-0.1036f }).setSkinCoordIndex(new MFInt3293().getArray()).setSkinCoordWeight(new MFFloat94().getArray())
                                                                .addChild(new HAnimJoint("Joe_l_pinky1").setDEF("Joe_l_pinky2").setName("l_pinky2").setCenter(new float[] {0.1938f ,0.7452f ,-0.1024f }).setSkinCoordIndex(new MFInt3295().getArray()).setSkinCoordWeight(new MFFloat96().getArray())
                                                                  .addChild(new HAnimJoint("Joe_l_pinky2").setDEF("Joe_l_pinky3").setName("l_pinky3").setCenter(new float[] {0.1948f ,0.7277f ,-0.1017f }).setSkinCoordIndex(new MFInt3297().getArray()).setSkinCoordWeight(new MFFloat98().getArray()))))))))))
                                                  .addChild(new HAnimJoint("Joe_vc7").setDEF("Joe_r_sternoclavicular").setName("r_sternoclavicular").setCenter(new float[] {-0.03f ,1.46f ,0f }).setSkinCoordIndex(new MFInt3299().getArray()).setSkinCoordWeight(new MFFloat100().getArray())
                                                    .addChild(new HAnimJoint("Joe_r_sternoclavicular").setDEF("Joe_r_acromioclavicular").setName("r_acromioclavicular").setCenter(new float[] {-0.09f ,1.41f ,-0.11f }).setSkinCoordIndex(new MFInt32101().getArray()).setSkinCoordWeight(new MFFloat102().getArray())
                                                      .addChild(new HAnimJoint("Joe_r_acromioclavicular").setDEF("Joe_r_shoulder").setName("r_shoulder").setRotation(new float[] {-0.999999999999989f ,0f ,0f ,0.177942317505106f }).setCenter(new float[] {-0.2f ,1.44f ,-0.04f }).setSkinCoordIndex(new MFInt32103().getArray()).setSkinCoordWeight(new MFFloat104().getArray())
                                                        .addChild(new HAnimJoint("Joe_r_shoulder").setDEF("Joe_r_elbow").setName("r_elbow").setCenter(new float[] {-0.2f ,1.1388f ,-0.04f }).setSkinCoordIndex(new MFInt32105().getArray()).setSkinCoordWeight(new MFFloat106().getArray())
                                                          .addChild(new HAnimJoint("Joe_r_elbow").setDEF("Joe_r_wrist").setName("r_wrist").setCenter(new float[] {-0.2f ,0.89f ,-0.04f }).setSkinCoordIndex(new MFInt32107().getArray()).setSkinCoordWeight(new MFFloat108().getArray())
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_thumb1").setName("r_thumb1").setCenter(new float[] {-0.2f ,0.85f ,0f }).setSkinCoordIndex(new MFInt32109().getArray()).setSkinCoordWeight(new MFFloat110().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_thumb1").setDEF("Joe_r_thumb2").setName("r_thumb2").setCenter(new float[] {-0.2f ,0.82f ,0.03f }).setSkinCoordIndex(new MFInt32111().getArray()).setSkinCoordWeight(new MFFloat112().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_thumb2").setDEF("Joe_r_thumb3").setName("r_thumb3").setCenter(new float[] {-0.2f ,0.8f ,0.05f }).setSkinCoordIndex(new MFInt32113().getArray()).setSkinCoordWeight(new MFFloat114().getArray()))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_index0").setName("r_index0").setCenter(new float[] {-0.2f ,0.84f ,-0.015f }).setSkinCoordIndex(new MFInt32115().getArray()).setSkinCoordWeight(new MFFloat116().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_index0").setDEF("Joe_r_index1").setName("r_index1").setCenter(new float[] {-0.2f ,0.793f ,-0.015f }).setSkinCoordIndex(new MFInt32117().getArray()).setSkinCoordWeight(new MFFloat118().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_index1").setDEF("Joe_r_index2").setName("r_index2").setCenter(new float[] {-0.2f ,0.745f ,-0.015f }).setSkinCoordIndex(new MFInt32119().getArray()).setSkinCoordWeight(new MFFloat120().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_index2").setDEF("Joe_r_index3").setName("r_index3").setCenter(new float[] {-0.2f ,0.72f ,-0.015f }).setSkinCoordIndex(new MFInt32121().getArray()).setSkinCoordWeight(new MFFloat122().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_middle0").setName("r_middle0").setCenter(new float[] {-0.2f ,0.835f ,-0.04f }).setSkinCoordIndex(new MFInt32123().getArray()).setSkinCoordWeight(new MFFloat124().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_middle0").setDEF("Joe_r_middle1").setName("r_middle1").setCenter(new float[] {-0.2f ,0.788f ,-0.04f }).setSkinCoordIndex(new MFInt32125().getArray()).setSkinCoordWeight(new MFFloat126().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_middle1").setDEF("Joe_r_middle2").setName("r_middle2").setCenter(new float[] {-0.2f ,0.74f ,-0.04f }).setSkinCoordIndex(new MFInt32127().getArray()).setSkinCoordWeight(new MFFloat128().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_middle2").setDEF("Joe_r_middle3").setName("r_middle3").setCenter(new float[] {-0.2f ,0.7142f ,-0.04f }).setSkinCoordIndex(new MFInt32129().getArray()).setSkinCoordWeight(new MFFloat130().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_ring0").setName("r_ring0").setCenter(new float[] {-0.2f ,0.835f ,-0.065f }).setSkinCoordIndex(new MFInt32131().getArray()).setSkinCoordWeight(new MFFloat132().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_ring0").setDEF("Joe_r_ring1").setName("r_ring1").setCenter(new float[] {-0.2f ,0.793f ,-0.065f }).setSkinCoordIndex(new MFInt32133().getArray()).setSkinCoordWeight(new MFFloat134().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_ring1").setDEF("Joe_r_ring2").setName("r_ring2").setCenter(new float[] {-0.2f ,0.74f ,-0.065f }).setSkinCoordIndex(new MFInt32135().getArray()).setSkinCoordWeight(new MFFloat136().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_ring2").setDEF("Joe_r_ring3").setName("r_ring3").setCenter(new float[] {-0.2f ,0.7177f ,-0.065f }).setSkinCoordIndex(new MFInt32137().getArray()).setSkinCoordWeight(new MFFloat138().getArray())))))
                                                            .addChild(new HAnimJoint("Joe_r_wrist").setDEF("Joe_r_pinky0").setName("r_pinky0").setCenter(new float[] {-0.2f ,0.84f ,-0.085f }).setSkinCoordIndex(new MFInt32139().getArray()).setSkinCoordWeight(new MFFloat140().getArray())
                                                              .addChild(new HAnimJoint("Joe_r_pinky0").setDEF("Joe_r_pinky1").setName("r_pinky1").setCenter(new float[] {-0.2f ,0.79f ,-0.085f }).setSkinCoordIndex(new MFInt32141().getArray()).setSkinCoordWeight(new MFFloat142().getArray())
                                                                .addChild(new HAnimJoint("Joe_r_pinky1").setDEF("Joe_r_pinky2").setName("r_pinky2").setCenter(new float[] {-0.2f ,0.755f ,-0.085f }).setSkinCoordIndex(new MFInt32143().getArray()).setSkinCoordWeight(new MFFloat144().getArray())
                                                                  .addChild(new HAnimJoint("Joe_r_pinky2").setDEF("Joe_r_pinky3").setName("r_pinky3").setCenter(new float[] {-0.2f ,0.735f ,-0.09f }).setSkinCoordIndex(new MFInt32145().getArray()).setSkinCoordWeight(new MFFloat146().getArray())))))))))))))))))))))))))))))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_humanoid_root"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_acromioclavicular"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_talocrural"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_elbow"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_eyeball_joint"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_eyebrow_joint"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_eyelid_joint"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_hip"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_index3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_knee"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_metatarsal"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_middle3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_midtarsal"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_pinky3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_ring3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_shoulder"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_sternoclavicular"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_subtalar"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_thumb1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_thumb2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_thumb3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_l_wrist"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_acromioclavicular"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_talocrural"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_elbow"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_eyeball_joint"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_eyebrow_joint"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_eyelid_joint"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_hip"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_index3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_knee"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_metatarsal"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_middle3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_midtarsal"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_pinky3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring0"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_ring3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_shoulder"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_sternoclavicular"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_subtalar"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_thumb1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_thumb2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_thumb3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_r_wrist"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_sacroiliac"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_skullbase"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_temporomandibular"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc4"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc5"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc6"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vc7"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl4"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vl5"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt1"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt10"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt11"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt12"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt2"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt3"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt4"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt5"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt6"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt7"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt8"))
            .addJoints(new HAnimJoint("Joe_Human").setUSE("Joe_vt9"))
            .setSkinCoord(new Coordinate().setDEF("Joe_SkinCoord").setPoint(new MFVec3f147().getArray().append(new MFVec3f148().getArray())))
            .addSkin(new Shape().setDEF("Joe_Shape")
              .setAppearance(new Appearance().setDEF("Joe_skin_Appearance")
                .setMaterial(new Material().setDEF("Joe_skin_Material").setDiffuseColor(new float[] {0.3f ,0.3f ,0.6f }).setEmissiveColor(new float[] {0.3f ,0.3f ,0.6f }))
                .setTexture(new ImageTexture().setDEF("JoeSkinImageTexture").setUrl(new MFString149().getArray()))
                .setTextureTransform(new TextureTransform().setDEF("KickTexTrans")))
              .setGeometry(new IndexedFaceSet().setDEF("Joe_skin_IndexedFaceSet").setCreaseAngle(3.14f ).setCoordIndex(new MFInt32150().getArray().append(new MFInt32151().getArray()).append(new MFInt32152().getArray()).append(new MFInt32153().getArray()))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f154().getArray()))
                .setCoord(new Coordinate().setUSE("Joe_SkinCoord"))))))
        .addChild(new Group().setDEF("SkullDisplacerAnimationGroup")
          .addChild(new TimeSensor().setDEF("skull_tipTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new ScalarInterpolator().setDEF("skull_tipInterp").setKey(new MFFloat155().getArray()).setKeyValue(new MFFloat156().getArray())))
        .addChild(new Group().setDEF("Joe_L_finger_tipsDisplacerAnimationGroup")
          .addChild(new TimeSensor().setDEF("L_finger_tipsTimer").setCycleInterval(4.73d).setLoop(true))
          .addChild(new ScalarInterpolator().setDEF("L_finger_tipsInterp").setKey(new MFFloat157().getArray()).setKeyValue(new MFFloat158().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_shoulderDispRotInterp").setKey(new MFFloat159().getArray()).setKeyValue(new MFRotation160().getArray())))
        .addChild(new Group()
          .addChild(new Transform().setScale(new float[] {0.2f ,0.2f ,0.2f })
            .addChild(new Shape().setUSE("AxisLinesShape")))
          .addChild(new Transform().setDEF("Circle0").setScale(new float[] {1.175f ,1f ,1.175f })
            .addChild(new Shape().setDEF("circle_Shape")
              .setAppearance(new Appearance().setDEF("circle0_Appearance")
                .setMaterial(new Material().setDEF("circle0_Material").setAmbientIntensity(0.9f ).setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.425f ,0.486f ,1f })))
              .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt32161().getArray())
                .setCoord(new Coordinate().setDEF("circle_Coordinates").setPoint(new MFVec3f162().getArray())))))
          .addChild(new Transform().setDEF("Circle1").setScale(new float[] {0.5f ,1f ,0.5f })
            .addChild(new Shape().setDEF("circle1_Shape")
              .setAppearance(new Appearance().setDEF("circle1_Appearance")
                .setMaterial(new Material().setDEF("circle1_Material").setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.424956f ,0.483976f ,1f })))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
          .addChild(new Transform().setDEF("Circle2").setScale(new float[] {0.25f ,1f ,0.25f })
            .addChild(new Shape().setDEF("circle2_Shape")
              .setAppearance(new Appearance().setDEF("circle2_Appearance")
                .setMaterial(new Material().setDEF("circle2_Material").setDiffuseColor(new float[] {0.9f ,0f ,0.7f }).setEmissiveColor(new float[] {0.424956f ,0.483976f ,1f })))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))
        .addChild(new ROUTE().setFromNode("skull_tipTimer").setFromField("fraction_changed").setToNode("skull_tipInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("skull_tipInterp").setFromField("value_changed").setToNode("Joe_skull_tip").setToField("set_weight"))
        .addChild(new ROUTE().setFromNode("L_finger_tipsTimer").setFromField("fraction_changed").setToNode("L_finger_tipsInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("L_finger_tipsInterp").setFromField("value_changed").setToNode("Joe_L_finger_tips").setToField("set_weight"))
        .addChild(new ROUTE().setFromNode("L_finger_tipsTimer").setFromField("fraction_changed").setToNode("L_shoulderDispRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("L_shoulderDispRotInterp").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("L_shoulderDispRotInterp").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
private class MFInt322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0.6f ,0f ,0f ,0f ,1f });
  }
}
private class MFVec3f4 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f });
  }
}
private class MFInt325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.35f ,0.35f ,1f });
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3217 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101,362,363});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f ,1f ,0.8f ,1f ,1f ,1f ,0.4f ,0.8f });
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369,98});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.6f ,0.2f ,1f ,1f ,1f ,1f ,1f ,1f ,0.2f });
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,0.7f ,1f ,0.8f });
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.15f ,0f ,0f ,0f ,0.15f ,-0.1f ,0f ,0.15f ,0.1f ,0f ,0.05f ,0f ,-0.02f ,0.05f ,-0.15f ,0f ,0f ,-0.05f ,0f ,0f ,0.15f ,0f ,0f ,0.05f ,0f ,0f ,0f ,0f ,-0.15f });
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
private class MFFloat54 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
private class MFFloat70 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {172,173,174});
  }
}
private class MFVec3f72 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-1.15f ,0f ,0f ,-1.15f ,0f ,0f ,-1.15f ,0f });
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
private class MFFloat76 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
private class MFFloat80 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f });
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,0.9f });
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,0.3f ,0.2f });
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
private class MFFloat106 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
private class MFFloat110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f });
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
private class MFFloat114 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0.5f ,0.5f ,1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
private class MFFloat120 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
private class MFFloat122 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
private class MFFloat124 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
private class MFFloat126 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
private class MFFloat128 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
private class MFFloat130 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
private class MFFloat132 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f });
  }
}
private class MFInt32133 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
private class MFFloat134 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,0.5f ,0.5f });
  }
}
private class MFInt32135 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
private class MFFloat136 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32137 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
private class MFFloat138 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt32139 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,0.5f });
  }
}
private class MFInt32141 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
private class MFFloat142 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt32143 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt32145 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
private class MFFloat146 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFVec3f147 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.77f ,0f ,0f ,1.665f ,0.09f ,-0.033f ,1.62f ,0.087f ,0.033f ,1.62f ,0.087f ,0f ,1.55f ,0.097f ,-0.077f ,1.64f ,-0.01f ,-0.0527f ,1.58f ,0.015f ,0.077f ,1.64f ,-0.01f ,0.0527f ,1.58f ,0.015f ,0f ,1.625f ,-0.0925f ,-0.03f ,1.46f ,0.035f ,0f ,1.44f ,0.03f ,0.03f ,1.46f ,0.035f ,-0.1135f ,1.318f ,0.095f ,0.1135f ,1.318f ,0.095f ,0f ,1.25f ,0.113f ,-0.087f ,1.19f ,0.09f ,-0.0935f ,1.03f ,0.075f ,0.087f ,1.19f ,0.09f ,0.0935f ,1.03f ,0.075f ,-0.1425f ,1.065f ,0.0033f ,-0.15f ,0.9f ,-0.01f ,0.1425f ,1.065f ,0.0033f ,0.15f ,0.9f ,-0.01f ,0f ,1.53f ,-0.084f ,0.0049f ,1.1908f ,-0.1113f ,-0.0773f ,1.019f ,-0.12f ,0.0773f ,1.019f ,-0.12f ,0.005f ,1.0915f ,-0.1091f ,-0.178f ,1.4825f ,-0.0625f ,-0.17f ,1.38f ,0.007f ,-0.1884f ,0.8676f ,-0.036f ,-0.16f ,1.38f ,-0.127f ,-0.2f ,1.1388f ,-0.08f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.23f ,1.133f ,-0.055f ,-0.1977f ,0.8169f ,-0.0177f ,-0.1941f ,0.6772f ,-0.0423f ,-0.2117f ,0.8562f ,-0.0584f ,-0.1929f ,0.789f ,-0.1064f ,0.175f ,1.4825f ,-0.06f ,0.17f ,1.38f ,0.007f ,0.1901f ,0.8645f ,-0.0415f ,0.16f ,1.38f ,-0.125f ,0.2f ,1.1388f ,-0.08f ,0.165f ,1.1388f ,-0.04f ,0.244f ,1.1388f ,-0.04f ,0.23f ,1.133f ,-0.055f ,0.2009f ,0.8139f ,-0.0237f ,0.2056f ,0.6743f ,-0.0482f ,0.2142f ,0.8529f ,-0.0648f ,0.1929f ,0.786f ,-0.1122f ,-0.1f ,0.4913f ,-0.03f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.165f ,0.01f ,0.12f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.09f ,0.056f ,0.0125f ,-0.115f ,0.02f ,0.122f ,-0.115f ,0.04f ,-0.055f ,-0.11f ,0.011f ,0.19f ,0.0993f ,0.4881f ,-0.0309f ,0.17f ,0.466f ,0f ,0.05f ,0.4867f ,0f ,0.165f ,0.01f ,0.12f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.09f ,0.056f ,0.0125f ,0.115f ,0.02f ,0.122f ,0.115f ,0.04f ,-0.055f ,0.11f ,0.011f ,0.19f ,0f ,0.875f ,0f ,-0.0646f ,1.5149f ,-0.038f ,0.0646f ,1.5149f ,-0.038f ,0f ,1.07225f ,0.09f ,-0.11f ,1.427f ,-0.1375f ,-0.235f ,1.42f ,-0.0625f ,0.11f ,1.427f ,-0.1375f ,0.235f ,1.42f ,-0.0625f ,0f ,1.41f ,-0.145f ,0f ,0.925f ,0.08f ,-0.087f ,1.19f ,-0.09f ,0.087f ,1.19f ,-0.09f ,0.172f ,1.32f ,-0.03f ,-0.172f ,1.32f ,-0.03f ,0.15f ,1.23f ,-0.015f ,-0.15f ,1.23f ,-0.015f ,0.079f ,0.92f ,-0.14f ,0.1f ,0.9f ,0.077f ,-0.079f ,0.92f ,-0.14f ,-0.1f ,0.9f ,0.075f ,0f ,0.87f ,0f ,0.171f ,0.65f ,0f ,0.02f ,0.65f ,0f ,0.1f ,0.65f ,-0.08f ,0.1f ,0.65f ,0.07f ,-0.171f ,0.65f ,0f ,-0.02f ,0.65f ,0f ,-0.1f ,0.65f ,-0.08f ,-0.1f ,0.65f ,0.07f ,0.25f ,1.27f ,-0.04f ,0.17f ,1.27f ,-0.04f ,0.2f ,1.27f ,-0.09f ,0.2f ,1.27f ,0.02f ,0.244f ,1.1388f ,-0.04f ,0.165f ,1.1388f ,-0.04f ,0.2f ,1.1388f ,-0.08f ,0.2f ,1.1388f ,-0.013f ,0.225f ,1f ,-0.01f ,0.225f ,1f ,-0.07f ,0.185f ,1f ,-0.01f ,0.185f ,1f ,-0.07f ,0.2f ,1.1388f ,-0.04f ,0.225f ,0.92f ,-0.04f ,0.175f ,0.92f ,-0.04f ,0.2f ,0.92f ,-0.065f ,0.2f ,0.92f ,-0.015f ,0.225f ,0.89f ,-0.04f ,0.175f ,0.89f ,-0.04f ,0.2f ,0.89f ,-0.065f ,0.2f ,0.89f ,-0.015f ,0.218f ,0.86f ,-0.04f ,0.184f ,0.86f ,-0.04f ,0.2f ,0.87f ,-0.07f ,0.2f ,0.87f ,0f ,0.21f ,0.85f ,0f ,0.1854f ,0.85f ,0f ,0.212f ,0.84f ,-0.015f ,0.183f ,0.84f ,-0.015f ,0.213f ,0.835f ,-0.04f ,0.19f ,0.835f ,-0.04f ,0.211f ,0.835f ,-0.065f ,0.192f ,0.835f ,-0.065f ,0.208f ,0.84f ,-0.085f ,0.19f ,0.84f ,-0.085f ,0.2f ,0.84f ,-0.095f ,0.215f ,0.82f ,0f ,0.193f ,0.815f ,0.005f ,0.198f ,0.8f ,0.012f ,0.21f ,0.82f ,0.03f ,0.19f ,0.82f ,0.03f ,0.2f ,0.835f ,0.039f ,0.212f ,0.8f ,0.05f ,0.188f ,0.8f ,0.05f ,0.2f ,0.807f ,0.057f ,0.2f ,0.793f ,0.035f ,0.2f ,0.774f ,0.076f ,0.212f ,0.78f ,0.07f ,0.188f ,0.78f ,0.07f ,0.2f ,0.785f ,0.075f ,0.2f ,0.77f ,0.062f ,0.215f ,0.793f ,-0.015f ,0.187f ,0.793f ,-0.015f ,0.2f ,0.793f ,-0.005f ,0.215f ,0.788f ,-0.04f ,0.187f ,0.788f ,-0.04f ,0.215f ,0.793f ,-0.065f ,0.187f ,0.793f ,-0.065f ,0.21f ,0.79f ,-0.085f ,0.19f ,0.79f ,-0.085f ,0.2f ,0.79f ,-0.095f ,0.19f ,0.77f ,-0.0275f ,0.19f ,0.77f ,-0.0525f ,0.19f ,0.78f ,-0.0775f ,0.212f ,0.745f ,-0.015f ,0.188f ,0.745f ,-0.02f ,0.2f ,0.745f ,-0.0255f ,0.2f ,0.745f ,-0.0045f ,0.211f ,0.72f ,-0.015f ,0.189f ,0.72f ,-0.015f ,0.2f ,0.72f ,-0.0252f ,0.2f ,0.72f ,-0.0048f ,0.21f ,0.695f ,-0.015f ,0.19f ,0.695f ,-0.015f ,0.2f ,0.695f ,-0.025f ,0.2f ,0.695f ,-0.005f ,0.2f ,0.685f ,-0.015f ,0.215f ,0.74f ,-0.04f ,0.185f ,0.74f ,-0.04f ,0.2f ,0.74f ,-0.055f ,0.2f ,0.74f ,-0.025f ,0.21f ,0.7142f ,-0.04f ,0.19f ,0.7142f ,-0.04f ,0.2f ,0.7142f ,-0.053f ,0.2f ,0.7142f ,-0.027f ,0.21f ,0.68f ,-0.04f ,0.19f ,0.68f ,-0.04f ,0.2f ,0.68f ,-0.05f ,0.2f ,0.68f ,-0.03f ,0.2f ,0.67f ,-0.04f ,0.212f ,0.74f ,-0.065f ,0.188f ,0.74f ,-0.065f ,0.2f ,0.74f ,-0.0756f ,0.2f ,0.74f ,-0.0542f ,0.21f ,0.7177f ,-0.065f ,0.19f ,0.7177f ,-0.065f ,0.2f ,0.7177f ,-0.0751f ,0.2f ,0.7177f ,-0.0549f ,0.21f ,0.695f ,-0.065f ,0.19f ,0.695f ,-0.065f ,0.2f ,0.695f ,-0.075f ,0.2f ,0.695f ,-0.055f ,0.2f ,0.685f ,-0.065f ,0.211f ,0.755f ,-0.085f ,0.189f ,0.755f ,-0.085f ,0.2f ,0.755f ,-0.0952f ,0.2f ,0.755f ,-0.0748f ,0.21f ,0.735f ,-0.085f ,0.19f ,0.735f ,-0.085f ,0.2f ,0.735f ,-0.0951f ,0.2f ,0.735f ,-0.0749f ,0.21f ,0.72f ,-0.085f ,0.19f ,0.72f ,-0.085f ,0.2f ,0.72f ,-0.095f ,0.2f ,0.72f ,-0.075f ,0.2f ,0.71f ,-0.085f ,-0.23f ,1.23f ,-0.04f ,-0.16f ,1.23f ,-0.04f ,-0.2f ,1.235f ,-0.105f ,-0.2f ,1.255f ,0.02f ,-0.244f ,1.1388f ,-0.04f ,-0.165f ,1.1388f ,-0.04f ,-0.2f ,1.1388f ,-0.08f ,-0.2f ,1.1388f ,0.013f ,-0.225f ,1f ,-0.01f ,-0.225f ,1f ,-0.07f ,-0.185f ,1f ,-0.01f ,-0.185f ,1f ,-0.07f ,-0.2f ,1.1388f ,-0.04f ,-0.225f ,0.92f ,-0.04f ,-0.175f ,0.92f ,-0.04f ,-0.2f ,0.92f ,-0.065f ,-0.2f ,0.92f ,-0.015f ,-0.225f ,0.89f ,-0.04f ,-0.175f ,0.89f ,-0.04f ,-0.2f ,0.89f ,-0.065f ,-0.2f ,0.89f ,-0.015f ,-0.218f ,0.86f ,-0.04f ,-0.184f ,0.86f ,-0.04f ,-0.2f ,0.87f ,-0.07f ,-0.2f ,0.87f ,0f ,-0.21f ,0.85f ,0f ,-0.1854f ,0.85f ,0f ,-0.212f ,0.84f ,-0.015f ,-0.183f ,0.84f ,-0.015f ,-0.213f ,0.835f ,-0.04f ,-0.19f ,0.835f ,-0.04f ,-0.211f ,0.835f ,-0.065f ,-0.192f ,0.835f ,-0.065f ,-0.208f ,0.84f ,-0.085f ,-0.19f ,0.84f ,-0.085f ,-0.2f ,0.84f ,-0.095f ,-0.215f ,0.82f ,0f ,-0.193f ,0.815f ,0.005f ,-0.198f ,0.8f ,0.012f ,-0.21f ,0.82f ,0.03f ,-0.19f ,0.82f ,0.03f ,-0.2f ,0.835f ,0.039f ,-0.212f ,0.8f ,0.05f ,-0.188f ,0.8f ,0.05f ,-0.2f ,0.807f ,0.057f ,-0.2f ,0.793f ,0.035f ,-0.2f ,0.774f ,0.076f ,-0.212f ,0.78f ,0.07f ,-0.188f ,0.78f ,0.07f ,-0.2f ,0.785f ,0.075f ,-0.2f ,0.77f ,0.062f ,-0.215f ,0.793f ,-0.015f ,-0.187f ,0.793f ,-0.015f ,-0.2f ,0.793f ,-0.005f ,-0.215f ,0.788f ,-0.04f ,-0.187f ,0.788f ,-0.04f ,-0.215f ,0.793f ,-0.065f ,-0.187f ,0.793f ,-0.065f ,-0.21f ,0.79f ,-0.085f ,-0.19f ,0.79f ,-0.085f ,-0.2f ,0.79f ,-0.095f ,-0.19f ,0.77f ,-0.0275f });
  }
}
private class MFVec3f148 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f ,0.77f ,-0.0525f ,-0.19f ,0.78f ,-0.0775f ,-0.212f ,0.745f ,-0.015f ,-0.188f ,0.745f ,-0.02f ,-0.2f ,0.745f ,-0.0255f ,-0.2f ,0.745f ,-0.0045f ,-0.211f ,0.72f ,-0.015f ,-0.189f ,0.72f ,-0.015f ,-0.2f ,0.72f ,-0.0252f ,-0.2f ,0.72f ,-0.0048f ,-0.21f ,0.695f ,-0.015f ,-0.19f ,0.695f ,-0.015f ,-0.2f ,0.695f ,-0.025f ,-0.2f ,0.695f ,-0.005f ,-0.2f ,0.685f ,-0.015f ,-0.215f ,0.74f ,-0.04f ,-0.185f ,0.74f ,-0.04f ,-0.2f ,0.74f ,-0.055f ,-0.2f ,0.74f ,-0.025f ,-0.21f ,0.7142f ,-0.04f ,-0.19f ,0.7142f ,-0.04f ,-0.2f ,0.7142f ,-0.053f ,-0.2f ,0.7142f ,-0.027f ,-0.21f ,0.68f ,-0.04f ,-0.19f ,0.68f ,-0.04f ,-0.2f ,0.68f ,-0.05f ,-0.2f ,0.68f ,-0.03f ,-0.2f ,0.67f ,-0.04f ,-0.212f ,0.74f ,-0.065f ,-0.188f ,0.74f ,-0.065f ,-0.2f ,0.74f ,-0.0756f ,-0.2f ,0.74f ,-0.0542f ,-0.21f ,0.7177f ,-0.065f ,-0.19f ,0.7177f ,-0.065f ,-0.2f ,0.7177f ,-0.0751f ,-0.2f ,0.7177f ,-0.0549f ,-0.21f ,0.695f ,-0.065f ,-0.19f ,0.695f ,-0.065f ,-0.2f ,0.695f ,-0.075f ,-0.2f ,0.695f ,-0.055f ,-0.2f ,0.685f ,-0.065f ,-0.211f ,0.755f ,-0.085f ,-0.189f ,0.755f ,-0.085f ,-0.2f ,0.755f ,-0.0952f ,-0.2f ,0.755f ,-0.0748f ,-0.21f ,0.735f ,-0.085f ,-0.19f ,0.735f ,-0.085f ,-0.2f ,0.735f ,-0.0951f ,-0.2f ,0.735f ,-0.0749f ,-0.21f ,0.72f ,-0.085f ,-0.19f ,0.72f ,-0.085f ,-0.2f ,0.72f ,-0.095f ,-0.2f ,0.72f ,-0.075f ,-0.2f ,0.71f ,-0.085f ,0.115f ,0.466f ,0.06f ,0.115f ,0.466f ,-0.055f ,0.15f ,0.466f ,0f ,0.05f ,0.466f ,0f ,0.17f ,0.3f ,0f ,0.06f ,0.3f ,0f ,0.1f ,0.3f ,-0.05f ,0.1f ,0.3f ,0.05f ,0.15f ,0.07f ,0f ,0.085f ,0.086f ,0.0125f ,0.115f ,0.069f ,-0.045f ,0.117f ,0.0975f ,0.0615f ,0.1375f ,0.006f ,-0.03f ,0.095f ,0.006f ,-0.03f ,0.115f ,0.015f ,-0.045f ,0.115f ,0.06f ,0.1f ,0.115f ,0f ,0.07f ,0.165f ,0f ,0.07f ,0.095f ,0f ,0.07f ,0.115f ,0.04f ,0.13f ,0.125f ,0f ,0.12f ,0.165f ,0f ,0.12f ,0.087f ,0f ,0.122f ,0.09f ,0.012f ,0.188f ,0.11f ,0.011f ,0.19f ,0.128f ,0.011f ,0.185f ,0.142f ,0.011f ,0.178f ,0.154f ,0.01f ,0.168f ,-0.115f ,0.466f ,0.06f ,-0.115f ,0.466f ,-0.055f ,-0.17f ,0.466f ,0f ,-0.05f ,0.466f ,0f ,-0.17f ,0.3f ,0f ,-0.06f ,0.3f ,0f ,-0.1f ,0.3f ,-0.05f ,-0.1f ,0.3f ,0.05f ,-0.15f ,0.07f ,0f ,-0.085f ,0.086f ,0.0125f ,-0.115f ,0.069f ,-0.045f ,-0.117f ,0.0975f ,0.0615f ,-0.1375f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.095f ,0.006f ,-0.03f ,-0.115f ,0.06f ,0.1f ,-0.115f ,0f ,0.07f ,-0.165f ,0f ,0.07f ,-0.095f ,0f ,0.07f ,-0.115f ,0.04f ,0.13f ,-0.125f ,0f ,0.12f ,-0.165f ,0f ,0.12f ,-0.087f ,0f ,0.122f ,-0.09f ,0.012f ,0.188f ,-0.11f ,0.011f ,0.19f ,-0.128f ,0.011f ,0.185f ,-0.142f ,0.011f ,0.178f ,-0.154f ,0.01f ,0.168f });
  }
}
private class MFString149 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"bodytexture28.png"});
  }
}
private class MFInt32150 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
private class MFInt32151 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
private class MFInt32152 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
private class MFInt32153 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
private class MFVec2f154 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f ,0.5f ,0f ,0f ,0.5f ,0f ,0f ,0.5f ,0.5f });
  }
}
private class MFFloat155 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.35f ,0.6f ,0.7f ,0.85f ,0.88f ,0.94f ,0.97f ,1f });
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f ,0f ,0.2f ,0.4f ,1f ,0f ,1f ,0.4f ,0f });
  }
}
private class MFFloat157 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.1f ,0.2f ,0.35f ,0.6f ,0.7f ,0.85f ,0.88f ,0.94f ,0.97f ,1f });
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f ,0f ,0.2f ,0.4f ,1f ,0f ,1f ,0.4f ,0f });
  }
}
private class MFFloat159 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.4f ,1f });
  }
}
private class MFRotation160 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-1f ,0f ,0f ,1f ,0f ,0f ,1f ,0f });
  }
}
private class MFInt32161 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
private class MFVec3f162 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f ,0f ,0f ,0.995f ,0f ,-0.105f ,0.979f ,0f ,-0.208f ,0.951f ,0f ,-0.309f ,0.914f ,0f ,-0.407f ,0.866f ,0f ,-0.5f ,0.809f ,0f ,-0.588f ,0.743f ,0f ,-0.669f ,0.669f ,0f ,-0.743f ,0.588f ,0f ,-0.809f ,0.5f ,0f ,-0.866f ,0.407f ,0f ,-0.914f ,0.309f ,0f ,-0.951f ,0.208f ,0f ,-0.978f ,0.105f ,0f ,-0.995f ,0f ,0f ,-1f ,-0.105f ,0f ,-0.994522f ,-0.208f ,0f ,-0.978f ,-0.309f ,0f ,-0.951f ,-0.407f ,0f ,-0.914f ,-0.5f ,0f ,-0.866f ,-0.588f ,0f ,-0.809f ,-0.669f ,0f ,-0.743f ,-0.743f ,0f ,-0.669f ,-0.809f ,0f ,-0.588f ,-0.866f ,0f ,-0.5f ,-0.914f ,0f ,-0.407f ,-0.951f ,0f ,-0.309f ,-0.978f ,0f ,-0.208f ,-0.995f ,0f ,-0.105f ,-1f ,0f ,0f ,-0.995f ,0f ,0.105f ,-0.978f ,0f ,0.208f ,-0.951f ,0f ,0.309f ,-0.914f ,0f ,0.407f ,-0.866f ,0f ,0.5f ,-0.809f ,0f ,0.588f ,-0.743f ,0f ,0.669f ,-0.669f ,0f ,0.743f ,-0.588f ,0f ,0.809f ,-0.5f ,0f ,0.866f ,-0.407f ,0f ,0.914f ,-0.309f ,0f ,0.951f ,-0.208f ,0f ,0.978f ,-0.105f ,0f ,0.995f ,0f ,0f ,1f ,0.105f ,0f ,0.995f ,0.208f ,0f ,0.978f ,0.309f ,0f ,0.951f ,0.407f ,0f ,0.914f ,0.5f ,0f ,0.866f ,0.588f ,0f ,0.809f ,0.669f ,0f ,0.743f ,0.743f ,0f ,0.669f ,0.809f ,0f ,0.588f ,0.866f ,0f ,0.5f ,0.914f ,0f ,0.407f ,0.951f ,0f ,0.309f ,0.978f ,0f ,0.208f ,0.995f ,0f ,0.104f ,1f ,0f ,0f });
  }
}
}
