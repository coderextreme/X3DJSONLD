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
public class NancyStandShootRifleM24 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new NancyStandShootRifleM24().initialize().toFileJSON("../data/NancyStandShootRifleM24.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("NancyStandShootRifleM24.x3d"))
        .addMeta(new meta().setName("description").setContent("Canonical HAnim 1.1 specification example, using native X3D tags instead of ProtoDeclaration/ExternProtoDeclaration and ProtoInstance."))
        .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new meta().setName("created").setContent("4 January 2002"))
        .addMeta(new meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new meta().setName("warning").setContent("ProtoBody missing content"))
        .addMeta(new meta().setName("warning").setContent("Numerous QA warnings need to be corrected"))
        .addMeta(new meta().setName("warning").setContent("LOA1_ShootAnimation ought to be moved out as a separate prototype."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyStandShootRifleM24.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new ExternProtoDeclare().setName("RifleM24").setAppinfo("Rifle M24").setUrl(new MFString0().getArray())
          .addField(new field().setType("SFBool").setName("trigger").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("input true to fire"))
          .addField(new field().setType("SFBool").setName("fire").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output true when fired"))
          .addField(new field().setType("SFTime").setName("animationStartTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("trigger animation")))
        .addChild(new ProtoDeclare().setName("LOA1_ShootAnimation")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFTime").setName("cycleInterval").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.009999999776482582"))
            .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new field().setType("SFBool").setName("loop").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new field().setType("SFTime").setName("startTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType("SFTime").setName("stopTime").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
            .addField(new field().setType("SFFloat").setName("fraction_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFBool").setName("isActive").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFVec3f").setName("HumanoidRoot_translation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("HumanoidRoot_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("lower_body_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_hip_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_knee_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_ankle_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_midtarsal_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_hip_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_knee_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_ankle_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_midtarsal_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("vl5_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("skullbase_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_shoulder_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_elbow_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("l_wrist_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_shoulder_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_elbow_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFRotation").setName("r_wrist_rotation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group().setDEF("ErrorLostContentCheckVersionControl"))))
        .addComments("Start scene graph.")
        .addChild(new Background().setSkyColor(new MFColor1().getArray()))
        .addChild(new Viewpoint().setDescription("Nancy Rifle Shooting Position").setPosition(new float[] {0f,0.9f,2.7f}))
        .addChild(new Viewpoint().setDescription("Nancy Side Viewpoint").setOrientation(new float[] {0f,-1f,0f,1.4925f}).setPosition(new float[] {-2.7f,0.9f,0.4f}))
        .addChild(new Viewpoint().setDescription("Nancy Above Viewpoint").setOrientation(new float[] {0.954f,0.244f,0.172f,4.6369f}).setPosition(new float[] {0.1f,4.1f,-0.2f}))
        .addChild(new LOD().setRange(new MFFloat2().getArray())
          .addChild(new Group().setDEF("Viewpoint")
            .addComments("High Resolution")
            .addChild(new Group().setDEF("HighResolution")
              .addChild(new Transform()
                .addChild(new HAnimHumanoid().setName("Nancy").setDEF("hanim_Nancy").setVersion("1.0")
                  .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {-0.00405f,0.855f,-0.000113f}).setStiffness(new float[] {0f,0f,0f})
                    .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,1.01f,-0.0204f}).setStiffness(new float[] {0f,0f,0f})
                      .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDEF("Pants_Color").setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.054f,0.233f,0.39f}))
                            .setTexture(new ImageTexture().setDEF("camo").setRepeatS(false).setRepeatT(false).setUrl(new MFString3().getArray())))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt324().getArray()).setCreaseAngle(1.14f)
                            .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray())))))
                      .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.122f,0.888271f,-0.0693267f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("Pants_Color"))
                              .setTexture(new ImageTexture().setUSE("camo")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt326().getArray()).setCreaseAngle(1.32f)
                              .setCoord(new Coordinate().setPoint(new MFVec3f7().getArray())))))
                        .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.0738f,0.517f,-0.0284f}).setStiffness(new float[] {0f,0f,0f})
                          .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Pants_Color"))
                                .setTexture(new ImageTexture().setUSE("camo")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt328().getArray()).setCreaseAngle(1.57f)
                                .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray())))))
                          .addChild(new HAnimJoint().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.0645f,0.0719f,-0.048f}).setStiffness(new float[] {0f,0f,0f})
                            .addChild(new HAnimSegment().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDEF("Shoe_Color").setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0f,0f,0f})))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3210().getArray()).setCreaseAngle(1.57f)
                                  .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray()))))))))
                      .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.11f,0.892362f,-0.0732533f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("Pants_Color"))
                              .setTexture(new ImageTexture().setUSE("camo")))
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3212().getArray()).setCreaseAngle(1.61f)
                              .setCoord(new Coordinate().setPoint(new MFVec3f13().getArray())))))
                        .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0699f,0.51f,-0.0166f}).setStiffness(new float[] {0f,0f,0f})
                          .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Pants_Color"))
                                .setTexture(new ImageTexture().setUSE("camo")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3214().getArray()).setCreaseAngle(1.57f)
                                .setCoord(new Coordinate().setPoint(new MFVec3f15().getArray())))))
                          .addChild(new HAnimJoint().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.064f,0.0753f,-0.0412f}).setStiffness(new float[] {0f,0f,0f})
                            .addChild(new HAnimSegment().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Shoe_Color")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3216().getArray()).setCreaseAngle(1.57f)
                                  .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray())))))))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {-0.00405f,1.07f,-0.0275f}).setStiffness(new float[] {0f,0f,0f})
                      .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                        .addChild(new Transform()
                          .addChild(new Group()
                            .addChild(new Transform().setScale(new float[] {1.1f,1.1f,1.1f}).setTranslation(new float[] {0f,-0.12f,0f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDEF("JacketColor").setDiffuseColor(new float[] {0.01f,0.28f,0.01f})))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3218().getArray()).setCreaseAngle(1.59f)
                                  .setCoord(new Coordinate().setPoint(new MFVec3f19().getArray()))
                                  .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f20().getArray())))))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setDEF("Shirt_Color").setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.6f,0.0745f,0.1137f}))
                            .setTexture(new ImageTexture().setDEF("small_logo_Tex").setUrl(new MFString21().getArray())))
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3222().getArray().append(new MFInt3223().getArray())).setCreaseAngle(1.59f)
                            .setCoord(new Coordinate().setPoint(new MFVec3f24().getArray()))
                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f25().getArray())))))
                      .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.167f,1.36f,-0.0518f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                          .addChild(new Transform().setDEF("l_upperarm_adjust").setCenter(new float[] {0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.119f}).setTranslation(new float[] {0.167f,1.36f,-0.0518f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDEF("Skin_Color").setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.749f,0.601f,0.462f})))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3226().getArray()).setCreaseAngle(1.65f)
                                .setCoord(new Coordinate().setPoint(new MFVec3f27().getArray()))))))
                        .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.196f,1.07f,-0.0518f}).setStiffness(new float[] {0f,0f,0f})
                          .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                            .addChild(new Transform().setDEF("l_forearm_adjust").setCenter(new float[] {0.198f,0.961f,-0.0405f}).setRotation(new float[] {-1f,0f,0f,0.1f}).setTranslation(new float[] {0.196f,1.07f,-0.0518f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Skin_Color")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3228().getArray()).setCreaseAngle(1.75f)
                                  .setCoord(new Coordinate().setPoint(new MFVec3f29().getArray()))))))
                          .addChild(new HAnimJoint().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.213f,0.811f,-0.0338f}).setStiffness(new float[] {0f,0f,0f})
                            .addChild(new HAnimSegment().setName("l_hand").setDEF("hanim_l_hand")
                              .addChild(new Transform().setDEF("l_hand_adjust").setCenter(new float[] {0.213f,0.811f,-0.0338f}).setRotation(new float[] {-0.06361f,-0.9967f,0.04988f,1.333f}).setTranslation(new float[] {0.213f,0.811f,-0.0338f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("Skin_Color")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3230().getArray()).setCreaseAngle(1.48f)
                                    .setCoord(new Coordinate().setPoint(new MFVec3f31().getArray())))))))))
                      .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.167f,1.36f,-0.0458f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                          .addChild(new Transform().setDEF("r_upperarm_adjust").setCenter(new float[] {-0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.0836f}).setTranslation(new float[] {-0.167f,1.36f,-0.0458f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("Skin_Color")))
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3232().getArray()).setCreaseAngle(1.53f)
                                .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray()))))))
                        .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.192f,1.07f,-0.0498f}).setStiffness(new float[] {0f,0f,0f})
                          .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                            .addChild(new Transform().setDEF("r_forearm_adjust").setCenter(new float[] {-0.198f,0.961f,-0.0397f}).setRotation(new float[] {-1f,0f,0f,0.1254f}).setTranslation(new float[] {-0.192f,1.07f,-0.0498f})
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Skin_Color")))
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3234().getArray()).setCreaseAngle(1.73f)
                                  .setCoord(new Coordinate().setPoint(new MFVec3f35().getArray()))))))
                          .addChild(new HAnimJoint().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.217f,0.811f,-0.0338f}).setStiffness(new float[] {0f,0f,0f})
                            .addChild(new HAnimSegment().setName("r_hand").setDEF("hanim_r_hand")
                              .addChild(new Group()
                                .addChild(new Transform().setDEF("r_hand_adjust").setCenter(new float[] {-0.217f,0.811f,-0.0338f}).setRotation(new float[] {-0.09024f,0.994f,-0.0624f,1.216f})
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("Skin_Color")))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3236().getArray()).setCreaseAngle(1.57f)
                                      .setCoord(new Coordinate().setPoint(new MFVec3f37().getArray())))))
                                .addChild(new Transform().setCenter(new float[] {-0.8f,0.45f,0.1f}).setRotation(new float[] {0f,0f,1f,-2.7f}).setScale(new float[] {0.1f,0.1f,0.1f})
                                  .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {-0.7f,0f,0f})
                                    .addChild(ProtoInstance0 = new ProtoInstance().setName("RifleM24").setDEF("rifleM24"))
                                    .addChild(new Script().setDEF("FireScript")
                                      .addField(new field().setType("SFBool").setName("fire").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                                      .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTONLY))
                                      .setSourceCode("ecmascript:\n"+
"\n"+
"function enabled (value, timeStamp)\n"+
"{\n"+
"        //print ('enabled value =' + value);\n"+
"        if (value == true)\n"+
"           fire = value;\n"+
"}"))
                                    .addChild(new TouchSensor().setDEF("FireTouchSensor").setDescription("click for shoot rifle"))
                                    .addChild(new ROUTE().setFromField("isOver").setFromNode("FireTouchSensor").setToField("enabled").setToNode("FireScript"))
                                    .addChild(new ROUTE().setFromField("touchTime").setFromNode("FireTouchSensor").setToField("animationStartTime").setToNode("rifleM24"))
                                    .addChild(new ROUTE().setFromField("fire").setFromNode("FireScript").setToField("trigger").setToNode("rifleM24")))))))))
                      .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0f,1.43f,-0.0458f}).setStiffness(new float[] {0f,0f,0f})
                        .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("Skin_Color")))
                            .setGeometry(new IndexedFaceSet().setDEF("neck").setCoordIndex(new MFInt3238().getArray()).setCreaseAngle(1.91f)
                              .setCoord(new Coordinate().setPoint(new MFVec3f39().getArray())))))
                        .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0f,1.54f,-0.0409f}).setStiffness(new float[] {0f,0f,0f})
                          .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                            .addChild(new Group()
                              .addChild(new Transform().setDEF("helmet").setScale(new float[] {0.105f,0.135f,0.125f}).setTranslation(new float[] {0f,1.6f,-0.05f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material())
                                    .setTexture(new ImageTexture().setUSE("camo")))
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3240().getArray().append(new MFInt3241().getArray())).setCreaseAngle(0.1f).setSolid(false)
                                    .setCoord(new Coordinate().setPoint(new MFVec3f42().getArray())))))
                              .addChild(new Transform().setDEF("helmetBelt").setScale(new float[] {3f,3.5f,3f}).setTranslation(new float[] {0f,1.61f,0f})
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setDEF("BeltColor")
                                    .setMaterial(new Material().setUSE("JacketColor")))
                                  .setGeometry(new Extrusion().setCreaseAngle(1.57f).setCrossSection(new MFVec2f43().getArray()).setSpine(new MFVec3f44().getArray()))))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("Skin_Color")))
                                .setGeometry(new IndexedFaceSet().setDEF("headIFS").setColorIndex(new MFInt3245().getArray().append(new MFInt3246().getArray())).setCoordIndex(new MFInt3247().getArray().append(new MFInt3248().getArray())).setCreaseAngle(0.7854f)
                                  .setCoord(new Coordinate().setDEF("Face").setPoint(new MFVec3f49().getArray()))
                                  .setColor(new Color().setColor(new MFColor50().getArray()))))))))))
                  .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
                  .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
                  .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
                  .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
                  .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
                  .addJoints(new HAnimJoint().setUSE("hanim_l_ankle"))
                  .addJoints(new HAnimJoint().setUSE("hanim_r_ankle"))
                  .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
                  .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
                  .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
                  .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
                  .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
                  .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
                  .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
                  .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
                  .addJoints(new HAnimJoint().setUSE("hanim_l_wrist"))
                  .addJoints(new HAnimJoint().setUSE("hanim_r_wrist"))
                  .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
                  .addSegments(new HAnimSegment().setUSE("hanim_l1"))
                  .addSegments(new HAnimSegment().setUSE("hanim_c4"))
                  .addSegments(new HAnimSegment().setUSE("hanim_skull"))
                  .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
                  .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
                  .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
                  .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
                  .addSegments(new HAnimSegment().setUSE("hanim_l_hand"))
                  .addSegments(new HAnimSegment().setUSE("hanim_r_hand"))
                  .addSegments(new HAnimSegment().setUSE("hanim_l_hindfoot"))
                  .addSegments(new HAnimSegment().setUSE("hanim_r_hindfoot"))
                  .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
                  .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
                  .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
                  .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))))
              .addChild(ProtoInstance1 = new ProtoInstance().setName("LOA1_ShootAnimation"))
              .addChild(new TimeSensor().setDEF("TIMER").setCycleInterval(4d))))
          .addChild(new Transform())
          .addChild(new Transform().setTranslation(new float[] {0f,1f,0f})
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new float[] {0.5f,2f,0.3f}))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.1f,0.4f,0.1f}))))))
        .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE"}).setAvatarSize(new MFFloat51().getArray()).setSpeed(0.5f))
        .addChild(new WorldInfo().setInfo(new MFString52().getArray()).setTitle("Nancy - an HAnim compliant avatar by 3Name3D"))
        .addChild(new Group()
          .addChild(new ProximitySensor().setDEF("TriggerProximitySensor").setSize(new float[] {50f,50f,50f}))
          .addChild(new PositionInterpolator().setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(new MFFloat53().getArray()).setKeyValue(new MFVec3f54().getArray()))
          .addChild(new OrientationInterpolator().setDEF("HUMANOIDROOT_ANIMATOR").setKey(new MFFloat55().getArray()).setKeyValue(new MFRotation56().getArray()))
          .addChild(new OrientationInterpolator().setDEF("SACROILIAC_ANIMATOR").setKey(new MFFloat57().getArray()).setKeyValue(new MFRotation58().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(new MFFloat59().getArray()).setKeyValue(new MFRotation60().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(new MFFloat61().getArray()).setKeyValue(new MFRotation62().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(new MFFloat63().getArray()).setKeyValue(new MFRotation64().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_MIDTARSAL_ANIMATOR").setKey(new MFFloat65().getArray()).setKeyValue(new MFRotation66().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(new MFFloat67().getArray()).setKeyValue(new MFRotation68().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(new MFFloat69().getArray()).setKeyValue(new MFRotation70().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(new MFFloat71().getArray()).setKeyValue(new MFRotation72().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_MIDTARSAL_ANIMATOR").setKey(new MFFloat73().getArray()).setKeyValue(new MFRotation74().getArray()))
          .addChild(new OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(new MFFloat75().getArray()).setKeyValue(new MFRotation76().getArray()))
          .addChild(new OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(new MFFloat77().getArray()).setKeyValue(new MFRotation78().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(new MFFloat79().getArray()).setKeyValue(new MFRotation80().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(new MFFloat81().getArray()).setKeyValue(new MFRotation82().getArray()))
          .addChild(new OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(new MFFloat83().getArray()).setKeyValue(new MFRotation84().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(new MFFloat85().getArray()).setKeyValue(new MFRotation86().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(new MFFloat87().getArray()).setKeyValue(new MFRotation88().getArray()))
          .addChild(new OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(new MFFloat89().getArray()).setKeyValue(new MFRotation90().getArray())))
        .addChild(new ROUTE().setFromField("enterTime").setFromNode("TriggerProximitySensor").setToField("startTime").setToNode("TIMER"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_POSITION_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SACROILIAC_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_HIP_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_KNEE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ANKLE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_MIDTARSAL_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_HIP_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_KNEE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ANKLE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_MIDTARSAL_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("VL5_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SKULLBASE_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_SHOULDER_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ELBOW_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_WRIST_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_SHOULDER_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ELBOW_ANIMATOR"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_WRIST_ANIMATOR"))
        .addComments("Animation")
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_ANKLE_ANIMATOR").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_KNEE_ANIMATOR").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_HIP_ANIMATOR").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_ANKLE_ANIMATOR").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_KNEE_ANIMATOR").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_HIP_ANIMATOR").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("VL5_ANIMATOR").setToField("set_rotation").setToNode("hanim_sacroiliac"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_WRIST_ANIMATOR").setToField("set_rotation").setToNode("r_hand_adjust"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_ELBOW_ANIMATOR").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("R_SHOULDER_ANIMATOR").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_WRIST_ANIMATOR").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_ELBOW_ANIMATOR").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("L_SHOULDER_ANIMATOR").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("SKULLBASE_ANIMATOR").setToField("set_rotation").setToNode("hanim_skullbase")))      ;
ProtoInstance1
                .addFieldValue(new fieldValue().setName("cycleInterval").setValue("0.009999999776482582"));
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","../../Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24"});
  }
}
protected class MFColor1 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.6f,0.6f,0.6f});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {50f,100f});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"greenCamo.jpg","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/greenCamo.jpg"});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1});
  }
}
protected class MFVec3f5 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.06f,0.0218f,0.0561f,1.07f,0.00726f,0.0851f,1.07f,-0.0115f,0.104f,1.07f,-0.0497f,0.0851f,1.07f,-0.0851f,0.032f,1.06f,-0.0985f,0.0873f,1.04f,0.0078f,0.033f,1.04f,0.0395f,0.123f,1.05f,-0.0405f,0.0609f,1.02f,-0.106f,0.0894f,0.996f,-0.106f,0.143f,1f,-0.0309f,0.117f,1f,0.0164f,0.0314f,0.999f,0.0502f,0.0314f,0.96f,-0.13f,0.156f,0.966f,-0.0405f,0.156f,0.968f,-0.00724f,0.0341f,0.954f,0.0513f,0.115f,0.96f,-0.0916f,0.121f,0.926f,0.0352f,0.0357f,0.92f,0.0497f,0.0314f,0.91f,-0.146f,0.0991f,0.91f,-0.131f,0.169f,0.883f,-0.0448f,0.169f,0.885f,-0.00939f,0.123f,0.873f,0.0384f,0.0926f,0.872f,0.047f,0.0325f,0.873f,0.0287f,0.0293f,0.866f,-0.142f,0.102f,0.869f,-0.131f,0.129f,0.868f,-0.103f,0.0314f,0.84f,-0.125f,0.101f,0.844f,-0.122f,0.133f,0.846f,-0.0878f,0.0653f,0.835f,0.0132f,0.0615f,0.824f,-0.111f,0.0985f,0.823f,-0.101f,0.132f,0.826f,-0.0448f,0.0609f,0.821f,-0.0158f,0.0599f,0.812f,-0.0545f,0f,1.08f,-0.0266f,-0.0561f,1.07f,0.00726f,-0.0851f,1.07f,-0.0115f,-0.104f,1.07f,-0.0497f,-0.0851f,1.07f,-0.0851f,-0.032f,1.06f,-0.0985f,-0.0873f,1.04f,0.0078f,-0.033f,1.04f,0.0395f,-0.123f,1.05f,-0.0405f,-0.0609f,1.02f,-0.106f,0f,1.02f,-0.108f,-0.0894f,0.996f,-0.106f,-0.143f,1f,-0.0309f,-0.144f,1f,-0.011f,-0.117f,1f,0.0164f,-0.0314f,0.999f,0.0502f,0f,0.961f,-0.123f,-0.0314f,0.96f,-0.13f,-0.156f,0.966f,-0.0405f,-0.156f,0.968f,-0.00724f,-0.0341f,0.954f,0.0513f,-0.115f,0.96f,-0.0916f,-0.121f,0.926f,0.0352f,-0.0357f,0.92f,0.0497f,0f,0.91f,-0.127f,-0.0314f,0.91f,-0.146f,-0.0991f,0.91f,-0.131f,-0.167f,0.911f,-0.0448f,-0.167f,0.912f,-0.00671f,0f,0.883f,-0.129f,-0.123f,0.873f,0.0384f,-0.0926f,0.872f,0.047f,-0.0325f,0.873f,0.0287f,-0.0293f,0.866f,-0.142f,-0.102f,0.869f,-0.131f,-0.129f,0.868f,-0.103f,-0.166f,0.863f,-0.0148f,0f,0.863f,-0.00456f,-0.166f,0.862f,-0.0459f,0f,0.858f,-0.1f,-0.0314f,0.84f,-0.125f,-0.101f,0.844f,-0.122f,-0.0653f,0.835f,0.0132f,0f,0.839f,-0.0217f,0f,0.835f,-0.0867f,-0.0615f,0.824f,-0.111f,-0.0985f,0.823f,-0.101f,-0.132f,0.826f,-0.0448f,-0.0609f,0.821f,-0.0158f,0f,0.831f,-0.0626f,-0.0599f,0.812f,-0.0545f});
  }
}
protected class MFInt326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0969f,0.804f,-0.0486f,0.101f,0.876f,0.0336f,0.17f,0.894f,-0.00778f,0.17f,0.891f,-0.076f,0.124f,0.858f,-0.129f,0.076f,0.843f,-0.143f,0.025f,0.819f,-0.0889f,0.0507f,0.847f,0.0196f,0.00349f,0.826f,-0.0287f,0.0991f,0.808f,0.0406f,0.161f,0.814f,-0.00187f,0.165f,0.808f,-0.0755f,0.122f,0.788f,-0.126f,0.00993f,0.762f,-0.0937f,0.00993f,0.762f,-0.0309f,0.0491f,0.777f,0.0185f,0.0755f,0.766f,-0.139f,0.13f,0.597f,-0.00618f,0.132f,0.6f,-0.0593f,0.108f,0.603f,-0.105f,0.0722f,0.601f,-0.118f,0.0314f,0.59f,-0.0953f,0.0239f,0.566f,-0.0427f,0.047f,0.566f,0.0051f,0.0878f,0.581f,0.0217f,0.114f,0.499f,-0.0132f,0.116f,0.488f,-0.061f,0.103f,0.567f,-0.0991f,0.0362f,0.557f,-0.0926f,0.025f,0.486f,-0.047f,0.0507f,0.497f,-0.00188f,0.0862f,0.513f,0.018f,0.0733f,0.579f,-0.108f});
  }
}
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0883f,0.532f,-0.00349f,0.0609f,0.533f,-0.00833f,0.0814f,0.55f,-0.0395f,0.0529f,0.536f,-0.0368f,0.0577f,0.544f,-0.0577f,0.0722f,0.546f,-0.0717f,0.0975f,0.54f,-0.0647f,0.105f,0.539f,-0.0438f,0.104f,0.539f,-0.0223f,0.0862f,0.506f,0.0158f,0.101f,0.51f,-0.0798f,0.0706f,0.51f,-0.101f,0.0406f,0.513f,-0.0744f,0.0368f,0.51f,-0.0357f,0.0556f,0.506f,-0.000272f,0.117f,0.508f,-0.0169f,0.0878f,0.361f,-0.0126f,0.123f,0.363f,-0.04f,0.123f,0.363f,-0.0663f,0.107f,0.367f,-0.107f,0.0588f,0.365f,-0.122f,0.0228f,0.358f,-0.0926f,0.0239f,0.358f,-0.0475f,0.0497f,0.358f,-0.0234f,0.118f,0.311f,-0.0411f,0.118f,0.309f,-0.0685f,0.105f,0.31f,-0.108f,0.0572f,0.308f,-0.123f,0.0201f,0.309f,-0.0937f,0.0191f,0.311f,-0.0508f,0.0475f,0.307f,-0.0282f,0.0883f,0.309f,-0.018f,0.0959f,0.124f,-0.04f,0.0905f,0.12f,-0.0647f,0.0738f,0.117f,-0.0814f,0.0373f,0.121f,-0.0636f,0.0416f,0.124f,-0.0416f,0.0744f,0.13f,-0.0212f,0.0561f,0.13f,-0.0245f,0.0529f,0.121f,-0.0873f,0.0948f,0.0897f,-0.0368f,0.0916f,0.0779f,-0.0604f,0.0717f,0.0854f,-0.0765f,0.0406f,0.0918f,-0.0626f,0.0384f,0.0881f,-0.0363f,0.054f,0.0972f,-0.0175f,0.0765f,0.11f,-0.0169f,0.0486f,0.0999f,-0.0835f});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0529f,0f,-0.0923f,0.0863f,0f,-0.0862f,0.0727f,0f,-0.0994f,0.0863f,0.0219f,-0.0862f,0.0727f,0.0219f,-0.0994f,0.1f,0f,-0.0594f,0.1f,0.0219f,-0.0594f,0.113f,0f,0.0645f,0.113f,0.0219f,0.0645f,0.112f,0f,0.117f,0.112f,0.0156f,0.117f,0.0701f,0f,0.146f,0.0701f,0.0156f,0.146f,0.0468f,0f,0.153f,0.0468f,0.0156f,0.153f,0.0215f,0f,0.146f,0.0215f,0.0156f,0.146f,0.0165f,0f,0.125f,0.0165f,0.0156f,0.125f,0.0211f,0f,0.0377f,0.0211f,0.0219f,0.0377f,0.0393f,0f,-0.0129f,0.0393f,0.0219f,-0.0129f,0.0433f,0f,-0.0534f,0.0433f,0.0219f,-0.0534f,0.0529f,0.0219f,-0.0923f,0.0305f,0.0253f,0.0938f,0.0505f,0.0253f,0.099f,0.0854f,0.0253f,0.0834f,0.102f,0.0253f,0.0707f,0.0568f,0.0573f,-0.0918f,0.0492f,0.0573f,-0.0497f,0.0435f,0.0573f,-0.0225f,0.0442f,0.0573f,0.0235f,0.0623f,0.0573f,0.0366f,0.0911f,0.0573f,0.0159f,0.0962f,0.0573f,-0.0121f,0.0911f,0.0573f,-0.0482f,0.0758f,0.0573f,-0.0899f,0.0676f,0.0573f,-0.0962f,0.0578f,0.0953f,-0.0896f,0.0489f,0.0953f,-0.0757f,0.0447f,0.0953f,-0.0432f,0.0451f,0.0953f,-0.0128f,0.0624f,0.0953f,-0.00466f,0.0857f,0.0953f,-0.0134f,0.0953f,0.0953f,-0.038f,0.0843f,0.0953f,-0.0803f,0.0761f,0.0953f,-0.0889f,0.0682f,0.0953f,-0.0929f,0.0675f,0.13f,-0.0608f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1});
  }
}
protected class MFVec3f13 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0969f,0.804f,-0.0486f,-0.101f,0.876f,0.0336f,-0.17f,0.894f,-0.00778f,-0.17f,0.891f,-0.076f,-0.124f,0.858f,-0.129f,-0.076f,0.843f,-0.143f,-0.025f,0.819f,-0.0889f,-0.0507f,0.847f,0.0196f,-0.00349f,0.826f,-0.0287f,-0.0991f,0.808f,0.0406f,-0.161f,0.814f,-0.00187f,-0.165f,0.808f,-0.0755f,-0.122f,0.788f,-0.126f,-0.00993f,0.762f,-0.0937f,-0.00993f,0.762f,-0.0309f,-0.0491f,0.777f,0.0185f,-0.0755f,0.766f,-0.139f,-0.13f,0.597f,-0.00618f,-0.132f,0.6f,-0.0593f,-0.108f,0.603f,-0.105f,-0.0722f,0.601f,-0.118f,-0.0314f,0.59f,-0.0953f,-0.0239f,0.566f,-0.0427f,-0.047f,0.566f,0.0051f,-0.0878f,0.581f,0.0217f,-0.114f,0.499f,-0.0132f,-0.116f,0.488f,-0.061f,-0.103f,0.567f,-0.0991f,-0.0362f,0.557f,-0.0926f,-0.025f,0.486f,-0.047f,-0.0507f,0.497f,-0.00188f,-0.0862f,0.513f,0.018f});
  }
}
protected class MFInt3214 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1});
  }
}
protected class MFVec3f15 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.123f,0.363f,-0.0663f,-0.123f,0.363f,-0.04f,-0.118f,0.309f,-0.0685f,-0.118f,0.311f,-0.0411f,-0.117f,0.508f,-0.0169f,-0.107f,0.367f,-0.107f,-0.105f,0.539f,-0.0438f,-0.105f,0.31f,-0.108f,-0.104f,0.539f,-0.0223f,-0.101f,0.51f,-0.0798f,-0.0975f,0.54f,-0.0647f,-0.0948f,0.0897f,-0.0368f,-0.0916f,0.0779f,-0.0604f,-0.0905f,0.12f,-0.0647f,-0.0883f,0.532f,-0.00349f,-0.0883f,0.309f,-0.018f,-0.0878f,0.361f,-0.0126f,-0.0862f,0.506f,0.0158f,-0.0814f,0.55f,-0.0395f,-0.0765f,0.11f,-0.0169f,-0.0744f,0.13f,-0.0212f,-0.0738f,0.117f,-0.0814f,-0.0722f,0.546f,-0.0717f,-0.0717f,0.0854f,-0.0765f,-0.0706f,0.51f,-0.101f,-0.0609f,0.533f,-0.00833f,-0.0588f,0.365f,-0.122f,-0.0577f,0.544f,-0.0577f,-0.0572f,0.308f,-0.123f,-0.0561f,0.13f,-0.0245f,-0.0556f,0.506f,-0.000272f,-0.054f,0.0972f,-0.0175f,-0.0529f,0.536f,-0.0368f,-0.0529f,0.121f,-0.0873f,-0.0497f,0.358f,-0.0234f,-0.0486f,0.0999f,-0.0835f,-0.0475f,0.307f,-0.0282f,-0.0416f,0.124f,-0.0416f,-0.0406f,0.0918f,-0.0626f,-0.0406f,0.513f,-0.0744f,-0.0384f,0.0881f,-0.0363f,-0.0373f,0.121f,-0.0636f,-0.0368f,0.51f,-0.0357f,-0.0239f,0.358f,-0.0475f,-0.0228f,0.358f,-0.0926f,-0.0201f,0.309f,-0.0937f,-0.0191f,0.311f,-0.0508f,-0.0985f,0.125f,-0.0375f});
  }
}
protected class MFInt3216 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0727f,0f,-0.0994f,-0.1f,0f,-0.0594f,-0.0701f,0f,0.146f,-0.0468f,0f,0.153f,-0.0215f,0f,0.146f,-0.0433f,0f,-0.0534f,-0.0529f,0f,-0.0923f,-0.0727f,0.0219f,-0.0994f,-0.0863f,0.0219f,-0.0862f,-0.1f,0.0219f,-0.0594f,-0.108f,0.0219f,-0.00479f,-0.112f,0.0156f,0.117f,-0.0701f,0.0156f,0.146f,-0.0468f,0.0156f,0.153f,-0.0215f,0.0156f,0.146f,-0.0165f,0.017f,0.0777f,-0.0433f,0.0219f,-0.0534f,-0.0529f,0.0219f,-0.0923f,-0.0445f,0.0273f,-0.0189f,-0.0265f,0.0253f,0.0549f,-0.0305f,0.0253f,0.0938f,-0.069f,0.0253f,0.0938f,-0.102f,0.0253f,0.0707f,-0.0568f,0.0573f,-0.0918f,-0.0492f,0.0573f,-0.0497f,-0.0424f,0.0573f,-0.00142f,-0.0478f,0.0573f,0.0341f,-0.0623f,0.0573f,0.0366f,-0.0864f,0.0573f,0.0245f,-0.0962f,0.0573f,-0.0121f,-0.0845f,0.0573f,-0.0764f,-0.0758f,0.0573f,-0.0899f,-0.0676f,0.0573f,-0.0962f,-0.0578f,0.0953f,-0.0896f,-0.0489f,0.0953f,-0.0757f,-0.0459f,0.0953f,-0.0615f,-0.0435f,0.0953f,-0.0292f,-0.0485f,0.0953f,-0.00582f,-0.0624f,0.0953f,-0.00466f,-0.0857f,0.0953f,-0.0134f,-0.0953f,0.0953f,-0.038f,-0.0843f,0.0953f,-0.0803f,-0.0761f,0.0953f,-0.0889f,-0.0682f,0.0953f,-0.0929f,-0.0675f,0.13f,-0.0608f,-0.0165f,0f,0.125f,-0.112f,0f,0.117f,-0.0165f,0f,0.0777f,-0.0393f,0f,-0.0129f,-0.108f,0f,-0.00479f,-0.0863f,0f,-0.0862f});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.043f,1.25f,0.0614f,0.101f,1.25f,0.0614f,0.103f,1.31f,0.0195f,0.021f,1.32f,0.0276f,0.0572f,1.27f,-0.153f,0.0524f,1.15f,-0.134f,0f,1.19f,-0.14f,0f,1.26f,-0.147f,-0.0572f,1.27f,-0.153f,-0.0228f,1.18f,-0.14f,-0.0524f,1.15f,-0.134f,0f,1.13f,-0.126f,-0.0228f,1.13f,-0.124f,0f,1.31f,-0.146f,-0.0545f,1.35f,-0.138f,0f,1.35f,-0.136f,-0.0593f,1.3f,-0.151f,0.0593f,1.3f,-0.151f,0.0545f,1.35f,-0.138f,-0.0255f,1.3f,-0.146f,0.0975f,1.26f,-0.15f,0.1f,1.3f,-0.148f,-0.1f,1.3f,-0.148f,-0.0975f,1.26f,-0.15f,-0.117f,1.41f,-0.0395f,-0.0674f,1.45f,-0.0314f,-0.0926f,1.41f,-0.0937f,-0.124f,1.4f,-0.0706f,-0.0583f,1.44f,-0.0615f,-0.0228f,1.46f,-0.0872f,-0.0534f,1.42f,-0.112f,-0.0228f,1.42f,0.00351f,-0.0593f,1.43f,-0.0185f,-0.0787f,1.39f,-0.00293f,-0.112f,1.4f,-0.0131f,-0.164f,1.39f,-0.0373f,-0.0153f,1.39f,0.0159f,-0.0953f,1.35f,-0.136f,-0.0545f,1.35f,-0.138f,-0.139f,1.34f,0.00297f,-0.137f,1.34f,-0.0368f,0f,1.35f,-0.136f,-0.156f,1.35f,-0.0915f,-0.132f,1.29f,-0.127f,-0.1f,1.3f,-0.148f,-0.0418f,1.35f,0.0168f,-0.013f,1.37f,0.0167f,-0.151f,1.28f,-0.0878f,-0.136f,1.32f,-0.0406f,-0.124f,1.26f,-0.125f,-0.0975f,1.26f,-0.15f,0.00228f,1.37f,0.0167f,-0.00959f,1.32f,0.0276f,-0.0918f,1.31f,0.0195f,-0.141f,1.25f,-0.0744f,-0.0316f,1.25f,0.0614f,-0.00261f,1.25f,0.0458f,-0.0611f,1.25f,0.0668f,-0.0896f,1.25f,0.0614f,-0.126f,1.24f,0.012f,-0.126f,1.22f,0.0141f,-0.129f,1.17f,-0.0523f,-0.115f,1.16f,-0.105f,-0.0851f,1.18f,-0.134f,-0.0524f,1.15f,-0.134f,-0.083f,1.13f,-0.122f,-0.117f,1.15f,-0.018f,-0.11f,1.1f,-0.0846f,-0.0808f,1.1f,-0.111f,-0.0228f,1.13f,-0.124f,-0.0524f,1.1f,-0.119f,0f,1.13f,-0.126f,-0.0228f,1.1f,-0.116f,-0.0563f,1.15f,0.0377f,-0.00476f,1.18f,0.0458f,-0.0343f,1.18f,0.0485f,-0.0966f,1.15f,-0.00413f,-0.12f,1.1f,-0.0373f,-0.121f,1.07f,-0.0356f,-0.106f,1.07f,-0.0711f,-0.0475f,1.06f,-0.105f,0f,1.08f,0.0556f,-0.0787f,1.08f,0.0347f,-0.103f,1.08f,0.00296f,-0.0975f,1.01f,-0.0873f,-0.134f,0.998f,-0.0314f,-0.0475f,1.02f,-0.109f,-0.0325f,1.02f,0.0529f,0f,1.02f,0.0422f,-0.0975f,1.02f,0.0132f,0.0926f,1.41f,-0.0937f,0.0674f,1.45f,-0.0314f,0.117f,1.41f,-0.0395f,0.124f,1.4f,-0.0706f,0.0583f,1.44f,-0.0615f,0.0534f,1.42f,-0.112f,0.0228f,1.46f,-0.0872f,0f,1.4f,-0.112f,0.0787f,1.39f,-0.00293f,0.0593f,1.43f,-0.0185f,0.0228f,1.42f,0.00351f,0.112f,1.4f,-0.0131f,0.164f,1.39f,-0.0373f,0.0153f,1.39f,0.0159f,0.0953f,1.35f,-0.136f,0.0545f,1.35f,-0.138f,0.139f,1.34f,0.00297f,0.156f,1.35f,-0.0915f,0.132f,1.29f,-0.127f,0.151f,1.28f,-0.0878f,0.1f,1.3f,-0.148f,0.137f,1.34f,-0.0368f,0.147f,1.32f,-0.0406f,0.124f,1.26f,-0.125f,0.0975f,1.26f,-0.15f,0.021f,1.32f,0.0276f,0.0532f,1.35f,0.0168f,0.103f,1.31f,0.0195f,0.135f,1.29f,-0.0406f,0.141f,1.25f,-0.0744f,0.132f,1.18f,-0.083f,0.134f,1.19f,-0.0572f,0.014f,1.25f,0.0458f,0.043f,1.25f,0.0614f,0.101f,1.25f,0.0614f,0.138f,1.24f,0.012f,0.065f,1.23f,0.0743f,0.115f,1.16f,-0.105f,0.0851f,1.18f,-0.134f,0.0524f,1.15f,-0.134f,0.043f,1.2f,0.0641f,0.127f,1.14f,-0.0427f,0.083f,1.13f,-0.122f,0.0162f,1.18f,0.0458f,0.0457f,1.18f,0.0485f,0.117f,1.15f,-0.018f,0.11f,1.1f,-0.0846f,0.0808f,1.1f,-0.111f,0.0524f,1.1f,-0.119f,0.0228f,1.1f,-0.116f,0.108f,1.15f,-0.00413f,0.12f,1.1f,-0.0373f,0.121f,1.07f,-0.0356f,0.106f,1.07f,-0.0711f,0.0475f,1.06f,-0.105f,0.0787f,1.08f,0.0347f,0.0844f,1.15f,0.0297f,0.103f,1.08f,0.00296f,0f,1.07f,-0.11f,0.0975f,1.01f,-0.0873f,0.134f,0.998f,-0.0475f,0.0475f,1.02f,-0.109f,0.0325f,1.02f,0.0529f,0.0975f,1.02f,0.0132f,0f,1.02f,-0.117f,0f,1.44f,-0.0389f,0f,1.01f,-0.0259f,-0.104f,1.19f,0.0423f,-0.0778f,1.19f,0.0642f,-0.078f,1.19f,0.0644f,-0.0493f,1.2f,0.0664f,-0.0281f,1.22f,0.0587f,-0.104f,1.2f,0.0568f,-0.0484f,1.21f,0.0692f,-0.0549f,1.21f,0.0708f,-0.0806f,1.21f,0.0713f,-0.0852f,1.21f,0.0703f,0.116f,1.19f,0.043f,0.114f,1.21f,0.0572f,0.0967f,1.21f,0.0701f,0.11f,1.19f,0.0502f,0.093f,1.19f,0.0622f,0.0832f,1.19f,0.0662f,0.0863f,1.21f,0.0728f,0.0154f,1.21f,0.0458f,-0.00393f,1.21f,0.0458f,-0.0145f,1.2f,0.0512f,0.0534f,1.35f,0.0168f});
  }
}
protected class MFVec2f20 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1611f,-0.02056f,0.9468f,-0.02056f,0.9739f,0.9344f,-0.137f,1.094f,0.1973f,0.6424f,0.2231f,0.04876f,0.5054f,0.2466f,0.5054f,0.5929f,0.8135f,0.6424f,0.6282f,0.1972f,0.7876f,0.04876f,0.5054f,-0.05018f,0.6282f,-0.05018f,0.5054f,0.8403f,0.7989f,1.038f,0.5054f,1.038f,0.8248f,0.7908f,0.186f,0.7908f,0.2118f,1.038f,0.6427f,0.7908f,-0.01977f,0.5929f,-0.03324f,0.7908f,1.044f,0.7908f,1.031f,0.5929f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFString21 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif"});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.043f,1.25f,0.0614f,0.101f,1.25f,0.0614f,0.103f,1.31f,0.0195f,0.021f,1.32f,0.0276f,0.0572f,1.27f,-0.153f,0.0524f,1.15f,-0.134f,0f,1.19f,-0.14f,0f,1.26f,-0.147f,-0.0572f,1.27f,-0.153f,-0.0228f,1.18f,-0.14f,-0.0524f,1.15f,-0.134f,0f,1.13f,-0.126f,-0.0228f,1.13f,-0.124f,0f,1.31f,-0.146f,-0.0545f,1.35f,-0.138f,0f,1.35f,-0.136f,-0.0593f,1.3f,-0.151f,0.0593f,1.3f,-0.151f,0.0545f,1.35f,-0.138f,-0.0255f,1.3f,-0.146f,0.0975f,1.26f,-0.15f,0.1f,1.3f,-0.148f,-0.1f,1.3f,-0.148f,-0.0975f,1.26f,-0.15f,-0.117f,1.41f,-0.0395f,-0.0674f,1.45f,-0.0314f,-0.0926f,1.41f,-0.0937f,-0.124f,1.4f,-0.0706f,-0.0583f,1.44f,-0.0615f,-0.0228f,1.46f,-0.0872f,-0.0534f,1.42f,-0.112f,-0.0228f,1.42f,0.00351f,-0.0593f,1.43f,-0.0185f,-0.0787f,1.39f,-0.00293f,-0.112f,1.4f,-0.0131f,-0.164f,1.39f,-0.0373f,-0.0153f,1.39f,0.0159f,-0.0953f,1.35f,-0.136f,-0.0545f,1.35f,-0.138f,-0.139f,1.34f,0.00297f,-0.137f,1.34f,-0.0368f,0f,1.35f,-0.136f,-0.156f,1.35f,-0.0915f,-0.132f,1.29f,-0.127f,-0.1f,1.3f,-0.148f,-0.0418f,1.35f,0.0168f,-0.013f,1.37f,0.0167f,-0.151f,1.28f,-0.0878f,-0.136f,1.32f,-0.0406f,-0.124f,1.26f,-0.125f,-0.0975f,1.26f,-0.15f,0.00228f,1.37f,0.0167f,-0.00959f,1.32f,0.0276f,-0.0918f,1.31f,0.0195f,-0.141f,1.25f,-0.0744f,-0.0316f,1.25f,0.0614f,-0.00261f,1.25f,0.0458f,-0.0611f,1.25f,0.0668f,-0.0896f,1.25f,0.0614f,-0.126f,1.24f,0.012f,-0.126f,1.22f,0.0141f,-0.129f,1.17f,-0.0523f,-0.115f,1.16f,-0.105f,-0.0851f,1.18f,-0.134f,-0.0524f,1.15f,-0.134f,-0.083f,1.13f,-0.122f,-0.117f,1.15f,-0.018f,-0.11f,1.1f,-0.0846f,-0.0808f,1.1f,-0.111f,-0.0228f,1.13f,-0.124f,-0.0524f,1.1f,-0.119f,0f,1.13f,-0.126f,-0.0228f,1.1f,-0.116f,-0.0563f,1.15f,0.0377f,-0.00476f,1.18f,0.0458f,-0.0343f,1.18f,0.0485f,-0.0966f,1.15f,-0.00413f,-0.12f,1.1f,-0.0373f,-0.121f,1.07f,-0.0356f,-0.106f,1.07f,-0.0711f,-0.0475f,1.06f,-0.105f,0f,1.08f,0.0556f,-0.0787f,1.08f,0.0347f,-0.103f,1.08f,0.00296f,-0.0975f,1.01f,-0.0873f,-0.134f,0.998f,-0.0314f,-0.0475f,1.02f,-0.109f,-0.0325f,1.02f,0.0529f,0f,1.02f,0.0422f,-0.0975f,1.02f,0.0132f,0.0926f,1.41f,-0.0937f,0.0674f,1.45f,-0.0314f,0.117f,1.41f,-0.0395f,0.124f,1.4f,-0.0706f,0.0583f,1.44f,-0.0615f,0.0534f,1.42f,-0.112f,0.0228f,1.46f,-0.0872f,0f,1.4f,-0.112f,0.0787f,1.39f,-0.00293f,0.0593f,1.43f,-0.0185f,0.0228f,1.42f,0.00351f,0.112f,1.4f,-0.0131f,0.164f,1.39f,-0.0373f,0.0153f,1.39f,0.0159f,0.0953f,1.35f,-0.136f,0.0545f,1.35f,-0.138f,0.139f,1.34f,0.00297f,0.156f,1.35f,-0.0915f,0.132f,1.29f,-0.127f,0.151f,1.28f,-0.0878f,0.1f,1.3f,-0.148f,0.137f,1.34f,-0.0368f,0.147f,1.32f,-0.0406f,0.124f,1.26f,-0.125f,0.0975f,1.26f,-0.15f,0.021f,1.32f,0.0276f,0.0532f,1.35f,0.0168f,0.103f,1.31f,0.0195f,0.135f,1.29f,-0.0406f,0.141f,1.25f,-0.0744f,0.132f,1.18f,-0.083f,0.134f,1.19f,-0.0572f,0.014f,1.25f,0.0458f,0.043f,1.25f,0.0614f,0.101f,1.25f,0.0614f,0.138f,1.24f,0.012f,0.065f,1.23f,0.0743f,0.115f,1.16f,-0.105f,0.0851f,1.18f,-0.134f,0.0524f,1.15f,-0.134f,0.043f,1.2f,0.0641f,0.127f,1.14f,-0.0427f,0.083f,1.13f,-0.122f,0.0162f,1.18f,0.0458f,0.0457f,1.18f,0.0485f,0.117f,1.15f,-0.018f,0.11f,1.1f,-0.0846f,0.0808f,1.1f,-0.111f,0.0524f,1.1f,-0.119f,0.0228f,1.1f,-0.116f,0.108f,1.15f,-0.00413f,0.12f,1.1f,-0.0373f,0.121f,1.07f,-0.0356f,0.106f,1.07f,-0.0711f,0.0475f,1.06f,-0.105f,0.0787f,1.08f,0.0347f,0.0844f,1.15f,0.0297f,0.103f,1.08f,0.00296f,0f,1.07f,-0.11f,0.0975f,1.01f,-0.0873f,0.134f,0.998f,-0.0475f,0.0475f,1.02f,-0.109f,0.0325f,1.02f,0.0529f,0.0975f,1.02f,0.0132f,0f,1.02f,-0.117f,0f,1.44f,-0.0389f,0f,1.01f,-0.0259f,-0.104f,1.19f,0.0423f,-0.0778f,1.19f,0.0642f,-0.078f,1.19f,0.0644f,-0.0493f,1.2f,0.0664f,-0.0281f,1.22f,0.0587f,-0.104f,1.2f,0.0568f,-0.0484f,1.21f,0.0692f,-0.0549f,1.21f,0.0708f,-0.0806f,1.21f,0.0713f,-0.0852f,1.21f,0.0703f,0.116f,1.19f,0.043f,0.114f,1.21f,0.0572f,0.0967f,1.21f,0.0701f,0.11f,1.19f,0.0502f,0.093f,1.19f,0.0622f,0.0832f,1.19f,0.0662f,0.0863f,1.21f,0.0728f,0.0154f,1.21f,0.0458f,-0.00393f,1.21f,0.0458f,-0.0145f,1.2f,0.0512f,0.0534f,1.35f,0.0168f});
  }
}
protected class MFVec2f25 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1611f,-0.02056f,0.9468f,-0.02056f,0.9739f,0.9344f,-0.137f,1.094f,0.1973f,0.6424f,0.2231f,0.04876f,0.5054f,0.2466f,0.5054f,0.5929f,0.8135f,0.6424f,0.6282f,0.1972f,0.7876f,0.04876f,0.5054f,-0.05018f,0.6282f,-0.05018f,0.5054f,0.8403f,0.7989f,1.038f,0.5054f,1.038f,0.8248f,0.7908f,0.186f,0.7908f,0.2118f,1.038f,0.6427f,0.7908f,-0.01977f,0.5929f,-0.03324f,0.7908f,1.044f,0.7908f,1.031f,0.5929f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFInt3226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1});
  }
}
protected class MFVec3f27 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.174f,1.37f,-0.0625f,0.185f,1.38f,-0.0395f,0.156f,1.39f,-0.0464f,0.174f,1.37f,-0.0158f,0.154f,1.37f,-0.0185f,0.157f,1.38f,-0.0733f,0.182f,1.33f,-0.0728f,0.151f,1.33f,-0.0937f,0.15f,1.34f,-0.000787f,0.185f,1.33f,-0.00025f,0.201f,1.33f,-0.0411f,0.189f,1.26f,-0.0808f,0.155f,1.26f,-0.0867f,0.151f,1.26f,-0.000789f,0.19f,1.26f,-0.00401f,0.209f,1.26f,-0.0427f,0.141f,1.26f,-0.0421f,0.203f,1.08f,-0.0744f,0.162f,1.05f,-0.0561f,0.169f,1.08f,-0.00885f,0.208f,1.07f,-0.00133f,0.221f,1.08f,-0.0352f});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1});
  }
}
protected class MFVec3f29 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.177f,1.09f,-0.0609f,0.202f,1.1f,-0.0566f,0.189f,1.1f,-0.0395f,0.213f,1.1f,-0.025f,0.203f,1.1f,-0.0158f,0.182f,1.09f,-0.00563f,0.167f,1.09f,-0.0325f,0.176f,1.08f,-0.0781f,0.16f,1.06f,-0.0373f,0.214f,1.07f,-0.00402f,0.228f,1.07f,-0.0319f,0.208f,1.08f,-0.0765f,0.179f,1.07f,-0.00294f,0.21f,0.818f,-0.0615f,0.201f,0.82f,-0.0405f,0.205f,0.819f,-0.00832f,0.224f,0.818f,-0.00778f,0.237f,0.82f,-0.0282f,0.231f,0.819f,-0.0609f});
  }
}
protected class MFInt3230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1});
  }
}
protected class MFVec3f31 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.211f,0.828f,-0.0434f,0.194f,0.81f,-0.0445f,0.237f,0.82f,-0.0425f,0.236f,0.82f,-0.0237f,0.194f,0.81f,-0.0254f,0.21f,0.828f,-0.0247f,0.252f,0.801f,-0.0424f,0.252f,0.801f,-0.0231f,0.269f,0.765f,-0.0426f,0.268f,0.765f,-0.0225f,0.273f,0.732f,-0.0395f,0.272f,0.732f,-0.0223f,0.27f,0.704f,-0.0342f,0.27f,0.704f,-0.0224f,0.262f,0.703f,-0.0345f,0.261f,0.703f,-0.0227f,0.256f,0.717f,-0.0389f,0.256f,0.717f,-0.023f,0.255f,0.738f,-0.0408f,0.255f,0.738f,-0.023f,0.251f,0.734f,-0.0406f,0.251f,0.734f,-0.0232f,0.251f,0.692f,-0.0232f,0.248f,0.657f,-0.0233f,0.24f,0.645f,-0.0236f,0.226f,0.637f,-0.0241f,0.213f,0.639f,-0.0246f,0.197f,0.652f,-0.0253f,0.188f,0.669f,-0.0256f,0.184f,0.697f,-0.0258f,0.183f,0.73f,-0.0258f,0.187f,0.77f,-0.0257f,0.244f,0.696f,-0.0375f,0.244f,0.692f,-0.0372f,0.242f,0.661f,-0.0345f,0.241f,0.658f,-0.0343f,0.241f,0.656f,-0.0341f,0.231f,0.646f,-0.0336f,0.206f,0.65f,-0.0349f,0.218f,0.644f,-0.034f,0.205f,0.652f,-0.0352f,0.198f,0.667f,-0.0367f,0.195f,0.691f,-0.039f,0.194f,0.696f,-0.0395f,0.193f,0.725f,-0.042f,0.193f,0.731f,-0.0425f,0.197f,0.765f,-0.0449f,0.197f,0.77f,-0.0453f});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1});
  }
}
protected class MFVec3f33 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.221f,1.08f,-0.0352f,-0.214f,1.14f,-0.0405f,-0.209f,1.26f,-0.0427f,-0.208f,1.07f,-0.00133f,-0.203f,1.08f,-0.0744f,-0.201f,1.33f,-0.0411f,-0.198f,1.14f,-0.0024f,-0.198f,1.13f,-0.076f,-0.19f,1.26f,-0.00401f,-0.189f,1.26f,-0.0808f,-0.185f,1.38f,-0.0395f,-0.185f,1.33f,-0.00025f,-0.182f,1.33f,-0.0728f,-0.174f,1.37f,-0.0158f,-0.174f,1.37f,-0.0625f,-0.169f,1.08f,-0.00885f,-0.167f,1.13f,-0.0744f,-0.162f,1.05f,-0.0561f,-0.16f,1.13f,-0.000793f,-0.157f,1.38f,-0.0733f,-0.156f,1.39f,-0.0464f,-0.155f,1.26f,-0.0867f,-0.154f,1.37f,-0.0185f,-0.151f,1.26f,-0.000789f,-0.151f,1.33f,-0.0937f,-0.15f,1.34f,-0.000787f,-0.15f,1.13f,-0.0411f,-0.141f,1.26f,-0.0421f});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1});
  }
}
protected class MFVec3f35 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.237f,0.82f,-0.0282f,-0.235f,1.02f,-0.033f,-0.231f,0.819f,-0.0609f,-0.228f,1.07f,-0.0319f,-0.224f,0.818f,-0.00778f,-0.221f,1.01f,-0.0744f,-0.218f,1.01f,-0.00133f,-0.214f,1.07f,-0.00402f,-0.213f,1.1f,-0.025f,-0.21f,0.818f,-0.0615f,-0.208f,1.08f,-0.0765f,-0.205f,0.819f,-0.00832f,-0.203f,1.1f,-0.0158f,-0.202f,1.1f,-0.0566f,-0.201f,0.82f,-0.0405f,-0.189f,1.1f,-0.0395f,-0.183f,1.01f,-0.00831f,-0.183f,1.01f,-0.0781f,-0.182f,1.09f,-0.00563f,-0.179f,1.07f,-0.00294f,-0.177f,1.09f,-0.0609f,-0.176f,1.08f,-0.0781f,-0.167f,1.09f,-0.0325f,-0.166f,1f,-0.0405f,-0.16f,1.06f,-0.0373f});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1});
  }
}
protected class MFVec3f37 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.237f,0.82f,-0.0425f,-0.252f,0.801f,-0.0424f,-0.269f,0.765f,-0.0426f,-0.273f,0.732f,-0.0395f,-0.27f,0.704f,-0.0342f,-0.262f,0.703f,-0.0345f,-0.256f,0.717f,-0.0389f,-0.255f,0.738f,-0.0408f,-0.251f,0.734f,-0.0406f,-0.194f,0.81f,-0.0445f,-0.211f,0.828f,-0.0434f,-0.236f,0.82f,-0.0237f,-0.252f,0.801f,-0.0231f,-0.268f,0.765f,-0.0225f,-0.272f,0.732f,-0.0223f,-0.27f,0.704f,-0.0224f,-0.261f,0.703f,-0.0227f,-0.256f,0.717f,-0.023f,-0.255f,0.738f,-0.023f,-0.251f,0.734f,-0.0232f,-0.251f,0.692f,-0.0232f,-0.248f,0.657f,-0.0233f,-0.24f,0.645f,-0.0236f,-0.226f,0.637f,-0.0241f,-0.213f,0.639f,-0.0246f,-0.197f,0.652f,-0.0253f,-0.188f,0.669f,-0.0256f,-0.184f,0.697f,-0.0258f,-0.183f,0.73f,-0.0258f,-0.187f,0.77f,-0.0257f,-0.194f,0.81f,-0.0254f,-0.21f,0.828f,-0.0247f,-0.221f,0.641f,-0.0336f,-0.21f,0.65f,-0.0348f,-0.206f,0.652f,-0.0352f,-0.198f,0.667f,-0.0368f,-0.193f,0.692f,-0.0392f,-0.192f,0.696f,-0.0396f,-0.231f,0.646f,-0.0336f,-0.238f,0.656f,-0.0342f,-0.24f,0.658f,-0.0344f,-0.24f,0.662f,-0.0347f,-0.243f,0.692f,-0.0372f,-0.243f,0.696f,-0.0376f,-0.192f,0.725f,-0.0421f,-0.192f,0.73f,-0.0426f,-0.195f,0.766f,-0.0451f,-0.196f,0.77f,-0.0454f});
  }
}
protected class MFInt3238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1});
  }
}
protected class MFVec3f39 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0105f,1.54f,-0.1f,0.0357f,1.54f,-0.0685f,0.0382f,1.55f,-0.0474f,0.0105f,1.55f,-0.0204f,0.0373f,1.4f,-0.0593f,0.0577f,1.4f,-0.0266f,0.0158f,1.4f,0.00512f,0.0132f,1.41f,-0.0824f,-0.0158f,1.4f,0.00512f,-0.0577f,1.4f,-0.0266f,-0.0382f,1.55f,-0.0474f,-0.0105f,1.55f,-0.0204f,-0.0373f,1.4f,-0.0593f,-0.0357f,1.54f,-0.0685f,-0.0132f,1.41f,-0.0824f,-0.0105f,1.54f,-0.1f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1});
  }
}
protected class MFVec3f42 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.5257f,0f,0.8507f,0.3477f,0f,0.9376f,0.4636f,0.1875f,0.866f,0.1227f,0f,0.9924f,0.2531f,0.2047f,0.9455f,0.368f,0.397f,0.8408f,-0.1227f,0f,0.9924f,0f,0.2116f,0.9773f,0.1308f,0.4233f,0.8965f,0.2453f,0.5955f,0.765f,-0.3477f,0f,0.9376f,-0.2531f,0.2047f,0.9455f,-0.1308f,0.4233f,0.8965f,0f,0.6142f,0.7891f,0.1159f,0.7501f,0.6511f,-0.5257f,0f,0.8507f,-0.4636f,0.1875f,0.866f,-0.368f,0.397f,0.8408f,-0.2453f,0.5955f,0.765f,-0.1159f,0.7501f,0.6511f,0f,0.8507f,0.5257f,0.8507f,0.5257f,0f,0.866f,0.4636f,0.1875f,0.7501f,0.6511f,0.1159f,0.8408f,0.368f,0.397f,0.7408f,0.5844f,0.3313f,0.5955f,0.765f,0.2453f,0.765f,0.2453f,0.5955f,0.6849f,0.4732f,0.5541f,0.5541f,0.6849f,0.4732f,0.397f,0.8408f,0.368f,0.6511f,0.1159f,0.7501f,0.5844f,0.3313f,0.7408f,0.4732f,0.5541f,0.6849f,0.3313f,0.7408f,0.5844f,0.1875f,0.866f,0.4636f,0.9376f,0.3477f,0f,0.9924f,0.1227f,0f,0.9455f,0.2531f,0.2047f,0.9924f,0f,0f,0.9773f,0f,0.2116f,0.8965f,0.1308f,0.4233f,0.8965f,0f,0.4233f,0.7891f,0f,0.6142f,0.6511f,0f,0.7501f,-0.6511f,0.1159f,0.7501f,-0.765f,0.2453f,0.5955f,-0.5844f,0.3313f,0.7408f,-0.8408f,0.368f,0.397f,-0.6849f,0.4732f,0.5541f,-0.4732f,0.5541f,0.6849f,-0.866f,0.4636f,0.1875f,-0.7408f,0.5844f,0.3313f,-0.5541f,0.6849f,0.4732f,-0.3313f,0.7408f,0.5844f,-0.8507f,0.5257f,0f,-0.7501f,0.6511f,0.1159f,-0.5955f,0.765f,0.2453f,-0.397f,0.8408f,0.368f,-0.1875f,0.866f,0.4636f,-0.6511f,0f,0.7501f,-0.7891f,0f,0.6142f,-0.8965f,0f,0.4233f,-0.8965f,0.1308f,0.4233f,-0.9773f,0f,0.2116f,-0.9455f,0.2531f,0.2047f,-0.9924f,0f,0f,-0.9924f,0.1227f,0f,-0.9376f,0.3477f,0f,-0.7501f,0.6511f,-0.1159f,-0.5955f,0.765f,-0.2453f,-0.6142f,0.7891f,0f,-0.397f,0.8408f,-0.368f,-0.4233f,0.8965f,-0.1308f,-0.4233f,0.8965f,0.1308f,-0.1875f,0.866f,-0.4636f,-0.2047f,0.9455f,-0.2531f,-0.2116f,0.9773f,0f,-0.2047f,0.9455f,0.2531f,0f,0.8507f,-0.5257f,0f,0.9376f,-0.3477f,0f,0.9924f,-0.1227f,0f,0.9924f,0.1227f,0f,0.9376f,0.3477f,-0.866f,0.4636f,-0.1875f,-0.8408f,0.368f,-0.397f,-0.7408f,0.5844f,-0.3313f,-0.765f,0.2453f,-0.5955f,-0.6849f,0.4732f,-0.5541f,-0.5541f,0.6849f,-0.4732f,-0.6511f,0.1159f,-0.7501f,-0.5844f,0.3313f,-0.7408f,-0.4732f,0.5541f,-0.6849f,-0.3313f,0.7408f,-0.5844f,-0.5257f,0f,-0.8507f,-0.4636f,0.1875f,-0.866f,-0.368f,0.397f,-0.8408f,-0.2453f,0.5955f,-0.765f,-0.1159f,0.7501f,-0.6511f,0.1875f,0.866f,-0.4636f,0.397f,0.8408f,-0.368f,0.2047f,0.9455f,-0.2531f,0.5955f,0.765f,-0.2453f,0.4233f,0.8965f,-0.1308f,0.2116f,0.9773f,0f,0.7501f,0.6511f,-0.1159f,0.6142f,0.7891f,0f,0.4233f,0.8965f,0.1308f,0.2047f,0.9455f,0.2531f,0.1159f,0.7501f,-0.6511f,0.2453f,0.5955f,-0.765f,0.3313f,0.7408f,-0.5844f,0.368f,0.397f,-0.8408f,0.4732f,0.5541f,-0.6849f,0.5541f,0.6849f,-0.4732f,0.4636f,0.1875f,-0.866f,0.5844f,0.3313f,-0.7408f,0.6849f,0.4732f,-0.5541f,0.7408f,0.5844f,-0.3313f,0.5257f,0f,-0.8507f,0.6511f,0.1159f,-0.7501f,0.765f,0.2453f,-0.5955f,0.8408f,0.368f,-0.397f,0.866f,0.4636f,-0.1875f,0.3477f,0f,-0.9376f,0.1227f,0f,-0.9924f,-0.1227f,0f,-0.9924f,-0.3477f,0f,-0.9376f,0.2531f,0.2047f,-0.9455f,0.1308f,0.4233f,-0.8965f,0f,0.2116f,-0.9773f,0f,0.6142f,-0.7891f,-0.1308f,0.4233f,-0.8965f,-0.2531f,0.2047f,-0.9455f,0.6511f,0f,-0.7501f,0.9773f,0f,-0.2116f,0.8965f,0f,-0.4233f,0.9455f,0.2531f,-0.2047f,0.8965f,0.1308f,-0.4233f,0.7891f,0f,-0.6142f,-0.6511f,0f,-0.7501f,-0.7891f,0f,-0.6142f,-0.8965f,0.1308f,-0.4233f,-0.8965f,0f,-0.4233f,-0.9455f,0.2531f,-0.2047f,-0.9773f,0f,-0.2116f});
  }
}
protected class MFVec2f43 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f,0.006f,0.001f,0.0057f,0.001f,-0.0057f,0f,-0.006f,-0.001f,-0.0057f,-0.001f,0.0057f,0f,0.006f});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.03f,0f,0f,-0.022f,-0.015f,0f,-0.017f,-0.03f,0f,-0.009f,-0.037f,0f,0f,-0.037f,0f,0.009f,-0.037f,0f,0.017f,-0.03f,0f,0.022f,-0.015f,0f,0.03f,0f,0f});
  }
}
protected class MFInt3245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1});
  }
}
protected class MFVec3f49 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.708f,-0.0435f,0f,1.655f,0.04322f,0f,1.486f,0.02335f,0f,1.694f,0.007789f,0f,1.631f,0.051f,0f,1.524f,-0.102f,0.04f,1.51f,-0.07278f,0.04029f,1.514f,-0.08254f,0.03528f,1.502f,-0.05013f,0.03479f,1.517f,-0.09269f,0.0116f,1.494f,0.03382f,0.01946f,1.52f,0.03421f,0.02204f,1.494f,0.0272f,0.02734f,1.498f,0.02215f,0.02788f,1.528f,0.03084f,0.0338f,1.503f,0.0124f,0.04008f,1.509f,0.002821f,0.05122f,1.518f,-0.02784f,0.05867f,1.544f,-0.03316f,0.06433f,1.563f,-0.03678f,0.06732f,1.583f,-0.03683f,0.06769f,1.617f,-0.03436f,0.06641f,1.637f,-0.03046f,0.06818f,1.637f,-0.04285f,0.06308f,1.666f,-0.04036f,0.05305f,1.685f,-0.03987f,0.03136f,1.7f,-0.0413f,0.02919f,1.688f,0.0091f,0.05272f,1.674f,-0.001657f,0.06061f,1.66f,-0.0101f,0.05254f,1.541f,-0.01363f,0.04099f,1.527f,0.008832f,0.03528f,1.524f,0.02097f,0.05792f,1.557f,-0.004307f,0.04413f,1.539f,0.0149f,0.03746f,1.539f,0.02656f,0.003407f,1.524f,0.04155f,0.01481f,1.526f,0.03912f,0.005112f,1.532f,0.04358f,0.02438f,1.542f,0.03578f,0.02636f,1.55f,0.03808f,0.006135f,1.55f,0.0545f,0f,1.559f,0.05502f,0.02958f,1.651f,0.03965f,0.04847f,1.643f,0.02895f,0.05856f,1.63f,0.01803f,0.06182f,1.614f,0.008199f,0.06194f,1.6f,0.002668f,0.01489f,1.583f,0.04109f,0.05282f,1.569f,0.02821f,0.05767f,1.58f,0.0184f,0.04643f,1.625f,0.03705f,0.0264f,1.628f,0.04807f,0.0556f,1.609f,0.02579f,0.05467f,1.599f,0.02153f,0.05316f,1.589f,0.0207f,0.03603f,1.58f,0.03536f,0.04597f,1.586f,0.02904f,0.02106f,1.592f,0.03748f,0.03428f,1.595f,0.03294f,0.06808f,1.617f,-0.06112f,0.06714f,1.564f,-0.07003f,0.06993f,1.594f,-0.08238f,0.05324f,1.536f,-0.05922f,0.04904f,1.521f,-0.05132f,0.04758f,1.514f,-0.03107f,0.03539f,1.503f,-0.00093f,0.02999f,1.498f,0.006194f,0.02308f,1.492f,0.01628f,0.01772f,1.488f,0.02135f,0.01378f,1.488f,0.02484f,0.04349f,1.512f,-0.03987f,0.02308f,1.499f,-0.02088f,0f,1.487f,-0.018f,0.04795f,1.531f,-0.08973f,0.05739f,1.555f,-0.0982f,0.06815f,1.622f,-0.107f,0.06872f,1.655f,-0.08466f,0.05233f,1.678f,-0.09642f,0.05334f,1.631f,-0.1239f,0.05011f,1.581f,-0.1193f,0.04359f,1.551f,-0.1067f,0.03839f,1.528f,-0.09652f,0.03399f,1.636f,-0.1304f,0.03224f,1.685f,-0.1024f,0f,1.557f,-0.1126f,0.01864f,1.566f,0.04105f,0.0249f,1.58f,0.0387f,0.02735f,1.596f,0.03552f,0.04317f,1.564f,0.03643f,0.01246f,1.577f,0.04276f,0.04354f,1.59f,0.02822f,0.04557f,1.601f,0.03652f,0.0291f,1.603f,0.04274f,0.01856f,1.6f,0.04349f,0f,1.579f,0.04893f,0.01064f,1.558f,0.04476f,0.005501f,1.578f,0.04574f,0.01405f,1.531f,0.04152f,0.01037f,1.544f,0.04266f,0f,1.515f,0.03836f,0.00797f,1.515f,0.03774f,0.01824f,1.55f,0.04063f,-0.0249f,1.58f,0.0387f,-0.04354f,1.59f,0.02822f,-0.0291f,1.603f,0.04274f,-0.04317f,1.564f,0.03643f,-0.04597f,1.586f,0.02904f,-0.05316f,1.589f,0.0207f,-0.01824f,1.55f,0.04063f,-0.01246f,1.577f,0.04276f,-0.006135f,1.55f,0.0545f,-0.01037f,1.544f,0.04266f,-0.02636f,1.55f,0.03808f,-0.03428f,1.595f,0.03294f,-0.02735f,1.596f,0.03552f,-0.03603f,1.58f,0.03536f,-0.05282f,1.569f,0.02821f,-0.05767f,1.58f,0.0184f,-0.01864f,1.566f,0.04105f,-0.01489f,1.583f,0.04109f,-0.0556f,1.609f,0.02579f,-0.04557f,1.601f,0.03652f,-0.02106f,1.592f,0.03748f,-0.01856f,1.6f,0.04349f,-0.005501f,1.578f,0.04574f,-0.01064f,1.558f,0.04476f,0f,1.592f,0.04694f,-0.06182f,1.614f,0.008199f,-0.05467f,1.599f,0.02153f,-0.06194f,1.6f,0.002668f,-0.05792f,1.557f,-0.004307f,-0.04413f,1.539f,0.0149f,-0.03746f,1.539f,0.02656f,-0.04099f,1.527f,0.008832f,-0.03528f,1.524f,0.02097f,-0.02788f,1.528f,0.03084f,0f,1.53f,0.04236f,-0.005112f,1.532f,0.04358f,-0.01481f,1.526f,0.03912f,-0.01946f,1.52f,0.03421f,0f,1.495f,0.0348f,-0.0116f,1.494f,0.03382f,-0.02734f,1.498f,0.02215f,-0.0338f,1.503f,0.0124f,-0.01772f,1.488f,0.02135f,-0.02308f,1.492f,0.01628f,-0.02999f,1.498f,0.006194f,-0.01405f,1.531f,0.04152f,-0.003407f,1.524f,0.04155f,-0.02204f,1.494f,0.0272f,-0.00797f,1.515f,0.03774f,-0.02438f,1.542f,0.03578f,0f,1.543f,0.04432f,0f,1.555f,0.05692f,0.02295f,1.492f,-0.02694f,0.007322f,1.489f,-0.01677f,-0.05254f,1.541f,-0.01363f,-0.04008f,1.509f,0.002821f,-0.05122f,1.518f,-0.02784f,-0.03539f,1.503f,-0.00093f,-0.01378f,1.488f,0.02484f,-0.02308f,1.499f,-0.02088f,-0.04349f,1.512f,-0.03987f,-0.05867f,1.544f,-0.03316f,-0.06433f,1.563f,-0.03678f,-0.06732f,1.583f,-0.03683f,-0.06769f,1.617f,-0.03436f,-0.05856f,1.63f,0.01803f,-0.04847f,1.643f,0.02895f,-0.04643f,1.625f,0.03705f,-0.02958f,1.651f,0.03965f,-0.0264f,1.628f,0.04807f,-0.02919f,1.688f,0.0091f,-0.05272f,1.674f,-0.001657f,-0.06641f,1.637f,-0.03046f,-0.06061f,1.66f,-0.0101f,-0.03136f,1.7f,-0.0413f,-0.05305f,1.685f,-0.03987f,-0.06308f,1.666f,-0.04036f,-0.06818f,1.637f,-0.04285f,-0.06808f,1.617f,-0.06112f,-0.06993f,1.594f,-0.08238f,-0.06714f,1.564f,-0.07003f,-0.05324f,1.536f,-0.05922f,-0.04904f,1.521f,-0.05132f,-0.04795f,1.531f,-0.08973f,-0.05739f,1.555f,-0.0982f,-0.06815f,1.622f,-0.107f,-0.06872f,1.655f,-0.08466f,-0.05233f,1.678f,-0.09642f,-0.03224f,1.685f,-0.1024f,0f,1.69f,-0.1047f,0f,1.64f,-0.1342f,-0.05334f,1.631f,-0.1239f,-0.05011f,1.581f,-0.1193f,-0.04359f,1.551f,-0.1067f,-0.03839f,1.528f,-0.09652f,-0.03528f,1.502f,-0.05013f,-0.04f,1.51f,-0.07278f,-0.04029f,1.514f,-0.08254f,-0.03479f,1.517f,-0.09269f,-0.02295f,1.492f,-0.02694f,-0.007322f,1.489f,-0.01677f,0f,1.588f,-0.1329f,-0.03399f,1.636f,-0.1304f,-0.04758f,1.514f,-0.03107f,-0.03428f,1.595f,0.03294f,-0.02106f,1.592f,0.03748f,-0.02735f,1.596f,0.03552f,-0.0249f,1.58f,0.0387f,-0.01489f,1.583f,0.04109f,-0.04597f,1.586f,0.02904f,-0.04354f,1.59f,0.02822f,-0.03603f,1.58f,0.03536f,-0.05856f,1.63f,0.01803f,-0.06182f,1.614f,0.008199f,-0.02788f,1.528f,0.03084f,-0.005112f,1.532f,0.04358f,-0.01405f,1.531f,0.04152f,-0.00797f,1.515f,0.03774f,-0.01946f,1.52f,0.03421f,-0.05867f,1.544f,-0.03316f,-0.06433f,1.563f,-0.03678f,-0.06732f,1.583f,-0.03683f,-0.06769f,1.617f,-0.03436f,-0.04847f,1.643f,0.02895f,-0.02958f,1.651f,0.03965f,-0.05324f,1.536f,-0.05922f,-0.04795f,1.531f,-0.08973f,-0.03839f,1.528f,-0.09652f,0.02106f,1.592f,0.03748f,0.01489f,1.583f,0.04109f,0.0249f,1.58f,0.0387f,0.03603f,1.58f,0.03536f,0.04354f,1.59f,0.02822f,0.03428f,1.595f,0.03294f,0.02735f,1.596f,0.03552f,0.02788f,1.528f,0.03084f,0.01405f,1.531f,0.04152f,0f,1.53f,0.04236f,0f,1.515f,0.03836f,0.00797f,1.515f,0.03774f,0.01946f,1.52f,0.03421f,0.005112f,1.532f,0.04358f,0f,1.655f,0.04322f,0.02958f,1.651f,0.03965f,0.04847f,1.643f,0.02895f,0.05856f,1.63f,0.01803f,0.06182f,1.614f,0.008199f,0.06769f,1.617f,-0.03436f,0.06732f,1.583f,-0.03683f,0.06433f,1.563f,-0.03678f,0.05867f,1.544f,-0.03316f,0.05324f,1.536f,-0.05922f,0.04795f,1.531f,-0.08973f,0.03839f,1.528f,-0.09652f,0f,1.524f,-0.102f});
  }
}
protected class MFColor50 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.749f,0.601f,0.462f,0.1735f,0.2602f,0.749f,0.6364f,0.133f,0.1526f,0.4545f,0.2759f,0.1902f});
  }
}
protected class MFFloat51 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.15f,1.53f,0.75f});
  }
}
protected class MFString52 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."});
  }
}
protected class MFFloat53 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFVec3f54 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation56 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat57 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation58 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat59 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation60 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,0.4f});
  }
}
protected class MFFloat61 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation62 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0.15f,0.99f,0.09f,1.06f});
  }
}
protected class MFFloat63 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation64 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,0.2f});
  }
}
protected class MFFloat65 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation66 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat67 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation68 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation70 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat71 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation72 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation74 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat75 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation76 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,-0.4f,0f,1f,0f,-1f});
  }
}
protected class MFFloat77 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.5f,0.7f,1f});
  }
}
protected class MFRotation78 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.2f,0f,1f,0f,0.3f,0f,1f,0f,0.4f,0f,1f,0f,0.9f,0.47f,0.85f,0.23f,1.04f});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.08f,0.8f,1f});
  }
}
protected class MFRotation80 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.95f,-0.08f,-0.31f,0.55f,-0.95f,-0.08f,-0.31f,0.55f,-0.95f,-0.08f,-0.31f,0.55f,-0.84f,0.23f,0.49f,1.01f});
  }
}
protected class MFFloat81 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.3f,0.4f,0.45f,1f});
  }
}
protected class MFRotation82 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,-0.4f,0f,0f,1f,-0.4f,0f,0f,1f,-0.4f,0f,0f,1f,-0.4f,1f,0f,0f,-1.65f});
  }
}
protected class MFFloat83 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.3f,1f});
  }
}
protected class MFRotation84 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0.25f,0.32f,0.92f,1.4f});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFRotation86 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,-0.3f,1f,0f,0f,-0.45f,1f,0f,0f,-0.5f,1f,0f,0f,-0.55f,1f,0f,0f,-0.6f,1f,0f,0f,-0.65f,1f,0f,0f,-0.9f,1f,0f,0f,-1f,1f,0f,0f,-1f,1f,0f,0f,-1.2f,1f,0f,0f,-1.6f});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.2f,0.5f,0.6f,0.7f,0.8f,1f});
  }
}
protected class MFRotation88 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0.5f,0f,0f,1f,0.55f,0f,0f,1f,0.75f,0f,0f,1f,0.8f,0f,0f,1f,1f,0f,0f,1f,1.15f,0f,0f,1f,1.3f,0f,0f,1f,2.27f});
  }
}
protected class MFFloat89 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation90 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,-0.79f,0.22f,0.48f,-0.85f,1.71f});
  }
}
}