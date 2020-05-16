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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class JoeSkinTexcoordDisplacerKick {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new JoeSkinTexcoordDisplacerKick().initialize().toFileJSON("../data/JoeSkinTexcoordDisplacerKick.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("H-Anim").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("JoeSkinTexcoordDisplacerKick.x3d"))
        .addMeta(new metaObject().setName("info").setContent("Joe No Reservations 20161206 20161111 20160720 20121221 20040109 x3d/hanim"))
        .addMeta(new metaObject().setName("description").setContent("The Joe model is a Humanoid with textured skin."))
        .addMeta(new metaObject().setName("creator").setContent("Joe Williams"))
        .addMeta(new metaObject().setName("created").setContent("9 January 2014"))
        .addMeta(new metaObject().setName("translated").setContent("12 January 2017"))
        .addMeta(new metaObject().setName("modified").setContent("14 May 2020"))
        .addMeta(new metaObject().setName("TODO").setContent("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"))
        .addMeta(new metaObject().setName("translators").setContent("Roy Walmsley and Don Brutzman"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/JoeSkinTexcoordDisplacerKick.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html"))
        .addComments(new CommentsBlock("BS studio translation from .x3dv by Joe using BS Contact")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"))
        .addChild(new NavigationInfoObject().setDEF("Start_NavigationInfo").setHeadlight(false).setSpeed(2.5f))
        .addChild(new BackgroundObject().setDEF("blue_Background"))
        .addChild(new SpotLightObject().setDEF("light1").setAmbientIntensity(0.7f).setBeamWidth(1.5f).setColor(new float[] {0.8f,0.8f,1f}).setCutOffAngle(0.6f).setDirection(new float[] {0f,0f,0f}).setLocation(new float[] {0f,3f,3f}).setRadius(10f))
        .addChild(new PointLightObject().setDEF("light2").setAmbientIntensity(0.7f).setColor(new float[] {0.8f,0.8f,1f}).setLocation(new float[] {0f,10f,-7f}))
        .addComments(new CommentsBlock("External from the Humanoid viewpoints"))
        .addChild(new ViewpointObject().setDEF("Scene_InclinedView").setCenterOfRotation(new float[] {0f,0.85f,0f}).setDescription("Scene_Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,3.06f}))
        .addChild(new ViewpointObject().setDEF("Scene_IFrontView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Front View").setPosition(new float[] {0f,0.8f,2.58f}))
        .addChild(new ViewpointObject().setDEF("Scene_ISideView").setCenterOfRotation(new float[] {0f,0.8f,0f}).setDescription("Scene_Side View").setOrientation(new float[] {0f,1f,0f,1.5708f}).setPosition(new float[] {2.6f,0.5f,0f}))
        .addChild(new ViewpointObject().setDEF("Scene_BackView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Back View").setOrientation(new float[] {0f,1f,0f,3.14f}).setPosition(new float[] {0f,2.5f,-3f}))
        .addChild(new ViewpointObject().setDEF("Scene_TopView").setCenterOfRotation(new float[] {0f,1.5f,0f}).setDescription("Scene_Top View").setOrientation(new float[] {1f,0f,0f,-1.5708f}).setPosition(new float[] {0f,3.5f,0f}))
        .addChild(new GroupObject().setDEF("Joe_Humanoid")
          .addChild(new HAnimHumanoidObject().setName("Human").setDEF("Joe_Human").setVersion("2.0")
            .addJoints(new HAnimJointObject().setName("humanoid_root").setDEF("Joe_humanoid_root").setCenter(new float[] {0f,0.875f,0f})
              .addChild(new HAnimSegmentObject().setName("sacrum").setDEF("Joe_sacrum")
                .addChild(new HAnimSiteObject().setName("RootFront_view").setDEF("Joe_RootFront_view")
                  .addChild(new TransformObject().setDEF("hanimcordsys").setScale(new float[] {0.175f,0.175f,0.175f})
                    .addChild(new ViewpointObject().setDEF("ViewBodyRootAxes").setDescription("Joe_HAnim Root Coordinate Axes View"))
                    .addChild(new ShapeObject().setDEF("AxisLinesShape")
                      .addComments(new CommentsBlock("RGB lines showing XYZ axes"))
                      .setGeometry(new IndexedLineSetObject().setColorPerVertex(false).setColorIndex(new MFInt32Object(new MFInt321().getArray())).setCoordIndex(new MFInt32Object(new MFInt322().getArray()))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f3().getArray())))
                        .setColor(new ColorObject().setColor(new MFColorObject(new MFColor4().getArray()))))))))
              .addChild(new HAnimJointObject().setName("sacroiliac").setDEF("Joe_sacroiliac").setCenter(new float[] {0f,0.92f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt325().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat6().getArray()))
                .addChild(new HAnimJointObject().setName("l_hip").setDEF("Joe_l_hip").setCenter(new float[] {0.1f,0.92f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt327().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat8().getArray()))
                  .addChild(new HAnimJointObject().setName("l_knee").setDEF("Joe_l_knee").setCenter(new float[] {0.115f,0.466f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt329().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat10().getArray()))
                    .addChild(new HAnimJointObject().setName("l_ankle").setDEF("Joe_l_ankle").setCenter(new float[] {0.115f,0.069f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt3211().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat12().getArray()))
                      .addChild(new HAnimJointObject().setName("l_subtalar").setDEF("Joe_l_subtalar").setCenter(new float[] {0.115f,0.031f,0.03f}).setSkinCoordIndex(new MFInt32Object(new MFInt3213().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat14().getArray()))
                        .addChild(new HAnimJointObject().setName("l_midtarsal").setDEF("Joe_l_midtarsal").setCenter(new float[] {0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt32Object(new MFInt3215().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat16().getArray()))
                          .addChild(new HAnimJointObject().setName("l_metatarsal").setDEF("Joe_l_metatarsal").setCenter(new float[] {0.115f,0.02f,0.122f}).setSkinCoordIndex(new MFInt32Object(new MFInt3217().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat18().getArray()))))))))
                .addChild(new HAnimJointObject().setName("r_hip").setDEF("Joe_r_hip").setCenter(new float[] {-0.1f,0.92f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt3219().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat20().getArray()))
                  .addChild(new HAnimJointObject().setName("r_knee").setDEF("Joe_r_knee").setCenter(new float[] {-0.05f,0.466f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt3221().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat22().getArray()))
                    .addChild(new HAnimJointObject().setName("r_ankle").setDEF("Joe_r_ankle").setCenter(new float[] {-0.115f,0.069f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt3223().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat24().getArray()))
                      .addChild(new HAnimJointObject().setName("r_subtalar").setDEF("Joe_r_subtalar").setCenter(new float[] {-0.1f,0.015f,-0.01f}).setSkinCoordIndex(new MFInt32Object(new MFInt3225().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat26().getArray()))
                        .addChild(new HAnimJointObject().setName("r_midtarsal").setDEF("Joe_r_midtarsal").setCenter(new float[] {-0.115f,0.037f,0.09f}).setSkinCoordIndex(new MFInt32Object(new MFInt3227().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat28().getArray()))
                          .addChild(new HAnimJointObject().setName("r_metatarsal").setDEF("Joe_r_metatarsal").setCenter(new float[] {-0.1f,0.01f,0.14f}).setSkinCoordIndex(new MFInt32Object(new MFInt3229().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat30().getArray())))))))))
              .addChild(new HAnimJointObject().setName("vl5").setDEF("Joe_vl5").setCenter(new float[] {0f,1.045f,-0.095f}).setSkinCoordIndex(new MFInt32Object(new MFInt3231().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat32().getArray()))
                .addChild(new HAnimJointObject().setName("vl4").setDEF("Joe_vl4").setCenter(new float[] {0f,1.068f,-0.085f})
                  .addChild(new HAnimJointObject().setName("vl3").setDEF("Joe_vl3").setCenter(new float[] {0f,1.092f,-0.0725f})
                    .addChild(new HAnimJointObject().setName("vl2").setDEF("Joe_vl2").setCenter(new float[] {0f,1.12f,-0.065f}).setSkinCoordIndex(new MFInt32Object(new MFInt3233().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat34().getArray()))
                      .addChild(new HAnimJointObject().setName("vl1").setDEF("Joe_vl1").setCenter(new float[] {0f,1.1459f,-0.0625f})
                        .addChild(new HAnimJointObject().setName("vt12").setDEF("Joe_vt12").setCenter(new float[] {0f,1.179f,-0.068f})
                          .addChild(new HAnimJointObject().setName("vt11").setDEF("Joe_vt11").setCenter(new float[] {0f,1.2679f,-0.081f})
                            .addChild(new HAnimJointObject().setName("vt10").setDEF("Joe_vt10").setCenter(new float[] {0f,1.242f,-0.09f}).setSkinCoordIndex(new MFInt32Object(new MFInt3235().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat36().getArray()))
                              .addChild(new HAnimJointObject().setName("vt9").setDEF("Joe_vt9").setCenter(new float[] {0f,1.268f,-0.1f}).setSkinCoordIndex(new MFInt32Object(new MFInt3237().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat38().getArray()))
                                .addChild(new HAnimJointObject().setName("vt8").setDEF("Joe_vt8").setCenter(new float[] {0f,1.294f,-0.11f})
                                  .addChild(new HAnimJointObject().setName("vt7").setDEF("Joe_vt7").setCenter(new float[] {0f,1.323f,-0.1155f})
                                    .addChild(new HAnimJointObject().setName("vt6").setDEF("Joe_vt6").setCenter(new float[] {0f,1.352f,-0.12f})
                                      .addChild(new HAnimJointObject().setName("vt5").setDEF("Joe_vt5").setCenter(new float[] {0f,1.381f,-0.1235f})
                                        .addChild(new HAnimJointObject().setName("vt4").setDEF("Joe_vt4").setCenter(new float[] {0f,1.41f,-0.1235f}).setSkinCoordIndex(new MFInt32Object(new MFInt3239().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat40().getArray()))
                                          .addChild(new HAnimJointObject().setName("vt3").setDEF("Joe_vt3").setCenter(new float[] {0f,1.438f,-0.12f})
                                            .addChild(new HAnimJointObject().setName("vt2").setDEF("Joe_vt2").setCenter(new float[] {0f,1.468f,-0.105f})
                                              .addChild(new HAnimJointObject().setName("vt1").setDEF("Joe_vt1").setCenter(new float[] {0f,1.497f,-0.09f}).setSkinCoordIndex(new MFInt32Object(new MFInt3241().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat42().getArray()))
                                                .addChild(new HAnimJointObject().setName("vc7").setDEF("Joe_vc7").setCenter(new float[] {0f,1.525f,-0.072f}).setSkinCoordIndex(new MFInt32Object(new MFInt3243().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat44().getArray()))
                                                  .addChild(new HAnimJointObject().setName("vc6").setDEF("Joe_vc6").setCenter(new float[] {0f,1.54f,-0.05f})
                                                    .addChild(new HAnimJointObject().setName("vc5").setDEF("Joe_vc5").setCenter(new float[] {0f,1.552f,-0.035f})
                                                      .addChild(new HAnimJointObject().setName("vc4").setDEF("Joe_vc4").setCenter(new float[] {0f,1.5675f,-0.0256f})
                                                        .addChild(new HAnimJointObject().setName("vc3").setDEF("Joe_vc3").setCenter(new float[] {0f,1.58225f,-0.0185f})
                                                          .addChild(new HAnimJointObject().setName("vc2").setDEF("Joe_vc2").setCenter(new float[] {0f,1.595f,-0.0175f})
                                                            .addChild(new HAnimJointObject().setName("vc1").setDEF("Joe_vc1").setCenter(new float[] {0f,1.61f,-0.015f})
                                                              .addChild(new HAnimJointObject().setName("skullbase").setDEF("Joe_skullbase").setCenter(new float[] {0f,1.63f,-0.01f}).setSkinCoordIndex(new MFInt32Object(new MFInt3245().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat46().getArray()))
                                                                .addDisplacers(new HAnimDisplacerObject().setName("skull_tip_raiser_action").setDEF("Joe_skull_tipTest").setCoordIndex(new MFInt32Object(new MFInt3247().getArray())).setDisplacements(new MFVec3fObject(new MFVec3f48().getArray())))
                                                                .addChild(new HAnimJointObject().setName("l_eyelid_joint").setDEF("Joe_l_eyelid_joint").setCenter(new float[] {0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJointObject().setName("l_eyeball_joint").setDEF("Joe_l_eyeball_joint").setCenter(new float[] {0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJointObject().setName("l_eyebrow_joint").setDEF("Joe_l_eyebrow_joint").setCenter(new float[] {0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJointObject().setName("l_eyelid_joint").setDEF("Joe_r_eyelid_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJointObject().setName("l_eyeball_joint").setDEF("Joe_r_eyeball_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJointObject().setName("l_eyebrow_joint").setDEF("Joe_r_eyebrow_joint").setCenter(new float[] {-0.034f,1.659f,0.06f}))
                                                                .addChild(new HAnimJointObject().setName("temporomandibular").setDEF("Joe_temporomandibular").setCenter(new float[] {0.034f,1.659f,0.06f})))))))))
                                                  .addChild(new HAnimJointObject().setName("l_sternoclavicular").setDEF("Joe_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setSkinCoordIndex(new MFInt32Object(new MFInt3249().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat50().getArray()))
                                                    .addChild(new HAnimJointObject().setName("l_acromioclavicular").setDEF("Joe_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setSkinCoordIndex(new MFInt32Object(new MFInt3251().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat52().getArray()))
                                                      .addChild(new HAnimJointObject().setName("l_shoulder").setDEF("Joe_l_shoulder").setCenter(new float[] {0.2f,1.44f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt3253().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat54().getArray()))
                                                        .addChild(new HAnimJointObject().setName("l_elbow").setDEF("Joe_l_elbow").setCenter(new float[] {0.2f,1.1388f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt3255().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat56().getArray()))
                                                          .addChild(new HAnimJointObject().setName("l_wrist").setDEF("Joe_l_wrist").setCenter(new float[] {0.2f,0.87f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt3257().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat58().getArray()))
                                                            .addChild(new HAnimJointObject().setName("l_thumb1").setDEF("Joe_l_thumb1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setSkinCoordIndex(new MFInt32Object(new MFInt3259().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat60().getArray()))
                                                              .addChild(new HAnimJointObject().setName("l_thumb2").setDEF("Joe_l_thumb2").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setSkinCoordIndex(new MFInt32Object(new MFInt3261().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat62().getArray()))
                                                                .addChild(new HAnimJointObject().setName("l_thumb3").setDEF("Joe_l_thumb3").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setSkinCoordIndex(new MFInt32Object(new MFInt3263().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat64().getArray())))))
                                                            .addChild(new HAnimJointObject().setName("l_index0").setDEF("Joe_l_index0").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setSkinCoordIndex(new MFInt32Object(new MFInt3265().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat66().getArray()))
                                                              .addChild(new HAnimJointObject().setName("l_index1").setDEF("Joe_l_index1").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setSkinCoordIndex(new MFInt32Object(new MFInt3267().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat68().getArray()))
                                                                .addChild(new HAnimJointObject().setName("l_index2").setDEF("Joe_l_index2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setSkinCoordIndex(new MFInt32Object(new MFInt3269().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat70().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("l_index3").setDEF("Joe_l_index3").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setSkinCoordIndex(new MFInt32Object(new MFInt3271().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat72().getArray()))))))
                                                            .addChild(new HAnimJointObject().setName("l_middle0").setDEF("Joe_l_middle0").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setSkinCoordIndex(new MFInt32Object(new MFInt3273().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat74().getArray()))
                                                              .addChild(new HAnimJointObject().setName("l_middle1").setDEF("Joe_l_middle1").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setSkinCoordIndex(new MFInt32Object(new MFInt3275().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat76().getArray()))
                                                                .addChild(new HAnimJointObject().setName("l_middle2").setDEF("Joe_l_middle2").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setSkinCoordIndex(new MFInt32Object(new MFInt3277().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat78().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("l_middle3").setDEF("Joe_l_middle3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setSkinCoordIndex(new MFInt32Object(new MFInt3279().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat80().getArray()))))))
                                                            .addChild(new HAnimJointObject().setName("l_ring0").setDEF("Joe_l_ring0").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setSkinCoordIndex(new MFInt32Object(new MFInt3281().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat82().getArray()))
                                                              .addChild(new HAnimJointObject().setName("l_ring1").setDEF("Joe_l_ring1").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setSkinCoordIndex(new MFInt32Object(new MFInt3283().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat84().getArray()))
                                                                .addChild(new HAnimJointObject().setName("l_ring2").setDEF("Joe_l_ring2").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setSkinCoordIndex(new MFInt32Object(new MFInt3285().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat86().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("l_ring3").setDEF("Joe_l_ring3").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setSkinCoordIndex(new MFInt32Object(new MFInt3287().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat88().getArray()))))))
                                                            .addChild(new HAnimJointObject().setName("l_pinky0").setDEF("Joe_l_pinky0").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setSkinCoordIndex(new MFInt32Object(new MFInt3289().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat90().getArray()))
                                                              .addChild(new HAnimJointObject().setName("l_pinky1").setDEF("Joe_l_pinky1").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setSkinCoordIndex(new MFInt32Object(new MFInt3291().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat92().getArray()))
                                                                .addChild(new HAnimJointObject().setName("l_pinky2").setDEF("Joe_l_pinky2").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setSkinCoordIndex(new MFInt32Object(new MFInt3293().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat94().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("l_pinky3").setDEF("Joe_l_pinky3").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setSkinCoordIndex(new MFInt32Object(new MFInt3295().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat96().getArray())))))))))))
                                                  .addChild(new HAnimJointObject().setName("r_sternoclavicular").setDEF("Joe_r_sternoclavicular").setCenter(new float[] {-0.03f,1.46f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt3297().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat98().getArray()))
                                                    .addChild(new HAnimJointObject().setName("r_acromioclavicular").setDEF("Joe_r_acromioclavicular").setCenter(new float[] {-0.09f,1.41f,-0.11f}).setSkinCoordIndex(new MFInt32Object(new MFInt3299().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat100().getArray()))
                                                      .addChild(new HAnimJointObject().setName("r_shoulder").setDEF("Joe_r_shoulder").setCenter(new float[] {-0.2f,1.44f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt32101().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat102().getArray()))
                                                        .addChild(new HAnimJointObject().setName("r_elbow").setDEF("Joe_r_elbow").setCenter(new float[] {-0.2f,1.1388f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt32103().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat104().getArray()))
                                                          .addChild(new HAnimJointObject().setName("r_wrist").setDEF("Joe_r_wrist").setCenter(new float[] {-0.2f,0.89f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt32105().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat106().getArray()))
                                                            .addChild(new HAnimJointObject().setName("r_thumb1").setDEF("Joe_r_thumb1").setCenter(new float[] {-0.2f,0.85f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt32107().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat108().getArray()))
                                                              .addChild(new HAnimJointObject().setName("r_thumb2").setDEF("Joe_r_thumb2").setCenter(new float[] {-0.2f,0.82f,0.03f}).setSkinCoordIndex(new MFInt32Object(new MFInt32109().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat110().getArray()))
                                                                .addChild(new HAnimJointObject().setName("r_thumb3").setDEF("Joe_r_thumb3").setCenter(new float[] {-0.2f,0.8f,0.05f}).setSkinCoordIndex(new MFInt32Object(new MFInt32111().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat112().getArray())))))
                                                            .addChild(new HAnimJointObject().setName("r_index0").setDEF("Joe_r_index0").setCenter(new float[] {-0.2f,0.84f,-0.015f}).setSkinCoordIndex(new MFInt32Object(new MFInt32113().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat114().getArray()))
                                                              .addChild(new HAnimJointObject().setName("r_index1").setDEF("Joe_r_index1").setCenter(new float[] {-0.2f,0.793f,-0.015f}).setSkinCoordIndex(new MFInt32Object(new MFInt32115().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat116().getArray()))
                                                                .addChild(new HAnimJointObject().setName("r_index2").setDEF("Joe_r_index2").setCenter(new float[] {-0.2f,0.745f,-0.015f}).setSkinCoordIndex(new MFInt32Object(new MFInt32117().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat118().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("r_index3").setDEF("Joe_r_index3").setCenter(new float[] {-0.2f,0.72f,-0.015f}).setSkinCoordIndex(new MFInt32Object(new MFInt32119().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat120().getArray()))))))
                                                            .addChild(new HAnimJointObject().setName("r_middle0").setDEF("Joe_r_middle0").setCenter(new float[] {-0.2f,0.835f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt32121().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat122().getArray()))
                                                              .addChild(new HAnimJointObject().setName("r_middle1").setDEF("Joe_r_middle1").setCenter(new float[] {-0.2f,0.788f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt32123().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat124().getArray()))
                                                                .addChild(new HAnimJointObject().setName("r_middle2").setDEF("Joe_r_middle2").setCenter(new float[] {-0.2f,0.74f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt32125().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat126().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("r_middle3").setDEF("Joe_r_middle3").setCenter(new float[] {-0.2f,0.7142f,-0.04f}).setSkinCoordIndex(new MFInt32Object(new MFInt32127().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat128().getArray()))))))
                                                            .addChild(new HAnimJointObject().setName("r_ring0").setDEF("Joe_r_ring0").setCenter(new float[] {-0.2f,0.835f,-0.065f}).setSkinCoordIndex(new MFInt32Object(new MFInt32129().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat130().getArray()))
                                                              .addChild(new HAnimJointObject().setName("r_ring1").setDEF("Joe_r_ring1").setCenter(new float[] {-0.2f,0.793f,-0.065f}).setSkinCoordIndex(new MFInt32Object(new MFInt32131().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat132().getArray()))
                                                                .addChild(new HAnimJointObject().setName("r_ring2").setDEF("Joe_r_ring2").setCenter(new float[] {-0.2f,0.74f,-0.065f}).setSkinCoordIndex(new MFInt32Object(new MFInt32133().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat134().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("r_ring3").setDEF("Joe_r_ring3").setCenter(new float[] {-0.2f,0.7177f,-0.065f}).setSkinCoordIndex(new MFInt32Object(new MFInt32135().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat136().getArray()))))))
                                                            .addChild(new HAnimJointObject().setName("r_pinky0").setDEF("Joe_r_pinky0").setCenter(new float[] {-0.2f,0.84f,-0.085f}).setSkinCoordIndex(new MFInt32Object(new MFInt32137().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat138().getArray()))
                                                              .addChild(new HAnimJointObject().setName("r_pinky1").setDEF("Joe_r_pinky1").setCenter(new float[] {-0.2f,0.79f,-0.085f}).setSkinCoordIndex(new MFInt32Object(new MFInt32139().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat140().getArray()))
                                                                .addChild(new HAnimJointObject().setName("r_pinky2").setDEF("Joe_r_pinky2").setCenter(new float[] {-0.2f,0.755f,-0.085f}).setSkinCoordIndex(new MFInt32Object(new MFInt32141().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat142().getArray()))
                                                                  .addChild(new HAnimJointObject().setName("r_pinky3").setDEF("Joe_r_pinky3").setCenter(new float[] {-0.2f,0.735f,-0.09f}).setSkinCoordIndex(new MFInt32Object(new MFInt32143().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat144().getArray()))))))))))))))))))))))))))))))
            .addSkin(new ShapeObject().setDEF("Joe_Shape")
              .setAppearance(new AppearanceObject().setDEF("Joe_skin_Appearance")
                .setMaterial(new MaterialObject().setDEF("Joe_skin_Material").setDiffuseColor(new float[] {0.3f,0.3f,0.6f}).setEmissiveColor(new float[] {0.3f,0.3f,0.6f}))
                .setTexture(new ImageTextureObject().setDEF("JoeSkinImageTexture").setUrl(new MFStringObject(new MFString145().getArray())))
                .setTextureTransform(new TextureTransformObject().setDEF("kicktextrans")))
              .setGeometry(new IndexedFaceSetObject().setDEF("Joe_skin_IndexedFaceSet").setCreaseAngle(3.14f).setCoordIndex(new MFInt32Object(new MFInt32146().getArray()).append(new MFInt32147().getArray()).append(new MFInt32148().getArray()).append(new MFInt32149().getArray()))
                .setCoord(new CoordinateObject().setDEF("Joe_SkinCoord").setPoint(new MFVec3fObject(new MFVec3f150().getArray()).append(new MFVec3f151().getArray())))
                .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f152().getArray())))))
            .setSkinCoord(new CoordinateObject().setUSE("Joe_SkinCoord"))
            .addJoints(new HAnimJointObject().setUSE("Joe_humanoid_root"))
            .addJoints(new HAnimJointObject().setUSE("Joe_sacroiliac"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_hip"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_knee"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_ankle"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_subtalar"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_midtarsal"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_metatarsal"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_hip"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_knee"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_ankle"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_subtalar"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_midtarsal"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_metatarsal"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vl5"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vl4"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vl3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vl2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vl1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt12"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt11"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt10"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt9"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt8"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt7"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt6"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt5"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt4"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vt1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vc7"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vc6"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vc5"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vc4"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vc3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vc2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_vc1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_skullbase"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_eyelid_joint"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_eyeball_joint"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_eyebrow_joint"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_eyelid_joint"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_eyeball_joint"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_eyebrow_joint"))
            .addJoints(new HAnimJointObject().setUSE("Joe_temporomandibular"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_sternoclavicular"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_acromioclavicular"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_shoulder"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_elbow"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_wrist"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_thumb1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_thumb2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_thumb3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_index0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_index1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_index2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_index3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_middle0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_middle1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_middle2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_middle3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_ring0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_ring1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_ring2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_ring3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_pinky0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_pinky1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_pinky2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_l_pinky3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_sternoclavicular"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_acromioclavicular"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_shoulder"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_elbow"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_wrist"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_thumb1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_thumb2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_thumb3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_index0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_index1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_index2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_index3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_middle0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_middle1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_middle2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_middle3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_ring0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_ring1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_ring2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_ring3"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_pinky0"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_pinky1"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_pinky2"))
            .addJoints(new HAnimJointObject().setUSE("Joe_r_pinky3"))
            .addSegments(new HAnimSegmentObject().setUSE("Joe_sacrum"))
            .addViewpoints(new HAnimSiteObject().setUSE("Joe_RootFront_view"))))
        .addChild(new GroupObject()
          .addChild(new TimeSensorObject().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addComments(new CommentsBlock("Interpolators"))
          .addChild(new OrientationInterpolatorObject().setDEF("HumanoidRootRotInterp").setKey(new MFFloatObject(new MFFloat153().getArray())).setKeyValue(new MFRotationObject(new MFRotation154().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("HumanoidRootTransInterp").setKey(new MFFloatObject(new MFFloat155().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f156().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("sacroiliacRotInterp").setKey(new MFFloatObject(new MFFloat157().getArray())).setKeyValue(new MFRotationObject(new MFRotation158().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_hipRotInterp").setKey(new MFFloatObject(new MFFloat159().getArray())).setKeyValue(new MFRotationObject(new MFRotation160().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat161().getArray())).setKeyValue(new MFRotationObject(new MFRotation162().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat163().getArray())).setKeyValue(new MFRotationObject(new MFRotation164().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_subtalarRotInterp").setKey(new MFFloatObject(new MFFloat165().getArray())).setKeyValue(new MFRotationObject(new MFRotation166().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_midtarsalRotInterp").setKey(new MFFloatObject(new MFFloat167().getArray())).setKeyValue(new MFRotationObject(new MFRotation168().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_metatarsalRotInterp").setKey(new MFFloatObject(new MFFloat169().getArray())).setKeyValue(new MFRotationObject(new MFRotation170().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_hipRotInterp").setKey(new MFFloatObject(new MFFloat171().getArray())).setKeyValue(new MFRotationObject(new MFRotation172().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat173().getArray())).setKeyValue(new MFRotationObject(new MFRotation174().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat175().getArray())).setKeyValue(new MFRotationObject(new MFRotation176().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_subtalarRotInterp").setKey(new MFFloatObject(new MFFloat177().getArray())).setKeyValue(new MFRotationObject(new MFRotation178().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_midtarsalRotInterp").setKey(new MFFloatObject(new MFFloat179().getArray())).setKeyValue(new MFRotationObject(new MFRotation180().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_metatarsalRotInterp").setKey(new MFFloatObject(new MFFloat181().getArray())).setKeyValue(new MFRotationObject(new MFRotation182().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vl5RotInterp").setKey(new MFFloatObject(new MFFloat183().getArray())).setKeyValue(new MFRotationObject(new MFRotation184().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vl4RotInterp").setKey(new MFFloatObject(new MFFloat185().getArray())).setKeyValue(new MFRotationObject(new MFRotation186().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vl3RotInterp").setKey(new MFFloatObject(new MFFloat187().getArray())).setKeyValue(new MFRotationObject(new MFRotation188().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vl2RotInterp").setKey(new MFFloatObject(new MFFloat189().getArray())).setKeyValue(new MFRotationObject(new MFRotation190().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vl1RotInterp").setKey(new MFFloatObject(new MFFloat191().getArray())).setKeyValue(new MFRotationObject(new MFRotation192().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt12RotInterp").setKey(new MFFloatObject(new MFFloat193().getArray())).setKeyValue(new MFRotationObject(new MFRotation194().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt11RotInterp").setKey(new MFFloatObject(new MFFloat195().getArray())).setKeyValue(new MFRotationObject(new MFRotation196().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt10RotInterp").setKey(new MFFloatObject(new MFFloat197().getArray())).setKeyValue(new MFRotationObject(new MFRotation198().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt9RotInterp").setKey(new MFFloatObject(new MFFloat199().getArray())).setKeyValue(new MFRotationObject(new MFRotation200().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt8RotInterp").setKey(new MFFloatObject(new MFFloat201().getArray())).setKeyValue(new MFRotationObject(new MFRotation202().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt7RotInterp").setKey(new MFFloatObject(new MFFloat203().getArray())).setKeyValue(new MFRotationObject(new MFRotation204().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt6RotInterp").setKey(new MFFloatObject(new MFFloat205().getArray())).setKeyValue(new MFRotationObject(new MFRotation206().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt5RotInterp").setKey(new MFFloatObject(new MFFloat207().getArray())).setKeyValue(new MFRotationObject(new MFRotation208().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt4RotInterp").setKey(new MFFloatObject(new MFFloat209().getArray())).setKeyValue(new MFRotationObject(new MFRotation210().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt3RotInterp").setKey(new MFFloatObject(new MFFloat211().getArray())).setKeyValue(new MFRotationObject(new MFRotation212().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt2RotInterp").setKey(new MFFloatObject(new MFFloat213().getArray())).setKeyValue(new MFRotationObject(new MFRotation214().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vt1RotInterp").setKey(new MFFloatObject(new MFFloat215().getArray())).setKeyValue(new MFRotationObject(new MFRotation216().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vc7RotInterp").setKey(new MFFloatObject(new MFFloat217().getArray())).setKeyValue(new MFRotationObject(new MFRotation218().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vc6RotInterp").setKey(new MFFloatObject(new MFFloat219().getArray())).setKeyValue(new MFRotationObject(new MFRotation220().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vc5RotInterp").setKey(new MFFloatObject(new MFFloat221().getArray())).setKeyValue(new MFRotationObject(new MFRotation222().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vc4RotInterp").setKey(new MFFloatObject(new MFFloat223().getArray())).setKeyValue(new MFRotationObject(new MFRotation224().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vc3RotInterp").setKey(new MFFloatObject(new MFFloat225().getArray())).setKeyValue(new MFRotationObject(new MFRotation226().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vc2RotInterp").setKey(new MFFloatObject(new MFFloat227().getArray())).setKeyValue(new MFRotationObject(new MFRotation228().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("vc1RotInterp").setKey(new MFFloatObject(new MFFloat229().getArray())).setKeyValue(new MFRotationObject(new MFRotation230().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("skullbaseRotInterp").setKey(new MFFloatObject(new MFFloat231().getArray())).setKeyValue(new MFRotationObject(new MFRotation232().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_eyelid_jointRotInterp").setKey(new MFFloatObject(new MFFloat233().getArray())).setKeyValue(new MFRotationObject(new MFRotation234().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_eyeball_jointRotInterp").setKey(new MFFloatObject(new MFFloat235().getArray())).setKeyValue(new MFRotationObject(new MFRotation236().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_eyebrow_jointRotInterp").setKey(new MFFloatObject(new MFFloat237().getArray())).setKeyValue(new MFRotationObject(new MFRotation238().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_eyelid_jointRotInterp").setKey(new MFFloatObject(new MFFloat239().getArray())).setKeyValue(new MFRotationObject(new MFRotation240().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_eyeball_jointRotInterp").setKey(new MFFloatObject(new MFFloat241().getArray())).setKeyValue(new MFRotationObject(new MFRotation242().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_eyebrow_jointRotInterp").setKey(new MFFloatObject(new MFFloat243().getArray())).setKeyValue(new MFRotationObject(new MFRotation244().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("temporomandibularRotInterp").setKey(new MFFloatObject(new MFFloat245().getArray())).setKeyValue(new MFRotationObject(new MFRotation246().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_sternoclavicularRotInterp").setKey(new MFFloatObject(new MFFloat247().getArray())).setKeyValue(new MFRotationObject(new MFRotation248().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_acromioclavicularRotInterp").setKey(new MFFloatObject(new MFFloat249().getArray())).setKeyValue(new MFRotationObject(new MFRotation250().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat251().getArray())).setKeyValue(new MFRotationObject(new MFRotation252().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat253().getArray())).setKeyValue(new MFRotationObject(new MFRotation254().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_wristRotInterp").setKey(new MFFloatObject(new MFFloat255().getArray())).setKeyValue(new MFRotationObject(new MFRotation256().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_thumb1RotInterp").setKey(new MFFloatObject(new MFFloat257().getArray())).setKeyValue(new MFRotationObject(new MFRotation258().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_thumb2RotInterp").setKey(new MFFloatObject(new MFFloat259().getArray())).setKeyValue(new MFRotationObject(new MFRotation260().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_thumb3RotInterp").setKey(new MFFloatObject(new MFFloat261().getArray())).setKeyValue(new MFRotationObject(new MFRotation262().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_index0RotInterp").setKey(new MFFloatObject(new MFFloat263().getArray())).setKeyValue(new MFRotationObject(new MFRotation264().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_index1RotInterp").setKey(new MFFloatObject(new MFFloat265().getArray())).setKeyValue(new MFRotationObject(new MFRotation266().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_index2RotInterp").setKey(new MFFloatObject(new MFFloat267().getArray())).setKeyValue(new MFRotationObject(new MFRotation268().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_index3RotInterp").setKey(new MFFloatObject(new MFFloat269().getArray())).setKeyValue(new MFRotationObject(new MFRotation270().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_middle0RotInterp").setKey(new MFFloatObject(new MFFloat271().getArray())).setKeyValue(new MFRotationObject(new MFRotation272().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_middle1RotInterp").setKey(new MFFloatObject(new MFFloat273().getArray())).setKeyValue(new MFRotationObject(new MFRotation274().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_middle2RotInterp").setKey(new MFFloatObject(new MFFloat275().getArray())).setKeyValue(new MFRotationObject(new MFRotation276().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_middle3RotInterp").setKey(new MFFloatObject(new MFFloat277().getArray())).setKeyValue(new MFRotationObject(new MFRotation278().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_ring0RotInterp").setKey(new MFFloatObject(new MFFloat279().getArray())).setKeyValue(new MFRotationObject(new MFRotation280().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_ring1RotInterp").setKey(new MFFloatObject(new MFFloat281().getArray())).setKeyValue(new MFRotationObject(new MFRotation282().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_ring2RotInterp").setKey(new MFFloatObject(new MFFloat283().getArray())).setKeyValue(new MFRotationObject(new MFRotation284().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_ring3RotInterp").setKey(new MFFloatObject(new MFFloat285().getArray())).setKeyValue(new MFRotationObject(new MFRotation286().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_pinky0RotInterp").setKey(new MFFloatObject(new MFFloat287().getArray())).setKeyValue(new MFRotationObject(new MFRotation288().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_pinky1RotInterp").setKey(new MFFloatObject(new MFFloat289().getArray())).setKeyValue(new MFRotationObject(new MFRotation290().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_pinky2RotInterp").setKey(new MFFloatObject(new MFFloat291().getArray())).setKeyValue(new MFRotationObject(new MFRotation292().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("l_pinky3RotInterp").setKey(new MFFloatObject(new MFFloat293().getArray())).setKeyValue(new MFRotationObject(new MFRotation294().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_sternoclavicularRotInterp").setKey(new MFFloatObject(new MFFloat295().getArray())).setKeyValue(new MFRotationObject(new MFRotation296().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_acromioclavicularRotInterp").setKey(new MFFloatObject(new MFFloat297().getArray())).setKeyValue(new MFRotationObject(new MFRotation298().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat299().getArray())).setKeyValue(new MFRotationObject(new MFRotation300().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat301().getArray())).setKeyValue(new MFRotationObject(new MFRotation302().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_wristRotInterp").setKey(new MFFloatObject(new MFFloat303().getArray())).setKeyValue(new MFRotationObject(new MFRotation304().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_thumb1RotInterp").setKey(new MFFloatObject(new MFFloat305().getArray())).setKeyValue(new MFRotationObject(new MFRotation306().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_thumb2RotInterp").setKey(new MFFloatObject(new MFFloat307().getArray())).setKeyValue(new MFRotationObject(new MFRotation308().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_thumb3RotInterp").setKey(new MFFloatObject(new MFFloat309().getArray())).setKeyValue(new MFRotationObject(new MFRotation310().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_index0RotInterp").setKey(new MFFloatObject(new MFFloat311().getArray())).setKeyValue(new MFRotationObject(new MFRotation312().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_index1RotInterp").setKey(new MFFloatObject(new MFFloat313().getArray())).setKeyValue(new MFRotationObject(new MFRotation314().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_index2RotInterp").setKey(new MFFloatObject(new MFFloat315().getArray())).setKeyValue(new MFRotationObject(new MFRotation316().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_index3RotInterp").setKey(new MFFloatObject(new MFFloat317().getArray())).setKeyValue(new MFRotationObject(new MFRotation318().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_middle0RotInterp").setKey(new MFFloatObject(new MFFloat319().getArray())).setKeyValue(new MFRotationObject(new MFRotation320().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_middle1RotInterp").setKey(new MFFloatObject(new MFFloat321().getArray())).setKeyValue(new MFRotationObject(new MFRotation322().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_middle2RotInterp").setKey(new MFFloatObject(new MFFloat323().getArray())).setKeyValue(new MFRotationObject(new MFRotation324().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_middle3RotInterp").setKey(new MFFloatObject(new MFFloat325().getArray())).setKeyValue(new MFRotationObject(new MFRotation326().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_ring0RotInterp").setKey(new MFFloatObject(new MFFloat327().getArray())).setKeyValue(new MFRotationObject(new MFRotation328().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_ring1RotInterp").setKey(new MFFloatObject(new MFFloat329().getArray())).setKeyValue(new MFRotationObject(new MFRotation330().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_ring2RotInterp").setKey(new MFFloatObject(new MFFloat331().getArray())).setKeyValue(new MFRotationObject(new MFRotation332().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_ring3RotInterp").setKey(new MFFloatObject(new MFFloat333().getArray())).setKeyValue(new MFRotationObject(new MFRotation334().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_pinky0RotInterp").setKey(new MFFloatObject(new MFFloat335().getArray())).setKeyValue(new MFRotationObject(new MFRotation336().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_pinky1RotInterp").setKey(new MFFloatObject(new MFFloat337().getArray())).setKeyValue(new MFRotationObject(new MFRotation338().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_pinky2RotInterp").setKey(new MFFloatObject(new MFFloat339().getArray())).setKeyValue(new MFRotationObject(new MFRotation340().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("r_pinky3RotInterp").setKey(new MFFloatObject(new MFFloat341().getArray())).setKeyValue(new MFRotationObject(new MFRotation342().getArray()))))
        .addComments(new CommentsBlock("TimeSensor to Interpolators"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("HumanoidRootRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("HumanoidRootTransInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("sacroiliacRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_subtalarRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_midtarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_metatarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_subtalarRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_midtarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_metatarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl5RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl4RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vl1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt12RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt11RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt10RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt9RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt8RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt7RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt6RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt5RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt4RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vt1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc7RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc6RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc5RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc4RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("vc1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("skullbaseRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_eyelid_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_eyeball_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_eyebrow_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_eyelid_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_eyeball_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_eyebrow_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("temporomandibularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_sternoclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_acromioclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_thumb1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_thumb2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_thumb3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_index3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_middle3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_ring3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("l_pinky3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_sternoclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_acromioclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_thumb1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_thumb2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_thumb3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_index3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_middle3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_ring3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("r_pinky3RotInterp"))
        .addComments(new CommentsBlock("Routes from Interpolators to Joe_ model Joints"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("HumanoidRootRotInterp").setToField("set_rotation").setToNode("Joe_humanoid_root"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("HumanoidRootTransInterp").setToField("set_translation").setToNode("Joe_humanoid_root"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("sacroiliacRotInterp").setToField("set_rotation").setToNode("Joe_sacroiliac"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_hipRotInterp").setToField("set_rotation").setToNode("Joe_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_kneeRotInterp").setToField("set_rotation").setToNode("Joe_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_ankleRotInterp").setToField("set_rotation").setToNode("Joe_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_subtalarRotInterp").setToField("set_rotation").setToNode("Joe_l_subtalar"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_midtarsalRotInterp").setToField("set_rotation").setToNode("Joe_l_midtarsal"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_metatarsalRotInterp").setToField("set_rotation").setToNode("Joe_l_metatarsal"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_hipRotInterp").setToField("set_rotation").setToNode("Joe_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_kneeRotInterp").setToField("set_rotation").setToNode("Joe_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_ankleRotInterp").setToField("set_rotation").setToNode("Joe_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_subtalarRotInterp").setToField("set_rotation").setToNode("Joe_r_subtalar"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_midtarsalRotInterp").setToField("set_rotation").setToNode("Joe_r_midtarsal"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_metatarsalRotInterp").setToField("set_rotation").setToNode("Joe_r_metatarsal"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vl5RotInterp").setToField("set_rotation").setToNode("Joe_vl5"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vl4RotInterp").setToField("set_rotation").setToNode("Joe_vl4"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vl3RotInterp").setToField("set_rotation").setToNode("Joe_vl3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vl2RotInterp").setToField("set_rotation").setToNode("Joe_vl2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vl1RotInterp").setToField("set_rotation").setToNode("Joe_vl1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt12RotInterp").setToField("set_rotation").setToNode("Joe_vt12"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt11RotInterp").setToField("set_rotation").setToNode("Joe_vt11"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt10RotInterp").setToField("set_rotation").setToNode("Joe_vt10"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt9RotInterp").setToField("set_rotation").setToNode("Joe_vt9"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt8RotInterp").setToField("set_rotation").setToNode("Joe_vt8"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt7RotInterp").setToField("set_rotation").setToNode("Joe_vt7"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt6RotInterp").setToField("set_rotation").setToNode("Joe_vt6"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt5RotInterp").setToField("set_rotation").setToNode("Joe_vt5"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt4RotInterp").setToField("set_rotation").setToNode("Joe_vt4"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt3RotInterp").setToField("set_rotation").setToNode("Joe_vt3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt2RotInterp").setToField("set_rotation").setToNode("Joe_vt2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vt1RotInterp").setToField("set_rotation").setToNode("Joe_vt1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vc7RotInterp").setToField("set_rotation").setToNode("Joe_vc7"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vc6RotInterp").setToField("set_rotation").setToNode("Joe_vc6"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vc5RotInterp").setToField("set_rotation").setToNode("Joe_vc5"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vc4RotInterp").setToField("set_rotation").setToNode("Joe_vc4"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vc3RotInterp").setToField("set_rotation").setToNode("Joe_vc3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vc2RotInterp").setToField("set_rotation").setToNode("Joe_vc2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("vc1RotInterp").setToField("set_rotation").setToNode("Joe_vc1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("skullbaseRotInterp").setToField("set_rotation").setToNode("Joe_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_eyelid_jointRotInterp").setToField("set_rotation").setToNode("Joe_l_eyelid_joint"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_eyeball_jointRotInterp").setToField("set_rotation").setToNode("Joe_l_eyeball_joint"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_eyebrow_jointRotInterp").setToField("set_rotation").setToNode("Joe_l_eyebrow_joint"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_eyelid_jointRotInterp").setToField("set_rotation").setToNode("Joe_r_eyelid_joint"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_eyeball_jointRotInterp").setToField("set_rotation").setToNode("Joe_r_eyeball_joint"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_eyebrow_jointRotInterp").setToField("set_rotation").setToNode("Joe_r_eyebrow_joint"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("temporomandibularRotInterp").setToField("set_rotation").setToNode("Joe_temporomandibular"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_sternoclavicularRotInterp").setToField("set_rotation").setToNode("Joe_l_sternoclavicular"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_acromioclavicularRotInterp").setToField("set_rotation").setToNode("Joe_l_acromioclavicular"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_shoulderRotInterp").setToField("set_rotation").setToNode("Joe_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_elbowRotInterp").setToField("set_rotation").setToNode("Joe_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_wristRotInterp").setToField("set_rotation").setToNode("Joe_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_thumb1RotInterp").setToField("set_rotation").setToNode("Joe_l_thumb1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_thumb2RotInterp").setToField("set_rotation").setToNode("Joe_l_thumb2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_thumb3RotInterp").setToField("set_rotation").setToNode("Joe_l_thumb3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_index0RotInterp").setToField("set_rotation").setToNode("Joe_l_index0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_index1RotInterp").setToField("set_rotation").setToNode("Joe_l_index1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_index2RotInterp").setToField("set_rotation").setToNode("Joe_l_index2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_index3RotInterp").setToField("set_rotation").setToNode("Joe_l_index3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_middle0RotInterp").setToField("set_rotation").setToNode("Joe_l_middle0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_middle1RotInterp").setToField("set_rotation").setToNode("Joe_l_middle1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_middle2RotInterp").setToField("set_rotation").setToNode("Joe_l_middle2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_middle3RotInterp").setToField("set_rotation").setToNode("Joe_l_middle3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_ring0RotInterp").setToField("set_rotation").setToNode("Joe_l_ring0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_ring1RotInterp").setToField("set_rotation").setToNode("Joe_l_ring1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_ring2RotInterp").setToField("set_rotation").setToNode("Joe_l_ring2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_ring3RotInterp").setToField("set_rotation").setToNode("Joe_l_ring3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_pinky0RotInterp").setToField("set_rotation").setToNode("Joe_l_pinky0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_pinky1RotInterp").setToField("set_rotation").setToNode("Joe_l_pinky1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_pinky2RotInterp").setToField("set_rotation").setToNode("Joe_l_pinky2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("l_pinky3RotInterp").setToField("set_rotation").setToNode("Joe_l_pinky3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_sternoclavicularRotInterp").setToField("set_rotation").setToNode("Joe_r_sternoclavicular"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_acromioclavicularRotInterp").setToField("set_rotation").setToNode("Joe_r_acromioclavicular"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_shoulderRotInterp").setToField("set_rotation").setToNode("Joe_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_elbowRotInterp").setToField("set_rotation").setToNode("Joe_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_wristRotInterp").setToField("set_rotation").setToNode("Joe_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_thumb1RotInterp").setToField("set_rotation").setToNode("Joe_r_thumb1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_thumb2RotInterp").setToField("set_rotation").setToNode("Joe_r_thumb2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_thumb3RotInterp").setToField("set_rotation").setToNode("Joe_r_thumb3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_index0RotInterp").setToField("set_rotation").setToNode("Joe_r_index0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_index1RotInterp").setToField("set_rotation").setToNode("Joe_r_index1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_index2RotInterp").setToField("set_rotation").setToNode("Joe_r_index2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_index3RotInterp").setToField("set_rotation").setToNode("Joe_r_index3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_middle0RotInterp").setToField("set_rotation").setToNode("Joe_r_middle0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_middle1RotInterp").setToField("set_rotation").setToNode("Joe_r_middle1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_middle2RotInterp").setToField("set_rotation").setToNode("Joe_r_middle2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_middle3RotInterp").setToField("set_rotation").setToNode("Joe_r_middle3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_ring0RotInterp").setToField("set_rotation").setToNode("Joe_r_ring0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_ring1RotInterp").setToField("set_rotation").setToNode("Joe_r_ring1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_ring2RotInterp").setToField("set_rotation").setToNode("Joe_r_ring2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_ring3RotInterp").setToField("set_rotation").setToNode("Joe_r_ring3"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_pinky0RotInterp").setToField("set_rotation").setToNode("Joe_r_pinky0"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_pinky1RotInterp").setToField("set_rotation").setToNode("Joe_r_pinky1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_pinky2RotInterp").setToField("set_rotation").setToNode("Joe_r_pinky2"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("r_pinky3RotInterp").setToField("set_rotation").setToNode("Joe_r_pinky3"))
        .addChild(new GroupObject().setDEF("DisplacersAnimationGroup")
          .addComments(new CommentsBlock("TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor"))
          .addChild(new ScalarInterpolatorObject().setDEF("skull_tipTest").setKey(new MFFloatObject(new MFFloat343().getArray())).setKeyValue(new MFFloatObject(new MFFloat344().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("skull_tipTest"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("skull_tipTest").setToField("weight").setToNode("Joe_skull_tipTest")))
        .addChild(new GroupObject().setDEF("skintexturetransform_animation")
          .addChild(new ScalarInterpolatorObject().setDEF("skinTexTransTest").setKey(new MFFloatObject(new MFFloat345().getArray())).setKeyValue(new MFFloatObject(new MFFloat346().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("skinTexTransTest"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("skinTexTransTest").setToField("rotation").setToNode("kicktextrans")))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setDEF("SBall").setRotation(new float[] {0.7f,0f,0.7f,0.1f}).setScale(new float[] {0.23f,0.23f,0.23f}).setTranslation(new float[] {-0.916f,0.37f,-0.92f})
            .addChild(new ShapeObject().setDEF("ball_Shape")
              .setAppearance(new AppearanceObject().setDEF("ball_Appearance")
                .setMaterial(new MaterialObject().setDEF("ball_Material").setDiffuseColor(new float[] {0.3f,0.3f,1f}).setEmissiveColor(new float[] {0.3f,0.3f,0.33f}))
                .setTexture(new ImageTextureObject().setUSE("JoeSkinImageTexture")))
              .setGeometry(new IndexedFaceSetObject().setDEF("ball_IndexedFaceSet").setCoordIndex(new MFInt32Object(new MFInt32347().getArray()))
                .setCoord(new CoordinateObject().setDEF("Ball_Coordinates").setPoint(new MFVec3fObject(new MFVec3f348().getArray())))))
            .addChild(new ViewpointObject().setDEF("ballView_1").setDescription("Ball View")))
          .addComments(new CommentsBlock("Ball Animation interpolators"))
          .addChild(new PositionInterpolatorObject().setDEF("ballTransInterp").setKey(new MFFloatObject(new MFFloat349().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f350().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("ballRotInterp").setKey(new MFFloatObject(new MFFloat351().getArray())).setKeyValue(new MFRotationObject(new MFRotation352().getArray())))
          .addComments(new CommentsBlock("Ball Animation Routes"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("ballTransInterp"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("ballTransInterp").setToField("set_translation").setToNode("SBall"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("ballRotInterp"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("ballRotInterp").setToField("set_rotation").setToNode("SBall")))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setScale(new float[] {0.2f,0.2f,0.2f})
            .addChild(new ShapeObject().setUSE("AxisLinesShape")))
          .addChild(new TransformObject().setDEF("Circle0").setScale(new float[] {1.175f,1f,1.175f})
            .addChild(new ShapeObject().setDEF("circle_Shape")
              .setAppearance(new AppearanceObject().setDEF("circle0_Appearance")
                .setMaterial(new MaterialObject().setDEF("circle0_Material").setAmbientIntensity(0.9f).setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.425f,0.486f,1f})))
              .setGeometry(new IndexedLineSetObject().setDEF("Orbit1").setCoordIndex(new MFInt32Object(new MFInt32353().getArray()))
                .setCoord(new CoordinateObject().setDEF("circle_Coordinates").setPoint(new MFVec3fObject(new MFVec3f354().getArray()))))))
          .addChild(new TransformObject().setDEF("Circle1").setScale(new float[] {0.5f,1f,0.5f})
            .addChild(new ShapeObject().setDEF("circle1_Shape")
              .setAppearance(new AppearanceObject().setDEF("circle1_Appearance")
                .setMaterial(new MaterialObject().setDEF("circle1_Material").setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
              .setGeometry(new IndexedLineSetObject().setUSE("Orbit1"))))
          .addChild(new TransformObject().setDEF("Circle2").setScale(new float[] {0.25f,1f,0.25f})
            .addChild(new ShapeObject().setDEF("circle2_Shape")
              .setAppearance(new AppearanceObject().setDEF("circle2_Appearance")
                .setMaterial(new MaterialObject().setDEF("circle2_Material").setDiffuseColor(new float[] {0.9f,0f,0.7f}).setEmissiveColor(new float[] {0.424956f,0.483976f,1f})))
              .setGeometry(new IndexedLineSetObject().setUSE("Orbit1"))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f});
  }
}
protected class MFColor4 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f});
  }
}
protected class MFInt325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
protected class MFFloat6 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.35f,0.35f,1f});
  }
}
protected class MFInt327 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {89,90,94,95,96,97});
  }
}
protected class MFFloat8 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.65f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {334,335,336,337,338,339,340,341});
  }
}
protected class MFFloat10 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {342,343,344,345});
  }
}
protected class MFFloat12 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3213 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {346,347,348,71});
  }
}
protected class MFFloat14 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3215 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {349,350,351,352});
  }
}
protected class MFFloat16 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {353,354,355,356,357,358,359,360,361});
  }
}
protected class MFFloat18 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3219 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {91,92,98,99,100,101,362,363});
  }
}
protected class MFFloat20 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.65f,1f,0.8f,1f,1f,1f,0.4f,0.8f});
  }
}
protected class MFInt3221 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {362,363,364,365,366,367,368,369,98});
  }
}
protected class MFFloat22 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.6f,0.2f,1f,1f,1f,1f,1f,1f,0.2f});
  }
}
protected class MFInt3223 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {370,371,372,373});
  }
}
protected class MFFloat24 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3225 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {374,375,376});
  }
}
protected class MFFloat26 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt3227 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {377,378,379,380});
  }
}
protected class MFFloat28 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3229 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
protected class MFFloat30 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3231 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {28,76});
  }
}
protected class MFFloat32 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3233 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
protected class MFFloat34 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,0.7f,1f,0.8f});
  }
}
protected class MFInt3235 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {15});
  }
}
protected class MFFloat36 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f});
  }
}
protected class MFInt3237 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {13,14});
  }
}
protected class MFFloat38 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3239 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {81});
  }
}
protected class MFFloat40 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f});
  }
}
protected class MFInt3241 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,24});
  }
}
protected class MFFloat42 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3243 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {74,75});
  }
}
protected class MFFloat44 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3245 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFFloat46 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3247 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFVec3f48 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.15f,0f,0f,0f,0.15f,-0.1f,0f,0.15f,0.1f,0f,0.05f,0f,-0.02f,0.05f,-0.15f,0f,0f,-0.05f,0f,0f,0.15f,0f,0f,0.05f,0f,0f,0f,0f,-0.15f});
  }
}
protected class MFInt3249 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {12});
  }
}
protected class MFFloat50 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f});
  }
}
protected class MFInt3251 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {79});
  }
}
protected class MFFloat52 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f});
  }
}
protected class MFInt3253 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {41,42,44,80,102,103,104,105});
  }
}
protected class MFFloat54 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3255 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
protected class MFFloat56 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3257 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {119,120,121,122,123,124,125,126});
  }
}
protected class MFFloat58 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3259 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {127,128});
  }
}
protected class MFFloat60 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3261 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {138,139,140,141,142,143});
  }
}
protected class MFFloat62 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFInt3263 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
protected class MFFloat64 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3265 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {129,130});
  }
}
protected class MFFloat66 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3267 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {138,139,140,153,154,155,163});
  }
}
protected class MFFloat68 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFInt3269 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {166,167,168,169});
  }
}
protected class MFFloat70 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3271 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
protected class MFFloat72 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3273 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {131,132});
  }
}
protected class MFFloat74 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3275 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {156,157,163,164});
  }
}
protected class MFFloat76 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFInt3277 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {179,180,181,182});
  }
}
protected class MFFloat78 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3279 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
protected class MFFloat80 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3281 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {133,134});
  }
}
protected class MFFloat82 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt3283 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {158,159,164,165});
  }
}
protected class MFFloat84 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFInt3285 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {192,193,194,195});
  }
}
protected class MFFloat86 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3287 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
protected class MFFloat88 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3289 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {135,136,137,165});
  }
}
protected class MFFloat90 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFInt3291 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {160,161,162});
  }
}
protected class MFFloat92 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt3293 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {205,206,207,208});
  }
}
protected class MFFloat94 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt3295 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
protected class MFFloat96 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3297 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {10});
  }
}
protected class MFFloat98 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f});
  }
}
protected class MFInt3299 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {77,29});
  }
}
protected class MFFloat100 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,0.9f});
  }
}
protected class MFInt32101 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
protected class MFFloat102 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.1f,1f,1f,1f,1f,1f,1f,1f,0.3f,0.2f});
  }
}
protected class MFInt32103 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
protected class MFFloat104 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt32105 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {235,236,237,238,239,240,241,242});
  }
}
protected class MFFloat106 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt32107 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {243,244});
  }
}
protected class MFFloat108 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt32109 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {254,255,256,257,258,259});
  }
}
protected class MFFloat110 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFInt32111 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
protected class MFFloat112 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt32113 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {245,246});
  }
}
protected class MFFloat114 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt32115 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {254,255,256,269,270,271,279});
  }
}
protected class MFFloat116 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFInt32117 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {282,283,284,285});
  }
}
protected class MFFloat118 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt32119 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
protected class MFFloat120 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt32121 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {247,248});
  }
}
protected class MFFloat122 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt32123 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {272,273,279,280});
  }
}
protected class MFFloat124 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFInt32125 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {295,296,297,298});
  }
}
protected class MFFloat126 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt32127 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
protected class MFFloat128 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt32129 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {249,250});
  }
}
protected class MFFloat130 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f});
  }
}
protected class MFInt32131 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {274,275,280,281});
  }
}
protected class MFFloat132 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFInt32133 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {308,309,310,311});
  }
}
protected class MFFloat134 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt32135 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
protected class MFFloat136 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt32137 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {251,252,253,281});
  }
}
protected class MFFloat138 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFInt32139 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {276,277,278});
  }
}
protected class MFFloat140 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt32141 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {321,322,323,324});
  }
}
protected class MFFloat142 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFInt32143 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
protected class MFFloat144 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFString145 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/CharactersLegacy/JoeBodyTexture29.png"});
  }
}
protected class MFInt32146 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
protected class MFInt32147 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
protected class MFInt32148 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
protected class MFInt32149 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
protected class MFVec3f150 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1.77f,0f,0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.11f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0f,0.05f,0.4867f,0f,0.165f,0.01f,0.12f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.11f,0.011f,0.19f,0f,0.875f,0f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0f,1.41f,-0.145f,0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.9f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.9f,0.075f,0f,0.87f,0f,0.171f,0.65f,0f,0.02f,0.65f,0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0f,-0.02f,0.65f,0f,-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1f,-0.01f,0.225f,1f,-0.07f,0.185f,1f,-0.01f,0.185f,1f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0f,0.21f,0.85f,0f,0.1854f,0.85f,0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.19f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.19f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0f,0.193f,0.815f,0.005f,0.198f,0.8f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f,0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.255f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1f,-0.01f,-0.225f,1f,-0.07f,-0.185f,1f,-0.01f,-0.185f,1f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0f,-0.21f,0.85f,0f,-0.1854f,0.85f,0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.19f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.19f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0f,-0.193f,0.815f,0.005f,-0.198f,0.8f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f});
  }
}
protected class MFVec3f151 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f,-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0f,0.05f,0.466f,0f,0.17f,0.3f,0f,0.06f,0.3f,0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0f,0.07f,0.165f,0f,0.07f,0.095f,0f,0.07f,0.115f,0.04f,0.13f,0.125f,0f,0.12f,0.165f,0f,0.12f,0.087f,0f,0.122f,0.09f,0.012f,0.188f,0.11f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.01f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.17f,0.3f,0f,-0.06f,0.3f,0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0f,0.07f,-0.165f,0f,0.07f,-0.095f,0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0f,0.12f,-0.165f,0f,0.12f,-0.087f,0f,0.122f,-0.09f,0.012f,0.188f,-0.11f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.01f,0.168f});
  }
}
protected class MFVec2f152 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0f,0f,0.5f,0.5f,0.5f,0f,0f,0.5f});
  }
}
protected class MFFloat153 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.4f,0.6f,1f});
  }
}
protected class MFRotation154 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.5f,1f,0f,0f,0.5f,-1f,0f,0f,0.1f,-1f,0f,0f,0.5f,-1f,0f,0f,0.5f});
  }
}
protected class MFFloat155 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.6f,1f});
  }
}
protected class MFVec3f156 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0.3f,-1f,0.4f,-0.04f,-0.4f,-0.18f,0.1f,0f,-0.2f,0.15f,0.15f});
  }
}
protected class MFFloat157 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation158 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat159 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.3f,0.45f,1f});
  }
}
protected class MFRotation160 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,1.5f,-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,0.5f,1f,0f,0f,1f});
  }
}
protected class MFFloat161 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.35f,0.5f,1f});
  }
}
protected class MFRotation162 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,0f,1f,0.2f,1f,0f,1f,0.5f,1f,0f,0f,1.4f});
  }
}
protected class MFFloat163 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,1f});
  }
}
protected class MFRotation164 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f});
  }
}
protected class MFFloat165 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation166 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat167 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation168 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat169 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation170 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat171 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation172 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,1f,1f,0f,0f,1f,-1f,0f,0f,1f,-1f,0f,0f,1f,-1f,0f,0f,1f});
  }
}
protected class MFFloat173 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation174 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.1f,0f,0f,1f,0f,1f,0f,0f,1f,1f,0f,0f,1f,1f,0f,0f,1.5f});
  }
}
protected class MFFloat175 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation176 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,1f,0f,0f,1f,0f,1f,0f,0f,1f,1f,0f,0f,1f,1f,0f,0f,0.5f});
  }
}
protected class MFFloat177 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation178 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat179 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation180 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat181 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation182 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat183 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation184 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat185 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation186 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat187 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation188 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat189 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation190 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat191 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation192 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat193 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation194 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat195 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation196 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat197 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation198 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat199 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation200 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat201 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation202 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat203 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation204 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat205 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation206 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat207 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation208 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat209 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation210 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat211 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation212 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat213 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation214 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat215 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation216 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat217 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation218 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat219 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation220 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat221 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation222 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat223 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.3f,0.4f,1f});
  }
}
protected class MFRotation224 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,1f,0.25f,-1f,0f,-1f,0.35f,1f,0f,0f,0.75f,1f,0f,1f,0.5f});
  }
}
protected class MFFloat225 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation226 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat227 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation228 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat229 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation230 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat231 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.75f,1f});
  }
}
protected class MFRotation232 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,-1f,0f,0.5f,0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0.35f});
  }
}
protected class MFFloat233 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation234 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat235 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation236 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat237 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation238 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat239 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation240 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat241 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation242 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat243 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation244 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat245 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation246 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat247 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation248 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat249 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation250 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat251 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,1f});
  }
}
protected class MFRotation252 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,-1f,0f,1f,1.75f});
  }
}
protected class MFFloat253 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation254 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,3f,-1f,0f,0f,0.75f,-1f,-1f,0f,0.5f});
  }
}
protected class MFFloat255 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,0.8f,1f});
  }
}
protected class MFRotation256 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,1f,0f,1.3f,0f,-0.5f,1f,1.3f,0f,0f,1f,0f});
  }
}
protected class MFFloat257 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation258 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat259 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation260 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat261 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation262 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat263 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation264 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat265 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation266 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat267 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation268 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat269 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation270 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat271 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation272 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat273 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation274 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat275 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation276 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat277 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation278 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat279 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation280 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat281 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation282 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat283 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation284 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat285 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation286 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat287 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation288 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat289 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation290 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat291 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation292 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat293 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation294 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat295 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation296 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat297 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation298 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat299 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation300 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,-1f,2.5f,0f,0f,-1f,1.5f,0f,0f,-1f,1.75f});
  }
}
protected class MFFloat301 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation302 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,3f,-1f,0f,0f,0.75f,-1f,-1f,0f,0.5f});
  }
}
protected class MFFloat303 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.7f,1f});
  }
}
protected class MFRotation304 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.3f,0f,0f,1f,0f,0f,0f,-1f,1f,0f,-1f,0f,0.3f});
  }
}
protected class MFFloat305 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation306 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat307 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation308 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat309 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation310 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat311 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation312 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat313 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation314 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat315 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation316 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat317 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation318 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat319 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation320 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat321 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation322 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat323 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation324 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat325 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation326 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat327 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation328 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat329 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation330 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat331 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation332 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat333 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation334 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat335 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation336 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFFloat337 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation338 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat339 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation340 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat341 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.75f,1f});
  }
}
protected class MFRotation342 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat343 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.35f,0.6f,0.7f,0.85f,0.88f,0.94f,0.97f,1f});
  }
}
protected class MFFloat344 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0f,0f,0f,0.2f,0.4f,1f,0f,1f,0.4f,0f});
  }
}
protected class MFFloat345 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.7f,0.8f,1f});
  }
}
protected class MFFloat346 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0f,0f,0f,0f,1f,2f,0f});
  }
}
protected class MFInt32347 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1});
  }
}
protected class MFVec3f348 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.4675f,0f,0f,0.4049f,-0.2338f,-0.1169f,0.4049f,-0.2024f,-0.2024f,0.4049f,-0.1169f,-0.2338f,0.4049f,0f,-0.2024f,0.4049f,0.1169f,-0.1169f,0.4049f,0.2024f,0f,0.4049f,0.2338f,0.1169f,0.4049f,0.2024f,0.2024f,0.4049f,0.1169f,0.2338f,0.4049f,0f,0.2024f,0.4049f,-0.1169f,0.1169f,0.4049f,-0.2024f,0f,0.2338f,-0.4049f,-0.2024f,0.2338f,-0.3506f,-0.3506f,0.2338f,-0.2024f,-0.4049f,0.2338f,0f,-0.3506f,0.2338f,0.2024f,-0.2024f,0.2338f,0.3506f,0f,0.2338f,0.4049f,0.2024f,0.2338f,0.3506f,0.3506f,0.2338f,0.2024f,0.4049f,0.2338f,0f,0.3506f,0.2338f,-0.2024f,0.2024f,0.2338f,-0.3506f,0f,0f,-0.4675f,-0.2338f,0f,-0.4049f,-0.4049f,0f,-0.2338f,-0.4675f,0f,0f,-0.4049f,0f,0.2338f,-0.2338f,0f,0.4049f,0f,0f,0.4675f,0.2338f,0f,0.4049f,0.4049f,0f,0.2338f,0.4675f,0f,0f,0.4049f,0f,-0.2338f,0.2338f,0f,-0.4049f,0f,-0.2338f,-0.4049f,-0.2024f,-0.2338f,-0.3506f,-0.3506f,-0.2338f,-0.2024f,-0.4049f,-0.2338f,0f,-0.3506f,-0.2338f,0.2024f,-0.2024f,-0.2338f,0.3506f,0f,-0.2338f,0.4049f,0.2024f,-0.2338f,0.3506f,0.3506f,-0.2338f,0.2024f,0.4049f,-0.2338f,0f,0.3506f,-0.2338f,-0.2024f,0.2024f,-0.2338f,-0.3506f,0f,-0.4049f,-0.2338f,-0.1169f,-0.4049f,-0.2024f,-0.2024f,-0.4049f,-0.1169f,-0.2338f,-0.4049f,0f,-0.2024f,-0.4049f,0.1169f,-0.1169f,-0.4049f,0.2024f,0f,-0.4049f,0.2338f,0.1169f,-0.4049f,0.2024f,0.2024f,-0.4049f,0.1169f,0.2338f,-0.4049f,0f,0.2024f,-0.4049f,-0.1169f,0.1169f,-0.4049f,-0.2024f,0f,-0.4675f,0f});
  }
}
protected class MFFloat349 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,0.409f,1f});
  }
}
protected class MFVec3f350 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0.4f,-1f,0f,0.07f,0f,0.05f,0.06f,0.05f,2f,4f,10f});
  }
}
protected class MFFloat351 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,0.41f,0.71f,1f});
  }
}
protected class MFRotation352 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,1f,0.25f,-1f,0f,-1f,1.35f,-1f,1f,-1f,3.35f,-1f,0.2f,-1f,3f,-1f,0.2f,-1f,3f});
  }
}
protected class MFInt32353 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
protected class MFVec3f354 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.995f,0f,-0.105f,0.979f,0f,-0.208f,0.951f,0f,-0.309f,0.914f,0f,-0.407f,0.866f,0f,-0.5f,0.809f,0f,-0.588f,0.743f,0f,-0.669f,0.669f,0f,-0.743f,0.588f,0f,-0.809f,0.5f,0f,-0.866f,0.407f,0f,-0.914f,0.309f,0f,-0.951f,0.208f,0f,-0.978f,0.105f,0f,-0.995f,0f,0f,-1f,-0.105f,0f,-0.994522f,-0.208f,0f,-0.978f,-0.309f,0f,-0.951f,-0.407f,0f,-0.914f,-0.5f,0f,-0.866f,-0.588f,0f,-0.809f,-0.669f,0f,-0.743f,-0.743f,0f,-0.669f,-0.809f,0f,-0.588f,-0.866f,0f,-0.5f,-0.914f,0f,-0.407f,-0.951f,0f,-0.309f,-0.978f,0f,-0.208f,-0.995f,0f,-0.105f,-1f,0f,0f,-0.995f,0f,0.105f,-0.978f,0f,0.208f,-0.951f,0f,0.309f,-0.914f,0f,0.407f,-0.866f,0f,0.5f,-0.809f,0f,0.588f,-0.743f,0f,0.669f,-0.669f,0f,0.743f,-0.588f,0f,0.809f,-0.5f,0f,0.866f,-0.407f,0f,0.914f,-0.309f,0f,0.951f,-0.208f,0f,0.978f,-0.105f,0f,0.995f,0f,0f,1f,0.105f,0f,0.995f,0.208f,0f,0.978f,0.309f,0f,0.951f,0.407f,0f,0.914f,0.5f,0f,0.866f,0.588f,0f,0.809f,0.669f,0f,0.743f,0.743f,0f,0.669f,0.809f,0f,0.588f,0.866f,0f,0.5f,0.914f,0f,0.407f,0.951f,0f,0.309f,0.978f,0f,0.208f,0.995f,0f,0.104f,1f,0f,0f});
  }
}
}
