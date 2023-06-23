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
        .addComponent(new component().setName("HAnim").setLevel(1))
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
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"))
        .addChild(new NavigationInfo().setDEF("Start_NavigationInfo").setHeadlight(false).setSpeed(2.5f))
        .addChild(new Background().setDEF("blue_Background"))
        .addChild(new SpotLight().setDEF("light1").setAmbientIntensity(0.7f).setBeamWidth(1.5f).setColor(new float[] {0.8f,0.8f,1f}).setCutOffAngle(0.6f).setDirection(new float[] {0f,0f,0f}).setLocation(new float[] {0f,3f,3f}).setRadius(10f))
        .addChild(new PointLight().setDEF("light2").setAmbientIntensity(0.7f).setColor(new float[] {0.8f,0.8f,1f}).setLocation(new float[] {0f,10f,-7f}))
        .addComments("External from the Humanoid viewpoints")
        .addChild(new Viewpoint().setDEF("Scene_InclinedView").setCenterOfRotation(new float[] {0f,0.85f,0f}).setDescription("Scene_Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,3.06f}))
        .addChild(new Viewpoint().setDEF("Scene_IFrontView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Front View").setPosition(new float[] {0f,0.8f,2.58f}))
        .addChild(new Viewpoint().setDEF("Scene_ISideView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Side View").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {2.6f,0.8f,0f}))
        .addChild(new Viewpoint().setDEF("Scene_BackView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Back View").setOrientation(new float[] {0f,1f,0f,3.14f}).setPosition(new float[] {0f,1.5f,-3f}))
        .addChild(new Viewpoint().setDEF("Scene_TopView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Top View").setOrientation(new float[] {1f,0f,0f,-1.5708f}).setPosition(new float[] {0f,3.5f,0f}))
        .addChild(new Group().setDEF("Joe_Humanoid")
          .addChild(new HAnimHumanoid().setName("Kick").setDEF("Joe_Kick").setLoa(3).setVersion("2.0")
            .setMetadata(new MetadataSet().setName("warnings").setReference("HAnim")
              .addValue(new MetadataString().setName("SymmetricalLeftRight").setReference("correction options: ignore, warn, average, left, right, largest, smallest").setValue(new MFString1().getArray())))
            .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("Joe_humanoid_root").setCenter(new float[] {0f,0.875f,0f}).setUlimit(new MFFloat2().getArray()).setLlimit(new MFFloat3().getArray())
              .addChild(new HAnimSegment().setName("sacrum").setDEF("Joe_sacrum")
                .addChild(new HAnimSite().setName("RootFront_view").setDEF("Joe_RootFront_view")
                  .addChild(new Transform().setDEF("hanimcordsys").setScale(new float[] {0.175f,0.175f,0.175f})
                    .addChild(new Viewpoint().setDEF("ViewBodyRootAxes").setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View"))
                    .addChild(new Shape().setDEF("AxisLinesShape")
                      .addComments("RGB lines showing XYZ axes")
                      .setGeometry(new IndexedLineSet().setColorIndex(new MFInt324().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt325().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f6().getArray()))
                        .setColor(new Color().setColor(new MFColor7().getArray())))))))
              .addChild(new HAnimJoint().setName("sacroiliac").setDEF("Joe_sacroiliac").setCenter(new float[] {0f,0.92f,0f}).setSkinCoordIndex(new MFInt328().getArray()).setSkinCoordWeight(new MFFloat9().getArray()).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())
                .addChild(new HAnimJoint().setName("l_hip").setDEF("Joe_l_hip").setCenter(new float[] {0.1f,0.92f,0f}).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray()).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                  .addChild(new HAnimJoint().setName("l_knee").setDEF("Joe_l_knee").setCenter(new float[] {0.115f,0.466f,0f}).setSkinCoordIndex(new MFInt3216().getArray()).setSkinCoordWeight(new MFFloat17().getArray()).setUlimit(new MFFloat18().getArray()).setLlimit(new MFFloat19().getArray())
                    .addChild(new HAnimJoint().setName("l_talocrural").setDEF("Joe_l_talocrural").setCenter(new float[] {0.115f,0.069f,0f}).setSkinCoordIndex(new MFInt3220().getArray()).setSkinCoordWeight(new MFFloat21().getArray()).setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray())
                      .addChild(new HAnimJoint().setName("l_tarsometatarsal_2").setDEF("Joe_l_tarsometatarsal_2").setCenter(new float[] {0.115f,0.031f,0.03f}).setSkinCoordIndex(new MFInt3224().getArray()).setSkinCoordWeight(new MFFloat25().getArray()).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
                        .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("Joe_l_metatarsophalangeal_2").setCenter(new float[] {0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt3228().getArray()).setSkinCoordWeight(new MFFloat29().getArray()).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray())
                          .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_2").setDEF("Joe_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.115f,0.02f,0.122f}).setSkinCoordIndex(new MFInt3232().getArray()).setSkinCoordWeight(new MFFloat33().getArray()).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray())))))))
                .addChild(new HAnimJoint().setName("r_hip").setDEF("Joe_r_hip").setCenter(new float[] {-0.1f,0.92f,0f}).setSkinCoordIndex(new MFInt3236().getArray()).setSkinCoordWeight(new MFFloat37().getArray()).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                  .addChild(new HAnimJoint().setName("r_knee").setDEF("Joe_r_knee").setCenter(new float[] {-0.05f,0.466f,0f}).setSkinCoordIndex(new MFInt3240().getArray()).setSkinCoordWeight(new MFFloat41().getArray()).setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())
                    .addChild(new HAnimJoint().setName("r_talocrural").setDEF("Joe_r_talocrural").setCenter(new float[] {-0.115f,0.069f,0f}).setSkinCoordIndex(new MFInt3244().getArray()).setSkinCoordWeight(new MFFloat45().getArray()).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())
                      .addChild(new HAnimJoint().setName("r_tarsometatarsal_2").setDEF("Joe_r_tarsometatarsal_2").setCenter(new float[] {-0.1f,0.015f,-0.01f}).setSkinCoordIndex(new MFInt3248().getArray()).setSkinCoordWeight(new MFFloat49().getArray()).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                        .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("Joe_r_metatarsophalangeal_2").setCenter(new float[] {-0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt3252().getArray()).setSkinCoordWeight(new MFFloat53().getArray()).setUlimit(new MFFloat54().getArray()).setLlimit(new MFFloat55().getArray())
                          .addChild(new HAnimJoint().setName("r_tarsal_distal_interphalangeal_2").setDEF("Joe_r_tarsal_distal_interphalangeal_2").setCenter(new float[] {-0.1f,0.01f,0.14f}).setSkinCoordIndex(new MFInt3256().getArray()).setSkinCoordWeight(new MFFloat57().getArray()).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray()))))))))
              .addChild(new HAnimJoint().setName("vl5").setDEF("Joe_vl5").setCenter(new float[] {0f,1.045f,-0.095f}).setSkinCoordIndex(new MFInt3260().getArray()).setSkinCoordWeight(new MFFloat61().getArray()).setUlimit(new MFFloat62().getArray()).setLlimit(new MFFloat63().getArray())
                .addChild(new HAnimJoint().setName("vl4").setDEF("Joe_vl4").setCenter(new float[] {0f,1.068f,-0.085f}).setUlimit(new MFFloat64().getArray()).setLlimit(new MFFloat65().getArray())
                  .addChild(new HAnimJoint().setName("vl3").setDEF("Joe_vl3").setCenter(new float[] {0f,1.092f,-0.0725f}).setUlimit(new MFFloat66().getArray()).setLlimit(new MFFloat67().getArray())
                    .addChild(new HAnimJoint().setName("vl2").setDEF("Joe_vl2").setCenter(new float[] {0f,1.12f,-0.065f}).setSkinCoordIndex(new MFInt3268().getArray()).setSkinCoordWeight(new MFFloat69().getArray()).setUlimit(new MFFloat70().getArray()).setLlimit(new MFFloat71().getArray())
                      .addChild(new HAnimJoint().setName("vl1").setDEF("Joe_vl1").setCenter(new float[] {0f,1.1459f,-0.0625f}).setUlimit(new MFFloat72().getArray()).setLlimit(new MFFloat73().getArray())
                        .addChild(new HAnimJoint().setName("vt12").setDEF("Joe_vt12").setCenter(new float[] {0f,1.179f,-0.068f}).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                          .addChild(new HAnimJoint().setName("vt11").setDEF("Joe_vt11").setCenter(new float[] {0f,1.2679f,-0.081f}).setUlimit(new MFFloat76().getArray()).setLlimit(new MFFloat77().getArray())
                            .addChild(new HAnimJoint().setName("vt10").setDEF("Joe_vt10").setCenter(new float[] {0f,1.242f,-0.09f}).setSkinCoordIndex(new MFInt3278().getArray()).setSkinCoordWeight(new MFFloat79().getArray()).setUlimit(new MFFloat80().getArray()).setLlimit(new MFFloat81().getArray())
                              .addChild(new HAnimJoint().setName("vt9").setDEF("Joe_vt9").setCenter(new float[] {0f,1.268f,-0.1f}).setSkinCoordIndex(new MFInt3282().getArray()).setSkinCoordWeight(new MFFloat83().getArray()).setUlimit(new MFFloat84().getArray()).setLlimit(new MFFloat85().getArray())
                                .addChild(new HAnimJoint().setName("vt8").setDEF("Joe_vt8").setCenter(new float[] {0f,1.294f,-0.11f}).setUlimit(new MFFloat86().getArray()).setLlimit(new MFFloat87().getArray())
                                  .addChild(new HAnimJoint().setName("vt7").setDEF("Joe_vt7").setCenter(new float[] {0f,1.323f,-0.1155f}).setUlimit(new MFFloat88().getArray()).setLlimit(new MFFloat89().getArray())
                                    .addChild(new HAnimJoint().setName("vt6").setDEF("Joe_vt6").setCenter(new float[] {0f,1.352f,-0.12f}).setUlimit(new MFFloat90().getArray()).setLlimit(new MFFloat91().getArray())
                                      .addChild(new HAnimJoint().setName("vt5").setDEF("Joe_vt5").setCenter(new float[] {0f,1.381f,-0.1235f}).setUlimit(new MFFloat92().getArray()).setLlimit(new MFFloat93().getArray())
                                        .addChild(new HAnimJoint().setName("vt4").setDEF("Joe_vt4").setCenter(new float[] {0f,1.41f,-0.1235f}).setSkinCoordIndex(new MFInt3294().getArray()).setSkinCoordWeight(new MFFloat95().getArray()).setUlimit(new MFFloat96().getArray()).setLlimit(new MFFloat97().getArray())
                                          .addChild(new HAnimJoint().setName("vt3").setDEF("Joe_vt3").setCenter(new float[] {0f,1.438f,-0.12f}).setUlimit(new MFFloat98().getArray()).setLlimit(new MFFloat99().getArray())
                                            .addChild(new HAnimJoint().setName("vt2").setDEF("Joe_vt2").setCenter(new float[] {0f,1.468f,-0.105f}).setUlimit(new MFFloat100().getArray()).setLlimit(new MFFloat101().getArray())
                                              .addChild(new HAnimJoint().setName("vt1").setDEF("Joe_vt1").setCenter(new float[] {0f,1.497f,-0.09f}).setSkinCoordIndex(new MFInt32102().getArray()).setSkinCoordWeight(new MFFloat103().getArray()).setUlimit(new MFFloat104().getArray()).setLlimit(new MFFloat105().getArray())
                                                .addChild(new HAnimJoint().setName("vc7").setDEF("Joe_vc7").setCenter(new float[] {0f,1.525f,-0.072f}).setSkinCoordIndex(new MFInt32106().getArray()).setSkinCoordWeight(new MFFloat107().getArray()).setUlimit(new MFFloat108().getArray()).setLlimit(new MFFloat109().getArray())
                                                  .addChild(new HAnimJoint().setName("vc6").setDEF("Joe_vc6").setCenter(new float[] {0f,1.54f,-0.05f}).setUlimit(new MFFloat110().getArray()).setLlimit(new MFFloat111().getArray())
                                                    .addChild(new HAnimJoint().setName("vc5").setDEF("Joe_vc5").setCenter(new float[] {0f,1.552f,-0.035f}).setUlimit(new MFFloat112().getArray()).setLlimit(new MFFloat113().getArray())
                                                      .addChild(new HAnimJoint().setName("vc4").setDEF("Joe_vc4").setCenter(new float[] {0f,1.5675f,-0.0256f}).setUlimit(new MFFloat114().getArray()).setLlimit(new MFFloat115().getArray())
                                                        .addChild(new HAnimJoint().setName("vc3").setDEF("Joe_vc3").setCenter(new float[] {0f,1.58225f,-0.0185f}).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                                                          .addChild(new HAnimJoint().setName("vc2").setDEF("Joe_vc2").setCenter(new float[] {0f,1.595f,-0.0175f}).setUlimit(new MFFloat118().getArray()).setLlimit(new MFFloat119().getArray())
                                                            .addChild(new HAnimJoint().setName("vc1").setDEF("Joe_vc1").setCenter(new float[] {0f,1.61f,-0.015f}).setUlimit(new MFFloat120().getArray()).setLlimit(new MFFloat121().getArray())
                                                              .addChild(new HAnimJoint().setName("skullbase").setDEF("Joe_skullbase").setCenter(new float[] {0f,1.63f,-0.01f}).setSkinCoordIndex(new MFInt32122().getArray()).setSkinCoordWeight(new MFFloat123().getArray()).setUlimit(new MFFloat124().getArray()).setLlimit(new MFFloat125().getArray())
                                                                .addDisplacers(new HAnimDisplacer().setName("skull_tip_raiser_action").setDEF("Joe_skull_tip_raiser_action").setCoordIndex(new MFInt32126().getArray()).setDisplacements(new MFVec3f127().getArray()))
                                                                .addChild(new HAnimJoint().setName("l_eyelid_joint").setDEF("Joe_l_eyelid_joint").setCenter(new float[] {0.034f,1.659f,0.06f}).setUlimit(new MFFloat128().getArray()).setLlimit(new MFFloat129().getArray()))
                                                                .addChild(new HAnimJoint().setName("l_eyeball_joint").setDEF("Joe_l_eyeball_joint").setCenter(new float[] {0.034f,1.659f,0.06f}).setUlimit(new MFFloat130().getArray()).setLlimit(new MFFloat131().getArray()))
                                                                .addChild(new HAnimJoint().setName("l_eyebrow_joint").setDEF("Joe_l_eyebrow_joint").setCenter(new float[] {0.034f,1.659f,0.06f}).setUlimit(new MFFloat132().getArray()).setLlimit(new MFFloat133().getArray()))
                                                                .addChild(new HAnimJoint().setName("r_eyelid_joint").setDEF("Joe_r_eyelid_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}).setUlimit(new MFFloat134().getArray()).setLlimit(new MFFloat135().getArray()))
                                                                .addChild(new HAnimJoint().setName("r_eyeball_joint").setDEF("Joe_r_eyeball_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}).setUlimit(new MFFloat136().getArray()).setLlimit(new MFFloat137().getArray()))
                                                                .addChild(new HAnimJoint().setName("r_eyebrow_joint").setDEF("Joe_r_eyebrow_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}).setUlimit(new MFFloat138().getArray()).setLlimit(new MFFloat139().getArray()))
                                                                .addChild(new HAnimJoint().setName("temporomandibular").setDEF("Joe_temporomandibular").setCenter(new float[] {0.034f,1.659f,0.06f}).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray()))))))))))
                                                .addChild(new HAnimJoint().setDEF("Joe_l_acromioclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setSkinCoordIndex(new MFInt32142().getArray()).setSkinCoordWeight(new MFFloat143().getArray()).setUlimit(new MFFloat144().getArray()).setLlimit(new MFFloat145().getArray())
                                                  .addChild(new HAnimJoint().setName("l_acromioclavicular").setDEF("Joe_l_sternoclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setSkinCoordIndex(new MFInt32146().getArray()).setSkinCoordWeight(new MFFloat147().getArray()).setUlimit(new MFFloat148().getArray()).setLlimit(new MFFloat149().getArray())
                                                    .addChild(new HAnimJoint().setName("l_shoulder").setDEF("Joe_l_shoulder").setCenter(new float[] {0.2f,1.44f,-0.04f}).setSkinCoordIndex(new MFInt32150().getArray()).setSkinCoordWeight(new MFFloat151().getArray()).setUlimit(new MFFloat152().getArray()).setLlimit(new MFFloat153().getArray())
                                                      .addChild(new HAnimJoint().setName("l_elbow").setDEF("Joe_l_elbow").setCenter(new float[] {0.2f,1.1388f,-0.04f}).setSkinCoordIndex(new MFInt32154().getArray()).setSkinCoordWeight(new MFFloat155().getArray()).setUlimit(new MFFloat156().getArray()).setLlimit(new MFFloat157().getArray())
                                                        .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("Joe_l_radiocarpal").setCenter(new float[] {0.2f,0.87f,-0.04f}).setSkinCoordIndex(new MFInt32158().getArray()).setSkinCoordWeight(new MFFloat159().getArray()).setUlimit(new MFFloat160().getArray()).setLlimit(new MFFloat161().getArray())
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_1").setDEF("Joe_l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setSkinCoordIndex(new MFInt32162().getArray()).setSkinCoordWeight(new MFFloat163().getArray()).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_1").setDEF("Joe_l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setSkinCoordIndex(new MFInt32166().getArray()).setSkinCoordWeight(new MFFloat167().getArray()).setUlimit(new MFFloat168().getArray()).setLlimit(new MFFloat169().getArray())
                                                              .addChild(new HAnimJoint().setName("l_carpal_interphalangeal_1").setDEF("Joe_l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setSkinCoordIndex(new MFInt32170().getArray()).setSkinCoordWeight(new MFFloat171().getArray()).setUlimit(new MFFloat172().getArray()).setLlimit(new MFFloat173().getArray()))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_2").setDEF("Joe_l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setSkinCoordIndex(new MFInt32174().getArray()).setSkinCoordWeight(new MFFloat175().getArray()).setUlimit(new MFFloat176().getArray()).setLlimit(new MFFloat177().getArray())
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_2").setDEF("Joe_l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setSkinCoordIndex(new MFInt32178().getArray()).setSkinCoordWeight(new MFFloat179().getArray()).setUlimit(new MFFloat180().getArray()).setLlimit(new MFFloat181().getArray())
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_2").setDEF("Joe_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setSkinCoordIndex(new MFInt32182().getArray()).setSkinCoordWeight(new MFFloat183().getArray()).setUlimit(new MFFloat184().getArray()).setLlimit(new MFFloat185().getArray())
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_2").setDEF("Joe_l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setSkinCoordIndex(new MFInt32186().getArray()).setSkinCoordWeight(new MFFloat187().getArray()).setUlimit(new MFFloat188().getArray()).setLlimit(new MFFloat189().getArray())))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_3").setDEF("Joe_l_carpometacarpal_3").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setSkinCoordIndex(new MFInt32190().getArray()).setSkinCoordWeight(new MFFloat191().getArray()).setUlimit(new MFFloat192().getArray()).setLlimit(new MFFloat193().getArray())
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_3").setDEF("Joe_l_metacarpophalangeal_3").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setSkinCoordIndex(new MFInt32194().getArray()).setSkinCoordWeight(new MFFloat195().getArray()).setUlimit(new MFFloat196().getArray()).setLlimit(new MFFloat197().getArray())
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_3").setDEF("Joe_l_carpal_proximal_interphalangeal_3").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setSkinCoordIndex(new MFInt32198().getArray()).setSkinCoordWeight(new MFFloat199().getArray()).setUlimit(new MFFloat200().getArray()).setLlimit(new MFFloat201().getArray())
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_3").setDEF("Joe_l_carpal_distal_interphalangeal_3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setSkinCoordIndex(new MFInt32202().getArray()).setSkinCoordWeight(new MFFloat203().getArray()).setUlimit(new MFFloat204().getArray()).setLlimit(new MFFloat205().getArray())))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_4").setDEF("Joe_l_carpometacarpal_4").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setSkinCoordIndex(new MFInt32206().getArray()).setSkinCoordWeight(new MFFloat207().getArray()).setUlimit(new MFFloat208().getArray()).setLlimit(new MFFloat209().getArray())
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_4").setDEF("Joe_l_metacarpophalangeal_4").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setSkinCoordIndex(new MFInt32210().getArray()).setSkinCoordWeight(new MFFloat211().getArray()).setUlimit(new MFFloat212().getArray()).setLlimit(new MFFloat213().getArray())
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_4").setDEF("Joe_l_carpal_proximal_interphalangeal_4").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setSkinCoordIndex(new MFInt32214().getArray()).setSkinCoordWeight(new MFFloat215().getArray()).setUlimit(new MFFloat216().getArray()).setLlimit(new MFFloat217().getArray())
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_4").setDEF("Joe_l_carpal_distal_interphalangeal_4").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setSkinCoordIndex(new MFInt32218().getArray()).setSkinCoordWeight(new MFFloat219().getArray()).setUlimit(new MFFloat220().getArray()).setLlimit(new MFFloat221().getArray())))))
                                                          .addChild(new HAnimJoint().setName("l_carpometacarpal_5").setDEF("Joe_l_carpometacarpal_5").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setSkinCoordIndex(new MFInt32222().getArray()).setSkinCoordWeight(new MFFloat223().getArray()).setUlimit(new MFFloat224().getArray()).setLlimit(new MFFloat225().getArray())
                                                            .addChild(new HAnimJoint().setName("l_metacarpophalangeal_5").setDEF("Joe_l_metacarpophalangeal_5").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setSkinCoordIndex(new MFInt32226().getArray()).setSkinCoordWeight(new MFFloat227().getArray()).setUlimit(new MFFloat228().getArray()).setLlimit(new MFFloat229().getArray())
                                                              .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_5").setDEF("Joe_l_carpal_proximal_interphalangeal_5").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setSkinCoordIndex(new MFInt32230().getArray()).setSkinCoordWeight(new MFFloat231().getArray()).setUlimit(new MFFloat232().getArray()).setLlimit(new MFFloat233().getArray())
                                                                .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_5").setDEF("Joe_l_carpal_distal_interphalangeal_5").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setSkinCoordIndex(new MFInt32234().getArray()).setSkinCoordWeight(new MFFloat235().getArray()).setUlimit(new MFFloat236().getArray()).setLlimit(new MFFloat237().getArray()))))))))))
                                                .addChild(new HAnimJoint().setName("r_sternoclavicular").setDEF("Joe_r_sternoclavicular").setCenter(new float[] {-0.03f,1.46f,0f}).setSkinCoordIndex(new MFInt32238().getArray()).setSkinCoordWeight(new MFFloat239().getArray()).setUlimit(new MFFloat240().getArray()).setLlimit(new MFFloat241().getArray())
                                                  .addChild(new HAnimJoint().setName("r_acromioclavicular").setDEF("Joe_r_acromioclavicular").setCenter(new float[] {-0.09f,1.41f,-0.11f}).setSkinCoordIndex(new MFInt32242().getArray()).setSkinCoordWeight(new MFFloat243().getArray()).setUlimit(new MFFloat244().getArray()).setLlimit(new MFFloat245().getArray())
                                                    .addChild(new HAnimJoint().setName("r_shoulder").setDEF("Joe_r_shoulder").setCenter(new float[] {-0.2f,1.44f,-0.04f}).setSkinCoordIndex(new MFInt32246().getArray()).setSkinCoordWeight(new MFFloat247().getArray()).setUlimit(new MFFloat248().getArray()).setLlimit(new MFFloat249().getArray())
                                                      .addChild(new HAnimJoint().setName("r_elbow").setDEF("Joe_r_elbow").setCenter(new float[] {-0.2f,1.1388f,-0.04f}).setSkinCoordIndex(new MFInt32250().getArray()).setSkinCoordWeight(new MFFloat251().getArray()).setUlimit(new MFFloat252().getArray()).setLlimit(new MFFloat253().getArray())
                                                        .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("Joe_r_radiocarpal").setCenter(new float[] {-0.2f,0.89f,-0.04f}).setSkinCoordIndex(new MFInt32254().getArray()).setSkinCoordWeight(new MFFloat255().getArray()).setUlimit(new MFFloat256().getArray()).setLlimit(new MFFloat257().getArray())
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_1").setDEF("Joe_r_carpometacarpal_1").setCenter(new float[] {-0.2f,0.85f,0f}).setSkinCoordIndex(new MFInt32258().getArray()).setSkinCoordWeight(new MFFloat259().getArray()).setUlimit(new MFFloat260().getArray()).setLlimit(new MFFloat261().getArray())
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_1").setDEF("Joe_r_metacarpophalangeal_1").setCenter(new float[] {-0.2f,0.82f,0.03f}).setSkinCoordIndex(new MFInt32262().getArray()).setSkinCoordWeight(new MFFloat263().getArray()).setUlimit(new MFFloat264().getArray()).setLlimit(new MFFloat265().getArray())
                                                              .addChild(new HAnimJoint().setName("r_carpal_interphalangeal_1").setDEF("Joe_r_carpal_interphalangeal_1").setCenter(new float[] {-0.2f,0.8f,0.05f}).setSkinCoordIndex(new MFInt32266().getArray()).setSkinCoordWeight(new MFFloat267().getArray()).setUlimit(new MFFloat268().getArray()).setLlimit(new MFFloat269().getArray()))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_2").setDEF("Joe_r_carpometacarpal_2").setCenter(new float[] {-0.2f,0.84f,-0.015f}).setSkinCoordIndex(new MFInt32270().getArray()).setSkinCoordWeight(new MFFloat271().getArray()).setUlimit(new MFFloat272().getArray()).setLlimit(new MFFloat273().getArray())
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_2").setDEF("Joe_r_metacarpophalangeal_2").setCenter(new float[] {-0.2f,0.793f,-0.015f}).setSkinCoordIndex(new MFInt32274().getArray()).setSkinCoordWeight(new MFFloat275().getArray()).setUlimit(new MFFloat276().getArray()).setLlimit(new MFFloat277().getArray())
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_2").setDEF("Joe_r_carpal_proximal_interphalangeal_2").setCenter(new float[] {-0.2f,0.745f,-0.015f}).setSkinCoordIndex(new MFInt32278().getArray()).setSkinCoordWeight(new MFFloat279().getArray()).setUlimit(new MFFloat280().getArray()).setLlimit(new MFFloat281().getArray())
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_2").setDEF("Joe_r_carpal_distal_interphalangeal_2").setCenter(new float[] {-0.2f,0.72f,-0.015f}).setSkinCoordIndex(new MFInt32282().getArray()).setSkinCoordWeight(new MFFloat283().getArray()).setUlimit(new MFFloat284().getArray()).setLlimit(new MFFloat285().getArray())))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_3").setDEF("Joe_r_carpometacarpal_3").setCenter(new float[] {-0.2f,0.835f,-0.04f}).setSkinCoordIndex(new MFInt32286().getArray()).setSkinCoordWeight(new MFFloat287().getArray()).setUlimit(new MFFloat288().getArray()).setLlimit(new MFFloat289().getArray())
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_3").setDEF("Joe_r_metacarpophalangeal_3").setCenter(new float[] {-0.2f,0.788f,-0.04f}).setSkinCoordIndex(new MFInt32290().getArray()).setSkinCoordWeight(new MFFloat291().getArray()).setUlimit(new MFFloat292().getArray()).setLlimit(new MFFloat293().getArray())
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_3").setDEF("Joe_r_carpal_proximal_interphalangeal_3").setCenter(new float[] {-0.2f,0.74f,-0.04f}).setSkinCoordIndex(new MFInt32294().getArray()).setSkinCoordWeight(new MFFloat295().getArray()).setUlimit(new MFFloat296().getArray()).setLlimit(new MFFloat297().getArray())
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_3").setDEF("Joe_r_carpal_distal_interphalangeal_3").setCenter(new float[] {-0.2f,0.7142f,-0.04f}).setSkinCoordIndex(new MFInt32298().getArray()).setSkinCoordWeight(new MFFloat299().getArray()).setUlimit(new MFFloat300().getArray()).setLlimit(new MFFloat301().getArray())))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_4").setDEF("Joe_r_carpometacarpal_4").setCenter(new float[] {-0.2f,0.835f,-0.065f}).setSkinCoordIndex(new MFInt32302().getArray()).setSkinCoordWeight(new MFFloat303().getArray()).setUlimit(new MFFloat304().getArray()).setLlimit(new MFFloat305().getArray())
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_4").setDEF("Joe_r_metacarpophalangeal_4").setCenter(new float[] {-0.2f,0.793f,-0.065f}).setSkinCoordIndex(new MFInt32306().getArray()).setSkinCoordWeight(new MFFloat307().getArray()).setUlimit(new MFFloat308().getArray()).setLlimit(new MFFloat309().getArray())
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_4").setDEF("Joe_r_carpal_proximal_interphalangeal_4").setCenter(new float[] {-0.2f,0.74f,-0.065f}).setSkinCoordIndex(new MFInt32310().getArray()).setSkinCoordWeight(new MFFloat311().getArray()).setUlimit(new MFFloat312().getArray()).setLlimit(new MFFloat313().getArray())
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_4").setDEF("Joe_r_carpal_distal_interphalangeal_4").setCenter(new float[] {-0.2f,0.7177f,-0.065f}).setSkinCoordIndex(new MFInt32314().getArray()).setSkinCoordWeight(new MFFloat315().getArray()).setUlimit(new MFFloat316().getArray()).setLlimit(new MFFloat317().getArray())))))
                                                          .addChild(new HAnimJoint().setName("r_carpometacarpal_5").setDEF("Joe_r_carpometacarpal_5").setCenter(new float[] {-0.2f,0.84f,-0.085f}).setSkinCoordIndex(new MFInt32318().getArray()).setSkinCoordWeight(new MFFloat319().getArray()).setUlimit(new MFFloat320().getArray()).setLlimit(new MFFloat321().getArray())
                                                            .addChild(new HAnimJoint().setName("r_metacarpophalangeal_5").setDEF("Joe_r_metacarpophalangeal_5").setCenter(new float[] {-0.2f,0.79f,-0.085f}).setSkinCoordIndex(new MFInt32322().getArray()).setSkinCoordWeight(new MFFloat323().getArray()).setUlimit(new MFFloat324().getArray()).setLlimit(new MFFloat325().getArray())
                                                              .addChild(new HAnimJoint().setName("r_carpal_proximal_interphalangeal_5").setDEF("Joe_r_carpal_proximal_interphalangeal_5").setCenter(new float[] {-0.2f,0.755f,-0.085f}).setSkinCoordIndex(new MFInt32326().getArray()).setSkinCoordWeight(new MFFloat327().getArray()).setUlimit(new MFFloat328().getArray()).setLlimit(new MFFloat329().getArray())
                                                                .addChild(new HAnimJoint().setName("r_carpal_distal_interphalangeal_5").setDEF("Joe_r_carpal_distal_interphalangeal_5").setCenter(new float[] {-0.2f,0.735f,-0.09f}).setSkinCoordIndex(new MFInt32330().getArray()).setSkinCoordWeight(new MFFloat331().getArray()).setUlimit(new MFFloat332().getArray()).setLlimit(new MFFloat333().getArray()))))))))))))))))))))))))))))
            .addSkin(new Shape().setDEF("Joe_Shape")
              .setAppearance(new Appearance().setDEF("Joe_skin_Appearance")
                .setMaterial(new Material().setDEF("Joe_skin_Material").setDiffuseColor(new float[] {0.3f,0.3f,0.6f}).setEmissiveColor(new float[] {0.3f,0.3f,0.6f}))
                .setTexture(new ImageTexture().setDEF("JoeSkinImageTexture").setUrl(new MFString334().getArray()))
                .setTextureTransform(new TextureTransform().setDEF("KickTextureTransform")))
              .setGeometry(new IndexedFaceSet().setDEF("Joe_skin_IndexedFaceSet").setCoordIndex(new MFInt32335().getArray().append(new MFInt32336().getArray()).append(new MFInt32337().getArray()).append(new MFInt32338().getArray())).setCreaseAngle(3.14f)
                .setCoord(new Coordinate().setDEF("Joe_SkinCoord").setPoint(new MFVec3f339().getArray().append(new MFVec3f340().getArray())))
                .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f341().getArray()))))
            .setSkinCoord(new Coordinate().setUSE("Joe_SkinCoord"))
            .addJoints(new HAnimJoint().setUSE("Joe_humanoid_root"))
            .addJoints(new HAnimJoint().setUSE("Joe_sacroiliac"))
            .addJoints(new HAnimJoint().setUSE("Joe_skullbase"))
            .addJoints(new HAnimJoint().setUSE("Joe_temporomandibular"))
            .addJoints(new HAnimJoint().setUSE("Joe_vc1"))
            .addJoints(new HAnimJoint().setUSE("Joe_vc2"))
            .addJoints(new HAnimJoint().setUSE("Joe_vc3"))
            .addJoints(new HAnimJoint().setUSE("Joe_vc4"))
            .addJoints(new HAnimJoint().setUSE("Joe_vc5"))
            .addJoints(new HAnimJoint().setUSE("Joe_vc6"))
            .addJoints(new HAnimJoint().setUSE("Joe_vc7"))
            .addJoints(new HAnimJoint().setUSE("Joe_vl1"))
            .addJoints(new HAnimJoint().setUSE("Joe_vl2"))
            .addJoints(new HAnimJoint().setUSE("Joe_vl3"))
            .addJoints(new HAnimJoint().setUSE("Joe_vl4"))
            .addJoints(new HAnimJoint().setUSE("Joe_vl5"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt1"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt10"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt11"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt12"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt2"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt3"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt4"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt5"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt6"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt7"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt8"))
            .addJoints(new HAnimJoint().setUSE("Joe_vt9"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_acromioclavicular"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_acromioclavicular"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_distal_interphalangeal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_distal_interphalangeal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_interphalangeal_1"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_interphalangeal_1"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpal_proximal_interphalangeal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpal_proximal_interphalangeal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_1"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_1"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_carpometacarpal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_carpometacarpal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_elbow"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_elbow"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_eyeball_joint"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_eyeball_joint"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_eyebrow_joint"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_eyebrow_joint"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_eyelid_joint"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_eyelid_joint"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_hip"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_hip"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_knee"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_knee"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_1"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_1"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_3"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_4"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_metacarpophalangeal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_metacarpophalangeal_5"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_metatarsophalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_metatarsophalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_radiocarpal"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_radiocarpal"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_shoulder"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_shoulder"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_sternoclavicular"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_sternoclavicular"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_talocrural"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_talocrural"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_tarsal_distal_interphalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_tarsal_distal_interphalangeal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_l_tarsometatarsal_2"))
            .addJoints(new HAnimJoint().setUSE("Joe_r_tarsometatarsal_2"))
            .addSegments(new HAnimSegment().setUSE("Joe_sacrum"))
            .addSites(new HAnimSite().setUSE("Joe_RootFront_view"))))
        .addChild(new Group()
          .addChild(new TimeSensor().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addComments("Interpolators")
          .addChild(new OrientationInterpolator().setDEF("HumanoidRoot_RotationInterpolator").setKey(new MFFloat342().getArray()).setKeyValue(new MFRotation343().getArray()))
          .addChild(new PositionInterpolator().setDEF("HumanoidRoot_TranslationInterpolator").setKey(new MFFloat344().getArray()).setKeyValue(new MFVec3f345().getArray()))
          .addChild(new OrientationInterpolator().setDEF("sacroiliac_RotationInterpolator").setKey(new MFFloat346().getArray()).setKeyValue(new MFRotation347().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_hip_RotationInterpolator").setKey(new MFFloat348().getArray()).setKeyValue(new MFRotation349().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_knee_RotationInterpolator").setKey(new MFFloat350().getArray()).setKeyValue(new MFRotation351().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ankle_RotationInterpolator").setKey(new MFFloat352().getArray()).setKeyValue(new MFRotation353().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_subtalar_RotationInterpolator").setKey(new MFFloat354().getArray()).setKeyValue(new MFRotation355().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_midtarsal_RotationInterpolator").setKey(new MFFloat356().getArray()).setKeyValue(new MFRotation357().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_metatarsal_RotationInterpolator").setKey(new MFFloat358().getArray()).setKeyValue(new MFRotation359().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_hip_RotationInterpolator").setKey(new MFFloat360().getArray()).setKeyValue(new MFRotation361().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_knee_RotationInterpolator").setKey(new MFFloat362().getArray()).setKeyValue(new MFRotation363().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ankle_RotationInterpolator").setKey(new MFFloat364().getArray()).setKeyValue(new MFRotation365().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_subtalar_RotationInterpolator").setKey(new MFFloat366().getArray()).setKeyValue(new MFRotation367().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_midtarsal_RotationInterpolator").setKey(new MFFloat368().getArray()).setKeyValue(new MFRotation369().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_metatarsal_RotationInterpolator").setKey(new MFFloat370().getArray()).setKeyValue(new MFRotation371().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl5_RotationInterpolator").setKey(new MFFloat372().getArray()).setKeyValue(new MFRotation373().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl4_RotationInterpolator").setKey(new MFFloat374().getArray()).setKeyValue(new MFRotation375().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl3_RotationInterpolator").setKey(new MFFloat376().getArray()).setKeyValue(new MFRotation377().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl2_RotationInterpolator").setKey(new MFFloat378().getArray()).setKeyValue(new MFRotation379().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vl1_RotationInterpolator").setKey(new MFFloat380().getArray()).setKeyValue(new MFRotation381().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt12_RotationInterpolator").setKey(new MFFloat382().getArray()).setKeyValue(new MFRotation383().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt11_RotationInterpolator").setKey(new MFFloat384().getArray()).setKeyValue(new MFRotation385().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt10_RotationInterpolator").setKey(new MFFloat386().getArray()).setKeyValue(new MFRotation387().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt9_RotationInterpolator").setKey(new MFFloat388().getArray()).setKeyValue(new MFRotation389().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt8_RotationInterpolator").setKey(new MFFloat390().getArray()).setKeyValue(new MFRotation391().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt7_RotationInterpolator").setKey(new MFFloat392().getArray()).setKeyValue(new MFRotation393().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt6_RotationInterpolator").setKey(new MFFloat394().getArray()).setKeyValue(new MFRotation395().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt5_RotationInterpolator").setKey(new MFFloat396().getArray()).setKeyValue(new MFRotation397().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt4_RotationInterpolator").setKey(new MFFloat398().getArray()).setKeyValue(new MFRotation399().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt3_RotationInterpolator").setKey(new MFFloat400().getArray()).setKeyValue(new MFRotation401().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt2_RotationInterpolator").setKey(new MFFloat402().getArray()).setKeyValue(new MFRotation403().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vt1_RotationInterpolator").setKey(new MFFloat404().getArray()).setKeyValue(new MFRotation405().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc7_RotationInterpolator").setKey(new MFFloat406().getArray()).setKeyValue(new MFRotation407().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc6_RotationInterpolator").setKey(new MFFloat408().getArray()).setKeyValue(new MFRotation409().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc5_RotationInterpolator").setKey(new MFFloat410().getArray()).setKeyValue(new MFRotation411().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc4_RotationInterpolator").setKey(new MFFloat412().getArray()).setKeyValue(new MFRotation413().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc3_RotationInterpolator").setKey(new MFFloat414().getArray()).setKeyValue(new MFRotation415().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc2_RotationInterpolator").setKey(new MFFloat416().getArray()).setKeyValue(new MFRotation417().getArray()))
          .addChild(new OrientationInterpolator().setDEF("vc1_RotationInterpolator").setKey(new MFFloat418().getArray()).setKeyValue(new MFRotation419().getArray()))
          .addChild(new OrientationInterpolator().setDEF("skullbase_RotationInterpolator").setKey(new MFFloat420().getArray()).setKeyValue(new MFRotation421().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_eyelid_joint_RotationInterpolator").setKey(new MFFloat422().getArray()).setKeyValue(new MFRotation423().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_eyeball_joint_RotationInterpolator").setKey(new MFFloat424().getArray()).setKeyValue(new MFRotation425().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_eyebrow_joint_RotationInterpolator").setKey(new MFFloat426().getArray()).setKeyValue(new MFRotation427().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_eyelid_joint_RotationInterpolator").setKey(new MFFloat428().getArray()).setKeyValue(new MFRotation429().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_eyeball_joint_RotationInterpolator").setKey(new MFFloat430().getArray()).setKeyValue(new MFRotation431().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_eyebrow_joint_RotationInterpolator").setKey(new MFFloat432().getArray()).setKeyValue(new MFRotation433().getArray()))
          .addChild(new OrientationInterpolator().setDEF("temporomandibular_RotationInterpolator").setKey(new MFFloat434().getArray()).setKeyValue(new MFRotation435().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_sternoclavicular_RotationInterpolator").setKey(new MFFloat436().getArray()).setKeyValue(new MFRotation437().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_acromioclavicular_RotationInterpolator").setKey(new MFFloat438().getArray()).setKeyValue(new MFRotation439().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_shoulder_RotationInterpolator").setKey(new MFFloat440().getArray()).setKeyValue(new MFRotation441().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_elbow_RotationInterpolator").setKey(new MFFloat442().getArray()).setKeyValue(new MFRotation443().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_wrist_RotationInterpolator").setKey(new MFFloat444().getArray()).setKeyValue(new MFRotation445().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_thumb1_RotationInterpolator").setKey(new MFFloat446().getArray()).setKeyValue(new MFRotation447().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_thumb2_RotationInterpolator").setKey(new MFFloat448().getArray()).setKeyValue(new MFRotation449().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_thumb3_RotationInterpolator").setKey(new MFFloat450().getArray()).setKeyValue(new MFRotation451().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index0_RotationInterpolator").setKey(new MFFloat452().getArray()).setKeyValue(new MFRotation453().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index1_RotationInterpolator").setKey(new MFFloat454().getArray()).setKeyValue(new MFRotation455().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index2_RotationInterpolator").setKey(new MFFloat456().getArray()).setKeyValue(new MFRotation457().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_index3_RotationInterpolator").setKey(new MFFloat458().getArray()).setKeyValue(new MFRotation459().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle0_RotationInterpolator").setKey(new MFFloat460().getArray()).setKeyValue(new MFRotation461().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle1_RotationInterpolator").setKey(new MFFloat462().getArray()).setKeyValue(new MFRotation463().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle2_RotationInterpolator").setKey(new MFFloat464().getArray()).setKeyValue(new MFRotation465().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_middle3_RotationInterpolator").setKey(new MFFloat466().getArray()).setKeyValue(new MFRotation467().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring0_RotationInterpolator").setKey(new MFFloat468().getArray()).setKeyValue(new MFRotation469().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring1_RotationInterpolator").setKey(new MFFloat470().getArray()).setKeyValue(new MFRotation471().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring2_RotationInterpolator").setKey(new MFFloat472().getArray()).setKeyValue(new MFRotation473().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_ring3_RotationInterpolator").setKey(new MFFloat474().getArray()).setKeyValue(new MFRotation475().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky0_RotationInterpolator").setKey(new MFFloat476().getArray()).setKeyValue(new MFRotation477().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky1_RotationInterpolator").setKey(new MFFloat478().getArray()).setKeyValue(new MFRotation479().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky2_RotationInterpolator").setKey(new MFFloat480().getArray()).setKeyValue(new MFRotation481().getArray()))
          .addChild(new OrientationInterpolator().setDEF("l_pinky3_RotationInterpolator").setKey(new MFFloat482().getArray()).setKeyValue(new MFRotation483().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_sternoclavicular_RotationInterpolator").setKey(new MFFloat484().getArray()).setKeyValue(new MFRotation485().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_acromioclavicular_RotationInterpolator").setKey(new MFFloat486().getArray()).setKeyValue(new MFRotation487().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_shoulder_RotationInterpolator").setKey(new MFFloat488().getArray()).setKeyValue(new MFRotation489().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_elbow_RotationInterpolator").setKey(new MFFloat490().getArray()).setKeyValue(new MFRotation491().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_wrist_RotationInterpolator").setKey(new MFFloat492().getArray()).setKeyValue(new MFRotation493().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_thumb1_RotationInterpolator").setKey(new MFFloat494().getArray()).setKeyValue(new MFRotation495().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_thumb2_RotationInterpolator").setKey(new MFFloat496().getArray()).setKeyValue(new MFRotation497().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_thumb3_RotationInterpolator").setKey(new MFFloat498().getArray()).setKeyValue(new MFRotation499().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index0_RotationInterpolator").setKey(new MFFloat500().getArray()).setKeyValue(new MFRotation501().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index1_RotationInterpolator").setKey(new MFFloat502().getArray()).setKeyValue(new MFRotation503().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index2_RotationInterpolator").setKey(new MFFloat504().getArray()).setKeyValue(new MFRotation505().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_index3_RotationInterpolator").setKey(new MFFloat506().getArray()).setKeyValue(new MFRotation507().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle0_RotationInterpolator").setKey(new MFFloat508().getArray()).setKeyValue(new MFRotation509().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle1_RotationInterpolator").setKey(new MFFloat510().getArray()).setKeyValue(new MFRotation511().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle2_RotationInterpolator").setKey(new MFFloat512().getArray()).setKeyValue(new MFRotation513().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_middle3_RotationInterpolator").setKey(new MFFloat514().getArray()).setKeyValue(new MFRotation515().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring0_RotationInterpolator").setKey(new MFFloat516().getArray()).setKeyValue(new MFRotation517().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring1_RotationInterpolator").setKey(new MFFloat518().getArray()).setKeyValue(new MFRotation519().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring2_RotationInterpolator").setKey(new MFFloat520().getArray()).setKeyValue(new MFRotation521().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_ring3_RotationInterpolator").setKey(new MFFloat522().getArray()).setKeyValue(new MFRotation523().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky0_RotationInterpolator").setKey(new MFFloat524().getArray()).setKeyValue(new MFRotation525().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky1_RotationInterpolator").setKey(new MFFloat526().getArray()).setKeyValue(new MFRotation527().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky2_RotationInterpolator").setKey(new MFFloat528().getArray()).setKeyValue(new MFRotation529().getArray()))
          .addChild(new OrientationInterpolator().setDEF("r_pinky3_RotationInterpolator").setKey(new MFFloat530().getArray()).setKeyValue(new MFRotation531().getArray())))
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
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("HumanoidRoot_RotationInterpolator").setToField("set_rotation").setToNode("Joe_humanoid_root"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("HumanoidRoot_TranslationInterpolator").setToField("set_translation").setToNode("Joe_humanoid_root"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("sacroiliac_RotationInterpolator").setToField("set_rotation").setToNode("Joe_sacroiliac"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_hip_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_knee_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ankle_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_talocrural"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_subtalar_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_tarsometatarsal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_midtarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_metatarsophalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_metatarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_tarsal_distal_interphalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_hip_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_knee_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ankle_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_talocrural"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_subtalar_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_tarsometatarsal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_midtarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_metatarsophalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_metatarsal_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_tarsal_distal_interphalangeal_2"))
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
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_wrist_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_radiocarpal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_thumb1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpometacarpal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_thumb2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_metacarpophalangeal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_thumb3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_interphalangeal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpometacarpal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_metacarpophalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_proximal_interphalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_index3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_distal_interphalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpometacarpal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_metacarpophalangeal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_proximal_interphalangeal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_middle3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_distal_interphalangeal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpometacarpal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_metacarpophalangeal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_proximal_interphalangeal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ring3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_distal_interphalangeal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpometacarpal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_metacarpophalangeal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_proximal_interphalangeal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_pinky3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_l_carpal_distal_interphalangeal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_sternoclavicular_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_sternoclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_acromioclavicular_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_acromioclavicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_shoulder_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_elbow_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_wrist_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_radiocarpal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpometacarpal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_metacarpophalangeal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_thumb3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_interphalangeal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpometacarpal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_metacarpophalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_proximal_interphalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_index3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_distal_interphalangeal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpometacarpal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_metacarpophalangeal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_proximal_interphalangeal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_middle3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_distal_interphalangeal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpometacarpal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_metacarpophalangeal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_proximal_interphalangeal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ring3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_distal_interphalangeal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky0_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpometacarpal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky1_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_metacarpophalangeal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky2_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_proximal_interphalangeal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_pinky3_RotationInterpolator").setToField("set_rotation").setToNode("Joe_r_carpal_distal_interphalangeal_5"))
        .addChild(new Group().setDEF("DisplacersAnimationGroup")
          .addChild(new ScalarInterpolator().setDEF("skull_tipInterpolator").setKey(new MFFloat532().getArray()).setKeyValue(new MFFloat533().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("skull_tipInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("skull_tipInterpolator").setToField("weight").setToNode("Joe_skull_tip_raiser_action")))
        .addChild(new Group().setDEF("SkinTextureTransformAnimationGroup")
          .addChild(new ScalarInterpolator().setDEF("SkinInterpolator").setKey(new MFFloat534().getArray()).setKeyValue(new MFFloat535().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("SkinInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("SkinInterpolator").setToField("rotation").setToNode("KickTextureTransform")))
        .addChild(new Group()
          .addChild(new Transform().setDEF("SBall").setRotation(new float[] {0.7f,0f,0.7f,0.1f}).setScale(new float[] {0.23f,0.23f,0.23f}).setTranslation(new float[] {-0.916f,0.37f,-0.92f})
            .addChild(new Shape().setDEF("ball_Shape")
              .setAppearance(new Appearance().setDEF("ball_Appearance")
                .setMaterial(new Material().setDEF("ball_Material").setDiffuseColor(new float[] {0.3f,0.3f,1f}).setEmissiveColor(new float[] {0.3f,0.3f,0.33f}))
                .setTexture(new ImageTexture().setUSE("JoeSkinImageTexture")))
              .setGeometry(new IndexedFaceSet().setDEF("ball_IndexedFaceSet").setCoordIndex(new MFInt32536().getArray())
                .setCoord(new Coordinate().setDEF("Ball_Coordinates").setPoint(new MFVec3f537().getArray()))))
            .addChild(new Viewpoint().setDEF("ballView_1").setDescription("Ball View")))
          .addComments("Ball Animation interpolators")
          .addChild(new PositionInterpolator().setDEF("ball_TranslationInterpolator").setKey(new MFFloat538().getArray()).setKeyValue(new MFVec3f539().getArray()))
          .addChild(new OrientationInterpolator().setDEF("ball_RotationInterpolator").setKey(new MFFloat540().getArray()).setKeyValue(new MFRotation541().getArray()))
          .addComments("Ball Animation Routes")
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("ball_TranslationInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("ball_TranslationInterpolator").setToField("set_translation").setToNode("SBall"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("ball_RotationInterpolator"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("ball_RotationInterpolator").setToField("set_rotation").setToNode("SBall")))
        .addChild(new Group()
          .addChild(new Transform().setScale(new float[] {0.2f,0.2f,0.2f})
            .addChild(new Shape().setUSE("AxisLinesShape")))
          .addChild(new Transform().setDEF("Circle0").setScale(new float[] {1.175f,1f,1.175f})
            .addChild(new Shape().setDEF("circle_Shape")
              .setAppearance(new Appearance().setDEF("circle0_Appearance")
                .setMaterial(new Material().setDEF("circle0_Material").setAmbientIntensity(0.9f).setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.425f,0.486f,1f})))
              .setGeometry(new IndexedLineSet().setDEF("Orbit1").setCoordIndex(new MFInt32542().getArray())
                .setCoord(new Coordinate().setDEF("circle_Coordinates").setPoint(new MFVec3f543().getArray())))))
          .addChild(new Transform().setDEF("Circle1").setScale(new float[] {0.5f,1f,0.5f})
            .addChild(new Shape().setDEF("circle1_Shape")
              .setAppearance(new Appearance().setDEF("circle1_Appearance")
                .setMaterial(new Material().setDEF("circle1_Material").setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
          .addChild(new Transform().setDEF("Circle2").setScale(new float[] {0.25f,1f,0.25f})
            .addChild(new Shape().setDEF("circle2_Shape")
              .setAppearance(new Appearance().setDEF("circle2_Appearance")
                .setMaterial(new Material().setDEF("circle2_Material").setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
              .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"});
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
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.35f,0.35f,1f});
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
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f,1f,1f,1f,1f,1f});
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
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
protected class MFFloat17 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt3220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt3224 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
protected class MFFloat25 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat30 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat31 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
protected class MFFloat33 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat34 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101,362,363});
  }
}
protected class MFFloat37 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f,1f,0.8f,1f,1f,1f,0.4f,0.8f});
  }
}
protected class MFFloat38 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat39 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369,98});
  }
}
protected class MFFloat41 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.6f,0.2f,1f,1f,1f,1f,1f,1f,0.2f});
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
protected class MFInt3244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
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
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
protected class MFFloat53 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt3256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt3260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFInt3268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,0.7f,1f,0.8f});
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
protected class MFInt3278 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
protected class MFFloat83 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFFloat91 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat93 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
protected class MFFloat95 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
protected class MFInt32102 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
protected class MFFloat107 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFInt32122 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFFloat123 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt32126 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFVec3f127 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.15f,0f,0f,0f,0.15f,-0.1f,0f,0.15f,0.1f,0f,0.05f,0f,-0.02f,0.05f,-0.15f,0f,0f,-0.05f,0f,0f,0.15f,0f,0f,0.05f,0f,0f,0f,0f,-0.15f});
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
protected class MFInt32142 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
protected class MFFloat143 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
protected class MFInt32146 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
protected class MFFloat147 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
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
protected class MFInt32150 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
protected class MFFloat151 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt32154 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
protected class MFFloat155 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt32158 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
protected class MFFloat159 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt32162 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
protected class MFFloat163 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFInt32166 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
protected class MFFloat167 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
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
protected class MFInt32170 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
protected class MFFloat171 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt32174 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
protected class MFFloat175 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFInt32178 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
protected class MFFloat179 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
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
protected class MFInt32182 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt32186 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
protected class MFFloat187 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
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
protected class MFInt32190 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
protected class MFFloat191 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFInt32194 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
protected class MFFloat195 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
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
protected class MFInt32198 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
protected class MFFloat199 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt32202 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
protected class MFFloat203 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat204 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat205 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32206 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
protected class MFFloat207 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat208 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat209 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
protected class MFFloat211 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat212 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
protected class MFFloat215 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat216 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat217 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
protected class MFFloat219 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat220 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat221 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
protected class MFFloat223 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat224 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat225 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
protected class MFFloat227 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat228 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat229 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
protected class MFFloat231 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat232 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat233 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
protected class MFFloat235 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat236 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat237 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
protected class MFFloat239 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat240 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat241 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
protected class MFFloat243 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,0.9f});
  }
}
protected class MFFloat244 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat245 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
protected class MFFloat247 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.1f,1f,1f,1f,1f,1f,1f,1f,0.3f,0.2f});
  }
}
protected class MFFloat248 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat249 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
protected class MFFloat251 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat252 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat253 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
protected class MFFloat255 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat256 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat257 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32258 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
protected class MFFloat259 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat260 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat261 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
protected class MFFloat263 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFFloat264 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat265 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
protected class MFFloat267 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat268 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat269 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
protected class MFFloat271 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat272 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat273 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
protected class MFFloat275 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFFloat276 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat277 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32278 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
protected class MFFloat279 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat280 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat281 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
protected class MFFloat283 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat284 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat285 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32286 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
protected class MFFloat287 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat288 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat289 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32290 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
protected class MFFloat291 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat292 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat293 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
protected class MFFloat295 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat296 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat297 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
protected class MFFloat299 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat300 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat301 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32302 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
protected class MFFloat303 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat304 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat305 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32306 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
protected class MFFloat307 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat308 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat309 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32310 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
protected class MFFloat311 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat312 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat313 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32314 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
protected class MFFloat315 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat316 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat317 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32318 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
protected class MFFloat319 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat320 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat321 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
protected class MFFloat323 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat324 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat325 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
protected class MFFloat327 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat328 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat329 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32330 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
protected class MFFloat331 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat333 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFString334 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"});
  }
}
protected class MFInt32335 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
protected class MFInt32336 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
protected class MFInt32337 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
protected class MFInt32338 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
protected class MFVec3f339 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.77f,0f,0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.11f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0f,0.05f,0.4867f,0f,0.165f,0.01f,0.12f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.11f,0.011f,0.19f,0f,0.875f,0f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0f,1.41f,-0.145f,0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.9f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.9f,0.075f,0f,0.87f,0f,0.171f,0.65f,0f,0.02f,0.65f,0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0f,-0.02f,0.65f,0f,-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1f,-0.01f,0.225f,1f,-0.07f,0.185f,1f,-0.01f,0.185f,1f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0f,0.21f,0.85f,0f,0.1854f,0.85f,0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.19f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.19f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0f,0.193f,0.815f,0.005f,0.198f,0.8f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f,0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.255f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1f,-0.01f,-0.225f,1f,-0.07f,-0.185f,1f,-0.01f,-0.185f,1f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0f,-0.21f,0.85f,0f,-0.1854f,0.85f,0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.19f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.19f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0f,-0.193f,0.815f,0.005f,-0.198f,0.8f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f});
  }
}
protected class MFVec3f340 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f,-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0f,0.05f,0.466f,0f,0.17f,0.3f,0f,0.06f,0.3f,0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0f,0.07f,0.165f,0f,0.07f,0.095f,0f,0.07f,0.115f,0.04f,0.13f,0.125f,0f,0.12f,0.165f,0f,0.12f,0.087f,0f,0.122f,0.09f,0.012f,0.188f,0.11f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.01f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.17f,0.3f,0f,-0.06f,0.3f,0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0f,0.07f,-0.165f,0f,0.07f,-0.095f,0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0f,0.12f,-0.165f,0f,0.12f,-0.087f,0f,0.122f,-0.09f,0.012f,0.188f,-0.11f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.01f,0.168f});
  }
}
protected class MFVec2f341 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f,0f,0.5f,0.5f,0.5f,0f,0f,0.5f});
  }
}
protected class MFFloat342 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.4f,0.6f,1f});
  }
}
protected class MFRotation343 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.5f,1f,0f,0f,0.5f,-1f,0f,0f,0.1f,-1f,0f,0f,0.5f,-1f,0f,0f,0.5f});
  }
}
protected class MFFloat344 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.6f,1f});
  }
}
protected class MFVec3f345 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,0.3f,-1f,0.4f,-0.04f,-0.4f,-0.18f,0.1f,0f,-0.2f,0.15f,0.15f});
  }
}
protected class MFFloat346 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation347 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat348 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.3f,0.45f,1f});
  }
}
protected class MFRotation349 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1.5f,-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,0.5f,1f,0f,0f,1f});
  }
}
protected class MFFloat350 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.35f,0.5f,1f});
  }
}
protected class MFRotation351 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,0f,1f,0.2f,1f,0f,1f,0.5f,1f,0f,0f,1.4f});
  }
}
protected class MFFloat352 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,1f});
  }
}
protected class MFRotation353 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f});
  }
}
protected class MFFloat354 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation355 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat356 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation357 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat358 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation359 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat360 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation361 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,1f,1f,0f,0f,1f,-1f,0f,0f,1f,-1f,0f,0f,1f,-1f,0f,0f,1f});
  }
}
protected class MFFloat362 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation363 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.1f,0f,0f,1f,0f,1f,0f,0f,1f,1f,0f,0f,1f,1f,0f,0f,1.5f});
  }
}
protected class MFFloat364 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation365 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,1f,0f,0f,1f,1f,0f,0f,0.5f});
  }
}
protected class MFFloat366 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation367 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat368 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation369 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat370 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation371 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat372 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation373 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat374 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation375 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat376 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation377 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat378 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation379 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat380 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation381 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat382 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation383 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat384 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation385 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat386 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation387 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat388 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation389 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat390 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation391 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat392 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation393 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat394 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation395 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat396 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation397 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat398 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation399 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat400 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation401 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat402 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation403 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat404 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation405 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat406 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation407 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat408 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation409 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat410 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation411 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat412 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.3f,0.4f,1f});
  }
}
protected class MFRotation413 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,1f,0.25f,-1f,0f,-1f,0.35f,1f,0f,0f,0.75f,1f,0f,1f,0.5f});
  }
}
protected class MFFloat414 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation415 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat416 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation417 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat418 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation419 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat420 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.75f,1f});
  }
}
protected class MFRotation421 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.5f,0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0.35f});
  }
}
protected class MFFloat422 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation423 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat424 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation425 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat426 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation427 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat428 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation429 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat430 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation431 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat432 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation433 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat434 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation435 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat436 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation437 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat438 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation439 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat440 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,1f});
  }
}
protected class MFRotation441 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,-1f,0f,1f,1.75f});
  }
}
protected class MFFloat442 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation443 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,3f,-1f,0f,0f,0.75f,-1f,-1f,0f,0.5f});
  }
}
protected class MFFloat444 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.8f,1f});
  }
}
protected class MFRotation445 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.3f,0f,-0.5f,1f,1.3f,0f,0f,1f,0f});
  }
}
protected class MFFloat446 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation447 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat448 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation449 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat450 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation451 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat452 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation453 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat454 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation455 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat456 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation457 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat458 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation459 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat460 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation461 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat462 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation463 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat464 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation465 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat466 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation467 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat468 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation469 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat470 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation471 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat472 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation473 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat474 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation475 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat476 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation477 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat478 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation479 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat480 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation481 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat482 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation483 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat484 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation485 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat486 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation487 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat488 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation489 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,-1f,2.5f,0f,0f,-1f,1.5f,0f,0f,-1f,1.75f});
  }
}
protected class MFFloat490 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation491 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,3f,-1f,0f,0f,0.75f,-1f,-1f,0f,0.5f});
  }
}
protected class MFFloat492 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.7f,1f});
  }
}
protected class MFRotation493 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.3f,0f,0f,1f,0f,0f,0f,-1f,1f,0f,-1f,0f,0.3f});
  }
}
protected class MFFloat494 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation495 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat496 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation497 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat498 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation499 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat500 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation501 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat502 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation503 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat504 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation505 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat506 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation507 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat508 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation509 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat510 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation511 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat512 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation513 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat514 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation515 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat516 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation517 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat518 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation519 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat520 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation521 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat522 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation523 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat524 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation525 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat526 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation527 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat528 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation529 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat530 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation531 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat532 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.2f,0.35f,0.6f,0.7f,0.85f,0.88f,0.94f,0.97f,1f});
  }
}
protected class MFFloat533 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f,0f,0.2f,0.4f,1f,0f,1f,0.4f,0f});
  }
}
protected class MFFloat534 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.7f,0.8f,1f});
  }
}
protected class MFFloat535 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f,0f,0f,1f,2f,0f});
  }
}
protected class MFInt32536 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f537 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.4675f,0f,0f,0.4049f,-0.2338f,-0.1169f,0.4049f,-0.2024f,-0.2024f,0.4049f,-0.1169f,-0.2338f,0.4049f,0f,-0.2024f,0.4049f,0.1169f,-0.1169f,0.4049f,0.2024f,0f,0.4049f,0.2338f,0.1169f,0.4049f,0.2024f,0.2024f,0.4049f,0.1169f,0.2338f,0.4049f,0f,0.2024f,0.4049f,-0.1169f,0.1169f,0.4049f,-0.2024f,0f,0.2338f,-0.4049f,-0.2024f,0.2338f,-0.3506f,-0.3506f,0.2338f,-0.2024f,-0.4049f,0.2338f,0f,-0.3506f,0.2338f,0.2024f,-0.2024f,0.2338f,0.3506f,0f,0.2338f,0.4049f,0.2024f,0.2338f,0.3506f,0.3506f,0.2338f,0.2024f,0.4049f,0.2338f,0f,0.3506f,0.2338f,-0.2024f,0.2024f,0.2338f,-0.3506f,0f,0f,-0.4675f,-0.2338f,0f,-0.4049f,-0.4049f,0f,-0.2338f,-0.4675f,0f,0f,-0.4049f,0f,0.2338f,-0.2338f,0f,0.4049f,0f,0f,0.4675f,0.2338f,0f,0.4049f,0.4049f,0f,0.2338f,0.4675f,0f,0f,0.4049f,0f,-0.2338f,0.2338f,0f,-0.4049f,0f,-0.2338f,-0.4049f,-0.2024f,-0.2338f,-0.3506f,-0.3506f,-0.2338f,-0.2024f,-0.4049f,-0.2338f,0f,-0.3506f,-0.2338f,0.2024f,-0.2024f,-0.2338f,0.3506f,0f,-0.2338f,0.4049f,0.2024f,-0.2338f,0.3506f,0.3506f,-0.2338f,0.2024f,0.4049f,-0.2338f,0f,0.3506f,-0.2338f,-0.2024f,0.2024f,-0.2338f,-0.3506f,0f,-0.4049f,-0.2338f,-0.1169f,-0.4049f,-0.2024f,-0.2024f,-0.4049f,-0.1169f,-0.2338f,-0.4049f,0f,-0.2024f,-0.4049f,0.1169f,-0.1169f,-0.4049f,0.2024f,0f,-0.4049f,0.2338f,0.1169f,-0.4049f,0.2024f,0.2024f,-0.4049f,0.1169f,0.2338f,-0.4049f,0f,0.2024f,-0.4049f,-0.1169f,0.1169f,-0.4049f,-0.2024f,0f,-0.4675f,0f});
  }
}
protected class MFFloat538 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.409f,1f});
  }
}
protected class MFVec3f539 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1f,0.4f,-1f,0f,0.07f,0f,0.05f,0.06f,0.05f,2f,4f,10f});
  }
}
protected class MFFloat540 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.41f,0.71f,1f});
  }
}
protected class MFRotation541 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,1f,0.25f,-1f,0f,-1f,1.35f,-1f,1f,-1f,3.35f,-1f,0.2f,-1f,3f,-1f,0.2f,-1f,3f});
  }
}
protected class MFInt32542 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
protected class MFVec3f543 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1f,0f,0f,0.995f,0f,-0.105f,0.979f,0f,-0.208f,0.951f,0f,-0.309f,0.914f,0f,-0.407f,0.866f,0f,-0.5f,0.809f,0f,-0.588f,0.743f,0f,-0.669f,0.669f,0f,-0.743f,0.588f,0f,-0.809f,0.5f,0f,-0.866f,0.407f,0f,-0.914f,0.309f,0f,-0.951f,0.208f,0f,-0.978f,0.105f,0f,-0.995f,0f,0f,-1f,-0.105f,0f,-0.994522f,-0.208f,0f,-0.978f,-0.309f,0f,-0.951f,-0.407f,0f,-0.914f,-0.5f,0f,-0.866f,-0.588f,0f,-0.809f,-0.669f,0f,-0.743f,-0.743f,0f,-0.669f,-0.809f,0f,-0.588f,-0.866f,0f,-0.5f,-0.914f,0f,-0.407f,-0.951f,0f,-0.309f,-0.978f,0f,-0.208f,-0.995f,0f,-0.105f,-1f,0f,0f,-0.995f,0f,0.105f,-0.978f,0f,0.208f,-0.951f,0f,0.309f,-0.914f,0f,0.407f,-0.866f,0f,0.5f,-0.809f,0f,0.588f,-0.743f,0f,0.669f,-0.669f,0f,0.743f,-0.588f,0f,0.809f,-0.5f,0f,0.866f,-0.407f,0f,0.914f,-0.309f,0f,0.951f,-0.208f,0f,0.978f,-0.105f,0f,0.995f,0f,0f,1f,0.105f,0f,0.995f,0.208f,0f,0.978f,0.309f,0f,0.951f,0.407f,0f,0.914f,0.5f,0f,0.866f,0.588f,0f,0.809f,0.669f,0f,0.743f,0.743f,0f,0.669f,0.809f,0f,0.588f,0.866f,0f,0.5f,0.914f,0f,0.407f,0.951f,0f,0.309f,0.978f,0f,0.208f,0.995f,0f,0.104f,1f,0f,0f});
  }
}
}
