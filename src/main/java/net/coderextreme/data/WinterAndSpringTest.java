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
public class WinterAndSpringTest implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new WinterAndSpringTest().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/WinterAndSpringTest.new.java.x3d");
    model.toFileJSON("../data/WinterAndSpringTest.new.java.x3dj");
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
        .addMeta(new meta().setName("title").setContent("WinterAndSpringTest.x3d"))
        .addMeta(new meta().setName("description").setContent("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."))
        .addMeta(new meta().setName("creator").setContent("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("1 May 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:21:02 GMT"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations").setInfo(new MFString0().getArray()))
        .addChild(new NavigationInfo().setDEF("Start_NavigationInfo"))
        .addChild(new Viewpoint().setDescription("Male").setPosition(new float[] {0f ,1f ,-2f }).setCenterOfRotation(new float[] {0f ,1f ,0f }))
        .addChild(new Background().setDEF("gray_Background"))
        .addChild(new Background().setDEF("dark_gray_Background"))
        .addChild(new Background().setDEF("black_Background"))
        .addChild(new Background().setDEF("blue_Background"))
        .addChild(new SpotLight().setDEF("light1").setColor(new float[] {0.8f ,0.8f ,1f }).setAmbientIntensity(0.7f ).setLocation(new float[] {0f ,3f ,3f }).setDirection(new float[] {0f ,0f ,0f }).setRadius(10f ).setBeamWidth(1.5f ).setCutOffAngle(0.6f ))
        .addChild(new PointLight().setDEF("light2").setColor(new float[] {0.8f ,0.8f ,1f }).setAmbientIntensity(0.7f ).setLocation(new float[] {0f ,10f ,-7f }))
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setDescription("Scene_Inclined View").setPosition(new float[] {1.62f ,1.05f ,3.06f }).setOrientation(new float[] {-0.113f ,0.993f ,0.0347f ,0.671f }).setCenterOfRotation(new float[] {0f ,0.85f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_IFrontView").setDescription("Scene_Front View").setPosition(new float[] {0f ,0.8f ,2.58f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_OldMan_ISideView").setDescription("Scene_Side View").setPosition(new float[] {-2.6f ,1.5f ,1f }).setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_ISideView").setDescription("Scene_Side View").setPosition(new float[] {-5f ,1.5f ,1f }).setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_Full_ISideView").setDescription("Scene_Side View").setPosition(new float[] {-10f ,1.5f ,1f }).setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_OneBush_ISideView").setDescription("Scene_Side View").setPosition(new float[] {-20f ,1.5f ,1f }).setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_TwoBush_ISideView").setDescription("Scene_Side View").setPosition(new float[] {-10f ,1.5f ,1f }).setOrientation(new float[] {0f ,1f ,0f ,1.5708f }).setCenterOfRotation(new float[] {0f ,0.8f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_BackView").setDescription("Scene_Back View").setPosition(new float[] {0f ,1.5f ,-5f }).setOrientation(new float[] {0f ,1f ,0f ,3.14f }).setCenterOfRotation(new float[] {0f ,1.5f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_OldMan_BackView").setDescription("Scene_Back View").setPosition(new float[] {0f ,1.5f ,-2.5f }).setOrientation(new float[] {0f ,1f ,0f ,3.14f }).setCenterOfRotation(new float[] {0f ,1.5f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_Full_BackView").setDescription("Scene_Back View").setPosition(new float[] {0f ,1.5f ,-20f }).setOrientation(new float[] {0f ,1f ,15f ,3.14f }).setCenterOfRotation(new float[] {0f ,1.5f ,0f }))
        .addChild(new Viewpoint().setDEF("Scene_TopView").setDescription("Scene_Top View").setPosition(new float[] {0f ,3.5f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,-1.5708f }).setCenterOfRotation(new float[] {0f ,1.5f ,0f }))
        .addChild(new Group().setDEF("OldMan_Humanoid")
          .addChild(new HAnimHumanoid("OldMan_Humanoid").setDEF("OldMan").setName("Walk").setLoa(3)
            .setMetadata(new MetadataSet().setName("warnings").setReference("HAnim")
              .setMetadata(new MetadataString().setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new MFString1().getArray())))
            .addSkeleton(new HAnimJoint("OldMan").setDEF("OldMan_humanoid_root").setName("humanoid_root")
              .addChild(new HAnimSegment("OldMan_humanoid_root").setDEF("OldMan_sacrum").setName("sacrum")
                .addChild(new HAnimSite("OldMan_sacrum").setDEF("OldMan_RootBack_view").setName("RootBack_view")
                  .addChild(new Transform().setDEF("hanimcordsys").setScale(new float[] {0.175f ,0.175f ,0.175f })
                    .addChild(new Viewpoint().setDEF("ViewBodyRootAxes").setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                    .addChild(new Shape().setDEF("AxisLinesShape")
                      .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new MFInt322().getArray()).setCoordIndex(new MFInt323().getArray())
                        .setColor(new Color().setColor(new MFColor4().getArray()))
                        .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray()))))
                    .addChild(new Shape().setDEF("OldMan_Shape")
                      .setAppearance(new Appearance().setDEF("OldMan_skin_Appearance")
                        .setMaterial(new Material().setDEF("OldMan_skin_Material").setDiffuseColor(new float[] {0.3f ,0.3f ,0.6f }).setEmissiveColor(new float[] {0.3f ,0.3f ,0.6f }))
                        .setTexture(new ImageTexture().setDEF("OldManSkinImageTexture").setUrl(new MFString6().getArray()))
                        .setTextureTransform(new TextureTransform().setDEF("KickTextureTransform")))
                      .setGeometry(new IndexedFaceSet().setDEF("OldMan_skin_IndexedFaceSet"))))))
              .addChild(new HAnimJoint("OldMan_humanoid_root").setDEF("OldMan_sacroiliac").setName("sacroiliac")
                .addChild(new HAnimJoint("OldMan_sacroiliac").setDEF("OldMan_l_hip").setName("l_hip")
                  .addChild(new HAnimJoint("OldMan_l_hip").setDEF("OldMan_l_knee").setName("l_knee")
                    .addChild(new HAnimJoint("OldMan_l_knee").setDEF("OldMan_l_talocrural").setName("l_talocrural")
                      .addChild(new HAnimJoint("OldMan_l_talocrural").setDEF("Joe_l_tarsometatarsal_2").setName("l_tarsometatarsal_2")
                        .addChild(new HAnimJoint("Joe_l_tarsometatarsal_2").setDEF("Joe_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2")
                          .addChild(new HAnimJoint("Joe_l_metatarsophalangeal_2").setDEF("Joe_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.115f ,0.02f ,0.122f }))))))
                  .addChild(new HAnimJoint("OldMan_l_hip").setDEF("OldMan_r_hip").setName("l_hip")
                    .addChild(new HAnimJoint("OldMan_r_hip").setDEF("OldMan_r_knee").setName("l_knee"))
                    .addChild(new HAnimJoint("OldMan_r_hip").setDEF("OldMan_r_talocrural").setName("l_talocrural")
                      .addChild(new HAnimJoint("OldMan_r_talocrural").setDEF("Joe_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(new float[] {-0.1f ,0.015f ,-0.01f }).setSkinCoordIndex(new MFInt327().getArray()).setSkinCoordWeight(new MFFloat8().getArray())
                        .addChild(new HAnimJoint("Joe_r_tarsometatarsal_2").setDEF("Joe_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(new float[] {-0.115f ,0.037f ,0.09f }).setSkinCoordIndex(new MFInt329().getArray()).setSkinCoordWeight(new MFFloat10().getArray())
                          .addChild(new HAnimJoint("Joe_r_metatarsophalangeal_2").setDEF("Joe_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.1f ,0.01f ,0.14f }).setSkinCoordIndex(new MFInt3211().getArray()).setSkinCoordWeight(new MFFloat12().getArray())))))))
                .addChild(new HAnimJoint("OldMan_sacroiliac").setDEF("OldMan_vl5").setName("vl5")
                  .addChild(new HAnimJoint("OldMan_vl5").setDEF("MeshName_vl4").setName("vl4")
                    .addChild(new HAnimJoint("MeshName_vl4").setDEF("OldMan_vl3").setName("vl3")
                      .addChild(new HAnimJoint("OldMan_vl3").setDEF("MeshName_vl2").setName("vl2")
                        .addChild(new HAnimJoint("MeshName_vl2").setDEF("OldMan_vl1").setName("vl1")
                          .addChild(new HAnimJoint("OldMan_vl1").setDEF("MeshName_vt12").setName("vt12")
                            .addChild(new HAnimJoint("MeshName_vt12").setDEF("OldMan_vt11").setName("vt11")
                              .addChild(new HAnimJoint("OldMan_vt11").setDEF("MeshName_vt10").setName("vt10")
                                .addChild(new HAnimJoint("MeshName_vt10").setDEF("MeshName_vt9").setName("vt9")
                                  .addChild(new HAnimJoint("MeshName_vt9").setDEF("MeshName_vt8").setName("vt8")
                                    .addChild(new HAnimJoint("MeshName_vt8").setDEF("OldMan_vt7").setName("vt7")
                                      .addChild(new HAnimJoint("OldMan_vt7").setDEF("MeshName_vt6").setName("vt6")
                                        .addChild(new HAnimJoint("MeshName_vt6").setDEF("MeshName_vt5").setName("vt5")
                                          .addChild(new HAnimJoint("MeshName_vt5").setDEF("OldMan_vt4").setName("vt4")
                                            .addChild(new HAnimJoint("OldMan_vt4").setDEF("MeshName_vt3").setName("vt3")
                                              .addChild(new HAnimJoint("MeshName_vt3").setDEF("OldMan_vt2").setName("vt2")
                                                .addChild(new HAnimJoint("OldMan_vt2").setDEF("MeshName_vt1").setName("vt1")
                                                  .addChild(new HAnimJoint("MeshName_vt1").setDEF("OldMan_vc7").setName("vc7")
                                                    .addChild(new HAnimJoint("OldMan_vc7").setDEF("MeshName_vc6").setName("vc6")
                                                      .addChild(new HAnimJoint("MeshName_vc6").setDEF("MeshName_vc5").setName("vc5")
                                                        .addChild(new HAnimJoint("MeshName_vc5").setDEF("OldMan_vc4").setName("vc4")
                                                          .addChild(new HAnimJoint("OldMan_vc4").setDEF("MeshName_vc3").setName("vc3")
                                                            .addChild(new HAnimJoint("MeshName_vc3").setDEF("MeshName_vc2").setName("vc2")
                                                              .addChild(new HAnimJoint("MeshName_vc2").setDEF("OldMan_vc1").setName("vc1")
                                                                .addChild(new HAnimJoint("OldMan_vc1").setDEF("OldMan_skullbase").setName("skullbase")
                                                                  .addDisplacers(new HAnimDisplacer("OldMan_skullbase").setDEF("Joe_skull_tip_raiser_action").setName("skull_tip_raiser_action").setCoordIndex(new MFInt3213().getArray()).setDisplacements(new MFVec3f14().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setDEF("OldMan_l_eyelid_joint").setName("l_eyelid_joint"))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setDEF("OldMan_l_eyeball_joint").setName("l_eyeball_joint"))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setDEF("OldMan_l_eyebrow_joint").setName("l_eyebrow_joint"))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setDEF("OldMan_r_eyelid_joint").setName("r_eyelid_joint"))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setDEF("OldMan_r_eyeball_joint").setName("r_eyeball_joint"))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setDEF("OldMan_r_eyebrow_joint").setName("r_eyebrow_joint"))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setDEF("OldMan_temporomandibular").setName("temporomandibular"))))))))))
                                                  .addChild(new HAnimJoint("MeshName_vt1").setDEF("OldMan_l_acromioclavicular").setName("l_acromioclavicular")
                                                    .addChild(new HAnimJoint("OldMan_l_acromioclavicular").setDEF("OldMan_l_sternoclavicular").setName("l_sternoclavicular")
                                                      .addChild(new HAnimJoint("OldMan_l_sternoclavicular").setDEF("OldMan_l_shoulder").setName("l_shoulder")
                                                        .addChild(new HAnimJoint("OldMan_l_shoulder").setDEF("OldMan_l_elbow").setName("l_elbow")
                                                          .addChild(new HAnimJoint("OldMan_l_elbow").setDEF("OldMan_l_radiocarpal").setName("l_radiocarpal")
                                                            .addChild(new HAnimJoint("OldMan_l_radiocarpal").setDEF("OldMan_l_carpometacarpal_1").setName("l_carpometacarpal_1")
                                                              .addChild(new HAnimJoint("OldMan_l_carpometacarpal_1").setDEF("OldMan_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1")
                                                                .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_1").setDEF("OldMan_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1")))
                                                              .addChild(new HAnimJoint("OldMan_l_carpometacarpal_1").setDEF("OldMan_l_carpometacarpal_2").setName("l_carpometacarpal_2")
                                                                .addChild(new HAnimJoint("OldMan_l_carpometacarpal_2").setDEF("OldMan_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2")
                                                                  .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_2").setDEF("OldMan_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2")
                                                                    .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_2").setDEF("OldMan_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2"))))
                                                                .addChild(new HAnimJoint("OldMan_l_carpometacarpal_2").setDEF("OldMan_l_carpometacarpal_3").setName("l_carpometacarpal_3")
                                                                  .addChild(new HAnimJoint("OldMan_l_carpometacarpal_3").setDEF("OldMan_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3")
                                                                    .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_3").setDEF("OldMan_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3")
                                                                      .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_3").setDEF("OldMan_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3"))))
                                                                  .addChild(new HAnimJoint("OldMan_l_carpometacarpal_3").setDEF("OldMan_l_carpometacarpal_4").setName("l_carpometacarpal_4")
                                                                    .addChild(new HAnimJoint("OldMan_l_carpometacarpal_4").setDEF("OldMan_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4")
                                                                      .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_4").setDEF("OldMan_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4")
                                                                        .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_4").setDEF("OldMan_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4"))))
                                                                    .addChild(new HAnimJoint("OldMan_l_carpometacarpal_4").setDEF("OldMan_l_carpometacarpal_5").setName("l_carpometacarpal_5")
                                                                      .addChild(new HAnimJoint("OldMan_l_carpometacarpal_5").setDEF("OldMan_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5")
                                                                        .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_5").setDEF("OldMan_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5")
                                                                          .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_5").setDEF("OldMan_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5")))))))))
                                                            .addChild(new HAnimJoint("OldMan_l_radiocarpal").setDEF("OldMan_r_sternoclavicular").setName("r_sternoclavicular")
                                                              .addChild(new HAnimJoint("OldMan_r_sternoclavicular").setDEF("OldMan_r_acromioclavicular").setName("r_acromioclavicular")
                                                                .addChild(new HAnimJoint("OldMan_r_acromioclavicular").setDEF("OldMan_r_shoulder").setName("r_shoulder")
                                                                  .addChild(new HAnimJoint("OldMan_r_shoulder").setDEF("OldMan_r_elbow").setName("r_elbow")
                                                                    .addChild(new HAnimJoint("OldMan_r_elbow").setDEF("OldMan_r_radiocarpal").setName("r_radiocarpal")
                                                                      .addChild(new HAnimJoint("OldMan_r_radiocarpal").setDEF("OldMan_r_carpometacarpal_1").setName("r_carpometacarpal_1")
                                                                        .addChild(new HAnimJoint("OldMan_r_carpometacarpal_1").setDEF("OldMan_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1")
                                                                          .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_1").setDEF("OldMan_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1")))
                                                                        .addChild(new HAnimJoint("OldMan_r_carpometacarpal_1").setDEF("OldMan_r_carpometacarpal_2").setName("r_carpometacarpal_2")
                                                                          .addChild(new HAnimJoint("OldMan_r_carpometacarpal_2").setDEF("OldMan_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2")
                                                                            .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_2").setDEF("OldMan_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2")
                                                                              .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_2").setDEF("OldMan_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2"))))
                                                                          .addChild(new HAnimJoint("OldMan_r_carpometacarpal_2").setDEF("OldMan_r_carpometacarpal_3").setName("r_carpometacarpal_3")
                                                                            .addChild(new HAnimJoint("OldMan_r_carpometacarpal_3").setDEF("OldMan_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3")
                                                                              .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_3").setDEF("OldMan_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3")
                                                                                .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_3").setDEF("OldMan_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3"))))
                                                                            .addChild(new HAnimJoint("OldMan_r_carpometacarpal_3").setDEF("OldMan_r_carpometacarpal_4").setName("r_carpometacarpal_4")
                                                                              .addChild(new HAnimJoint("OldMan_r_carpometacarpal_4").setDEF("OldMan_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4")
                                                                                .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_4").setDEF("OldMan_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4")
                                                                                  .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_4").setDEF("OldMan_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4"))))
                                                                              .addChild(new HAnimJoint("OldMan_r_carpometacarpal_4").setDEF("OldMan_r_carpometacarpal_5").setName("r_carpometacarpal_5")
                                                                                .addChild(new HAnimJoint("OldMan_r_carpometacarpal_5").setDEF("OldMan_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5")
                                                                                  .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_5").setDEF("OldMan_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5")
                                                                                    .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_5").setDEF("OldMan_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5")))))))))))))))))))))))))))))))))))))))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Humanoid LOA3 skeleton plus others","Lots points"});
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
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,0f ,0f ,0f ,0.6f ,0f ,0f ,0f ,1f });
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,0f ,0f ,1f });
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f });
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f });
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f ,1f });
  }
}
private class MFInt3213 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
private class MFVec3f14 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.15f ,0f ,0f ,0f ,0.15f ,-0.1f ,0f ,0.15f ,0.1f ,0f ,0.05f ,0f ,-0.02f ,0.05f ,-0.15f ,0f ,0f ,-0.05f ,0f ,0f ,0.15f ,0f ,0f ,0.05f ,0f ,0f ,0f ,0f ,-0.15f });
  }
}
}
