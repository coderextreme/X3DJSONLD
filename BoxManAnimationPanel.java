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
public class BoxManAnimationPanel {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new BoxManAnimationPanel().initialize().toFileJSON("BoxManAnimationPanel.new.json");
    }
    public X3DObject initialize() {
      return new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("H-Anim").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("BoxManAnimationPanel.x3d"))
        .addMeta(new metaObject().setName("description").setContent("A Seamless VRML Human, demonstrating the H-Anim 2001 Specification, animation panel shows multiple behaviors."))
        .addMeta(new metaObject().setName("creator").setContent("Joe Williams and James Smith - james@vapourtech.com"))
        .addMeta(new metaObject().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new metaObject().setName("generator").setContent(".x3d to .x3d translation used BS Contact Geo 8.203"))
        .addMeta(new metaObject().setName("created").setContent("1 March 2001"))
        .addMeta(new metaObject().setName("revision").setContent("12 January 2017"))
        .addMeta(new metaObject().setName("translated").setContent("14 January 2017"))
        .addMeta(new metaObject().setName("modified").setContent("14 January 2017"))
        .addMeta(new metaObject().setName("reference").setContent("http://h-anim.org"))
        .addMeta(new metaObject().setName("reference").setContent("boxman.original.wrl"))
        .addMeta(new metaObject().setName("TODO instantReality Forum Issue").setContent("InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"))
        .addMeta(new metaObject().setName("reference").setContent("http://h-anim.org/Models/H-Anim2001/boxman"))
        .addMeta(new metaObject().setName("reference").setContent("http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.vapourtech.com/team/james/boxman.wrl"))
        .addMeta(new metaObject().setName("reference").setContent("http://h-anim.org/Specifications/H-Anim2001"))
        .addMeta(new metaObject().setName("reference").setContent("http://h-anim.org/Models"))
        .addMeta(new metaObject().setName("reference").setContent("http://h-anim.org/Nodes"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/X3dToVrml97.xslt"))
        .addMeta(new metaObject().setName("rights").setContent("(C) 2000 James Smith - james@vapourtech.com"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.vapourtech.com"))
        .addMeta(new metaObject().setName("subject").setContent("BoxMan H-Anim 2.0"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxManAnimationPanel.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(MFString0())).setTitle("BoxMan - A Seamless VRML Human"))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(MFColor1())).setSkyColor(new MFColorObject(MFColor2())))
        .addChild(new HAnimHumanoidObject().setName("Humanoid").setDEF("hanim_Humanoid").setInfo(new MFStringObject(MFString3())).setVersion("2.0")
          .addSkin(new HAnimJointObject().setName("HumanoidRoot").setDEF("hanim_HumanoidRoot").setCenter(new float[] {0f,0.9723f,-0.0728f}).setSkinCoordIndex(new MFInt32Object(MFInt324())).setSkinCoordWeight(new MFFloatObject(MFFloat5()))
            .addChild(new HAnimSegmentObject().setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new TransformObject().setTranslation(new float[] {0f,0.9723f,-0.0728f})
                .addChild(new ShapeObject().setDEF("SphereYellow")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f})))
                  .setGeometry(new SphereObject().setRadius(0.02f)))))
            .addChild(new HAnimJointObject().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0956f,0.9364f,0f}).setSkinCoordIndex(new MFInt32Object(MFInt326())).setSkinCoordWeight(new MFFloatObject(MFFloat7()))
              .addChild(new HAnimSegmentObject().setName("l_thigh").setDEF("hanim_l_thigh")
                .addChild(new TransformObject().setTranslation(new float[] {0.0956f,0.9364f,0f})
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.0956f,0.5095f,-0.0036f}).setSkinCoordIndex(new MFInt32Object(MFInt328())).setSkinCoordWeight(new MFFloatObject(MFFloat9()))
                .addChild(new HAnimSegmentObject().setName("l_calf").setDEF("hanim_l_calf")
                  .addChild(new TransformObject().setTranslation(new float[] {0.0956f,0.5095f,-0.0036f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.0946f,0.0762f,-0.0261f}).setSkinCoordIndex(new MFInt32Object(MFInt3210())).setSkinCoordWeight(new MFFloatObject(MFFloat11()))
                  .addChild(new HAnimSegmentObject().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                    .addChild(new TransformObject().setTranslation(new float[] {0.0946f,0.0762f,-0.0261f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1079f,0.0317f,0.067f}).setSkinCoordIndex(new MFInt32Object(MFInt3212())).setSkinCoordWeight(new MFFloatObject(MFFloat13()))
                    .addChild(new HAnimSegmentObject().setName("l_middistal").setDEF("hanim_l_middistal")
                      .addChild(new TransformObject().setTranslation(new float[] {0.1079f,0.0317f,0.067f})
                        .addChild(new ShapeObject().setUSE("SphereYellow")))
                      .addChild(new HAnimSiteObject().setName("l_middistal_tip").setDEF("hanim_l_middistal_tip").setTranslation(new float[] {0.095f,0.0005f,0.1924f})
                        .addChild(new ShapeObject().setDEF("SphereRed")
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                          .setGeometry(new SphereObject().setRadius(0.02f)))))))))
            .addChild(new HAnimJointObject().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.0956f,0.9364f,0f}).setSkinCoordIndex(new MFInt32Object(MFInt3214())).setSkinCoordWeight(new MFFloatObject(MFFloat15()))
              .addChild(new HAnimSegmentObject().setName("r_thigh").setDEF("hanim_r_thigh")
                .addChild(new TransformObject().setTranslation(new float[] {-0.0956f,0.9364f,0f})
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0956f,0.5095f,-0.0036f}).setSkinCoordIndex(new MFInt32Object(MFInt3216())).setSkinCoordWeight(new MFFloatObject(MFFloat17()))
                .addChild(new HAnimSegmentObject().setName("r_calf").setDEF("hanim_r_calf")
                  .addChild(new TransformObject().setTranslation(new float[] {-0.0956f,0.5095f,-0.0036f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.0946f,0.0762f,-0.0261f}).setSkinCoordIndex(new MFInt32Object(MFInt3218())).setSkinCoordWeight(new MFFloatObject(MFFloat19()))
                  .addChild(new HAnimSegmentObject().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.0946f,0.0762f,-0.0261f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.1079f,0.0317f,0.067f}).setSkinCoordIndex(new MFInt32Object(MFInt3220())).setSkinCoordWeight(new MFFloatObject(MFFloat21()))
                    .addChild(new HAnimSegmentObject().setName("r_middistal").setDEF("hanim_r_middistal")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.1079f,0.0317f,0.067f})
                        .addChild(new ShapeObject().setUSE("SphereYellow")))
                      .addChild(new HAnimSiteObject().setName("r_middistal_tip").setDEF("hanim_r_middistal_tip").setTranslation(new float[] {-0.095f,0.0005f,0.1924f})
                        .addChild(new ShapeObject().setUSE("SphereRed"))))))))
            .addChild(new HAnimJointObject().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0f,1.0817f,-0.0728f}).setSkinCoordIndex(new MFInt32Object(MFInt3222())).setSkinCoordWeight(new MFFloatObject(MFFloat23()))
              .addChild(new HAnimSegmentObject().setName("l5").setDEF("hanim_l5")
                .addChild(new TransformObject().setTranslation(new float[] {0f,1.0817f,-0.0728f})
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0f,1.644f,0.036f}).setSkinCoordIndex(new MFInt32Object(MFInt3224())).setSkinCoordWeight(new MFFloatObject(MFFloat25()))
                .addChild(new HAnimSegmentObject().setName("skull").setDEF("hanim_skull")
                  .addChild(new TransformObject().setTranslation(new float[] {0f,1.644f,0.036f})
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject().setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {-0.0029f,1.7771f,0.0274f})
                    .addChild(new ShapeObject().setUSE("SphereYellow")))))
              .addChild(new HAnimJointObject().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.1968f,1.4642f,-0.0265f}).setSkinCoordIndex(new MFInt32Object(MFInt3226())).setSkinCoordWeight(new MFFloatObject(MFFloat27()))
                .addChild(new HAnimSegmentObject().setName("l_upperarm").setDEF("hanim_l_upperarm")
                  .addChild(new TransformObject().setTranslation(new float[] {0.1968f,1.4642f,-0.0265f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.1982f,1.1622f,-0.0557f}).setSkinCoordIndex(new MFInt32Object(MFInt3228())).setSkinCoordWeight(new MFFloatObject(MFFloat29()))
                  .addChild(new HAnimSegmentObject().setName("l_forearm").setDEF("hanim_l_forearm")
                    .addChild(new TransformObject().setTranslation(new float[] {0.1982f,1.1622f,-0.0557f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1972f,0.8929f,-0.069f}).setSkinCoordIndex(new MFInt32Object(MFInt3230())).setSkinCoordWeight(new MFFloatObject(MFFloat31()))
                    .addChild(new HAnimSegmentObject().setName("l_hand").setDEF("hanim_l_hand")
                      .addChild(new TransformObject().setTranslation(new float[] {0.1972f,0.8929f,-0.069f})
                        .addChild(new ShapeObject().setUSE("SphereYellow")))
                      .addChild(new HAnimSiteObject().setName("l_hand_tip").setDEF("hanim_l_hand_tip").setTranslation(new float[] {0.1912f,0.6976f,-0.071f})
                        .addChild(new ShapeObject().setUSE("SphereRed")))))))
              .addChild(new HAnimJointObject().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1968f,1.4642f,-0.0265f}).setSkinCoordIndex(new MFInt32Object(MFInt3232())).setSkinCoordWeight(new MFFloatObject(MFFloat33()))
                .addChild(new HAnimSegmentObject().setName("r_upperarm").setDEF("hanim_r_upperarm")
                  .addChild(new TransformObject().setTranslation(new float[] {-0.1968f,1.4642f,-0.0265f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1982f,1.1622f,-0.0557f}).setSkinCoordIndex(new MFInt32Object(MFInt3234())).setSkinCoordWeight(new MFFloatObject(MFFloat35()))
                  .addChild(new HAnimSegmentObject().setName("r_forearm").setDEF("hanim_r_forearm")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.1982f,1.1622f,-0.0557f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1972f,0.8929f,-0.069f}).setSkinCoordIndex(new MFInt32Object(MFInt3236())).setSkinCoordWeight(new MFFloatObject(MFFloat37()))
                    .addChild(new HAnimSegmentObject().setName("r_hand").setDEF("hanim_r_hand")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.1972f,0.8929f,-0.069f})
                        .addChild(new ShapeObject().setUSE("SphereYellow")))
                      .addChild(new HAnimSiteObject().setName("r_hand_tip").setDEF("hanim_r_hand_tip").setTranslation(new float[] {-0.1912f,0.6976f,-0.071f})
                        .addChild(new ShapeObject().setUSE("SphereRed")))))))))
          .addComments(new CommentsBlock("# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)"))
          .addComments(new CommentsBlock("Coordinate DEF='SKINCOORD2' containerField='skinCoord' point='-0.05 1 0.05 0.05 1 0.05 0.03 0.97 -0.1 -0.03 0.97 -0.1 0.03 0.94 -0.075 -0.03 0.94 -0.075 0 0.92 0 0 0.94 0.03 -0.12 1.06 0.05 0.12 1.06 0.05 0.12 1.06 -0.1 -0.12 1.06 -0.1 0.0456 0.9364 0.05 0.1456 0.9364 0.05 0.1456 0.9364 -0.05 0.0456 0.9364 -0.05 0.0456 0.9 0.05 0.1456 0.9 0.05 0.1456 0.9 -0.05 0.0456 0.9 -0.05 0.0456 0.8 0.05 0.1456 0.8 0.05 0.1456 0.8 -0.05 0.0456 0.8 -0.05 0.0456 0.7 0.05 0.1456 0.7 0.05 0.1456 0.7 -0.05 0.0456 0.7 -0.05 0.0456 0.6 0.05 0.1456 0.6 0.05 0.1456 0.6 -0.05 0.0456 0.6 -0.05 0.0456 0.55 0.05 0.1456 0.55 0.05 0.1456 0.55 -0.05 0.0456 0.55 -0.05 0.0456 0.52 0.05 0.1456 0.52 0.05 0.1456 0.52 -0.05 0.0456 0.52 -0.05 0.0456 0.5 0.05 0.1456 0.5 0.05 0.1456 0.5 -0.05 0.0456 0.5 -0.05 0.0454 0.43 0.045 0.1454 0.43 0.045 0.1454 0.43 -0.055 0.0454 0.43 -0.055 0.0452 0.36 0.04 0.1452 0.36 0.04 0.1452 0.36 -0.06 0.0452 0.36 -0.06 0.045 0.29 0.035 0.145 0.29 0.035 0.145 0.29 -0.065 0.045 0.29 -0.065 0.0448 0.21 0.03 0.1448 0.21 0.03 0.1448 0.21 -0.07 0.0448 0.21 -0.07 0.0446 0.1262 0.025 0.1446 0.1262 0.025 0.1446 0.1262 -0.075 0.0446 0.1262 -0.075 0.0446 0.0702038 0.02464698 0.1446 0.0702038 0.02464698 0.1446 0.006264479 -0.08360368 0.0446 0.006264479 -0.08360368 0.0446 0.046587 0.05407905 0.1446 0.046587 0.05407905 0.1446 -0.009224742 0.0474844 0.0446 -0.009224742 0.0474844 0.0446 0.04306673 0.0838718 0.1446 0.04306673 0.0838718 0.1446 -0.01274502 0.07727715 0.0446 -0.01274502 0.07727715 0.0446 0.03069882 0.1885436 0.1446 0.03069882 0.1885436 0.1446 -0.02511293 0.181949 0.0446 -0.02511293 0.181949 -0.0456 0.9861611 0.004881433 -0.1456 0.9861611 0.004881433 -0.1456 0.8866388 -0.004881474 -0.0456 0.8866388 -0.004881474 -0.0456 0.9826074 0.04110757 -0.1456 0.9826074 0.04110757 -0.1456 0.8830851 0.03134466 -0.0456 0.8830851 0.03134466 -0.0456 0.9728445 0.1406298 -0.1456 0.9728445 0.1406298 -0.1456 0.8733222 0.1308669 -0.0456 0.8733222 0.1308669 -0.0456 0.9630816 0.2401521 -0.1456 0.9630816 0.2401521 -0.1456 0.8635593 0.2303892 -0.0456 0.8635593 0.2303892 -0.0456 0.9533187 0.3396744 -0.1456 0.9533187 0.3396744 -0.1456 0.8537964 0.3299115 -0.0456 0.8537964 0.3299115 -0.0456 0.9484373 0.3894355 -0.1456 0.9484373 0.3894355 -0.1456 0.848915 0.3796726 -0.0456 0.848915 0.3796726 -0.0456 0.94468 0.4147483 -0.1456 0.94468 0.4147483 -0.1456 0.8450468 0.4134411 -0.0456 0.8450468 0.4134411 -0.0456 0.9444185 0.4346749 -0.1456 0.9444185 0.4346749 -0.1456 0.8447853 0.4333678 -0.0456 0.8447853 0.4333678 -0.0454 0.9452982 0.5003315 -0.1454 0.9452982 0.5003315 -0.1454 0.8455541 0.5074801 -0.0454 0.8455541 0.5074801 -0.0452 0.945315 0.5705098 -0.1452 0.945315 0.5705098 -0.1452 0.8455709 0.5776584 -0.0452 0.8455709 0.5776584 -0.045 0.9453319 0.6406881 -0.145 0.9453319 0.6406881 -0.145 0.8455877 0.6478368 -0.045 0.8455877 0.6478368 -0.0448 0.9460636 0.7208409 -0.1448 0.9460636 0.7208409 -0.1448 0.8463194 0.7279896 -0.0448 0.8463194 0.7279896 -0.0446 0.947067 0.8047839 -0.1446 0.947067 0.8047839 -0.1446 0.8473228 0.8119326 -0.0446 0.8473228 0.8119326 -0.0446 0.9507178 0.8606621 -0.1446 0.9507178 0.8606621 -0.1446 0.847315 0.9321763 -0.0446 0.847315 0.9321763 -0.0446 0.9817629 0.8821145 -0.1446 0.9817629 0.8821145 -0.1446 0.9791749 0.9382548 -0.0446 0.9791749 0.9382548 -0.0446 1.011731 0.883496 -0.1446 1.011731 0.883496 -0.1446 1.009143 0.9396363 -0.0446 1.009143 0.9396363 -0.0446 1.117019 0.8883496 -0.1446 1.117019 0.8883496 -0.1446 1.114431 0.94449 -0.0446 1.114431 0.94449 -0.12 1.1 0.05 0.12 1.1 0.05 0.12 1.1 -0.1 -0.12 1.1 -0.1 -0.14 1.42 0.045 0.14 1.42 0.045 0.14 1.42 -0.09 -0.14 1.42 -0.09 -0.24 1.52 0.035 0.24 1.52 0.035 0.24 1.52 -0.09 -0.24 1.52 -0.09 -0.05 1.56 0.03 0.05 1.56 0.03 0.05 1.56 -0.06 -0.05 1.56 -0.06 -0.05 1.6 0.06 0.05 1.6 0.06 0.05 1.62 -0.03 -0.05 1.62 -0.03 -0.07 1.781247 0.1236818 0.07 1.781247 0.1236818 0.07 1.77377 -0.03614335 -0.07 1.77377 -0.03614335 -0.07 1.604441 0.1319535 0.07 1.604441 0.1319535 0.07 1.656898 -0.03067561 -0.07 1.656898 -0.03067561 0.2016854 1.406894 0.015 0.2023709 1.520029 0.015 0.2023709 1.520029 -0.075 0.2016854 1.406894 -0.075 0.3774735 1.243191 -0.025 0.4201562 1.28536 -0.025 0.4201562 1.28536 -0.085 0.3774735 1.243191 -0.085 0.4055858 1.214736 -0.025 0.4482685 1.256904 -0.025 0.4482685 1.256904 -0.085 0.4055858 1.214736 -0.085 0.5743457 1.058147 -0.05 0.6028008 1.086259 -0.05 0.6028008 1.086259 -0.09 0.5743457 1.058147 -0.09 0.6024581 1.029692 -0.02 0.6309132 1.057804 -0.02 0.6309132 1.057804 -0.1 0.6024581 1.029692 -0.1 0.7236224 0.9070502 -0.02 0.7520775 0.9351625 -0.02 0.7520775 0.9351625 -0.1 0.7236224 0.9070502 -0.1 -0.2016854 1.406894 0.015 -0.2023709 1.520029 0.015 -0.2023709 1.520029 -0.075 -0.2016854 1.406894 -0.075 -0.3774735 1.243191 -0.025 -0.4201562 1.28536 -0.025 -0.4201562 1.28536 -0.085 -0.3774735 1.243191 -0.085 -0.4055858 1.214736 -0.025 -0.4482685 1.256904 -0.025 -0.4482685 1.256904 -0.085 -0.4055858 1.214736 -0.085 -0.5743457 1.058147 -0.05 -0.6028008 1.086259 -0.05 -0.6028008 1.086259 -0.09 -0.5743457 1.058147 -0.09 -0.6024581 1.029692 -0.02 -0.6309132 1.057804 -0.02 -0.6309132 1.057804 -0.1 -0.6024581 1.029692 -0.1 -0.7236224 0.9070502 -0.02 -0.7520775 0.9351625 -0.02 -0.7520775 0.9351625 -0.1 -0.7236224 0.9070502 -0.1'/"))
          .addComments(new CommentsBlock("top-level joint references"))
          .addComments(new CommentsBlock("top-level segment references"))
          .addComments(new CommentsBlock("top-level site references"))
          .setSkinCoord(new CoordinateObject().setDEF("SKINCOORD").setPoint(new MFVec3fObject(MFVec3f38())))
          .addSkin(new GroupObject()
            .addChild(new ShapeObject().setDEF("TrouserSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(MFInt3239().append(MFInt3240())))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("ShoeSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(MFInt3241()))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("ShirtSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(MFInt3242()))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("HeadHandsFleshToneSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0.75f,0.75f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(MFInt3243()))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("SkinLines")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f})))
              .addComments(new CommentsBlock("Combined set of prior IFS coordIndex values"))
              .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(MFInt3244().append(MFInt3245()).append(MFInt3246())))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD")))))
          .addSkin(new HAnimJointObject().setUSE("hanim_r_wrist"))
          .addSkin(new HAnimJointObject().setUSE("hanim_r_elbow"))
          .addSkin(new HAnimJointObject().setUSE("hanim_r_shoulder"))
          .addSkin(new HAnimJointObject().setUSE("hanim_l_wrist"))
          .addSkin(new HAnimJointObject().setUSE("hanim_l_elbow"))
          .addSkin(new HAnimJointObject().setUSE("hanim_l_shoulder"))
          .addSkin(new HAnimJointObject().setUSE("hanim_skullbase"))
          .addSkin(new HAnimJointObject().setUSE("hanim_vl5"))
          .addSkin(new HAnimJointObject().setUSE("hanim_r_midtarsal"))
          .addSkin(new HAnimJointObject().setUSE("hanim_r_ankle"))
          .addSkin(new HAnimJointObject().setUSE("hanim_r_knee"))
          .addSkin(new HAnimJointObject().setUSE("hanim_r_hip"))
          .addSkin(new HAnimJointObject().setUSE("hanim_l_midtarsal"))
          .addSkin(new HAnimJointObject().setUSE("hanim_l_ankle"))
          .addSkin(new HAnimJointObject().setUSE("hanim_l_knee"))
          .addSkin(new HAnimJointObject().setUSE("hanim_l_hip"))
          .addSkin(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_sacrum"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l_thigh"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l_calf"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l_hindfoot"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l_middistal"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_r_thigh"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_r_calf"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_r_hindfoot"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_r_middistal"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l5"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_skull"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l_upperarm"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l_forearm"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_l_hand"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_r_upperarm"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_r_forearm"))
          .addSkin(new HAnimSegmentObject().setUSE("hanim_r_hand"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_middistal_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_middistal_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_skull_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_hand_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_hand_tip"))
          .addViewpoints(new HAnimSiteObject().setName("BoxMan_view")
            .addChild(new ViewpointObject().setDEF("Inclined_View").setDescription("Inclined View").setOrientation(new float[] {0f,1f,0f,0.78f}).setPosition(new float[] {2f,1f,2f}))
            .addChild(new ViewpointObject().setDEF("Best_View").setDescription("Best View").setOrientation(new float[] {0f,1f,0f,-1.57f}).setPosition(new float[] {-2f,0.25f,0f}))
            .addChild(new ViewpointObject().setDEF("Front_View").setDescription("Front View").setPosition(new float[] {0f,1f,3f}))
            .addChild(new ViewpointObject().setDEF("Side_View").setDescription("Side View").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {3f,1f,0f}))
            .addChild(new ViewpointObject().setDEF("Top_View").setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,3f,0f}))))
        .addChild(new GroupObject().setDEF("StopAnimation")
          .addChild(new TimeSensorObject().setDEF("StopTimer").setCycleInterval(5.73).setLoop(true))
          .addChild(new PositionInterpolatorObject().setDEF("Stop_HumanoidRootTransInterp").setKey(new MFFloatObject(MFFloat47())).setKeyValue(new MFVec3fObject(MFVec3f48())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_HumanoidRootRotInterp").setKey(new MFFloatObject(MFFloat49())).setKeyValue(new MFRotationObject(MFRotation50())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_sacroiliacRotInterp").setKey(new MFFloatObject(MFFloat51())).setKeyValue(new MFRotationObject(MFRotation52())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_hipRotInterp").setKey(new MFFloatObject(MFFloat53())).setKeyValue(new MFRotationObject(MFRotation54())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_kneeRotInterp").setKey(new MFFloatObject(MFFloat55())).setKeyValue(new MFRotationObject(MFRotation56())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ankleRotInterp").setKey(new MFFloatObject(MFFloat57())).setKeyValue(new MFRotationObject(MFRotation58())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_subtalarRotInterp").setKey(new MFFloatObject(MFFloat59())).setKeyValue(new MFRotationObject(MFRotation60())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_midtarsalRotInterp").setKey(new MFFloatObject(MFFloat61())).setKeyValue(new MFRotationObject(MFRotation62())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_metatarsalRotInterp").setKey(new MFFloatObject(MFFloat63())).setKeyValue(new MFRotationObject(MFRotation64())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_hipRotInterp").setKey(new MFFloatObject(MFFloat65())).setKeyValue(new MFRotationObject(MFRotation66())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_kneeRotInterp").setKey(new MFFloatObject(MFFloat67())).setKeyValue(new MFRotationObject(MFRotation68())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ankleRotInterp").setKey(new MFFloatObject(MFFloat69())).setKeyValue(new MFRotationObject(MFRotation70())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_subtalarRotInterp").setKey(new MFFloatObject(MFFloat71())).setKeyValue(new MFRotationObject(MFRotation72())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_midtarsalRotInterp").setKey(new MFFloatObject(MFFloat73())).setKeyValue(new MFRotationObject(MFRotation74())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_metatarsalRotInterp").setKey(new MFFloatObject(MFFloat75())).setKeyValue(new MFRotationObject(MFRotation76())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl5RotInterp").setKey(new MFFloatObject(MFFloat77())).setKeyValue(new MFRotationObject(MFRotation78())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl4RotInterp").setKey(new MFFloatObject(MFFloat79())).setKeyValue(new MFRotationObject(MFRotation80())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl3RotInterp").setKey(new MFFloatObject(MFFloat81())).setKeyValue(new MFRotationObject(MFRotation82())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl2RotInterp").setKey(new MFFloatObject(MFFloat83())).setKeyValue(new MFRotationObject(MFRotation84())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl1RotInterp").setKey(new MFFloatObject(MFFloat85())).setKeyValue(new MFRotationObject(MFRotation86())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt12RotInterp").setKey(new MFFloatObject(MFFloat87())).setKeyValue(new MFRotationObject(MFRotation88())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt11RotInterp").setKey(new MFFloatObject(MFFloat89())).setKeyValue(new MFRotationObject(MFRotation90())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt10RotInterp").setKey(new MFFloatObject(MFFloat91())).setKeyValue(new MFRotationObject(MFRotation92())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt9RotInterp").setKey(new MFFloatObject(MFFloat93())).setKeyValue(new MFRotationObject(MFRotation94())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt8RotInterp").setKey(new MFFloatObject(MFFloat95())).setKeyValue(new MFRotationObject(MFRotation96())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt7RotInterp").setKey(new MFFloatObject(MFFloat97())).setKeyValue(new MFRotationObject(MFRotation98())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt6RotInterp").setKey(new MFFloatObject(MFFloat99())).setKeyValue(new MFRotationObject(MFRotation100())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt5RotInterp").setKey(new MFFloatObject(MFFloat101())).setKeyValue(new MFRotationObject(MFRotation102())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt4RotInterp").setKey(new MFFloatObject(MFFloat103())).setKeyValue(new MFRotationObject(MFRotation104())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt3RotInterp").setKey(new MFFloatObject(MFFloat105())).setKeyValue(new MFRotationObject(MFRotation106())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt2RotInterp").setKey(new MFFloatObject(MFFloat107())).setKeyValue(new MFRotationObject(MFRotation108())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt1RotInterp").setKey(new MFFloatObject(MFFloat109())).setKeyValue(new MFRotationObject(MFRotation110())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc7RotInterp").setKey(new MFFloatObject(MFFloat111())).setKeyValue(new MFRotationObject(MFRotation112())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc6RotInterp").setKey(new MFFloatObject(MFFloat113())).setKeyValue(new MFRotationObject(MFRotation114())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc5RotInterp").setKey(new MFFloatObject(MFFloat115())).setKeyValue(new MFRotationObject(MFRotation116())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc4RotInterp").setKey(new MFFloatObject(MFFloat117())).setKeyValue(new MFRotationObject(MFRotation118())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc3RotInterp").setKey(new MFFloatObject(MFFloat119())).setKeyValue(new MFRotationObject(MFRotation120())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc2RotInterp").setKey(new MFFloatObject(MFFloat121())).setKeyValue(new MFRotationObject(MFRotation122())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc1RotInterp").setKey(new MFFloatObject(MFFloat123())).setKeyValue(new MFRotationObject(MFRotation124())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_skullbaseRotInterp").setKey(new MFFloatObject(MFFloat125())).setKeyValue(new MFRotationObject(MFRotation126())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_eyeball_jointRotInterp").setKey(new MFFloatObject(MFFloat127())).setKeyValue(new MFRotationObject(MFRotation128())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_eyeball_jointRotInterp").setKey(new MFFloatObject(MFFloat129())).setKeyValue(new MFRotationObject(MFRotation130())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_sternoclavicularRotInterp").setKey(new MFFloatObject(MFFloat131())).setKeyValue(new MFRotationObject(MFRotation132())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_acromioclavicularRotInterp").setKey(new MFFloatObject(MFFloat133())).setKeyValue(new MFRotationObject(MFRotation134())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_shoulderRotInterp").setKey(new MFFloatObject(MFFloat135())).setKeyValue(new MFRotationObject(MFRotation136())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_elbowRotInterp").setKey(new MFFloatObject(MFFloat137())).setKeyValue(new MFRotationObject(MFRotation138())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_wristRotInterp").setKey(new MFFloatObject(MFFloat139())).setKeyValue(new MFRotationObject(MFRotation140())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_thumb1RotInterp").setKey(new MFFloatObject(MFFloat141())).setKeyValue(new MFRotationObject(MFRotation142())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_thumb2RotInterp").setKey(new MFFloatObject(MFFloat143())).setKeyValue(new MFRotationObject(MFRotation144())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_thumb3RotInterp").setKey(new MFFloatObject(MFFloat145())).setKeyValue(new MFRotationObject(MFRotation146())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index0RotInterp").setKey(new MFFloatObject(MFFloat147())).setKeyValue(new MFRotationObject(MFRotation148())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index1RotInterp").setKey(new MFFloatObject(MFFloat149())).setKeyValue(new MFRotationObject(MFRotation150())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index2RotInterp").setKey(new MFFloatObject(MFFloat151())).setKeyValue(new MFRotationObject(MFRotation152())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index3RotInterp").setKey(new MFFloatObject(MFFloat153())).setKeyValue(new MFRotationObject(MFRotation154())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle0RotInterp").setKey(new MFFloatObject(MFFloat155())).setKeyValue(new MFRotationObject(MFRotation156())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle1RotInterp").setKey(new MFFloatObject(MFFloat157())).setKeyValue(new MFRotationObject(MFRotation158())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle2RotInterp").setKey(new MFFloatObject(MFFloat159())).setKeyValue(new MFRotationObject(MFRotation160())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle3RotInterp").setKey(new MFFloatObject(MFFloat161())).setKeyValue(new MFRotationObject(MFRotation162())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring0RotInterp").setKey(new MFFloatObject(MFFloat163())).setKeyValue(new MFRotationObject(MFRotation164())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring1RotInterp").setKey(new MFFloatObject(MFFloat165())).setKeyValue(new MFRotationObject(MFRotation166())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring2RotInterp").setKey(new MFFloatObject(MFFloat167())).setKeyValue(new MFRotationObject(MFRotation168())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring3RotInterp").setKey(new MFFloatObject(MFFloat169())).setKeyValue(new MFRotationObject(MFRotation170())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky0RotInterp").setKey(new MFFloatObject(MFFloat171())).setKeyValue(new MFRotationObject(MFRotation172())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky1RotInterp").setKey(new MFFloatObject(MFFloat173())).setKeyValue(new MFRotationObject(MFRotation174())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky2RotInterp").setKey(new MFFloatObject(MFFloat175())).setKeyValue(new MFRotationObject(MFRotation176())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky3RotInterp").setKey(new MFFloatObject(MFFloat177())).setKeyValue(new MFRotationObject(MFRotation178())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_sternoclavicularRotInterp").setKey(new MFFloatObject(MFFloat179())).setKeyValue(new MFRotationObject(MFRotation180())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_acromioclavicularRotInterp").setKey(new MFFloatObject(MFFloat181())).setKeyValue(new MFRotationObject(MFRotation182())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_shoulderRotInterp").setKey(new MFFloatObject(MFFloat183())).setKeyValue(new MFRotationObject(MFRotation184())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_elbowRotInterp").setKey(new MFFloatObject(MFFloat185())).setKeyValue(new MFRotationObject(MFRotation186())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_wristRotInterp").setKey(new MFFloatObject(MFFloat187())).setKeyValue(new MFRotationObject(MFRotation188())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_thumb1RotInterp").setKey(new MFFloatObject(MFFloat189())).setKeyValue(new MFRotationObject(MFRotation190())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_thumb2RotInterp").setKey(new MFFloatObject(MFFloat191())).setKeyValue(new MFRotationObject(MFRotation192())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_thumb3RotInterp").setKey(new MFFloatObject(MFFloat193())).setKeyValue(new MFRotationObject(MFRotation194())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index0RotInterp").setKey(new MFFloatObject(MFFloat195())).setKeyValue(new MFRotationObject(MFRotation196())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index1RotInterp").setKey(new MFFloatObject(MFFloat197())).setKeyValue(new MFRotationObject(MFRotation198())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index2RotInterp").setKey(new MFFloatObject(MFFloat199())).setKeyValue(new MFRotationObject(MFRotation200())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index3RotInterp").setKey(new MFFloatObject(MFFloat201())).setKeyValue(new MFRotationObject(MFRotation202())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle0RotInterp").setKey(new MFFloatObject(MFFloat203())).setKeyValue(new MFRotationObject(MFRotation204())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle1RotInterp").setKey(new MFFloatObject(MFFloat205())).setKeyValue(new MFRotationObject(MFRotation206())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle2RotInterp").setKey(new MFFloatObject(MFFloat207())).setKeyValue(new MFRotationObject(MFRotation208())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle3RotInterp").setKey(new MFFloatObject(MFFloat209())).setKeyValue(new MFRotationObject(MFRotation210())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring0RotInterp").setKey(new MFFloatObject(MFFloat211())).setKeyValue(new MFRotationObject(MFRotation212())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring1RotInterp").setKey(new MFFloatObject(MFFloat213())).setKeyValue(new MFRotationObject(MFRotation214())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring2RotInterp").setKey(new MFFloatObject(MFFloat215())).setKeyValue(new MFRotationObject(MFRotation216())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring3RotInterp").setKey(new MFFloatObject(MFFloat217())).setKeyValue(new MFRotationObject(MFRotation218())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky0RotInterp").setKey(new MFFloatObject(MFFloat219())).setKeyValue(new MFRotationObject(MFRotation220())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky1RotInterp").setKey(new MFFloatObject(MFFloat221())).setKeyValue(new MFRotationObject(MFRotation222())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky2RotInterp").setKey(new MFFloatObject(MFFloat223())).setKeyValue(new MFRotationObject(MFRotation224())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky3RotInterp").setKey(new MFFloatObject(MFFloat225())).setKeyValue(new MFRotationObject(MFRotation226()))))
        .addChild(new GroupObject().setDEF("StandAnimation")
          .addChild(new TimeSensorObject().setDEF("StandTimer").setCycleInterval(5.73).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat227())).setKeyValue(new MFRotationObject(MFRotation228())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_ankleRotInterp").setKey(new MFFloatObject(MFFloat229())).setKeyValue(new MFRotationObject(MFRotation230())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_kneeRotInterp").setKey(new MFFloatObject(MFFloat231())).setKeyValue(new MFRotationObject(MFRotation232())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_hipRotInterp").setKey(new MFFloatObject(MFFloat233())).setKeyValue(new MFRotationObject(MFRotation234())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_ankleRotInterp").setKey(new MFFloatObject(MFFloat235())).setKeyValue(new MFRotationObject(MFRotation236())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_kneeRotInterp").setKey(new MFFloatObject(MFFloat237())).setKeyValue(new MFRotationObject(MFRotation238())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_hipRotInterp").setKey(new MFFloatObject(MFFloat239())).setKeyValue(new MFRotationObject(MFRotation240())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_wristRotInterp").setKey(new MFFloatObject(MFFloat241())).setKeyValue(new MFRotationObject(MFRotation242())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_elbowRotInterp").setKey(new MFFloatObject(MFFloat243())).setKeyValue(new MFRotationObject(MFRotation244())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_shoulderRotInterp").setKey(new MFFloatObject(MFFloat245())).setKeyValue(new MFRotationObject(MFRotation246())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_wristRotInterp").setKey(new MFFloatObject(MFFloat247())).setKeyValue(new MFRotationObject(MFRotation248())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_elbowRotInterp").setKey(new MFFloatObject(MFFloat249())).setKeyValue(new MFRotationObject(MFRotation250())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_shoulderRotInterp").setKey(new MFFloatObject(MFFloat251())).setKeyValue(new MFRotationObject(MFRotation252())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_headRotInterp").setKey(new MFFloatObject(MFFloat253())).setKeyValue(new MFRotationObject(MFRotation254())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_neckRotInterp").setKey(new MFFloatObject(MFFloat255())).setKeyValue(new MFRotationObject(MFRotation256())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_eyeballRotInterp").setKey(new MFFloatObject(MFFloat257())).setKeyValue(new MFRotationObject(MFRotation258())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_eyeballRotInterp").setKey(new MFFloatObject(MFFloat259())).setKeyValue(new MFRotationObject(MFRotation260())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_lower_bodyRotInterp").setKey(new MFFloatObject(MFFloat261())).setKeyValue(new MFRotationObject(MFRotation262())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_upper_bodyRotInterp").setKey(new MFFloatObject(MFFloat263())).setKeyValue(new MFRotationObject(MFRotation264())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_whole_bodyRotInterp").setKey(new MFFloatObject(MFFloat265())).setKeyValue(new MFRotationObject(MFRotation266())))
          .addChild(new PositionInterpolatorObject().setDEF("Stand_whole_bodyTransInterp").setKey(new MFFloatObject(MFFloat267())).setKeyValue(new MFVec3fObject(MFVec3f268())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat269())).setKeyValue(new MFRotationObject(MFRotation270())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat271())).setKeyValue(new MFRotationObject(MFRotation272())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat273())).setKeyValue(new MFRotationObject(MFRotation274())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat275())).setKeyValue(new MFRotationObject(MFRotation276())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_sacroiliacYaw").setKey(new MFFloatObject(MFFloat277())).setKeyValue(new MFRotationObject(MFRotation278())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_vl5Yaw").setKey(new MFFloatObject(MFFloat279())).setKeyValue(new MFRotationObject(MFRotation280())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_vc6Yaw").setKey(new MFFloatObject(MFFloat281())).setKeyValue(new MFRotationObject(MFRotation282())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat283())).setKeyValue(new MFRotationObject(MFRotation284())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat285())).setKeyValue(new MFRotationObject(MFRotation286())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_index1Roll").setKey(new MFFloatObject(MFFloat287())).setKeyValue(new MFRotationObject(MFRotation288())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_index2Roll").setKey(new MFFloatObject(MFFloat289())).setKeyValue(new MFRotationObject(MFRotation290())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_index3Roll").setKey(new MFFloatObject(MFFloat291())).setKeyValue(new MFRotationObject(MFRotation292()))))
        .addChild(new GroupObject().setDEF("PitchesAnimation")
          .addChild(new TimeSensorObject().setDEF("PitchTimer").setCycleInterval(5.73).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat293())).setKeyValue(new MFRotationObject(MFRotation294())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_ankleRotInterp").setKey(new MFFloatObject(MFFloat295())).setKeyValue(new MFRotationObject(MFRotation296())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_kneeRotInterp").setKey(new MFFloatObject(MFFloat297())).setKeyValue(new MFRotationObject(MFRotation298())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_hipRotInterp").setKey(new MFFloatObject(MFFloat299())).setKeyValue(new MFRotationObject(MFRotation300())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_ankleRotInterp").setKey(new MFFloatObject(MFFloat301())).setKeyValue(new MFRotationObject(MFRotation302())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_kneeRotInterp").setKey(new MFFloatObject(MFFloat303())).setKeyValue(new MFRotationObject(MFRotation304())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_hipRotInterp").setKey(new MFFloatObject(MFFloat305())).setKeyValue(new MFRotationObject(MFRotation306())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_wristRotInterp").setKey(new MFFloatObject(MFFloat307())).setKeyValue(new MFRotationObject(MFRotation308())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_elbowRotInterp").setKey(new MFFloatObject(MFFloat309())).setKeyValue(new MFRotationObject(MFRotation310())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_shoulderRotInterp").setKey(new MFFloatObject(MFFloat311())).setKeyValue(new MFRotationObject(MFRotation312())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_wristRotInterp").setKey(new MFFloatObject(MFFloat313())).setKeyValue(new MFRotationObject(MFRotation314())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_elbowRotInterp").setKey(new MFFloatObject(MFFloat315())).setKeyValue(new MFRotationObject(MFRotation316())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_shoulderRotInterp").setKey(new MFFloatObject(MFFloat317())).setKeyValue(new MFRotationObject(MFRotation318())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_headRotInterp").setKey(new MFFloatObject(MFFloat319())).setKeyValue(new MFRotationObject(MFRotation320())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_neckRotInterp").setKey(new MFFloatObject(MFFloat321())).setKeyValue(new MFRotationObject(MFRotation322())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_lower_bodyRotInterp").setKey(new MFFloatObject(MFFloat323())).setKeyValue(new MFRotationObject(MFRotation324())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_upper_bodyRotInterp").setKey(new MFFloatObject(MFFloat325())).setKeyValue(new MFRotationObject(MFRotation326())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_whole_bodyRotInterp").setKey(new MFFloatObject(MFFloat327())).setKeyValue(new MFRotationObject(MFRotation328())))
          .addChild(new PositionInterpolatorObject().setDEF("Pitches_whole_bodyTransInterp").setKey(new MFFloatObject(MFFloat329())).setKeyValue(new MFVec3fObject(MFVec3f330())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat331())).setKeyValue(new MFRotationObject(MFRotation332())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat333())).setKeyValue(new MFRotationObject(MFRotation334())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat335())).setKeyValue(new MFRotationObject(MFRotation336())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat337())).setKeyValue(new MFRotationObject(MFRotation338())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_sacroiliacYaw").setKey(new MFFloatObject(MFFloat339())).setKeyValue(new MFRotationObject(MFRotation340())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_vl5Yaw").setKey(new MFFloatObject(MFFloat341())).setKeyValue(new MFRotationObject(MFRotation342())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_vc6Yaw").setKey(new MFFloatObject(MFFloat343())).setKeyValue(new MFRotationObject(MFRotation344())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat345())).setKeyValue(new MFRotationObject(MFRotation346())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat347())).setKeyValue(new MFRotationObject(MFRotation348()))))
        .addChild(new GroupObject().setDEF("YawsAnimation")
          .addChild(new TimeSensorObject().setDEF("YawTimer").setCycleInterval(5.73).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat349())).setKeyValue(new MFRotationObject(MFRotation350())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_ankleRotInterp").setKey(new MFFloatObject(MFFloat351())).setKeyValue(new MFRotationObject(MFRotation352())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_kneeRotInterp").setKey(new MFFloatObject(MFFloat353())).setKeyValue(new MFRotationObject(MFRotation354())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_hipRotInterp").setKey(new MFFloatObject(MFFloat355())).setKeyValue(new MFRotationObject(MFRotation356())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_ankleRotInterp").setKey(new MFFloatObject(MFFloat357())).setKeyValue(new MFRotationObject(MFRotation358())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_kneeRotInterp").setKey(new MFFloatObject(MFFloat359())).setKeyValue(new MFRotationObject(MFRotation360())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_hipRotInterp").setKey(new MFFloatObject(MFFloat361())).setKeyValue(new MFRotationObject(MFRotation362())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_wristRotInterp").setKey(new MFFloatObject(MFFloat363())).setKeyValue(new MFRotationObject(MFRotation364())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_elbowRotInterp").setKey(new MFFloatObject(MFFloat365())).setKeyValue(new MFRotationObject(MFRotation366())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_shoulderRotInterp").setKey(new MFFloatObject(MFFloat367())).setKeyValue(new MFRotationObject(MFRotation368())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_wristRotInterp").setKey(new MFFloatObject(MFFloat369())).setKeyValue(new MFRotationObject(MFRotation370())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_elbowRotInterp").setKey(new MFFloatObject(MFFloat371())).setKeyValue(new MFRotationObject(MFRotation372())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_shoulderRotInterp").setKey(new MFFloatObject(MFFloat373())).setKeyValue(new MFRotationObject(MFRotation374())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_headRotInterp").setKey(new MFFloatObject(MFFloat375())).setKeyValue(new MFRotationObject(MFRotation376())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_neckRotInterp").setKey(new MFFloatObject(MFFloat377())).setKeyValue(new MFRotationObject(MFRotation378())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_upper_bodyRotInterp").setKey(new MFFloatObject(MFFloat379())).setKeyValue(new MFRotationObject(MFRotation380())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_lower_bodyRotInterp").setKey(new MFFloatObject(MFFloat381())).setKeyValue(new MFRotationObject(MFRotation382())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_whole_bodyRotInterp").setKey(new MFFloatObject(MFFloat383())).setKeyValue(new MFRotationObject(MFRotation384())))
          .addChild(new PositionInterpolatorObject().setDEF("Yaws_whole_bodyTransInterp").setKey(new MFFloatObject(MFFloat385())).setKeyValue(new MFVec3fObject(MFVec3f386())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat387())).setKeyValue(new MFRotationObject(MFRotation388())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat389())).setKeyValue(new MFRotationObject(MFRotation390())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat391())).setKeyValue(new MFRotationObject(MFRotation392())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat393())).setKeyValue(new MFRotationObject(MFRotation394())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_sacroiliacYaw").setKey(new MFFloatObject(MFFloat395())).setKeyValue(new MFRotationObject(MFRotation396())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_vl5Yaw").setKey(new MFFloatObject(MFFloat397())).setKeyValue(new MFRotationObject(MFRotation398())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_vc6Yaw").setKey(new MFFloatObject(MFFloat399())).setKeyValue(new MFRotationObject(MFRotation400())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat401())).setKeyValue(new MFRotationObject(MFRotation402())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat403())).setKeyValue(new MFRotationObject(MFRotation404()))))
        .addChild(new GroupObject().setDEF("RollsAnimation")
          .addChild(new TimeSensorObject().setDEF("RollTimer").setCycleInterval(5.73).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat405())).setKeyValue(new MFRotationObject(MFRotation406())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_ankleRotInterp").setKey(new MFFloatObject(MFFloat407())).setKeyValue(new MFRotationObject(MFRotation408())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_kneeRotInterp").setKey(new MFFloatObject(MFFloat409())).setKeyValue(new MFRotationObject(MFRotation410())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_hipRotInterp").setKey(new MFFloatObject(MFFloat411())).setKeyValue(new MFRotationObject(MFRotation412())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_ankleRotInterp").setKey(new MFFloatObject(MFFloat413())).setKeyValue(new MFRotationObject(MFRotation414())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_kneeRotInterp").setKey(new MFFloatObject(MFFloat415())).setKeyValue(new MFRotationObject(MFRotation416())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_hipRotInterp").setKey(new MFFloatObject(MFFloat417())).setKeyValue(new MFRotationObject(MFRotation418())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_wristRotInterp").setKey(new MFFloatObject(MFFloat419())).setKeyValue(new MFRotationObject(MFRotation420())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_elbowRotInterp").setKey(new MFFloatObject(MFFloat421())).setKeyValue(new MFRotationObject(MFRotation422())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_shoulderRotInterp").setKey(new MFFloatObject(MFFloat423())).setKeyValue(new MFRotationObject(MFRotation424())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_wristRotInterp").setKey(new MFFloatObject(MFFloat425())).setKeyValue(new MFRotationObject(MFRotation426())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_elbowRotInterp").setKey(new MFFloatObject(MFFloat427())).setKeyValue(new MFRotationObject(MFRotation428())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_shoulderRotInterp").setKey(new MFFloatObject(MFFloat429())).setKeyValue(new MFRotationObject(MFRotation430())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_headRotInterp").setKey(new MFFloatObject(MFFloat431())).setKeyValue(new MFRotationObject(MFRotation432())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_neckRotInterp").setKey(new MFFloatObject(MFFloat433())).setKeyValue(new MFRotationObject(MFRotation434())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_lower_bodyRotInterp").setKey(new MFFloatObject(MFFloat435())).setKeyValue(new MFRotationObject(MFRotation436())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_upper_bodyRotInterp").setKey(new MFFloatObject(MFFloat437())).setKeyValue(new MFRotationObject(MFRotation438())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_whole_bodyRotInterp").setKey(new MFFloatObject(MFFloat439())).setKeyValue(new MFRotationObject(MFRotation440())))
          .addChild(new PositionInterpolatorObject().setDEF("Rolls_whole_bodyTransInterp").setKey(new MFFloatObject(MFFloat441())).setKeyValue(new MFVec3fObject(MFVec3f442())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat443())).setKeyValue(new MFRotationObject(MFRotation444())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat445())).setKeyValue(new MFRotationObject(MFRotation446())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat447())).setKeyValue(new MFRotationObject(MFRotation448())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat449())).setKeyValue(new MFRotationObject(MFRotation450())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_sacroiliacYaw").setKey(new MFFloatObject(MFFloat451())).setKeyValue(new MFRotationObject(MFRotation452())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_vl5Yaw").setKey(new MFFloatObject(MFFloat453())).setKeyValue(new MFRotationObject(MFRotation454())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_vc6Yaw").setKey(new MFFloatObject(MFFloat455())).setKeyValue(new MFRotationObject(MFRotation456())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat457())).setKeyValue(new MFRotationObject(MFRotation458())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat459())).setKeyValue(new MFRotationObject(MFRotation460()))))
        .addChild(new GroupObject().setDEF("WalkAnimation")
          .addChild(new TimeSensorObject().setDEF("WalkTimer").setCycleInterval(1.73).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat461())).setKeyValue(new MFRotationObject(MFRotation462())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_ankleRotInterp").setKey(new MFFloatObject(MFFloat463())).setKeyValue(new MFRotationObject(MFRotation464())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_kneeRotInterp").setKey(new MFFloatObject(MFFloat465())).setKeyValue(new MFRotationObject(MFRotation466())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_hipRotInterp").setKey(new MFFloatObject(MFFloat467())).setKeyValue(new MFRotationObject(MFRotation468())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_ankleRotInterp").setKey(new MFFloatObject(MFFloat469())).setKeyValue(new MFRotationObject(MFRotation470())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_kneeRotInterp").setKey(new MFFloatObject(MFFloat471())).setKeyValue(new MFRotationObject(MFRotation472())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_hipRotInterp").setKey(new MFFloatObject(MFFloat473())).setKeyValue(new MFRotationObject(MFRotation474())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_lower_bodyRotInterp").setKey(new MFFloatObject(MFFloat475())).setKeyValue(new MFRotationObject(MFRotation476())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_wristRotInterp").setKey(new MFFloatObject(MFFloat477())).setKeyValue(new MFRotationObject(MFRotation478())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_elbowRotInterp").setKey(new MFFloatObject(MFFloat479())).setKeyValue(new MFRotationObject(MFRotation480())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_shoulderRotInterp").setKey(new MFFloatObject(MFFloat481())).setKeyValue(new MFRotationObject(MFRotation482())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_wristRotInterp").setKey(new MFFloatObject(MFFloat483())).setKeyValue(new MFRotationObject(MFRotation484())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_elbowRotInterp").setKey(new MFFloatObject(MFFloat485())).setKeyValue(new MFRotationObject(MFRotation486())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_shoulderRotInterp").setKey(new MFFloatObject(MFFloat487())).setKeyValue(new MFRotationObject(MFRotation488())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_headRotInterp").setKey(new MFFloatObject(MFFloat489())).setKeyValue(new MFRotationObject(MFRotation490())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_neckRotInterp").setKey(new MFFloatObject(MFFloat491())).setKeyValue(new MFRotationObject(MFRotation492())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_upper_bodyRotInterp").setKey(new MFFloatObject(MFFloat493())).setKeyValue(new MFRotationObject(MFRotation494())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_whole_bodyRotInterp").setKey(new MFFloatObject(MFFloat495())).setKeyValue(new MFRotationObject(MFRotation496())))
          .addChild(new PositionInterpolatorObject().setDEF("Walk_whole_bodyTranInterp").setKey(new MFFloatObject(MFFloat497())).setKeyValue(new MFVec3fObject(MFVec3f498())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat499())).setKeyValue(new MFRotationObject(MFRotation500())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat501())).setKeyValue(new MFRotationObject(MFRotation502())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat503())).setKeyValue(new MFRotationObject(MFRotation504())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat505())).setKeyValue(new MFRotationObject(MFRotation506())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_sacroiliacYaw").setKey(new MFFloatObject(MFFloat507())).setKeyValue(new MFRotationObject(MFRotation508())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_vl5Yaw").setKey(new MFFloatObject(MFFloat509())).setKeyValue(new MFRotationObject(MFRotation510())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_vc6Yaw").setKey(new MFFloatObject(MFFloat511())).setKeyValue(new MFRotationObject(MFRotation512())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat513())).setKeyValue(new MFRotationObject(MFRotation514())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat515())).setKeyValue(new MFRotationObject(MFRotation516()))))
        .addChild(new GroupObject().setDEF("RunAnimation")
          .addChild(new TimeSensorObject().setDEF("RunTimer").setCycleInterval(0.9).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat517())).setKeyValue(new MFRotationObject(MFRotation518())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_hipRotInterp_Run").setKey(new MFFloatObject(MFFloat519())).setKeyValue(new MFRotationObject(MFRotation520())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_kneeRotInterp_Run").setKey(new MFFloatObject(MFFloat521())).setKeyValue(new MFRotationObject(MFRotation522())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_ankleRotInterp_Run").setKey(new MFFloatObject(MFFloat523())).setKeyValue(new MFRotationObject(MFRotation524())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_hipRotInterp_Run").setKey(new MFFloatObject(MFFloat525())).setKeyValue(new MFRotationObject(MFRotation526())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_kneeRotInterp_Run").setKey(new MFFloatObject(MFFloat527())).setKeyValue(new MFRotationObject(MFRotation528())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_ankleRotInterp_Run").setKey(new MFFloatObject(MFFloat529())).setKeyValue(new MFRotationObject(MFRotation530())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_shoulderRotInterp_Run").setKey(new MFFloatObject(MFFloat531())).setKeyValue(new MFRotationObject(MFRotation532())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_elbowRotInterp_Run").setKey(new MFFloatObject(MFFloat533())).setKeyValue(new MFRotationObject(MFRotation534())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_wristRotInterp_Run").setKey(new MFFloatObject(MFFloat535())).setKeyValue(new MFRotationObject(MFRotation536())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_shoulderRotInterp_Run").setKey(new MFFloatObject(MFFloat537())).setKeyValue(new MFRotationObject(MFRotation538())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_elbowRotInterp_Run").setKey(new MFFloatObject(MFFloat539())).setKeyValue(new MFRotationObject(MFRotation540())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_wristRotInterp_Run").setKey(new MFFloatObject(MFFloat541())).setKeyValue(new MFRotationObject(MFRotation542())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_lower_bodyRotInterp_Run").setKey(new MFFloatObject(MFFloat543())).setKeyValue(new MFRotationObject(MFRotation544())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_headRotInterp_Run").setKey(new MFFloatObject(MFFloat545())).setKeyValue(new MFRotationObject(MFRotation546())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_neckRotInterp_Run").setKey(new MFFloatObject(MFFloat547())).setKeyValue(new MFRotationObject(MFRotation548())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_upper_bodyRotInterp_Run").setKey(new MFFloatObject(MFFloat549())).setKeyValue(new MFRotationObject(MFRotation550())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_whole_bodyRotInterp_Run").setKey(new MFFloatObject(MFFloat551())).setKeyValue(new MFRotationObject(MFRotation552())))
          .addChild(new PositionInterpolatorObject().setDEF("Run_whole_bodyTranInterp_Run").setKey(new MFFloatObject(MFFloat553())).setKeyValue(new MFVec3fObject(MFVec3f554())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat555())).setKeyValue(new MFRotationObject(MFRotation556())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat557())).setKeyValue(new MFRotationObject(MFRotation558())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat559())).setKeyValue(new MFRotationObject(MFRotation560())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat561())).setKeyValue(new MFRotationObject(MFRotation562())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_sacroiliacYaw").setKey(new MFFloatObject(MFFloat563())).setKeyValue(new MFRotationObject(MFRotation564())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_vl5Yaw").setKey(new MFFloatObject(MFFloat565())).setKeyValue(new MFRotationObject(MFRotation566())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_vc6Yaw").setKey(new MFFloatObject(MFFloat567())).setKeyValue(new MFRotationObject(MFRotation568())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat569())).setKeyValue(new MFRotationObject(MFRotation570())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat571())).setKeyValue(new MFRotationObject(MFRotation572()))))
        .addChild(new GroupObject().setDEF("JumpAnimation")
          .addChild(new TimeSensorObject().setDEF("JumpTimer").setCycleInterval(3.73).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat573())).setKeyValue(new MFRotationObject(MFRotation574())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_ankleRotInterp").setKey(new MFFloatObject(MFFloat575())).setKeyValue(new MFRotationObject(MFRotation576())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_kneeRotInterp").setKey(new MFFloatObject(MFFloat577())).setKeyValue(new MFRotationObject(MFRotation578())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_hipRotInterp").setKey(new MFFloatObject(MFFloat579())).setKeyValue(new MFRotationObject(MFRotation580())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_ankleRotInterp").setKey(new MFFloatObject(MFFloat581())).setKeyValue(new MFRotationObject(MFRotation582())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_kneeRotInterp").setKey(new MFFloatObject(MFFloat583())).setKeyValue(new MFRotationObject(MFRotation584())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_hipRotInterp").setKey(new MFFloatObject(MFFloat585())).setKeyValue(new MFRotationObject(MFRotation586())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_lower_bodyRotInterp").setKey(new MFFloatObject(MFFloat587())).setKeyValue(new MFRotationObject(MFRotation588())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_wristRotInterp").setKey(new MFFloatObject(MFFloat589())).setKeyValue(new MFRotationObject(MFRotation590())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_elbowRotInterp").setKey(new MFFloatObject(MFFloat591())).setKeyValue(new MFRotationObject(MFRotation592())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_shoulderRotInterp").setKey(new MFFloatObject(MFFloat593())).setKeyValue(new MFRotationObject(MFRotation594())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_wristRotInterp").setKey(new MFFloatObject(MFFloat595())).setKeyValue(new MFRotationObject(MFRotation596())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_elbowRotInterp").setKey(new MFFloatObject(MFFloat597())).setKeyValue(new MFRotationObject(MFRotation598())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_shoulderRotInterp").setKey(new MFFloatObject(MFFloat599())).setKeyValue(new MFRotationObject(MFRotation600())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_headRotInterp").setKey(new MFFloatObject(MFFloat601())).setKeyValue(new MFRotationObject(MFRotation602())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_neckRotInterp").setKey(new MFFloatObject(MFFloat603())).setKeyValue(new MFRotationObject(MFRotation604())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_upper_bodyRotInterp").setKey(new MFFloatObject(MFFloat605())).setKeyValue(new MFRotationObject(MFRotation606())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_whole_bodyRotInterp").setKey(new MFFloatObject(MFFloat607())).setKeyValue(new MFRotationObject(MFRotation608())))
          .addChild(new PositionInterpolatorObject().setDEF("Jump_whole_bodyTranInterp").setKey(new MFFloatObject(MFFloat609())).setKeyValue(new MFVec3fObject(MFVec3f610())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat611())).setKeyValue(new MFRotationObject(MFRotation612())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat613())).setKeyValue(new MFRotationObject(MFRotation614())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat615())).setKeyValue(new MFRotationObject(MFRotation616())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat617())).setKeyValue(new MFRotationObject(MFRotation618())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_sacroiliacYaw").setKey(new MFFloatObject(MFFloat619())).setKeyValue(new MFRotationObject(MFRotation620())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_vl5Yaw").setKey(new MFFloatObject(MFFloat621())).setKeyValue(new MFRotationObject(MFRotation622())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_vc6Yaw").setKey(new MFFloatObject(MFFloat623())).setKeyValue(new MFRotationObject(MFRotation624())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat625())).setKeyValue(new MFRotationObject(MFRotation626())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat627())).setKeyValue(new MFRotationObject(MFRotation628()))))
        .addChild(new GroupObject().setDEF("KickAnimation")
          .addChild(new TimeSensorObject().setDEF("KickTimer").setCycleInterval(3.73).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat629())).setKeyValue(new MFRotationObject(MFRotation630())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat631())).setKeyValue(new MFRotationObject(MFRotation632())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_shoulderRoll").setKey(new MFFloatObject(MFFloat633())).setKeyValue(new MFRotationObject(MFRotation634())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_ForeArmPitch").setKey(new MFFloatObject(MFFloat635())).setKeyValue(new MFRotationObject(MFRotation636())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_wristRoll").setKey(new MFFloatObject(MFFloat637())).setKeyValue(new MFRotationObject(MFRotation638())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_thumb1Pitch").setKey(new MFFloatObject(MFFloat639())).setKeyValue(new MFRotationObject(MFRotation640())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_sternoclavicularRoll").setKey(new MFFloatObject(MFFloat641())).setKeyValue(new MFRotationObject(MFRotation642())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_acromioclavicularRoll").setKey(new MFFloatObject(MFFloat643())).setKeyValue(new MFRotationObject(MFRotation644())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_shoulderRoll").setKey(new MFFloatObject(MFFloat645())).setKeyValue(new MFRotationObject(MFRotation646())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_ForeArmPitch").setKey(new MFFloatObject(MFFloat647())).setKeyValue(new MFRotationObject(MFRotation648())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_wristRoll").setKey(new MFFloatObject(MFFloat649())).setKeyValue(new MFRotationObject(MFRotation650())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_thumb1Pitch").setKey(new MFFloatObject(MFFloat651())).setKeyValue(new MFRotationObject(MFRotation652())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_hipPitch").setKey(new MFFloatObject(MFFloat653())).setKeyValue(new MFRotationObject(MFRotation654())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_kneePitch").setKey(new MFFloatObject(MFFloat655())).setKeyValue(new MFRotationObject(MFRotation656())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_hipPitch").setKey(new MFFloatObject(MFFloat657())).setKeyValue(new MFRotationObject(MFRotation658())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_kneePitch").setKey(new MFFloatObject(MFFloat659())).setKeyValue(new MFRotationObject(MFRotation660())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_anklePitch").setKey(new MFFloatObject(MFFloat661())).setKeyValue(new MFRotationObject(MFRotation662())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_metatarsalPitch").setKey(new MFFloatObject(MFFloat663())).setKeyValue(new MFRotationObject(MFRotation664())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_sacroiliacYaw").setKey(new MFFloatObject(MFFloat665())).setKeyValue(new MFRotationObject(MFRotation666())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_vl5Yaw").setKey(new MFFloatObject(MFFloat667())).setKeyValue(new MFRotationObject(MFRotation668())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_vc6Yaw").setKey(new MFFloatObject(MFFloat669())).setKeyValue(new MFRotationObject(MFRotation670())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_lower_bodyRotInterp").setKey(new MFFloatObject(MFFloat671())).setKeyValue(new MFRotationObject(MFRotation672())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_upper_bodyRotInterp").setKey(new MFFloatObject(MFFloat673())).setKeyValue(new MFRotationObject(MFRotation674())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_whole_bodyRotInterp").setKey(new MFFloatObject(MFFloat675())).setKeyValue(new MFRotationObject(MFRotation676())))
          .addChild(new PositionInterpolatorObject().setDEF("Kick_whole_bodyTransInterp").setKey(new MFFloatObject(MFFloat677())).setKeyValue(new MFVec3fObject(MFVec3f678())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_neckRotInterp").setKey(new MFFloatObject(MFFloat679())).setKeyValue(new MFRotationObject(MFRotation680()))))
        .addChild(new GroupObject().setDEF("Interface")
          .addChild(new TransformObject().setDEF("CoordinateSystemFloor").setScale(new float[] {0.1f,0.1f,0.1f})
            .addChild(new ShapeObject().setDEF("AxisLinesShape")
              .addComments(new CommentsBlock("RGB lines showing XYZ axes"))
              .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(MFInt32681())).setColorPerVertex(false).setCoordIndex(new MFInt32Object(MFInt32682()))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(MFVec3f683())))
                .setColor(new ColorObject().setColor(new MFColorObject(MFColor684()))))))
          .addChild(new ProximitySensorObject().setDEF("HudProx").setSize(new float[] {50f,50f,50f}))
          .addChild(new TransformObject().setDEF("HudXform").setRotation(new float[] {0f,1f,0f,0.78f}).setTranslation(new float[] {2f,1f,2f})
            .addChild(new TransformObject().setScale(new float[] {0.02f,0.02f,0.02f}).setTranslation(new float[] {-0.48f,-0.01f,-0.75f})
              .addChild(new TransformObject().setDEF("Stand_Text").setTranslation(new float[] {0f,-0.9f,0f})
                .addChild(new TouchSensorObject().setDEF("Stand_Touch"))
                .addChild(new ShapeObject().setDEF("StandText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("text_color").setAmbientIntensity(1f).setDiffuseColor(new float[] {0.819f,0.521f,0.169f}).setEmissiveColor(new float[] {0.819f,0.521f,0.169f}).setSpecularColor(new float[] {0.819f,0.521f,0.169f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString685()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString686())))))
                .addChild(new ShapeObject().setDEF("Stand_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("Clear").setAmbientIntensity(1f).setDiffuseColor(new float[] {0f,0.5f,0f}).setEmissiveColor(new float[] {0f,0.5f,0f}).setTransparency(0.8f)))
                  .setGeometry(new IndexedFaceSetObject().setDEF("Backing").setCoordIndex(new MFInt32Object(MFInt32687()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(MFVec3f688()))))))
              .addChild(new TransformObject().setDEF("Pitch_Text").setTranslation(new float[] {0f,-2.4f,0f})
                .addChild(new TouchSensorObject().setDEF("Pitch_Touch"))
                .addChild(new ShapeObject().setDEF("PitchText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString689()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString690())))))
                .addChild(new ShapeObject().setDEF("Pitch_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Yaw_Text").setTranslation(new float[] {0f,-3.8f,0f})
                .addChild(new TouchSensorObject().setDEF("Yaw_Touch"))
                .addChild(new ShapeObject().setDEF("YawText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString691()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString692())))))
                .addChild(new ShapeObject().setDEF("Yaw_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Roll_Text").setTranslation(new float[] {0f,-5.2f,0f})
                .addChild(new TouchSensorObject().setDEF("Roll_Touch"))
                .addChild(new ShapeObject().setDEF("RollText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString693()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString694())))))
                .addChild(new ShapeObject().setDEF("Roll_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Walk_Text").setTranslation(new float[] {0f,-6.6f,0f})
                .addChild(new TouchSensorObject().setDEF("Walk_Touch"))
                .addChild(new ShapeObject().setDEF("WalkText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString695()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString696())))))
                .addChild(new ShapeObject().setDEF("Walk_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Run_Text").setTranslation(new float[] {0f,-8f,0f})
                .addChild(new TouchSensorObject().setDEF("Run_Touch"))
                .addChild(new ShapeObject().setDEF("RunText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString697()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString698())))))
                .addChild(new ShapeObject().setDEF("Run_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Jump_Text").setTranslation(new float[] {0f,-9.4f,0f})
                .addChild(new TouchSensorObject().setDEF("Jump_Touch"))
                .addChild(new ShapeObject().setDEF("JumpText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString699()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString700())))))
                .addChild(new ShapeObject().setDEF("Jump_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Kick_Text").setTranslation(new float[] {0f,-10.8f,0f})
                .addChild(new TouchSensorObject().setDEF("Kick_Touch"))
                .addChild(new ShapeObject().setDEF("KickText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString701()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString702())))))
                .addChild(new ShapeObject().setDEF("Kick_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Stop_Text").setTranslation(new float[] {0f,0.4f,0f})
                .addChild(new TouchSensorObject().setDEF("Stop_Touch"))
                .addChild(new ShapeObject().setDEF("StopText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(MFString703()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(MFString704())))))
                .addChild(new ShapeObject().setDEF("Stop_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing")))))))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_HumanoidRootTransInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_HumanoidRootRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_sacroiliacRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_subtalarRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_midtarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_metatarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_subtalarRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_midtarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_metatarsalRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl5RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl4RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vl1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt12RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt11RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt10RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt9RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt8RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt7RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt6RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt5RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt4RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vt1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc7RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc6RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc5RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc4RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_vc1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_skullbaseRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_eyeball_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_eyeball_jointRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_sternoclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_acromioclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_thumb1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_thumb2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_thumb3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_index3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_middle3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_ring3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_l_pinky3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_sternoclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_acromioclavicularRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_thumb1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_thumb2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_thumb3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_index3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_middle3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_ring3RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky0RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky1RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky2RotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StopTimer").setToField("set_fraction").setToNode("Stop_r_pinky3RotInterp"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_HumanoidRootTransInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_HumanoidRootRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_l_hipRotInterp").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_l_kneeRotInterp").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_l_ankleRotInterp").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_l_midtarsalRotInterp").setToField("set_rotation").setToNode("hanim_l_midtarsal"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_r_hipRotInterp").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_r_kneeRotInterp").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_r_ankleRotInterp").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_r_midtarsalRotInterp").setToField("set_rotation").setToNode("hanim_r_midtarsal"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_vl5RotInterp").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_skullbaseRotInterp").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_l_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_l_elbowRotInterp").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_l_wristRotInterp").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_r_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_r_elbowRotInterp").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stop_r_wristRotInterp").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_lower_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_headRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_neckRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_eyeballRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_eyeballRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_upper_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_whole_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_whole_bodyTransInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_index1Roll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_index2Roll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("StandTimer").setToField("set_fraction").setToNode("Stand_r_index3Roll"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_r_ankleRotInterp").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_r_kneeRotInterp").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_r_hipRotInterp").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_l_ankleRotInterp").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_l_kneeRotInterp").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_l_hipRotInterp").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_r_wristRotInterp").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_r_elbowRotInterp").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_r_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_l_wristRotInterp").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_l_elbowRotInterp").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_l_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_headRotInterp").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_whole_bodyRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_whole_bodyTransInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Stand_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_lower_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_headRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_neckRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_upper_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_whole_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitches_whole_bodyTransInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("PitchTimer").setToField("set_fraction").setToNode("Pitch_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_r_ankleRotInterp").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_r_kneeRotInterp").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_r_hipRotInterp").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_l_ankleRotInterp").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_l_kneeRotInterp").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_l_hipRotInterp").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_r_wristRotInterp").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_r_elbowRotInterp").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_r_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_l_wristRotInterp").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_l_elbowRotInterp").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_l_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_headRotInterp").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_whole_bodyRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitches_whole_bodyTransInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Pitch_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_lower_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_headRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_neckRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_upper_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_whole_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaws_whole_bodyTransInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("YawTimer").setToField("set_fraction").setToNode("Yaw_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_r_ankleRotInterp").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_r_kneeRotInterp").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_r_hipRotInterp").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_l_ankleRotInterp").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_l_kneeRotInterp").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_l_hipRotInterp").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_r_wristRotInterp").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_r_elbowRotInterp").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_r_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_l_wristRotInterp").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_l_elbowRotInterp").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_l_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_headRotInterp").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_whole_bodyRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaws_whole_bodyTransInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Yaw_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_lower_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_headRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_neckRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_upper_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_whole_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Rolls_whole_bodyTransInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RollTimer").setToField("set_fraction").setToNode("Roll_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_r_ankleRotInterp").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_r_kneeRotInterp").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_r_hipRotInterp").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_l_ankleRotInterp").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_l_kneeRotInterp").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_l_hipRotInterp").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_r_wristRotInterp").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_r_elbowRotInterp").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_r_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_l_wristRotInterp").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_l_elbowRotInterp").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_l_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_headRotInterp").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_whole_bodyRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Rolls_whole_bodyTransInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Roll_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_lower_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_headRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_neckRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_upper_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_whole_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_whole_bodyTranInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("WalkTimer").setToField("set_fraction").setToNode("Walk_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_r_ankleRotInterp").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_r_kneeRotInterp").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_r_hipRotInterp").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_l_ankleRotInterp").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_l_kneeRotInterp").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_l_hipRotInterp").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_r_wristRotInterp").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_r_elbowRotInterp").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_r_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_l_wristRotInterp").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_l_elbowRotInterp").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_l_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_headRotInterp").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_whole_bodyRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_whole_bodyTranInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Walk_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_ankleRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_kneeRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_hipRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_ankleRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_kneeRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_hipRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_lower_bodyRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_wristRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_elbowRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_shoulderRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_wristRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_elbowRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_shoulderRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_headRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_neckRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_upper_bodyRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_whole_bodyRotInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_whole_bodyTranInterp_Run"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("RunTimer").setToField("set_fraction").setToNode("Run_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_r_ankleRotInterp_Run").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_r_kneeRotInterp_Run").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_r_hipRotInterp_Run").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_l_ankleRotInterp_Run").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_l_kneeRotInterp_Run").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_l_hipRotInterp_Run").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_r_wristRotInterp_Run").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_r_elbowRotInterp_Run").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_r_shoulderRotInterp_Run").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_l_wristRotInterp_Run").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_l_elbowRotInterp_Run").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_l_shoulderRotInterp_Run").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_headRotInterp_Run").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_whole_bodyRotInterp_Run").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_whole_bodyTranInterp_Run").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Run_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_ankleRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_kneeRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_hipRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_lower_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_wristRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_elbowRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_shoulderRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_headRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_neckRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_upper_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_whole_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_whole_bodyTranInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("JumpTimer").setToField("set_fraction").setToNode("Jump_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_r_ankleRotInterp").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_r_kneeRotInterp").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_r_hipRotInterp").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_l_ankleRotInterp").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_l_kneeRotInterp").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_l_hipRotInterp").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_r_wristRotInterp").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_r_elbowRotInterp").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_r_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_l_wristRotInterp").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_l_elbowRotInterp").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_l_shoulderRotInterp").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_headRotInterp").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_whole_bodyRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_whole_bodyTranInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Jump_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_shoulderRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_ForeArmPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_wristRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_sternoclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_acromioclavicularRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_shoulderRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_ForeArmPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_wristRoll"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_thumb1Pitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_hipPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_kneePitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_hipPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_l_kneePitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_anklePitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_r_metatarsalPitch"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_sacroiliacYaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_vl5Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_vc6Yaw"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_lower_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_upper_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_whole_bodyRotInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_whole_bodyTransInterp"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KickTimer").setToField("set_fraction").setToNode("Kick_neckRotInterp"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_l_shoulderRoll").setToField("set_rotation").setToNode("hanim_l_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_l_ForeArmPitch").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_l_wristRoll").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_r_shoulderRoll").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_r_ForeArmPitch").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_r_wristRoll").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_r_hipPitch").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_r_kneePitch").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_r_anklePitch").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_l_hipPitch").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_l_kneePitch").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_r_anklePitch").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_vl5Yaw").setToField("set_rotation").setToNode("hanim_vl5"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_whole_bodyRotInterp").setToField("set_rotation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Kick_whole_bodyTransInterp").setToField("set_translation").setToNode("hanim_HumanoidRoot"))
        .addChild(new ROUTEObject().setFromField("position_changed").setFromNode("HudProx").setToField("set_translation").setToNode("HudXform"))
        .addChild(new ROUTEObject().setFromField("orientation_changed").setFromNode("HudProx").setToField("set_rotation").setToNode("HudXform"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stand_Touch").setToField("set_startTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Pitch_Touch").setToField("set_startTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Yaw_Touch").setToField("set_startTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Walk_Touch").setToField("set_startTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Roll_Touch").setToField("set_startTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Run_Touch").setToField("set_startTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Jump_Touch").setToField("set_startTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_stopTime").setToNode("StopTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Kick_Touch").setToField("set_startTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("StandTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("PitchTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("YawTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("RollTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("WalkTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("RunTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("JumpTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_stopTime").setToNode("KickTimer"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Stop_Touch").setToField("set_startTime").setToNode("StopTimer")))      ;
    }
private MFStringObject MFString0() {
  return new MFStringObject( new String[] {"(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"})
;
}
private MFColorObject MFColor1() {
  return new MFColorObject( new float[] {0.6f,0.6f,0.6f})
;
}
private MFColorObject MFColor2() {
  return new MFColorObject( new float[] {0.75f,0.75f,0.75f})
;
}
private MFStringObject MFString3() {
  return new MFStringObject( new String[] {"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"})
;
}
private MFInt32Object MFInt324() {
  return new MFInt32Object( new int[] {0,1,2,3,4,5,6,7,8,9,10,11})
;
}
private MFFloatObject MFFloat5() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt326() {
  return new MFInt32Object( new int[] {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43})
;
}
private MFFloatObject MFFloat7() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f})
;
}
private MFInt32Object MFInt328() {
  return new MFInt32Object( new int[] {36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63})
;
}
private MFFloatObject MFFloat9() {
  return new MFFloatObject( new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3210() {
  return new MFInt32Object( new int[] {64,65,66,67,68,69,70,71})
;
}
private MFFloatObject MFFloat11() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3212() {
  return new MFInt32Object( new int[] {72,73,74,75,76,77,78,79})
;
}
private MFFloatObject MFFloat13() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3214() {
  return new MFInt32Object( new int[] {80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111})
;
}
private MFFloatObject MFFloat15() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f})
;
}
private MFInt32Object MFInt3216() {
  return new MFInt32Object( new int[] {104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131})
;
}
private MFFloatObject MFFloat17() {
  return new MFFloatObject( new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3218() {
  return new MFInt32Object( new int[] {132,133,134,135,136,137,138,139})
;
}
private MFFloatObject MFFloat19() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3220() {
  return new MFInt32Object( new int[] {140,141,142,143,144,145,146,147})
;
}
private MFFloatObject MFFloat21() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3222() {
  return new MFInt32Object( new int[] {148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167})
;
}
private MFFloatObject MFFloat23() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3224() {
  return new MFInt32Object( new int[] {168,169,170,171,172,173,174,175})
;
}
private MFFloatObject MFFloat25() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3226() {
  return new MFInt32Object( new int[] {176,177,178,179,180,181,182,183})
;
}
private MFFloatObject MFFloat27() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3228() {
  return new MFInt32Object( new int[] {184,185,186,187,188,189,190,191})
;
}
private MFFloatObject MFFloat29() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3230() {
  return new MFInt32Object( new int[] {192,193,194,195,196,197,198,199})
;
}
private MFFloatObject MFFloat31() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3232() {
  return new MFInt32Object( new int[] {200,201,202,203,204,205,206,207})
;
}
private MFFloatObject MFFloat33() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3234() {
  return new MFInt32Object( new int[] {208,209,210,211,212,213,214,215})
;
}
private MFFloatObject MFFloat35() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFInt32Object MFInt3236() {
  return new MFInt32Object( new int[] {216,217,218,219,220,221,222,223})
;
}
private MFFloatObject MFFloat37() {
  return new MFFloatObject( new float[] {1f,1f,1f,1f,1f,1f,1f,1f})
;
}
private MFVec3fObject MFVec3f38() {
  return new MFVec3fObject( new float[] {-0.05f,1f,0.05f,0.05f,1f,0.05f,0.03f,0.97f,-0.1f,-0.03f,0.97f,-0.1f,0.03f,0.94f,-0.075f,-0.03f,0.94f,-0.075f,0f,0.92f,0f,0f,0.94f,0.03f,-0.12f,1.06f,0.05f,0.12f,1.06f,0.05f,0.12f,1.06f,-0.1f,-0.12f,1.06f,-0.1f,0.0456f,0.9364f,0.05f,0.1456f,0.9364f,0.05f,0.1456f,0.9364f,-0.05f,0.0456f,0.9364f,-0.05f,0.0456f,0.9f,0.05f,0.1456f,0.9f,0.05f,0.1456f,0.9f,-0.05f,0.0456f,0.9f,-0.05f,0.0456f,0.8f,0.05f,0.1456f,0.8f,0.05f,0.1456f,0.8f,-0.05f,0.0456f,0.8f,-0.05f,0.0456f,0.7f,0.05f,0.1456f,0.7f,0.05f,0.1456f,0.7f,-0.05f,0.0456f,0.7f,-0.05f,0.0456f,0.6f,0.05f,0.1456f,0.6f,0.05f,0.1456f,0.6f,-0.05f,0.0456f,0.6f,-0.05f,0.0456f,0.55f,0.05f,0.1456f,0.55f,0.05f,0.1456f,0.55f,-0.05f,0.0456f,0.55f,-0.05f,0.0456f,0.52f,0.05f,0.1456f,0.52f,0.05f,0.1456f,0.52f,-0.05f,0.0456f,0.52f,-0.05f,0.0456f,0.5f,0.05f,0.1456f,0.5f,0.05f,0.1456f,0.5f,-0.05f,0.0456f,0.5f,-0.05f,0.0454f,0.43f,0.045f,0.1454f,0.43f,0.045f,0.1454f,0.43f,-0.055f,0.0454f,0.43f,-0.055f,0.0452f,0.36f,0.04f,0.1452f,0.36f,0.04f,0.1452f,0.36f,-0.06f,0.0452f,0.36f,-0.06f,0.045f,0.29f,0.035f,0.145f,0.29f,0.035f,0.145f,0.29f,-0.065f,0.045f,0.29f,-0.065f,0.0448f,0.21f,0.03f,0.1448f,0.21f,0.03f,0.1448f,0.21f,-0.07f,0.0448f,0.21f,-0.07f,0.0446f,0.1262f,0.025f,0.1446f,0.1262f,0.025f,0.1446f,0.1262f,-0.075f,0.0446f,0.1262f,-0.075f,0.0446f,0.0762f,0.025f,0.1446f,0.0762f,0.025f,0.1446f,0f,-0.075f,0.0446f,0f,-0.075f,0.0446f,0.0562f,0.057f,0.1446f,0.0562f,0.057f,0.1446f,0f,0.057f,0.0446f,0f,0.057f,0.0446f,0.0562f,0.087f,0.1446f,0.0562f,0.087f,0.1446f,0f,0.087f,0.0446f,0f,0.087f,0.0446f,0.0562f,0.1924f,0.1446f,0.0562f,0.1924f,0.1446f,0f,0.1924f,0.0446f,0f,0.1924f,-0.0456f,0.9364f,0.05f,-0.1456f,0.9364f,0.05f,-0.1456f,0.9364f,-0.05f,-0.0456f,0.9364f,-0.05f,-0.0456f,0.9f,0.05f,-0.1456f,0.9f,0.05f,-0.1456f,0.9f,-0.05f,-0.0456f,0.9f,-0.05f,-0.0456f,0.8f,0.05f,-0.1456f,0.8f,0.05f,-0.1456f,0.8f,-0.05f,-0.0456f,0.8f,-0.05f,-0.0456f,0.7f,0.05f,-0.1456f,0.7f,0.05f,-0.1456f,0.7f,-0.05f,-0.0456f,0.7f,-0.05f,-0.0456f,0.6f,0.05f,-0.1456f,0.6f,0.05f,-0.1456f,0.6f,-0.05f,-0.0456f,0.6f,-0.05f,-0.0456f,0.55f,0.05f,-0.1456f,0.55f,0.05f,-0.1456f,0.55f,-0.05f,-0.0456f,0.55f,-0.05f,-0.0456f,0.52f,0.05f,-0.1456f,0.52f,0.05f,-0.1456f,0.52f,-0.05f,-0.0456f,0.52f,-0.05f,-0.0456f,0.5f,0.05f,-0.1456f,0.5f,0.05f,-0.1456f,0.5f,-0.05f,-0.0456f,0.5f,-0.05f,-0.0454f,0.43f,0.045f,-0.1454f,0.43f,0.045f,-0.1454f,0.43f,-0.055f,-0.0454f,0.43f,-0.055f,-0.0452f,0.36f,0.04f,-0.1452f,0.36f,0.04f,-0.1452f,0.36f,-0.06f,-0.0452f,0.36f,-0.06f,-0.045f,0.29f,0.035f,-0.145f,0.29f,0.035f,-0.145f,0.29f,-0.065f,-0.045f,0.29f,-0.065f,-0.0448f,0.21f,0.03f,-0.1448f,0.21f,0.03f,-0.1448f,0.21f,-0.07f,-0.0448f,0.21f,-0.07f,-0.0446f,0.1262f,0.025f,-0.1446f,0.1262f,0.025f,-0.1446f,0.1262f,-0.075f,-0.0446f,0.1262f,-0.075f,-0.0446f,0.0762f,0.025f,-0.1446f,0.0762f,0.025f,-0.1446f,0f,-0.075f,-0.0446f,0f,-0.075f,-0.0446f,0.0562f,0.057f,-0.1446f,0.0562f,0.057f,-0.1446f,0f,0.057f,-0.0446f,0f,0.057f,-0.0446f,0.0562f,0.087f,-0.1446f,0.0562f,0.087f,-0.1446f,0f,0.087f,-0.0446f,0f,0.087f,-0.0446f,0.0562f,0.1924f,-0.1446f,0.0562f,0.1924f,-0.1446f,0f,0.1924f,-0.0446f,0f,0.1924f,-0.12f,1.1f,0.05f,0.12f,1.1f,0.05f,0.12f,1.1f,-0.1f,-0.12f,1.1f,-0.1f,-0.14f,1.42f,0.045f,0.14f,1.42f,0.045f,0.14f,1.42f,-0.09f,-0.14f,1.42f,-0.09f,-0.24f,1.52f,0.035f,0.24f,1.52f,0.035f,0.24f,1.52f,-0.09f,-0.24f,1.52f,-0.09f,-0.05f,1.56f,0.03f,0.05f,1.56f,0.03f,0.05f,1.56f,-0.06f,-0.05f,1.56f,-0.06f,-0.05f,1.6f,0.06f,0.05f,1.6f,0.06f,0.05f,1.62f,-0.03f,-0.05f,1.62f,-0.03f,-0.07f,1.777f,0.13f,0.07f,1.777f,0.13f,0.07f,1.777f,-0.03f,-0.07f,1.777f,-0.03f,-0.07f,1.6f,0.13f,0.07f,1.6f,0.13f,0.07f,1.66f,-0.03f,-0.07f,1.66f,-0.03f,0.16f,1.42f,0.015f,0.24f,1.5f,0.015f,0.24f,1.5f,-0.075f,0.16f,1.42f,-0.075f,0.17f,1.18f,-0.025f,0.23f,1.18f,-0.025f,0.23f,1.18f,-0.085f,0.17f,1.18f,-0.085f,0.17f,1.14f,-0.025f,0.23f,1.14f,-0.025f,0.23f,1.14f,-0.085f,0.17f,1.14f,-0.085f,0.18f,0.91f,-0.05f,0.22f,0.91f,-0.05f,0.22f,0.91f,-0.09f,0.18f,0.91f,-0.09f,0.18f,0.87f,-0.02f,0.22f,0.87f,-0.02f,0.22f,0.87f,-0.1f,0.18f,0.87f,-0.1f,0.18f,0.6976f,-0.02f,0.22f,0.6976f,-0.02f,0.22f,0.6976f,-0.1f,0.18f,0.6976f,-0.1f,-0.16f,1.42f,0.015f,-0.24f,1.5f,0.015f,-0.24f,1.5f,-0.075f,-0.16f,1.42f,-0.075f,-0.17f,1.18f,-0.025f,-0.23f,1.18f,-0.025f,-0.23f,1.18f,-0.085f,-0.17f,1.18f,-0.085f,-0.17f,1.14f,-0.025f,-0.23f,1.14f,-0.025f,-0.23f,1.14f,-0.085f,-0.17f,1.14f,-0.085f,-0.18f,0.91f,-0.05f,-0.22f,0.91f,-0.05f,-0.22f,0.91f,-0.09f,-0.18f,0.91f,-0.09f,-0.18f,0.87f,-0.02f,-0.22f,0.87f,-0.02f,-0.22f,0.87f,-0.1f,-0.18f,0.87f,-0.1f,-0.18f,0.6976f,-0.02f,-0.22f,0.6976f,-0.02f,-0.22f,0.6976f,-0.1f,-0.18f,0.6976f,-0.1f})
;
}
private MFInt32Object MFInt3239() {
  return new MFInt32Object( new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1})
;
}
private MFInt32Object MFInt3240() {
  return new MFInt32Object( new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1})
;
}
private MFInt32Object MFInt3241() {
  return new MFInt32Object( new int[] {60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1})
;
}
private MFInt32Object MFInt3242() {
  return new MFInt32Object( new int[] {148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1})
;
}
private MFInt32Object MFInt3243() {
  return new MFInt32Object( new int[] {172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1})
;
}
private MFInt32Object MFInt3244() {
  return new MFInt32Object( new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1})
;
}
private MFInt32Object MFInt3245() {
  return new MFInt32Object( new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1})
;
}
private MFInt32Object MFInt3246() {
  return new MFInt32Object( new int[] {194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1})
;
}
private MFFloatObject MFFloat47() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFVec3fObject MFVec3f48() {
  return new MFVec3fObject( new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f})
;
}
private MFFloatObject MFFloat49() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation50() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat51() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation52() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat53() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation54() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat55() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation56() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat57() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation58() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat59() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation60() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat61() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation62() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat63() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation64() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat65() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation66() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat67() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation68() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat69() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation70() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat71() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation72() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat73() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation74() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat75() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation76() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat77() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation78() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat79() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation80() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat81() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation82() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat83() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation84() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat85() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation86() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat87() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation88() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat89() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation90() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat91() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation92() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat93() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation94() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat95() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation96() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat97() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation98() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat99() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation100() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat101() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation102() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat103() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation104() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat105() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation106() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat107() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation108() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat109() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation110() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat111() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation112() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat113() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation114() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat115() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation116() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat117() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation118() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat119() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation120() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat121() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation122() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat123() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation124() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat125() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation126() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat127() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation128() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat129() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation130() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat131() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation132() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat133() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation134() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat135() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation136() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat137() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation138() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat139() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation140() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat141() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation142() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat143() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation144() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat145() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation146() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat147() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation148() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat149() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation150() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat151() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation152() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat153() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation154() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat155() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation156() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat157() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation158() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat159() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation160() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat161() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation162() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat163() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation164() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat165() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation166() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat167() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation168() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat169() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation170() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat171() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation172() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat173() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation174() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat175() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation176() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat177() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation178() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat179() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation180() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat181() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation182() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat183() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation184() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat185() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation186() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat187() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation188() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat189() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation190() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat191() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation192() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat193() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation194() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat195() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation196() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat197() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation198() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat199() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation200() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat201() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation202() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat203() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation204() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat205() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation206() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat207() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation208() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat209() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation210() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat211() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation212() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat213() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation214() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat215() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation216() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat217() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation218() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat219() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation220() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat221() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation222() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat223() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation224() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat225() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation226() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat227() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation228() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,-1f,0f,0f,0.015f,1f,0f,0f,0.17f,-1f,0f,0f,0.025f,1f,0f,0f,0.01f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat229() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation230() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat231() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation232() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat233() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation234() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat235() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation236() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat237() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation238() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat239() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation240() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat241() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation242() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,-1f,0.25f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat243() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation244() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat245() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation246() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat247() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation248() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat249() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation250() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat251() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation252() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat253() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation254() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat255() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation256() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat257() {
  return new MFFloatObject( new float[] {0f,0.4f,0.7f,1f})
;
}
private MFRotationObject MFRotation258() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat259() {
  return new MFFloatObject( new float[] {0f,0.4f,0.7f,1f})
;
}
private MFRotationObject MFRotation260() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat261() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation262() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat263() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation264() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat265() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation266() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat267() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFVec3fObject MFVec3f268() {
  return new MFVec3fObject( new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f})
;
}
private MFFloatObject MFFloat269() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation270() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat271() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation272() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat273() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation274() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat275() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation276() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat277() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation278() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat279() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation280() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat281() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation282() {
  return new MFRotationObject( new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0f,0f,-1f,0f,0f,0f,1f,0f,0f})
;
}
private MFFloatObject MFFloat283() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation284() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat285() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation286() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,0.1f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat287() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f})
;
}
private MFRotationObject MFRotation288() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0.1f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat289() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f})
;
}
private MFRotationObject MFRotation290() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0.4f,0f,0f,1f,0.32f,0f,0f,1f,0.25f,0f,0f,1f,0.2f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat291() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f})
;
}
private MFRotationObject MFRotation292() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0.35f,0f,0f,1f,0.2f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat293() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation294() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat295() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation296() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat297() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation298() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat299() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation300() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat301() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation302() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat303() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation304() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat305() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation306() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat307() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation308() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat309() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation310() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat311() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation312() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat313() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation314() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat315() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation316() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat317() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation318() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat319() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation320() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat321() {
  return new MFFloatObject( new float[] {0f,0.25f,0.55f,1f})
;
}
private MFRotationObject MFRotation322() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,0.55f,-1f,0f,0f,1.05f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat323() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation324() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat325() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation326() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat327() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation328() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat329() {
  return new MFFloatObject( new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f})
;
}
private MFVec3fObject MFVec3f330() {
  return new MFVec3fObject( new float[] {0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f})
;
}
private MFFloatObject MFFloat331() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation332() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat333() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation334() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat335() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation336() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat337() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation338() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat339() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation340() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat341() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation342() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat343() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation344() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat345() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation346() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat347() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation348() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat349() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation350() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat351() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation352() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat353() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation354() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat355() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation356() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat357() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation358() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat359() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation360() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat361() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation362() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat363() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation364() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat365() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation366() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat367() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation368() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat369() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation370() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat371() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation372() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat373() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation374() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat375() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation376() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat377() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation378() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat379() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation380() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat381() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation382() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat383() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation384() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat385() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFVec3fObject MFVec3f386() {
  return new MFVec3fObject( new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f})
;
}
private MFFloatObject MFFloat387() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation388() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat389() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation390() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat391() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation392() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat393() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation394() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat395() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation396() {
  return new MFRotationObject( new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,0f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f})
;
}
private MFFloatObject MFFloat397() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation398() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat399() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation400() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat401() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation402() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat403() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation404() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat405() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation406() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat407() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation408() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat409() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation410() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat411() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation412() {
  return new MFRotationObject( new float[] {0f,0f,-1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat413() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation414() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat415() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation416() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat417() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation418() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat419() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation420() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat421() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation422() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat423() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation424() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,-1f,3f,0f,0f,-1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat425() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation426() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat427() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation428() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat429() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation430() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,3f,0f,0f,1f,1.5f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat431() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation432() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat433() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation434() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,1.25f,0f,0f,1f,0f,0f,0f,-1f,1.25f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat435() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation436() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat437() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation438() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat439() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation440() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat441() {
  return new MFFloatObject( new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f})
;
}
private MFVec3fObject MFVec3f442() {
  return new MFVec3fObject( new float[] {0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f})
;
}
private MFFloatObject MFFloat443() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation444() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat445() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation446() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat447() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation448() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat449() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation450() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat451() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation452() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat453() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation454() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat455() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation456() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat457() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation458() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat459() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation460() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat461() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation462() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat463() {
  return new MFFloatObject( new float[] {0f,0.125f,0.2083f,0.375f,0.4583f,0.5f,0.6667f,0.75f,0.7917f,0.9167f,1f})
;
}
private MFRotationObject MFRotation464() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.3533f,-1f,0f,0f,0.1072f,1f,0f,0f,0.2612f,1f,0f,0f,0.1268f,-1f,0f,0f,0.01793f,-1f,0f,0f,0.05824f,-1f,0f,0f,0.2398f,-1f,0f,0f,0.35f,-1f,0f,0f,0.3322f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat465() {
  return new MFFloatObject( new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f})
;
}
private MFRotationObject MFRotation466() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.8573f,1f,0f,0f,0.8926f,1f,0f,0f,0.5351f,1f,0f,0f,0.1756f,1f,0f,0f,0.1194f,1f,0f,0f,0.3153f,1f,0f,0f,0.09354f,1f,0f,0f,0.08558f,1f,0f,0f,0.2475f,1f,0f,0f,0.8573f})
;
}
private MFFloatObject MFFloat467() {
  return new MFFloatObject( new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f})
;
}
private MFRotationObject MFRotation468() {
  return new MFRotationObject( new float[] {-0.5831f,0.03511f,0.8116f,0.1481f,-0.995f,0.02296f,0.09674f,0.4683f,-1f,0.00192f,0.007964f,0.4732f,-0.998f,-0.0158f,-0.06102f,0.5079f,-0.9911f,-0.03541f,-0.1286f,0.5419f,-0.9131f,-0.06243f,-0.403f,0.3361f,-0.4306f,-0.07962f,-0.899f,0.07038f,1f,0f,0f,0.2571f,0.9891f,-0.02805f,0.1444f,0.3879f,-0.5831f,0.03511f,0.8116f,0.1481f})
;
}
private MFFloatObject MFFloat469() {
  return new MFFloatObject( new float[] {0f,0.125f,0.2083f,0.375f,0.6667f,0.9167f,1f})
;
}
private MFRotationObject MFRotation470() {
  return new MFRotationObject( new float[] {-1f,0f,0f,0.06714f,-1f,0f,0f,0.2152f,-1f,0f,0f,0.3184f,-1f,0f,0f,0.4717f,-1f,0f,0f,0.2912f,1f,0f,0f,0.1222f,-1f,0f,0f,0.06714f})
;
}
private MFFloatObject MFFloat471() {
  return new MFFloatObject( new float[] {0f,0.2083f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f})
;
}
private MFRotationObject MFRotation472() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.3226f,1f,0f,0f,0.1556f,1f,0f,0f,0.08678f,1f,0f,0f,0.8751f,1f,0f,0f,1.131f,1f,0f,0f,0.09961f,1f,0f,0f,0.3942f,1f,0f,0f,0.3226f})
;
}
private MFFloatObject MFFloat473() {
  return new MFFloatObject( new float[] {0f,0.25f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f})
;
}
private MFRotationObject MFRotation474() {
  return new MFRotationObject( new float[] {-0.873f,0.06094f,0.484f,0.2865f,0.9963f,-0.01057f,0.08481f,0.2488f,0.9965f,0.01591f,-0.08222f,0.3836f,-0.7018f,-0.03223f,-0.7117f,0.1289f,-1f,0f,0f,0.5518f,-0.9964f,0.02231f,0.0817f,0.5351f,-0.9809f,0.04912f,0.1881f,0.5204f,-0.873f,0.06094f,0.484f,0.2865f})
;
}
private MFFloatObject MFFloat475() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation476() {
  return new MFRotationObject( new float[] {0f,0f,-1f,0.1056f,0f,0f,1f,0.09018f,0f,0f,-1f,0.1056f})
;
}
private MFFloatObject MFFloat477() {
  return new MFFloatObject( new float[] {0f,0.375f,0.9167f,1f})
;
}
private MFRotationObject MFRotation478() {
  return new MFRotationObject( new float[] {-0.8129f,0.4759f,-0.3357f,0.1346f,0.1533f,-0.9878f,0.02582f,0.3902f,-0.5701f,0.7604f,-0.311f,0.366f,-0.8129f,0.4759f,-0.3357f,0.1346f})
;
}
private MFFloatObject MFFloat479() {
  return new MFFloatObject( new float[] {0f,0.375f,0.9167f,1f})
;
}
private MFRotationObject MFRotation480() {
  return new MFRotationObject( new float[] {-1f,0f,0f,0.411508f,-1f,0f,0f,0.0925011f,-1f,0f,0f,0.572568f,-1f,0f,0f,0.411508f})
;
}
private MFFloatObject MFFloat481() {
  return new MFFloatObject( new float[] {0f,0.375f,0.9167f,1f})
;
}
private MFRotationObject MFRotation482() {
  return new MFRotationObject( new float[] {-1f,0f,0f,0.09346f,1f,0f,0f,0.3197f,-1f,0f,0f,0.1564f,-1f,0f,0f,0.09346f})
;
}
private MFFloatObject MFFloat483() {
  return new MFFloatObject( new float[] {0f,0.375f,0.9167f,1f})
;
}
private MFRotationObject MFRotation484() {
  return new MFRotationObject( new float[] {0f,-1f,0f,0.461076f,-0.330195f,-0.927451f,0.175516f,0.538852f,0.0327774f,-0.999314f,-0.0172185f,0.492033f,0f,-1f,0f,0.461076f})
;
}
private MFFloatObject MFFloat485() {
  return new MFFloatObject( new float[] {0f,0.375f,0.9167f,1f})
;
}
private MFRotationObject MFRotation486() {
  return new MFRotationObject( new float[] {-1f,0f,0f,0.0659878f,-1f,0f,0f,0.488383f,-1f,0f,0f,0.0177536f,-1f,0f,0f,0.0659878f})
;
}
private MFFloatObject MFFloat487() {
  return new MFFloatObject( new float[] {0f,0.375f,0.9167f,1f})
;
}
private MFRotationObject MFRotation488() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.1189f,-1f,0f,0f,0.1861f,1f,0f,0f,0.3357f,1f,0f,0f,0.1189f})
;
}
private MFFloatObject MFFloat489() {
  return new MFFloatObject( new float[] {0f,0.375f,0.4167f,0.5f,0.5833f,0.6667f,0.75f,0.8333f,0.9167f,1f})
;
}
private MFRotationObject MFRotation490() {
  return new MFRotationObject( new float[] {0f,-1f,0f,0.08642f,0f,1f,0f,0.1825f,0f,1f,0f,0.1505f,0f,1f,0f,0.1053f,0f,1f,0f,0.04391f,0f,-1f,0f,0.03119f,0f,-1f,0f,0.07936f,0f,-1f,0f,0.1616f,0f,-1f,0f,0.155f,0f,-1f,0f,0.08642f})
;
}
private MFFloatObject MFFloat491() {
  return new MFFloatObject( new float[] {0f,1f})
;
}
private MFRotationObject MFRotation492() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat493() {
  return new MFFloatObject( new float[] {0f,0.2083f,0.375f,0.75f,0.8333f,1f})
;
}
private MFRotationObject MFRotation494() {
  return new MFRotationObject( new float[] {0f,1f,0f,0.0826f,-0.01972f,-0.5974f,0.8017f,0.08231f,0.009296f,-0.9648f,0.2627f,0.1734f,-0.01238f,0.9549f,-0.2968f,0.08732f,-0.008125f,0.9691f,-0.2463f,0.158f,0f,1f,0f,0.0826f})
;
}
private MFFloatObject MFFloat495() {
  return new MFFloatObject( new float[] {0f,1f})
;
}
private MFRotationObject MFRotation496() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat497() {
  return new MFFloatObject( new float[] {0f,0.04167f,0.125f,0.1667f,0.2083f,0.25f,0.2917f,0.375f,0.4583f,0.5f,0.5417f,0.5833f,0.625f,0.7083f,0.75f,0.7917f,0.875f,0.9167f,1f})
;
}
private MFVec3fObject MFVec3f498() {
  return new MFVec3fObject( new float[] {0f,-0.00928f,0f,0f,-0.003858f,0f,0f,-0.008847f,0f,0f,-0.01486f,0f,0f,-0.02641f,0f,0f,-0.03934f,0f,0f,-0.0502f,0f,0f,-0.07469f,0f,0f,-0.02732f,0f,0f,-0.01608f,0f,0f,-0.01129f,0f,0f,-0.005819f,0f,0f,-0.002004f,0f,0f,-0.002579f,0f,0f,-0.0143f,0f,0f,-0.03799f,0f,0f,-0.05648f,0f,0f,-0.045f,0f,0f,-0.00928f,0f})
;
}
private MFFloatObject MFFloat499() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation500() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat501() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation502() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat503() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation504() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat505() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation506() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat507() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation508() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat509() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation510() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat511() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation512() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat513() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation514() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat515() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation516() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat517() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation518() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat519() {
  return new MFFloatObject( new float[] {0f,0.2182f,0.4909f,0.7455f,1f})
;
}
private MFRotationObject MFRotation520() {
  return new MFRotationObject( new float[] {-0.99f,0.033f,0.04f,1.42f,-0.99f,0.1328f,0.067f,0.42f,0.99f,0.014f,0.009f,0.9f,-0.99f,0.0703f,0.05f,0.7f,-0.99f,0.033f,0.04f,1.42f})
;
}
private MFFloatObject MFFloat521() {
  return new MFFloatObject( new float[] {0f,0.2182f,0.4909f,0.7455f,1f})
;
}
private MFRotationObject MFRotation522() {
  return new MFRotationObject( new float[] {1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f})
;
}
private MFFloatObject MFFloat523() {
  return new MFFloatObject( new float[] {0f,0.22f,0.3f,0.4f,1f})
;
}
private MFRotationObject MFRotation524() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.0374f,-1f,0f,0f,0.1037f,-1f,0f,0f,0.4328f,1f,0f,0f,0.1929f,1f,0f,0f,0.03574f})
;
}
private MFFloatObject MFFloat525() {
  return new MFFloatObject( new float[] {0f,0.2545f,0.4909f,0.7091f,1f})
;
}
private MFRotationObject MFRotation526() {
  return new MFRotationObject( new float[] {0.99f,-0.014f,0.009f,0.9f,-0.99f,-0.0703f,-0.05f,0.7f,-0.99f,-0.033f,0.04f,1.42f,-0.99f,-0.1328f,-0.067f,0.42f,0.99f,-0.014f,0.009f,0.9f})
;
}
private MFFloatObject MFFloat527() {
  return new MFFloatObject( new float[] {0f,0.2545f,0.4909f,0.7091f,1f})
;
}
private MFRotationObject MFRotation528() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f})
;
}
private MFFloatObject MFFloat529() {
  return new MFFloatObject( new float[] {0f,0.4f,0.71f,0.8f,0.82f,1f})
;
}
private MFRotationObject MFRotation530() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.2323f,-1f,0f,0f,0.07843f,-1f,0f,0f,0.32f,-1f,0f,0f,0.374f,-1f,0f,0f,0.3478f,1f,0f,0f,0.2323f})
;
}
private MFFloatObject MFFloat531() {
  return new MFFloatObject( new float[] {0f,0.2182f,0.4909f,0.7455f,1f})
;
}
private MFRotationObject MFRotation532() {
  return new MFRotationObject( new float[] {0.99f,-0.074f,0.25f,1.5f,0.99f,-0.092f,0.44f,0.3f,-0.99f,0.136f,0.25f,0.85f,0.99f,-0.081f,0.38f,0.4f,0.99f,-0.074f,0.25f,1.5f})
;
}
private MFFloatObject MFFloat533() {
  return new MFFloatObject( new float[] {0f,0.2182f,0.4909f,0.7455f,1f})
;
}
private MFRotationObject MFRotation534() {
  return new MFRotationObject( new float[] {-1f,0f,0f,1.85f,-0.99f,-0.19f,0.18f,1.35f,-1f,0f,0f,0.975f,-0.99f,-0.09f,-0.02f,1.55f,-1f,0f,0f,1.85f})
;
}
private MFFloatObject MFFloat535() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation536() {
  return new MFRotationObject( new float[] {-0.25f,-1f,0.08f,0.14f,0.25f,1f,0.08f,0.14f,0f,0f,1f,0f,-0.25f,1f,0.08f,-0.14f,-0.25f,1f,0.08f,0.14f})
;
}
private MFFloatObject MFFloat537() {
  return new MFFloatObject( new float[] {0f,0.2545f,0.4909f,0.7091f,1f})
;
}
private MFRotationObject MFRotation538() {
  return new MFRotationObject( new float[] {-0.99f,-0.136f,-0.25f,0.85f,0.99f,0.081f,-0.38f,0.4f,0.99f,0.074f,-0.25f,1.5f,0.99f,0.081f,-0.38f,0.4f,-0.99f,-0.136f,-0.25f,0.85f})
;
}
private MFFloatObject MFFloat539() {
  return new MFFloatObject( new float[] {0f,0.2545f,0.4909f,0.7091f,1f})
;
}
private MFRotationObject MFRotation540() {
  return new MFRotationObject( new float[] {-1f,0f,0f,0.975f,-0.99f,0.09f,0.02f,1.55f,-1f,0f,0f,1.85f,-0.99f,0.19f,-0.18f,1.35f,-1f,0f,0f,0.975f})
;
}
private MFFloatObject MFFloat541() {
  return new MFFloatObject( new float[] {0f,1f})
;
}
private MFRotationObject MFRotation542() {
  return new MFRotationObject( new float[] {-0.917742f,-0.237244f,-0.318536f,0.214273f,-0.917742f,-0.237244f,-0.318536f,0.214273f})
;
}
private MFFloatObject MFFloat543() {
  return new MFFloatObject( new float[] {0f,0.2182f,0.4909f,0.7455f,1f})
;
}
private MFRotationObject MFRotation544() {
  return new MFRotationObject( new float[] {0f,-1f,0f,0.125f,0f,0f,1f,0f,0f,1f,0f,0.125f,0f,0f,1f,0f,0f,-1f,0f,0.125f})
;
}
private MFFloatObject MFFloat545() {
  return new MFFloatObject( new float[] {0f,0.2545f,0.4909f,0.7091f,1f})
;
}
private MFRotationObject MFRotation546() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.08f,1f,0f,0f,0.12f,1f,0f,0f,0.3f,1f,0f,0f,0.3f,1f,0f,0f,0.08f})
;
}
private MFFloatObject MFFloat547() {
  return new MFFloatObject( new float[] {0f,0.2545f,0.4909f,0.7091f,1f})
;
}
private MFRotationObject MFRotation548() {
  return new MFRotationObject( new float[] {0.7f,0f,0f,0.4f,-0.7f,-0.7f,0f,0.4f,0f,0f,0f,0.4f,-0.7f,0.7f,0f,0.4f,0.7f,0f,0f,0.4f})
;
}
private MFFloatObject MFFloat549() {
  return new MFFloatObject( new float[] {0f,0.2545f,0.4909f,0.7636f,1f})
;
}
private MFRotationObject MFRotation550() {
  return new MFRotationObject( new float[] {0.97f,0.65f,0.086f,0.5f,0.9f,0.003f,-0.02f,0.38f,0.95f,-0.68f,-0.086f,0.5f,0.9f,0.004f,-0.025f,0.4f,0.97f,0.65f,0.086f,0.5f})
;
}
private MFFloatObject MFFloat551() {
  return new MFFloatObject( new float[] {0f,0.25f,0.5f,0.75f,1f})
;
}
private MFRotationObject MFRotation552() {
  return new MFRotationObject( new float[] {1f,0f,0f,0.06f,1f,0f,0f,0.167f,1f,0f,0f,0.06f,1f,0f,0f,0.168f,1f,0f,0f,0.06f})
;
}
private MFFloatObject MFFloat553() {
  return new MFFloatObject( new float[] {0f,0.22f,0.3f,0.31f,0.5f,0.69f,0.7f,0.78f,1f})
;
}
private MFVec3fObject MFVec3f554() {
  return new MFVec3fObject( new float[] {0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f})
;
}
private MFFloatObject MFFloat555() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation556() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat557() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation558() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat559() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation560() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat561() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation562() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat563() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation564() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat565() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation566() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat567() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation568() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat569() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation570() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat571() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation572() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat573() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation574() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat575() {
  return new MFFloatObject( new float[] {0f,0.1f,0.15f,0.25f,0.28f,0.32f,0.35f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f})
;
}
private MFRotationObject MFRotation576() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.3527f,-1f,0f,0f,0.3038f,-1f,0f,0f,0.07964f,1f,0f,0f,1.3f,1f,0f,0f,0.6509f,1f,0f,0f,0.3001f,-1f,0f,0f,0.2087f,-1f,0f,0f,0.3756f,-1f,0f,0f,0.3279f,-1f,0f,0f,0.1193f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat577() {
  return new MFFloatObject( new float[] {0f,0.2f,0.25f,0.3f,0.64f,0.76f,0.88f,1f})
;
}
private MFRotationObject MFRotation578() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,2.5f,1f,0f,0f,1.7f,0f,0f,1f,0f,1f,0f,0f,0.9507f,1f,0f,0f,0.5845f,1f,0f,0f,0.9054f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat579() {
  return new MFFloatObject( new float[] {0f,0.18f,0.24f,0.26f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f})
;
}
private MFRotationObject MFRotation580() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,1.63f,-1f,0f,0f,1.7f,-1f,0f,0f,1.55f,-1f,0f,0f,0.8943f,-1f,0f,0f,0.3698f,0f,0f,1f,0f,-1f,0f,0f,0.4963f,-1f,0f,0f,0.3829f,-1f,0f,0f,0.5169f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat581() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f})
;
}
private MFRotationObject MFRotation582() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.625f,-1f,0f,0f,0.625f,-1f,0f,0f,0.3364f,-1f,0f,0f,0.2742f,-1f,0f,0f,0.05078f,1f,0f,0f,0.2833f,1f,0f,0f,0.6667f,1f,0f,0f,0.2833f,-1f,0f,0f,0.2108f,-1f,0f,0f,0.375f,-1f,0f,0f,0.3146f,-1f,0f,0f,0.1174f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat583() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f})
;
}
private MFRotationObject MFRotation584() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,2.047f,1f,0f,0f,2.047f,0f,0f,1f,0f,1f,0f,0f,1.566f,1f,0f,0f,0.5913f,1f,0f,0f,0.9235f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat585() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.88f,1f})
;
}
private MFRotationObject MFRotation586() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,4.349f,1f,0f,0f,4.349f,1f,0f,0f,4.615f,-1f,0f,0f,0.9136f,-1f,0f,0f,0.3614f,0f,0f,1f,0f,-1f,0f,0f,0.7869f,-1f,0f,0f,0.3918f,-1f,0f,0f,0.5433f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat587() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f})
;
}
private MFRotationObject MFRotation588() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,0.1892f,1f,0f,0f,0.1892f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat589() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f})
;
}
private MFRotationObject MFRotation590() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.00222418f,0.99801f,-0.0630095f,1.46072f,0f,1f,0f,0.497349f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat591() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f})
;
}
private MFRotationObject MFRotation592() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.5855f,-1f,0f,0f,0.5852f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat593() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f})
;
}
private MFRotationObject MFRotation594() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0.9992f,0.02042f,0.03558f,4.688f,0.9992f,0.02042f,0.03558f,4.688f,0.9989f,-0.04623f,0.005159f,4.079f,-0.8687f,-0.2525f,-0.4261f,1.501f,-0.941f,-0.2893f,-0.1754f,0.4788f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat595() {
  return new MFFloatObject( new float[] {0f,0.48f,0.52f,0.64f,0.76f,0.88f,1f})
;
}
private MFRotationObject MFRotation596() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.00364942f,0.999901f,0.0135896f,4.5822f,0f,-1f,0f,0.655922f,-0.00050618f,-0.999999f,0.0012782f,1.28397f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat597() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.58f,0.72f,1f})
;
}
private MFRotationObject MFRotation598() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,1.13f,-1f,0f,0f,1.7f,-1f,0f,0f,1.7f,-1f,0f,0f,0.4f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat599() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f})
;
}
private MFRotationObject MFRotation600() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-0.9987f,0.02554f,0.04498f,1.57f,-0.9987f,0.02554f,0.04498f,1.57f,1f,0.0004113f,0.003055f,4.114f,-0.8413f,0.3238f,0.4329f,1.453f,-0.877f,0.4198f,0.2337f,0.6009f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat601() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f})
;
}
private MFRotationObject MFRotation602() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.3216f,1f,0f,0f,0.06503f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat603() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f})
;
}
private MFRotationObject MFRotation604() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.1942f,-1f,0f,0f,0.1942f,0f,0f,1f,0f,1f,0f,0f,0.2284f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat605() {
  return new MFFloatObject( new float[] {0f,0.22f,0.28f,0.34f,0.71f,0.88f,1f})
;
}
private MFRotationObject MFRotation606() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,1.05f,1f,0f,0f,1.051f,-1f,0f,0f,0.257f,1f,0f,0f,0.2171f,1f,0f,0f,0.3465f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat607() {
  return new MFFloatObject( new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,1f})
;
}
private MFRotationObject MFRotation608() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,0.3273f,1f,0f,0f,0.3273f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat609() {
  return new MFFloatObject( new float[] {0f,0.04f,0.07f,0.11f,0.15f,0.19f,0.22f,0.25f,0.27f,0.31f,0.33f,0.35f,0.38f,0.53f,0.544f,0.76f,0.8f,0.84f,0.88f,0.92f,0.96f,1f})
;
}
private MFVec3fObject MFVec3f610() {
  return new MFVec3fObject( new float[] {0f,0f,0f,0f,-0.01264f,-0.01289f,0f,-0.04712f,-0.03738f,-0.0003345f,-0.1049f,-0.05353f,-0.0005712f,-0.1892f,-0.06561f,-0.0008233f,-0.286f,-0.06276f,-0.0009591f,-0.3795f,-0.05148f,-0.00106f,-0.4484f,-0.03656f,-0.00106f,-0.4484f,-0.03656f,-0.001122f,-0.25f,-0.1499f,-0.0008616f,-0.05f,-0.06358f,-0.0005128f,0.15f,-0.05488f,0.0004779f,0.55f,0.02732f,0.0001728f,1.385f,0.006873f,0.00017f,1.395f,0.0069f,0f,0.35f,0.02148f,0f,-0.01299f,-0.01057f,0f,-0.06932f,-0.01064f,0.0001365f,-0.1037f,-0.005059f,0.0001279f,-0.07198f,-0.007596f,0.000141f,-0.01626f,-0.004935f,0f,0f,0f})
;
}
private MFFloatObject MFFloat611() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation612() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat613() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation614() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat615() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation616() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat617() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation618() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat619() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation620() {
  return new MFRotationObject( new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f})
;
}
private MFFloatObject MFFloat621() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation622() {
  return new MFRotationObject( new float[] {0f,1f,0f,0f,0f,1f,0f,-0.1f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,0.6f,0f,1f,0f,0.1f,0f,1f,0f,0f})
;
}
private MFFloatObject MFFloat623() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation624() {
  return new MFRotationObject( new float[] {0f,1f,0f,0f,0f,1f,0f,0.8f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0.6f,0f,-1f,0f,0.8f,0f,1f,0f,0f})
;
}
private MFFloatObject MFFloat625() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation626() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat627() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation628() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat629() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation630() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat631() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation632() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat633() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation634() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,1.76f,-0.25f,0f,1f,1.76f,0f,0f,1f,1.256f,0f,0f,1f,0.05f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat635() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation636() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,-1f,0.25f,0f,2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat637() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation638() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat639() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation640() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat641() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation642() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat643() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation644() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat645() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation646() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,-1.76f,0.25f,0f,1f,-1.76f,0f,0f,1f,-1.256f,0f,0f,1f,-0.05f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat647() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation648() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,1f,0.25f,0f,-2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat649() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation650() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,-0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat651() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation652() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat653() {
  return new MFFloatObject( new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f})
;
}
private MFRotationObject MFRotation654() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,1f,0f,0f,0.9f,-1f,0f,0f,1.75f,-1f,0f,0f,2.25f,-1f,0f,0f,2f,1f,0f,0f,0f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat655() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation656() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,1.95f,1f,0f,0f,1.75f,-1f,0f,0f,0.28f,1f,0f,0f,0f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat657() {
  return new MFFloatObject( new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f})
;
}
private MFRotationObject MFRotation658() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat659() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation660() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat661() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation662() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,-1f,0f,0f,0.9f,-1f,0f,0f,0.95f,1f,0f,0f,0.75f,-1f,0f,0f,0.05f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat663() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f})
;
}
private MFRotationObject MFRotation664() {
  return new MFRotationObject( new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f})
;
}
private MFFloatObject MFFloat665() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation666() {
  return new MFRotationObject( new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f})
;
}
private MFFloatObject MFFloat667() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation668() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat669() {
  return new MFFloatObject( new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f})
;
}
private MFRotationObject MFRotation670() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat671() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation672() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat673() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation674() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat675() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFRotationObject MFRotation676() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f})
;
}
private MFFloatObject MFFloat677() {
  return new MFFloatObject( new float[] {0f,0.5f,1f})
;
}
private MFVec3fObject MFVec3f678() {
  return new MFVec3fObject( new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f})
;
}
private MFFloatObject MFFloat679() {
  return new MFFloatObject( new float[] {0f,0.25f,0.55f,1f})
;
}
private MFRotationObject MFRotation680() {
  return new MFRotationObject( new float[] {0f,0f,1f,0f,1f,0f,0f,0.7f,1f,0f,0f,0.5f,0f,0f,1f,0f})
;
}
private MFInt32Object MFInt32681() {
  return new MFInt32Object( new int[] {0,1,2})
;
}
private MFInt32Object MFInt32682() {
  return new MFInt32Object( new int[] {0,1,-1,0,2,-1,0,3,-1})
;
}
private MFVec3fObject MFVec3f683() {
  return new MFVec3fObject( new float[] {0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f})
;
}
private MFColorObject MFColor684() {
  return new MFColorObject( new float[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f})
;
}
private MFStringObject MFString685() {
  return new MFStringObject( new String[] {"Stand"})
;
}
private MFStringObject MFString686() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFInt32Object MFInt32687() {
  return new MFInt32Object( new int[] {0,1,2,3,-1})
;
}
private MFVec3fObject MFVec3f688() {
  return new MFVec3fObject( new float[] {-0.2f,-0.25f,-0.01f,3f,-0.25f,-0.01f,3f,1f,-0.01f,-0.2f,1f,-0.01f})
;
}
private MFStringObject MFString689() {
  return new MFStringObject( new String[] {"Pitch"})
;
}
private MFStringObject MFString690() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFStringObject MFString691() {
  return new MFStringObject( new String[] {"Yaw"})
;
}
private MFStringObject MFString692() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFStringObject MFString693() {
  return new MFStringObject( new String[] {"Roll"})
;
}
private MFStringObject MFString694() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFStringObject MFString695() {
  return new MFStringObject( new String[] {"Walk"})
;
}
private MFStringObject MFString696() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFStringObject MFString697() {
  return new MFStringObject( new String[] {"Run"})
;
}
private MFStringObject MFString698() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFStringObject MFString699() {
  return new MFStringObject( new String[] {"Jump"})
;
}
private MFStringObject MFString700() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFStringObject MFString701() {
  return new MFStringObject( new String[] {"Kick"})
;
}
private MFStringObject MFString702() {
  return new MFStringObject( new String[] {"SANS"})
;
}
private MFStringObject MFString703() {
  return new MFStringObject( new String[] {"Default"})
;
}
private MFStringObject MFString704() {
  return new MFStringObject( new String[] {"SANS"})
;
}
}
