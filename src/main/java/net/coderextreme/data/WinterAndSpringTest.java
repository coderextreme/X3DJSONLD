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
public class WinterAndSpringTest {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new WinterAndSpringTest().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/WinterAndSpringTest.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("WinterAndSpringTest.x3d"))
        .addMeta(new meta().setName("description").setContent("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."))
        .addMeta(new meta().setName("creator").setContent("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("May through September 2023"))
        .addMeta(new meta().setName("modified").setContent("2 June 2023"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"))
        .addChild(new NavigationInfo().setDEF("Start_NavigationInfo").setHeadlight(false))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Male").setPosition(new float[] {0f,1f,-2f}))
        .addChild(new Background().setDEF("gray_Background"))
        .addChild(new Background().setDEF("dark_gray_Background"))
        .addChild(new Background().setDEF("black_Background"))
        .addChild(new Background().setDEF("blue_Background"))
        .addChild(new SpotLight().setDEF("light1").setAmbientIntensity(0.7f).setBeamWidth(1.5f).setColor(new float[] {0.8f,0.8f,1f}).setCutOffAngle(0.6f).setDirection(new float[] {0f,0f,0f}).setLocation(new float[] {0f,3f,3f}).setRadius(10f))
        .addChild(new PointLight().setDEF("light2").setAmbientIntensity(0.7f).setColor(new float[] {0.8f,0.8f,1f}).setLocation(new float[] {0f,10f,-7f}))
        .addComments("External from the Humanoid viewpoints")
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setCenterOfRotation(new float[] {0f,0.85f,0f}).setDescription("Scene_Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,3.06f}))
        .addChild(new Viewpoint().setDEF("Scene_IFrontView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Front View").setPosition(new float[] {0f,0.8f,2.58f}))
        .addChild(new Viewpoint().setDEF("Scene_OldMan_ISideView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Side View").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {-2.6f,1.5f,1f}))
        .addChild(new Viewpoint().setDEF("Scene_ISideView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Side View").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {-5f,1.5f,1f}))
        .addChild(new Viewpoint().setDEF("Scene_Full_ISideView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Side View").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {-10f,1.5f,1f}))
        .addChild(new Viewpoint().setDEF("Scene_OneBush_ISideView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Side View").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {-20f,1.5f,1f}))
        .addChild(new Viewpoint().setDEF("Scene_TwoBush_ISideView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Side View").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {-10f,1.5f,1f}))
        .addChild(new Viewpoint().setDEF("Scene_BackView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Back View").setOrientation(new float[] {0f,1f,0f,3.14f}).setPosition(new float[] {0f,1.5f,-5f}))
        .addChild(new Viewpoint().setDEF("Scene_OldMan_BackView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Back View").setOrientation(new float[] {0f,1f,0f,3.14f}).setPosition(new float[] {0f,1.5f,-2.5f}))
        .addChild(new Viewpoint().setDEF("Scene_Full_BackView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Back View").setOrientation(new float[] {0f,1f,15f,3.14f}).setPosition(new float[] {0f,1.5f,-20f}))
        .addChild(new Viewpoint().setDEF("Scene_TopView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Top View").setOrientation(new float[] {1f,0f,0f,-1.5708f}).setPosition(new float[] {0f,3.5f,0f}))
        .addChild(new Group().setDEF("OldMan_Humanoid")
          .addChild(new HAnimHumanoid("OldMan_Humanoid").setName("Walk").setDEF("OldMan").setLoa(3).setVersion("2.0")
            .setMetadata(new MetadataSet().setName("warnings").setReference("HAnim")
              .setMetadata(new MetadataString().setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new MFString1().getArray())))
            .addSkeleton(new HAnimJoint("OldMan").setName("humanoid_root").setDEF("OldMan_humanoid_root").setUlimit(new MFFloat2().getArray()).setLlimit(new MFFloat3().getArray())
              .addComments("TODO center='x 0.9155 z'")
              .addChild(new HAnimSegment("OldMan_humanoid_root").setName("sacrum").setDEF("OldMan_sacrum")
                .addChild(new HAnimSite("OldMan_sacrum").setName("RootBack_view").setDEF("OldMan_RootBack_view")
                  .addChild(new Transform().setDEF("hanimcordsys").setScale(new float[] {0.175f,0.175f,0.175f})
                    .addChild(new Viewpoint().setDEF("ViewBodyRootAxes").setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                    .addChild(new Shape().setDEF("AxisLinesShape")
                      .addComments("RGB lines showing XYZ axes")
                      .setGeometry(new IndexedLineSet().setColorIndex(new MFInt324().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt325().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))
                        .setColor(new Color().setColor(new MFColor7().getArray()))))
                    .addChild(new Shape().setDEF("OldMan_Shape")
                      .setAppearance(new Appearance().setDEF("OldMan_skin_Appearance")
                        .setMaterial(new Material().setDEF("OldMan_skin_Material").setDiffuseColor(new float[] {0.3f,0.3f,0.6f}).setEmissiveColor(new float[] {0.3f,0.3f,0.6f}))
                        .setTexture(new ImageTexture().setDEF("OldManSkinImageTexture").setUrl(new MFString8().getArray()))
                        .setTextureTransform(new TextureTransform().setDEF("KickTextureTransform")))
                      .setGeometry(new IndexedFaceSet().setDEF("OldMan_skin_IndexedFaceSet"))))))
              .addChild(new HAnimJoint("OldMan_humanoid_root").setName("sacroiliac").setDEF("OldMan_sacroiliac").setUlimit(new MFFloat9().getArray()).setLlimit(new MFFloat10().getArray())
                .addComments("TODO center='x 0.952 z'")
                .addComments("High hip")
                .addChild(new HAnimJoint("OldMan_sacroiliac").setName("l_hip").setDEF("OldMan_l_hip").setUlimit(new MFFloat11().getArray()).setLlimit(new MFFloat12().getArray())
                  .addComments("TODO center='x 0.879 z' Low hip")
                  .addChild(new HAnimJoint("OldMan_l_hip").setName("l_knee").setDEF("OldMan_l_knee").setUlimit(new MFFloat13().getArray()).setLlimit(new MFFloat14().getArray())
                    .addComments("center='x 0.461 z'")
                    .addChild(new HAnimJoint("OldMan_l_knee").setName("l_talocrural").setDEF("OldMan_l_talocrural").setUlimit(new MFFloat15().getArray()).setLlimit(new MFFloat16().getArray())
                      .addComments("Ankle")
                      .addChild(new HAnimJoint("OldMan_l_talocrural").setName("l_tarsometatarsal_2").setDEF("Joe_l_tarsometatarsal_2").setUlimit(new MFFloat17().getArray()).setLlimit(new MFFloat18().getArray())
                        .addChild(new HAnimJoint("Joe_l_tarsometatarsal_2").setName("l_metatarsophalangeal_2").setDEF("Joe_l_metatarsophalangeal_2").setUlimit(new MFFloat19().getArray()).setLlimit(new MFFloat20().getArray())
                          .addChild(new HAnimJoint("Joe_l_metatarsophalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setDEF("Joe_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.115f,0.02f,0.122f}).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray()))))))
                  .addChild(new HAnimJoint("OldMan_l_hip").setName("l_hip").setDEF("OldMan_r_hip").setUlimit(new MFFloat23().getArray()).setLlimit(new MFFloat24().getArray())
                    .addComments("Low hip")
                    .addChild(new HAnimJoint("OldMan_r_hip").setName("l_knee").setDEF("OldMan_r_knee").setUlimit(new MFFloat25().getArray()).setLlimit(new MFFloat26().getArray()))
                    .addChild(new HAnimJoint("OldMan_r_hip").setName("l_talocrural").setDEF("OldMan_r_talocrural").setUlimit(new MFFloat27().getArray()).setLlimit(new MFFloat28().getArray())
                      .addComments("Ankle")
                      .addChild(new HAnimJoint("OldMan_r_talocrural").setName("r_tarsometatarsal_2").setDEF("Joe_r_tarsometatarsal_2").setCenter(new float[] {-0.1f,0.015f,-0.01f}).setSkinCoordIndex(new MFInt3229().getArray()).setSkinCoordWeight(new MFFloat30().getArray()).setUlimit(new MFFloat31().getArray()).setLlimit(new MFFloat32().getArray())
                        .addChild(new HAnimJoint("Joe_r_tarsometatarsal_2").setName("r_metatarsophalangeal_2").setDEF("Joe_r_metatarsophalangeal_2").setCenter(new float[] {-0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt3233().getArray()).setSkinCoordWeight(new MFFloat34().getArray()).setUlimit(new MFFloat35().getArray()).setLlimit(new MFFloat36().getArray())
                          .addChild(new HAnimJoint("Joe_r_metatarsophalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setDEF("Joe_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.1f,0.01f,0.14f}).setSkinCoordIndex(new MFInt3237().getArray()).setSkinCoordWeight(new MFFloat38().getArray()).setUlimit(new MFFloat39().getArray()).setLlimit(new MFFloat40().getArray())))))))
                .addChild(new HAnimJoint("OldMan_sacroiliac").setName("vl5").setDEF("OldMan_vl5").setUlimit(new MFFloat41().getArray()).setLlimit(new MFFloat42().getArray())
                  .addComments("Abdomen")
                  .addChild(new HAnimJoint("OldMan_vl5").setName("vl4").setDEF("MeshName_vl4").setUlimit(new MFFloat43().getArray()).setLlimit(new MFFloat44().getArray())
                    .addChild(new HAnimJoint("MeshName_vl4").setName("vl3").setDEF("OldMan_vl3").setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                      .addComments("center='x 1.098 z'")
                      .addComments("Low=' ist='")
                      .addChild(new HAnimJoint("OldMan_vl3").setName("vl2").setDEF("MeshName_vl2").setUlimit(new MFFloat47().getArray()).setLlimit(new MFFloat48().getArray())
                        .addChild(new HAnimJoint("MeshName_vl2").setName("vl1").setDEF("OldMan_vl1").setUlimit(new MFFloat49().getArray()).setLlimit(new MFFloat50().getArray())
                          .addComments("center='x 1.171 z'")
                          .addComments("High waist")
                          .addChild(new HAnimJoint("OldMan_vl1").setName("vt12").setDEF("MeshName_vt12").setUlimit(new MFFloat51().getArray()).setLlimit(new MFFloat52().getArray())
                            .addChild(new HAnimJoint("MeshName_vt12").setName("vt11").setDEF("OldMan_vt11").setUlimit(new MFFloat53().getArray()).setLlimit(new MFFloat54().getArray())
                              .addComments("Ribcage='")
                              .addChild(new HAnimJoint("OldMan_vt11").setName("vt10").setDEF("MeshName_vt10").setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                                .addChild(new HAnimJoint("MeshName_vt10").setName("vt9").setDEF("MeshName_vt9").setUlimit(new MFFloat57().getArray()).setLlimit(new MFFloat58().getArray())
                                  .addChild(new HAnimJoint("MeshName_vt9").setName("vt8").setDEF("MeshName_vt8").setUlimit(new MFFloat59().getArray()).setLlimit(new MFFloat60().getArray())
                                    .addChild(new HAnimJoint("MeshName_vt8").setName("vt7").setDEF("OldMan_vt7").setUlimit(new MFFloat61().getArray()).setLlimit(new MFFloat62().getArray())
                                      .addComments("Sternum='")
                                      .addChild(new HAnimJoint("OldMan_vt7").setName("vt6").setDEF("MeshName_vt6").setUlimit(new MFFloat63().getArray()).setLlimit(new MFFloat64().getArray())
                                        .addChild(new HAnimJoint("MeshName_vt6").setName("vt5").setDEF("MeshName_vt5").setUlimit(new MFFloat65().getArray()).setLlimit(new MFFloat66().getArray())
                                          .addChild(new HAnimJoint("MeshName_vt5").setName("vt4").setDEF("OldMan_vt4").setUlimit(new MFFloat67().getArray()).setLlimit(new MFFloat68().getArray())
                                            .addComments("Chest")
                                            .addChild(new HAnimJoint("OldMan_vt4").setName("vt3").setDEF("MeshName_vt3").setUlimit(new MFFloat69().getArray()).setLlimit(new MFFloat70().getArray())
                                              .addChild(new HAnimJoint("MeshName_vt3").setName("vt2").setDEF("OldMan_vt2").setUlimit(new MFFloat71().getArray()).setLlimit(new MFFloat72().getArray())
                                                .addComments("High Chest")
                                                .addChild(new HAnimJoint("OldMan_vt2").setName("vt1").setDEF("MeshName_vt1").setUlimit(new MFFloat73().getArray()).setLlimit(new MFFloat74().getArray())
                                                  .addChild(new HAnimJoint("MeshName_vt1").setName("vc7").setDEF("OldMan_vc7").setUlimit(new MFFloat75().getArray()).setLlimit(new MFFloat76().getArray())
                                                    .addComments("Low neck")
                                                    .addChild(new HAnimJoint("OldMan_vc7").setName("vc6").setDEF("MeshName_vc6").setUlimit(new MFFloat77().getArray()).setLlimit(new MFFloat78().getArray())
                                                      .addChild(new HAnimJoint("MeshName_vc6").setName("vc5").setDEF("MeshName_vc5").setUlimit(new MFFloat79().getArray()).setLlimit(new MFFloat80().getArray())
                                                        .addChild(new HAnimJoint("MeshName_vc5").setName("vc4").setDEF("OldMan_vc4").setUlimit(new MFFloat81().getArray()).setLlimit(new MFFloat82().getArray())
                                                          .addComments("Mid=' ck='")
                                                          .addChild(new HAnimJoint("OldMan_vc4").setName("vc3").setDEF("MeshName_vc3").setUlimit(new MFFloat83().getArray()).setLlimit(new MFFloat84().getArray())
                                                            .addChild(new HAnimJoint("MeshName_vc3").setName("vc2").setDEF("MeshName_vc2").setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                                                              .addChild(new HAnimJoint("MeshName_vc2").setName("vc1").setDEF("OldMan_vc1").setUlimit(new MFFloat87().getArray()).setLlimit(new MFFloat88().getArray())
                                                                .addComments("High=' ck='")
                                                                .addChild(new HAnimJoint("OldMan_vc1").setName("skullbase").setDEF("OldMan_skullbase").setUlimit(new MFFloat89().getArray()).setLlimit(new MFFloat90().getArray())
                                                                  .addDisplacers(new HAnimDisplacer("OldMan_skullbase").setName("skull_tip_raiser_action").setDEF("Joe_skull_tip_raiser_action").setCoordIndex(new MFInt3291().getArray()).setDisplacements(new MFVec3f92().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setName("l_eyelid_joint").setDEF("OldMan_l_eyelid_joint").setUlimit(new MFFloat93().getArray()).setLlimit(new MFFloat94().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setName("l_eyeball_joint").setDEF("OldMan_l_eyeball_joint").setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setName("l_eyebrow_joint").setDEF("OldMan_l_eyebrow_joint").setUlimit(new MFFloat97().getArray()).setLlimit(new MFFloat98().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setName("r_eyelid_joint").setDEF("OldMan_r_eyelid_joint").setUlimit(new MFFloat99().getArray()).setLlimit(new MFFloat100().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setName("r_eyeball_joint").setDEF("OldMan_r_eyeball_joint").setUlimit(new MFFloat101().getArray()).setLlimit(new MFFloat102().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setName("r_eyebrow_joint").setDEF("OldMan_r_eyebrow_joint").setUlimit(new MFFloat103().getArray()).setLlimit(new MFFloat104().getArray()))
                                                                  .addChild(new HAnimJoint("OldMan_skullbase").setName("temporomandibular").setDEF("OldMan_temporomandibular").setUlimit(new MFFloat105().getArray()).setLlimit(new MFFloat106().getArray()))))))))))
                                                  .addChild(new HAnimJoint("MeshName_vt1").setDEF("OldMan_l_acromioclavicular").setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                                                    .addChild(new HAnimJoint("OldMan_l_acromioclavicular").setName("l_acromioclavicular").setDEF("OldMan_l_sternoclavicular").setUlimit(new MFFloat109().getArray()).setLlimit(new MFFloat110().getArray())
                                                      .addChild(new HAnimJoint("OldMan_l_sternoclavicular").setName("l_shoulder").setDEF("OldMan_l_shoulder").setUlimit(new MFFloat111().getArray()).setLlimit(new MFFloat112().getArray())
                                                        .addChild(new HAnimJoint("OldMan_l_shoulder").setName("l_elbow").setDEF("OldMan_l_elbow").setUlimit(new MFFloat113().getArray()).setLlimit(new MFFloat114().getArray())
                                                          .addChild(new HAnimJoint("OldMan_l_elbow").setName("l_radiocarpal").setDEF("OldMan_l_radiocarpal").setUlimit(new MFFloat115().getArray()).setLlimit(new MFFloat116().getArray())
                                                            .addChild(new HAnimJoint("OldMan_l_radiocarpal").setName("l_carpometacarpal_1").setDEF("OldMan_l_carpometacarpal_1").setUlimit(new MFFloat117().getArray()).setLlimit(new MFFloat118().getArray())
                                                              .addChild(new HAnimJoint("OldMan_l_carpometacarpal_1").setName("l_metacarpophalangeal_1").setDEF("OldMan_l_metacarpophalangeal_1").setUlimit(new MFFloat119().getArray()).setLlimit(new MFFloat120().getArray())
                                                                .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_1").setName("l_carpal_interphalangeal_1").setDEF("OldMan_l_carpal_interphalangeal_1").setUlimit(new MFFloat121().getArray()).setLlimit(new MFFloat122().getArray())))
                                                              .addChild(new HAnimJoint("OldMan_l_carpometacarpal_1").setName("l_carpometacarpal_2").setDEF("OldMan_l_carpometacarpal_2").setUlimit(new MFFloat123().getArray()).setLlimit(new MFFloat124().getArray())
                                                                .addChild(new HAnimJoint("OldMan_l_carpometacarpal_2").setName("l_metacarpophalangeal_2").setDEF("OldMan_l_metacarpophalangeal_2").setUlimit(new MFFloat125().getArray()).setLlimit(new MFFloat126().getArray())
                                                                  .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setDEF("OldMan_l_carpal_proximal_interphalangeal_2").setUlimit(new MFFloat127().getArray()).setLlimit(new MFFloat128().getArray())
                                                                    .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setDEF("OldMan_l_carpal_distal_interphalangeal_2").setUlimit(new MFFloat129().getArray()).setLlimit(new MFFloat130().getArray()))))
                                                                .addChild(new HAnimJoint("OldMan_l_carpometacarpal_2").setName("l_carpometacarpal_3").setDEF("OldMan_l_carpometacarpal_3").setUlimit(new MFFloat131().getArray()).setLlimit(new MFFloat132().getArray())
                                                                  .addChild(new HAnimJoint("OldMan_l_carpometacarpal_3").setName("l_metacarpophalangeal_3").setDEF("OldMan_l_metacarpophalangeal_3").setUlimit(new MFFloat133().getArray()).setLlimit(new MFFloat134().getArray())
                                                                    .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setDEF("OldMan_l_carpal_proximal_interphalangeal_3").setUlimit(new MFFloat135().getArray()).setLlimit(new MFFloat136().getArray())
                                                                      .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setDEF("OldMan_l_carpal_distal_interphalangeal_3").setUlimit(new MFFloat137().getArray()).setLlimit(new MFFloat138().getArray()))))
                                                                  .addChild(new HAnimJoint("OldMan_l_carpometacarpal_3").setName("l_carpometacarpal_4").setDEF("OldMan_l_carpometacarpal_4").setUlimit(new MFFloat139().getArray()).setLlimit(new MFFloat140().getArray())
                                                                    .addChild(new HAnimJoint("OldMan_l_carpometacarpal_4").setName("l_metacarpophalangeal_4").setDEF("OldMan_l_metacarpophalangeal_4").setUlimit(new MFFloat141().getArray()).setLlimit(new MFFloat142().getArray())
                                                                      .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setDEF("OldMan_l_carpal_proximal_interphalangeal_4").setUlimit(new MFFloat143().getArray()).setLlimit(new MFFloat144().getArray())
                                                                        .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setDEF("OldMan_l_carpal_distal_interphalangeal_4").setUlimit(new MFFloat145().getArray()).setLlimit(new MFFloat146().getArray()))))
                                                                    .addChild(new HAnimJoint("OldMan_l_carpometacarpal_4").setName("l_carpometacarpal_5").setDEF("OldMan_l_carpometacarpal_5").setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                                                                      .addChild(new HAnimJoint("OldMan_l_carpometacarpal_5").setName("l_metacarpophalangeal_5").setDEF("OldMan_l_metacarpophalangeal_5").setUlimit(new MFFloat149().getArray()).setLlimit(new MFFloat150().getArray())
                                                                        .addChild(new HAnimJoint("OldMan_l_metacarpophalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setDEF("OldMan_l_carpal_proximal_interphalangeal_5").setUlimit(new MFFloat151().getArray()).setLlimit(new MFFloat152().getArray())
                                                                          .addChild(new HAnimJoint("OldMan_l_carpal_proximal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setDEF("OldMan_l_carpal_distal_interphalangeal_5").setUlimit(new MFFloat153().getArray()).setLlimit(new MFFloat154().getArray())))))))))
                                                            .addChild(new HAnimJoint("OldMan_l_radiocarpal").setName("r_sternoclavicular").setDEF("OldMan_r_sternoclavicular").setUlimit(new MFFloat155().getArray()).setLlimit(new MFFloat156().getArray())
                                                              .addChild(new HAnimJoint("OldMan_r_sternoclavicular").setName("r_acromioclavicular").setDEF("OldMan_r_acromioclavicular").setUlimit(new MFFloat157().getArray()).setLlimit(new MFFloat158().getArray())
                                                                .addChild(new HAnimJoint("OldMan_r_acromioclavicular").setName("r_shoulder").setDEF("OldMan_r_shoulder").setUlimit(new MFFloat159().getArray()).setLlimit(new MFFloat160().getArray())
                                                                  .addChild(new HAnimJoint("OldMan_r_shoulder").setName("r_elbow").setDEF("OldMan_r_elbow").setUlimit(new MFFloat161().getArray()).setLlimit(new MFFloat162().getArray())
                                                                    .addChild(new HAnimJoint("OldMan_r_elbow").setName("r_radiocarpal").setDEF("OldMan_r_radiocarpal").setUlimit(new MFFloat163().getArray()).setLlimit(new MFFloat164().getArray())
                                                                      .addChild(new HAnimJoint("OldMan_r_radiocarpal").setName("r_carpometacarpal_1").setDEF("OldMan_r_carpometacarpal_1").setUlimit(new MFFloat165().getArray()).setLlimit(new MFFloat166().getArray())
                                                                        .addChild(new HAnimJoint("OldMan_r_carpometacarpal_1").setName("r_metacarpophalangeal_1").setDEF("OldMan_r_metacarpophalangeal_1").setUlimit(new MFFloat167().getArray()).setLlimit(new MFFloat168().getArray())
                                                                          .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_1").setName("r_carpal_interphalangeal_1").setDEF("OldMan_r_carpal_interphalangeal_1").setUlimit(new MFFloat169().getArray()).setLlimit(new MFFloat170().getArray())))
                                                                        .addChild(new HAnimJoint("OldMan_r_carpometacarpal_1").setName("r_carpometacarpal_2").setDEF("OldMan_r_carpometacarpal_2").setUlimit(new MFFloat171().getArray()).setLlimit(new MFFloat172().getArray())
                                                                          .addChild(new HAnimJoint("OldMan_r_carpometacarpal_2").setName("r_metacarpophalangeal_2").setDEF("OldMan_r_metacarpophalangeal_2").setUlimit(new MFFloat173().getArray()).setLlimit(new MFFloat174().getArray())
                                                                            .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setDEF("OldMan_r_carpal_proximal_interphalangeal_2").setUlimit(new MFFloat175().getArray()).setLlimit(new MFFloat176().getArray())
                                                                              .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setDEF("OldMan_r_carpal_distal_interphalangeal_2").setUlimit(new MFFloat177().getArray()).setLlimit(new MFFloat178().getArray()))))
                                                                          .addChild(new HAnimJoint("OldMan_r_carpometacarpal_2").setName("r_carpometacarpal_3").setDEF("OldMan_r_carpometacarpal_3").setUlimit(new MFFloat179().getArray()).setLlimit(new MFFloat180().getArray())
                                                                            .addChild(new HAnimJoint("OldMan_r_carpometacarpal_3").setName("r_metacarpophalangeal_3").setDEF("OldMan_r_metacarpophalangeal_3").setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())
                                                                              .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setDEF("OldMan_r_carpal_proximal_interphalangeal_3").setUlimit(new MFFloat183().getArray()).setLlimit(new MFFloat184().getArray())
                                                                                .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setDEF("OldMan_r_carpal_distal_interphalangeal_3").setUlimit(new MFFloat185().getArray()).setLlimit(new MFFloat186().getArray()))))
                                                                            .addChild(new HAnimJoint("OldMan_r_carpometacarpal_3").setName("r_carpometacarpal_4").setDEF("OldMan_r_carpometacarpal_4").setUlimit(new MFFloat187().getArray()).setLlimit(new MFFloat188().getArray())
                                                                              .addChild(new HAnimJoint("OldMan_r_carpometacarpal_4").setName("r_metacarpophalangeal_4").setDEF("OldMan_r_metacarpophalangeal_4").setUlimit(new MFFloat189().getArray()).setLlimit(new MFFloat190().getArray())
                                                                                .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setDEF("OldMan_r_carpal_proximal_interphalangeal_4").setUlimit(new MFFloat191().getArray()).setLlimit(new MFFloat192().getArray())
                                                                                  .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setDEF("OldMan_r_carpal_distal_interphalangeal_4").setUlimit(new MFFloat193().getArray()).setLlimit(new MFFloat194().getArray()))))
                                                                              .addChild(new HAnimJoint("OldMan_r_carpometacarpal_4").setName("r_carpometacarpal_5").setDEF("OldMan_r_carpometacarpal_5").setUlimit(new MFFloat195().getArray()).setLlimit(new MFFloat196().getArray())
                                                                                .addChild(new HAnimJoint("OldMan_r_carpometacarpal_5").setName("r_metacarpophalangeal_5").setDEF("OldMan_r_metacarpophalangeal_5").setUlimit(new MFFloat197().getArray()).setLlimit(new MFFloat198().getArray())
                                                                                  .addChild(new HAnimJoint("OldMan_r_metacarpophalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setDEF("OldMan_r_carpal_proximal_interphalangeal_5").setUlimit(new MFFloat199().getArray()).setLlimit(new MFFloat200().getArray())
                                                                                    .addChild(new HAnimJoint("OldMan_r_carpal_proximal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setDEF("OldMan_r_carpal_distal_interphalangeal_5").setUlimit(new MFFloat201().getArray()).setLlimit(new MFFloat202().getArray())))))))))))))))))))))))))))))))))))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Humanoid LOA3 skeleton plus others","Lots points"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ignore"});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2});
  }
}
protected class MFInt325 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f});
  }
}
protected class MFColor7 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat10 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat11 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat15 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat16 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat17 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat18 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat19 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat20 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat23 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat24 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat26 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat27 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat36 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
protected class MFFloat38 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat39 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat40 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat41 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat42 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat44 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat46 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat47 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat48 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat50 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat51 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat52 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat53 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat54 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat56 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat58 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat59 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat60 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat62 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat63 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat64 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat65 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat66 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat67 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat68 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat70 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat71 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat72 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat74 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat75 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat76 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat77 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat78 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat80 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat81 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat82 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat83 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat84 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat88 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat89 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat90 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFVec3f92 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.15f,0f,0f,0f,0.15f,-0.1f,0f,0.15f,0.1f,0f,0.05f,0f,-0.02f,0.05f,-0.15f,0f,0f,-0.05f,0f,0f,0.15f,0f,0f,0.05f,0f,0f,0f,0f,-0.15f});
  }
}
protected class MFFloat93 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat94 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat95 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat96 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat97 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat99 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat100 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat101 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat105 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat106 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat107 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat109 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat111 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat113 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat114 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat115 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat117 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat118 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat119 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat121 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat123 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat124 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat125 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat127 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat129 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat130 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat131 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat132 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat133 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat135 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat136 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat137 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat138 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat139 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat141 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat142 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat143 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat144 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat145 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat146 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat147 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat149 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat150 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat151 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat152 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat153 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat154 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat155 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat156 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat157 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat158 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat159 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat160 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat161 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat162 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat163 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat164 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat165 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat166 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat167 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat168 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat169 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat170 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat171 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat172 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat173 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat174 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat175 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat176 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat177 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat179 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat180 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat181 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat184 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat185 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat186 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat187 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat188 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat189 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat190 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat191 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat192 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat193 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat194 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat195 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat196 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat197 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat198 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat199 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat200 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat201 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat202 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
}
