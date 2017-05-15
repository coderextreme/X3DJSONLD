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
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
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
        .addMeta(new metaObject().setName("license").setContent("../license.html"))
        .addMeta(new metaObject().setName("translated").setContent("14 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("15 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("BoxMan - A Seamless VRML Human"))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor1().getArray())).setSkyColor(new MFColorObject(new MFColor2().getArray())))
        .addChild(new HAnimHumanoidObject().setName("Humanoid").setDEF("hanim_Humanoid").setInfo(new MFStringObject(new MFString3().getArray())).setVersion("2.0")
          .addSkin(new HAnimJointObject().setName("HumanoidRoot").setDEF("hanim_HumanoidRoot").setCenter(new float[] {0f,0.9723f,-0.0728f}).setSkinCoordIndex(new MFInt32Object(new MFInt324().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat5().getArray()))
            .addChild(new HAnimSegmentObject().setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new TransformObject().setTranslation(new float[] {0f,0.9723f,-0.0728f})
                .addChild(new ShapeObject().setDEF("SphereYellow")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f})))
                  .setGeometry(new SphereObject().setRadius(0.02f)))))
            .addChild(new HAnimJointObject().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0956f,0.9364f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt326().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat7().getArray()))
              .addChild(new HAnimSegmentObject().setName("l_thigh").setDEF("hanim_l_thigh")
                .addChild(new TransformObject().setTranslation(new float[] {0.0956f,0.9364f,0f})
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.0956f,0.5095f,-0.0036f}).setSkinCoordIndex(new MFInt32Object(new MFInt328().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat9().getArray()))
                .addChild(new HAnimSegmentObject().setName("l_calf").setDEF("hanim_l_calf")
                  .addChild(new TransformObject().setTranslation(new float[] {0.0956f,0.5095f,-0.0036f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.0946f,0.0762f,-0.0261f}).setSkinCoordIndex(new MFInt32Object(new MFInt3210().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat11().getArray()))
                  .addChild(new HAnimSegmentObject().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                    .addChild(new TransformObject().setTranslation(new float[] {0.0946f,0.0762f,-0.0261f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1079f,0.0317f,0.067f}).setSkinCoordIndex(new MFInt32Object(new MFInt3212().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat13().getArray()))
                    .addChild(new HAnimSegmentObject().setName("l_middistal").setDEF("hanim_l_middistal")
                      .addChild(new TransformObject().setTranslation(new float[] {0.1079f,0.0317f,0.067f})
                        .addChild(new ShapeObject().setUSE("SphereYellow")))
                      .addChild(new HAnimSiteObject().setName("l_middistal_tip").setDEF("hanim_l_middistal_tip").setTranslation(new float[] {0.095f,0.0005f,0.1924f})
                        .addChild(new ShapeObject().setDEF("SphereRed")
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                          .setGeometry(new SphereObject().setRadius(0.02f)))))))))
            .addChild(new HAnimJointObject().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.0956f,0.9364f,0f}).setSkinCoordIndex(new MFInt32Object(new MFInt3214().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat15().getArray()))
              .addChild(new HAnimSegmentObject().setName("r_thigh").setDEF("hanim_r_thigh")
                .addChild(new TransformObject().setTranslation(new float[] {-0.0956f,0.9364f,0f})
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0956f,0.5095f,-0.0036f}).setSkinCoordIndex(new MFInt32Object(new MFInt3216().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat17().getArray()))
                .addChild(new HAnimSegmentObject().setName("r_calf").setDEF("hanim_r_calf")
                  .addChild(new TransformObject().setTranslation(new float[] {-0.0956f,0.5095f,-0.0036f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.0946f,0.0762f,-0.0261f}).setSkinCoordIndex(new MFInt32Object(new MFInt3218().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat19().getArray()))
                  .addChild(new HAnimSegmentObject().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.0946f,0.0762f,-0.0261f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.1079f,0.0317f,0.067f}).setSkinCoordIndex(new MFInt32Object(new MFInt3220().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat21().getArray()))
                    .addChild(new HAnimSegmentObject().setName("r_middistal").setDEF("hanim_r_middistal")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.1079f,0.0317f,0.067f})
                        .addChild(new ShapeObject().setUSE("SphereYellow")))
                      .addChild(new HAnimSiteObject().setName("r_middistal_tip").setDEF("hanim_r_middistal_tip").setTranslation(new float[] {-0.095f,0.0005f,0.1924f})
                        .addChild(new ShapeObject().setUSE("SphereRed"))))))))
            .addChild(new HAnimJointObject().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0f,1.0817f,-0.0728f}).setSkinCoordIndex(new MFInt32Object(new MFInt3222().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat23().getArray()))
              .addChild(new HAnimSegmentObject().setName("l5").setDEF("hanim_l5")
                .addChild(new TransformObject().setTranslation(new float[] {0f,1.0817f,-0.0728f})
                  .addChild(new ShapeObject().setUSE("SphereYellow"))))
              .addChild(new HAnimJointObject().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0f,1.644f,0.036f}).setSkinCoordIndex(new MFInt32Object(new MFInt3224().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat25().getArray()))
                .addChild(new HAnimSegmentObject().setName("skull").setDEF("hanim_skull")
                  .addChild(new TransformObject().setTranslation(new float[] {0f,1.644f,0.036f})
                    .addChild(new ShapeObject().setUSE("SphereYellow")))
                  .addChild(new HAnimSiteObject().setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {-0.0029f,1.7771f,0.0274f})
                    .addChild(new ShapeObject().setUSE("SphereYellow")))))
              .addChild(new HAnimJointObject().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.1968f,1.4642f,-0.0265f}).setSkinCoordIndex(new MFInt32Object(new MFInt3226().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat27().getArray()))
                .addChild(new HAnimSegmentObject().setName("l_upperarm").setDEF("hanim_l_upperarm")
                  .addChild(new TransformObject().setTranslation(new float[] {0.1968f,1.4642f,-0.0265f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.1982f,1.1622f,-0.0557f}).setSkinCoordIndex(new MFInt32Object(new MFInt3228().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat29().getArray()))
                  .addChild(new HAnimSegmentObject().setName("l_forearm").setDEF("hanim_l_forearm")
                    .addChild(new TransformObject().setTranslation(new float[] {0.1982f,1.1622f,-0.0557f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1972f,0.8929f,-0.069f}).setSkinCoordIndex(new MFInt32Object(new MFInt3230().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat31().getArray()))
                    .addChild(new HAnimSegmentObject().setName("l_hand").setDEF("hanim_l_hand")
                      .addChild(new TransformObject().setTranslation(new float[] {0.1972f,0.8929f,-0.069f})
                        .addChild(new ShapeObject().setUSE("SphereYellow")))
                      .addChild(new HAnimSiteObject().setName("l_hand_tip").setDEF("hanim_l_hand_tip").setTranslation(new float[] {0.1912f,0.6976f,-0.071f})
                        .addChild(new ShapeObject().setUSE("SphereRed")))))))
              .addChild(new HAnimJointObject().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1968f,1.4642f,-0.0265f}).setSkinCoordIndex(new MFInt32Object(new MFInt3232().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat33().getArray()))
                .addChild(new HAnimSegmentObject().setName("r_upperarm").setDEF("hanim_r_upperarm")
                  .addChild(new TransformObject().setTranslation(new float[] {-0.1968f,1.4642f,-0.0265f})
                    .addChild(new ShapeObject().setUSE("SphereYellow"))))
                .addChild(new HAnimJointObject().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1982f,1.1622f,-0.0557f}).setSkinCoordIndex(new MFInt32Object(new MFInt3234().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat35().getArray()))
                  .addChild(new HAnimSegmentObject().setName("r_forearm").setDEF("hanim_r_forearm")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.1982f,1.1622f,-0.0557f})
                      .addChild(new ShapeObject().setUSE("SphereYellow"))))
                  .addChild(new HAnimJointObject().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1972f,0.8929f,-0.069f}).setSkinCoordIndex(new MFInt32Object(new MFInt3236().getArray())).setSkinCoordWeight(new MFFloatObject(new MFFloat37().getArray()))
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
          .setSkinCoord(new CoordinateObject().setDEF("SKINCOORD").setPoint(new MFVec3fObject(new MFVec3f38().getArray())))
          .addSkin(new GroupObject()
            .addChild(new ShapeObject().setDEF("TrouserSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3239().getArray()).append(new MFInt3240().getArray()))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("ShoeSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3241().getArray()))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("ShirtSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3242().getArray()))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("HeadHandsFleshToneSkin")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0.75f,0.75f}).setTransparency(0.5f)))
              .addComments(new CommentsBlock("# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)"))
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3243().getArray()))
                .setCoord(new CoordinateObject().setUSE("SKINCOORD"))))
            .addChild(new ShapeObject().setDEF("SkinLines")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f})))
              .addComments(new CommentsBlock("Combined set of prior IFS coordIndex values"))
              .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3244().getArray()).append(new MFInt3245().getArray()).append(new MFInt3246().getArray()))
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
          .addChild(new TimeSensorObject().setDEF("StopTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new PositionInterpolatorObject().setDEF("Stop_HumanoidRootTransInterp").setKey(new MFFloatObject(new MFFloat47().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f48().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_HumanoidRootRotInterp").setKey(new MFFloatObject(new MFFloat49().getArray())).setKeyValue(new MFRotationObject(new MFRotation50().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_sacroiliacRotInterp").setKey(new MFFloatObject(new MFFloat51().getArray())).setKeyValue(new MFRotationObject(new MFRotation52().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_hipRotInterp").setKey(new MFFloatObject(new MFFloat53().getArray())).setKeyValue(new MFRotationObject(new MFRotation54().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat55().getArray())).setKeyValue(new MFRotationObject(new MFRotation56().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat57().getArray())).setKeyValue(new MFRotationObject(new MFRotation58().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_subtalarRotInterp").setKey(new MFFloatObject(new MFFloat59().getArray())).setKeyValue(new MFRotationObject(new MFRotation60().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_midtarsalRotInterp").setKey(new MFFloatObject(new MFFloat61().getArray())).setKeyValue(new MFRotationObject(new MFRotation62().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_metatarsalRotInterp").setKey(new MFFloatObject(new MFFloat63().getArray())).setKeyValue(new MFRotationObject(new MFRotation64().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_hipRotInterp").setKey(new MFFloatObject(new MFFloat65().getArray())).setKeyValue(new MFRotationObject(new MFRotation66().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat67().getArray())).setKeyValue(new MFRotationObject(new MFRotation68().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat69().getArray())).setKeyValue(new MFRotationObject(new MFRotation70().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_subtalarRotInterp").setKey(new MFFloatObject(new MFFloat71().getArray())).setKeyValue(new MFRotationObject(new MFRotation72().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_midtarsalRotInterp").setKey(new MFFloatObject(new MFFloat73().getArray())).setKeyValue(new MFRotationObject(new MFRotation74().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_metatarsalRotInterp").setKey(new MFFloatObject(new MFFloat75().getArray())).setKeyValue(new MFRotationObject(new MFRotation76().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl5RotInterp").setKey(new MFFloatObject(new MFFloat77().getArray())).setKeyValue(new MFRotationObject(new MFRotation78().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl4RotInterp").setKey(new MFFloatObject(new MFFloat79().getArray())).setKeyValue(new MFRotationObject(new MFRotation80().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl3RotInterp").setKey(new MFFloatObject(new MFFloat81().getArray())).setKeyValue(new MFRotationObject(new MFRotation82().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl2RotInterp").setKey(new MFFloatObject(new MFFloat83().getArray())).setKeyValue(new MFRotationObject(new MFRotation84().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vl1RotInterp").setKey(new MFFloatObject(new MFFloat85().getArray())).setKeyValue(new MFRotationObject(new MFRotation86().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt12RotInterp").setKey(new MFFloatObject(new MFFloat87().getArray())).setKeyValue(new MFRotationObject(new MFRotation88().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt11RotInterp").setKey(new MFFloatObject(new MFFloat89().getArray())).setKeyValue(new MFRotationObject(new MFRotation90().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt10RotInterp").setKey(new MFFloatObject(new MFFloat91().getArray())).setKeyValue(new MFRotationObject(new MFRotation92().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt9RotInterp").setKey(new MFFloatObject(new MFFloat93().getArray())).setKeyValue(new MFRotationObject(new MFRotation94().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt8RotInterp").setKey(new MFFloatObject(new MFFloat95().getArray())).setKeyValue(new MFRotationObject(new MFRotation96().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt7RotInterp").setKey(new MFFloatObject(new MFFloat97().getArray())).setKeyValue(new MFRotationObject(new MFRotation98().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt6RotInterp").setKey(new MFFloatObject(new MFFloat99().getArray())).setKeyValue(new MFRotationObject(new MFRotation100().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt5RotInterp").setKey(new MFFloatObject(new MFFloat101().getArray())).setKeyValue(new MFRotationObject(new MFRotation102().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt4RotInterp").setKey(new MFFloatObject(new MFFloat103().getArray())).setKeyValue(new MFRotationObject(new MFRotation104().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt3RotInterp").setKey(new MFFloatObject(new MFFloat105().getArray())).setKeyValue(new MFRotationObject(new MFRotation106().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt2RotInterp").setKey(new MFFloatObject(new MFFloat107().getArray())).setKeyValue(new MFRotationObject(new MFRotation108().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vt1RotInterp").setKey(new MFFloatObject(new MFFloat109().getArray())).setKeyValue(new MFRotationObject(new MFRotation110().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc7RotInterp").setKey(new MFFloatObject(new MFFloat111().getArray())).setKeyValue(new MFRotationObject(new MFRotation112().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc6RotInterp").setKey(new MFFloatObject(new MFFloat113().getArray())).setKeyValue(new MFRotationObject(new MFRotation114().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc5RotInterp").setKey(new MFFloatObject(new MFFloat115().getArray())).setKeyValue(new MFRotationObject(new MFRotation116().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc4RotInterp").setKey(new MFFloatObject(new MFFloat117().getArray())).setKeyValue(new MFRotationObject(new MFRotation118().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc3RotInterp").setKey(new MFFloatObject(new MFFloat119().getArray())).setKeyValue(new MFRotationObject(new MFRotation120().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc2RotInterp").setKey(new MFFloatObject(new MFFloat121().getArray())).setKeyValue(new MFRotationObject(new MFRotation122().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_vc1RotInterp").setKey(new MFFloatObject(new MFFloat123().getArray())).setKeyValue(new MFRotationObject(new MFRotation124().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_skullbaseRotInterp").setKey(new MFFloatObject(new MFFloat125().getArray())).setKeyValue(new MFRotationObject(new MFRotation126().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_eyeball_jointRotInterp").setKey(new MFFloatObject(new MFFloat127().getArray())).setKeyValue(new MFRotationObject(new MFRotation128().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_eyeball_jointRotInterp").setKey(new MFFloatObject(new MFFloat129().getArray())).setKeyValue(new MFRotationObject(new MFRotation130().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_sternoclavicularRotInterp").setKey(new MFFloatObject(new MFFloat131().getArray())).setKeyValue(new MFRotationObject(new MFRotation132().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_acromioclavicularRotInterp").setKey(new MFFloatObject(new MFFloat133().getArray())).setKeyValue(new MFRotationObject(new MFRotation134().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat135().getArray())).setKeyValue(new MFRotationObject(new MFRotation136().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat137().getArray())).setKeyValue(new MFRotationObject(new MFRotation138().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_wristRotInterp").setKey(new MFFloatObject(new MFFloat139().getArray())).setKeyValue(new MFRotationObject(new MFRotation140().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_thumb1RotInterp").setKey(new MFFloatObject(new MFFloat141().getArray())).setKeyValue(new MFRotationObject(new MFRotation142().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_thumb2RotInterp").setKey(new MFFloatObject(new MFFloat143().getArray())).setKeyValue(new MFRotationObject(new MFRotation144().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_thumb3RotInterp").setKey(new MFFloatObject(new MFFloat145().getArray())).setKeyValue(new MFRotationObject(new MFRotation146().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index0RotInterp").setKey(new MFFloatObject(new MFFloat147().getArray())).setKeyValue(new MFRotationObject(new MFRotation148().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index1RotInterp").setKey(new MFFloatObject(new MFFloat149().getArray())).setKeyValue(new MFRotationObject(new MFRotation150().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index2RotInterp").setKey(new MFFloatObject(new MFFloat151().getArray())).setKeyValue(new MFRotationObject(new MFRotation152().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_index3RotInterp").setKey(new MFFloatObject(new MFFloat153().getArray())).setKeyValue(new MFRotationObject(new MFRotation154().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle0RotInterp").setKey(new MFFloatObject(new MFFloat155().getArray())).setKeyValue(new MFRotationObject(new MFRotation156().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle1RotInterp").setKey(new MFFloatObject(new MFFloat157().getArray())).setKeyValue(new MFRotationObject(new MFRotation158().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle2RotInterp").setKey(new MFFloatObject(new MFFloat159().getArray())).setKeyValue(new MFRotationObject(new MFRotation160().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_middle3RotInterp").setKey(new MFFloatObject(new MFFloat161().getArray())).setKeyValue(new MFRotationObject(new MFRotation162().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring0RotInterp").setKey(new MFFloatObject(new MFFloat163().getArray())).setKeyValue(new MFRotationObject(new MFRotation164().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring1RotInterp").setKey(new MFFloatObject(new MFFloat165().getArray())).setKeyValue(new MFRotationObject(new MFRotation166().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring2RotInterp").setKey(new MFFloatObject(new MFFloat167().getArray())).setKeyValue(new MFRotationObject(new MFRotation168().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_ring3RotInterp").setKey(new MFFloatObject(new MFFloat169().getArray())).setKeyValue(new MFRotationObject(new MFRotation170().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky0RotInterp").setKey(new MFFloatObject(new MFFloat171().getArray())).setKeyValue(new MFRotationObject(new MFRotation172().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky1RotInterp").setKey(new MFFloatObject(new MFFloat173().getArray())).setKeyValue(new MFRotationObject(new MFRotation174().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky2RotInterp").setKey(new MFFloatObject(new MFFloat175().getArray())).setKeyValue(new MFRotationObject(new MFRotation176().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_l_pinky3RotInterp").setKey(new MFFloatObject(new MFFloat177().getArray())).setKeyValue(new MFRotationObject(new MFRotation178().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_sternoclavicularRotInterp").setKey(new MFFloatObject(new MFFloat179().getArray())).setKeyValue(new MFRotationObject(new MFRotation180().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_acromioclavicularRotInterp").setKey(new MFFloatObject(new MFFloat181().getArray())).setKeyValue(new MFRotationObject(new MFRotation182().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat183().getArray())).setKeyValue(new MFRotationObject(new MFRotation184().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat185().getArray())).setKeyValue(new MFRotationObject(new MFRotation186().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_wristRotInterp").setKey(new MFFloatObject(new MFFloat187().getArray())).setKeyValue(new MFRotationObject(new MFRotation188().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_thumb1RotInterp").setKey(new MFFloatObject(new MFFloat189().getArray())).setKeyValue(new MFRotationObject(new MFRotation190().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_thumb2RotInterp").setKey(new MFFloatObject(new MFFloat191().getArray())).setKeyValue(new MFRotationObject(new MFRotation192().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_thumb3RotInterp").setKey(new MFFloatObject(new MFFloat193().getArray())).setKeyValue(new MFRotationObject(new MFRotation194().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index0RotInterp").setKey(new MFFloatObject(new MFFloat195().getArray())).setKeyValue(new MFRotationObject(new MFRotation196().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index1RotInterp").setKey(new MFFloatObject(new MFFloat197().getArray())).setKeyValue(new MFRotationObject(new MFRotation198().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index2RotInterp").setKey(new MFFloatObject(new MFFloat199().getArray())).setKeyValue(new MFRotationObject(new MFRotation200().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_index3RotInterp").setKey(new MFFloatObject(new MFFloat201().getArray())).setKeyValue(new MFRotationObject(new MFRotation202().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle0RotInterp").setKey(new MFFloatObject(new MFFloat203().getArray())).setKeyValue(new MFRotationObject(new MFRotation204().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle1RotInterp").setKey(new MFFloatObject(new MFFloat205().getArray())).setKeyValue(new MFRotationObject(new MFRotation206().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle2RotInterp").setKey(new MFFloatObject(new MFFloat207().getArray())).setKeyValue(new MFRotationObject(new MFRotation208().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_middle3RotInterp").setKey(new MFFloatObject(new MFFloat209().getArray())).setKeyValue(new MFRotationObject(new MFRotation210().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring0RotInterp").setKey(new MFFloatObject(new MFFloat211().getArray())).setKeyValue(new MFRotationObject(new MFRotation212().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring1RotInterp").setKey(new MFFloatObject(new MFFloat213().getArray())).setKeyValue(new MFRotationObject(new MFRotation214().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring2RotInterp").setKey(new MFFloatObject(new MFFloat215().getArray())).setKeyValue(new MFRotationObject(new MFRotation216().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_ring3RotInterp").setKey(new MFFloatObject(new MFFloat217().getArray())).setKeyValue(new MFRotationObject(new MFRotation218().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky0RotInterp").setKey(new MFFloatObject(new MFFloat219().getArray())).setKeyValue(new MFRotationObject(new MFRotation220().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky1RotInterp").setKey(new MFFloatObject(new MFFloat221().getArray())).setKeyValue(new MFRotationObject(new MFRotation222().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky2RotInterp").setKey(new MFFloatObject(new MFFloat223().getArray())).setKeyValue(new MFRotationObject(new MFRotation224().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stop_r_pinky3RotInterp").setKey(new MFFloatObject(new MFFloat225().getArray())).setKeyValue(new MFRotationObject(new MFRotation226().getArray()))))
        .addChild(new GroupObject().setDEF("StandAnimation")
          .addChild(new TimeSensorObject().setDEF("StandTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat227().getArray())).setKeyValue(new MFRotationObject(new MFRotation228().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat229().getArray())).setKeyValue(new MFRotationObject(new MFRotation230().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat231().getArray())).setKeyValue(new MFRotationObject(new MFRotation232().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_hipRotInterp").setKey(new MFFloatObject(new MFFloat233().getArray())).setKeyValue(new MFRotationObject(new MFRotation234().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat235().getArray())).setKeyValue(new MFRotationObject(new MFRotation236().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat237().getArray())).setKeyValue(new MFRotationObject(new MFRotation238().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_hipRotInterp").setKey(new MFFloatObject(new MFFloat239().getArray())).setKeyValue(new MFRotationObject(new MFRotation240().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_wristRotInterp").setKey(new MFFloatObject(new MFFloat241().getArray())).setKeyValue(new MFRotationObject(new MFRotation242().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat243().getArray())).setKeyValue(new MFRotationObject(new MFRotation244().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat245().getArray())).setKeyValue(new MFRotationObject(new MFRotation246().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_wristRotInterp").setKey(new MFFloatObject(new MFFloat247().getArray())).setKeyValue(new MFRotationObject(new MFRotation248().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat249().getArray())).setKeyValue(new MFRotationObject(new MFRotation250().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat251().getArray())).setKeyValue(new MFRotationObject(new MFRotation252().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_headRotInterp").setKey(new MFFloatObject(new MFFloat253().getArray())).setKeyValue(new MFRotationObject(new MFRotation254().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_neckRotInterp").setKey(new MFFloatObject(new MFFloat255().getArray())).setKeyValue(new MFRotationObject(new MFRotation256().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_eyeballRotInterp").setKey(new MFFloatObject(new MFFloat257().getArray())).setKeyValue(new MFRotationObject(new MFRotation258().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_eyeballRotInterp").setKey(new MFFloatObject(new MFFloat259().getArray())).setKeyValue(new MFRotationObject(new MFRotation260().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_lower_bodyRotInterp").setKey(new MFFloatObject(new MFFloat261().getArray())).setKeyValue(new MFRotationObject(new MFRotation262().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_upper_bodyRotInterp").setKey(new MFFloatObject(new MFFloat263().getArray())).setKeyValue(new MFRotationObject(new MFRotation264().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_whole_bodyRotInterp").setKey(new MFFloatObject(new MFFloat265().getArray())).setKeyValue(new MFRotationObject(new MFRotation266().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Stand_whole_bodyTransInterp").setKey(new MFFloatObject(new MFFloat267().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f268().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat269().getArray())).setKeyValue(new MFRotationObject(new MFRotation270().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat271().getArray())).setKeyValue(new MFRotationObject(new MFRotation272().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat273().getArray())).setKeyValue(new MFRotationObject(new MFRotation274().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat275().getArray())).setKeyValue(new MFRotationObject(new MFRotation276().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat277().getArray())).setKeyValue(new MFRotationObject(new MFRotation278().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_vl5Yaw").setKey(new MFFloatObject(new MFFloat279().getArray())).setKeyValue(new MFRotationObject(new MFRotation280().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_vc6Yaw").setKey(new MFFloatObject(new MFFloat281().getArray())).setKeyValue(new MFRotationObject(new MFRotation282().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat283().getArray())).setKeyValue(new MFRotationObject(new MFRotation284().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat285().getArray())).setKeyValue(new MFRotationObject(new MFRotation286().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_index1Roll").setKey(new MFFloatObject(new MFFloat287().getArray())).setKeyValue(new MFRotationObject(new MFRotation288().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_index2Roll").setKey(new MFFloatObject(new MFFloat289().getArray())).setKeyValue(new MFRotationObject(new MFRotation290().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Stand_r_index3Roll").setKey(new MFFloatObject(new MFFloat291().getArray())).setKeyValue(new MFRotationObject(new MFRotation292().getArray()))))
        .addChild(new GroupObject().setDEF("PitchesAnimation")
          .addChild(new TimeSensorObject().setDEF("PitchTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat293().getArray())).setKeyValue(new MFRotationObject(new MFRotation294().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat295().getArray())).setKeyValue(new MFRotationObject(new MFRotation296().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat297().getArray())).setKeyValue(new MFRotationObject(new MFRotation298().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_hipRotInterp").setKey(new MFFloatObject(new MFFloat299().getArray())).setKeyValue(new MFRotationObject(new MFRotation300().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat301().getArray())).setKeyValue(new MFRotationObject(new MFRotation302().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat303().getArray())).setKeyValue(new MFRotationObject(new MFRotation304().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_hipRotInterp").setKey(new MFFloatObject(new MFFloat305().getArray())).setKeyValue(new MFRotationObject(new MFRotation306().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_wristRotInterp").setKey(new MFFloatObject(new MFFloat307().getArray())).setKeyValue(new MFRotationObject(new MFRotation308().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat309().getArray())).setKeyValue(new MFRotationObject(new MFRotation310().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat311().getArray())).setKeyValue(new MFRotationObject(new MFRotation312().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_wristRotInterp").setKey(new MFFloatObject(new MFFloat313().getArray())).setKeyValue(new MFRotationObject(new MFRotation314().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat315().getArray())).setKeyValue(new MFRotationObject(new MFRotation316().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat317().getArray())).setKeyValue(new MFRotationObject(new MFRotation318().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_headRotInterp").setKey(new MFFloatObject(new MFFloat319().getArray())).setKeyValue(new MFRotationObject(new MFRotation320().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_neckRotInterp").setKey(new MFFloatObject(new MFFloat321().getArray())).setKeyValue(new MFRotationObject(new MFRotation322().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_lower_bodyRotInterp").setKey(new MFFloatObject(new MFFloat323().getArray())).setKeyValue(new MFRotationObject(new MFRotation324().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_upper_bodyRotInterp").setKey(new MFFloatObject(new MFFloat325().getArray())).setKeyValue(new MFRotationObject(new MFRotation326().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitches_whole_bodyRotInterp").setKey(new MFFloatObject(new MFFloat327().getArray())).setKeyValue(new MFRotationObject(new MFRotation328().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Pitches_whole_bodyTransInterp").setKey(new MFFloatObject(new MFFloat329().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f330().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat331().getArray())).setKeyValue(new MFRotationObject(new MFRotation332().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat333().getArray())).setKeyValue(new MFRotationObject(new MFRotation334().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat335().getArray())).setKeyValue(new MFRotationObject(new MFRotation336().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat337().getArray())).setKeyValue(new MFRotationObject(new MFRotation338().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat339().getArray())).setKeyValue(new MFRotationObject(new MFRotation340().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_vl5Yaw").setKey(new MFFloatObject(new MFFloat341().getArray())).setKeyValue(new MFRotationObject(new MFRotation342().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_vc6Yaw").setKey(new MFFloatObject(new MFFloat343().getArray())).setKeyValue(new MFRotationObject(new MFRotation344().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat345().getArray())).setKeyValue(new MFRotationObject(new MFRotation346().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Pitch_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat347().getArray())).setKeyValue(new MFRotationObject(new MFRotation348().getArray()))))
        .addChild(new GroupObject().setDEF("YawsAnimation")
          .addChild(new TimeSensorObject().setDEF("YawTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat349().getArray())).setKeyValue(new MFRotationObject(new MFRotation350().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat351().getArray())).setKeyValue(new MFRotationObject(new MFRotation352().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat353().getArray())).setKeyValue(new MFRotationObject(new MFRotation354().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_hipRotInterp").setKey(new MFFloatObject(new MFFloat355().getArray())).setKeyValue(new MFRotationObject(new MFRotation356().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat357().getArray())).setKeyValue(new MFRotationObject(new MFRotation358().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat359().getArray())).setKeyValue(new MFRotationObject(new MFRotation360().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_hipRotInterp").setKey(new MFFloatObject(new MFFloat361().getArray())).setKeyValue(new MFRotationObject(new MFRotation362().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_wristRotInterp").setKey(new MFFloatObject(new MFFloat363().getArray())).setKeyValue(new MFRotationObject(new MFRotation364().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat365().getArray())).setKeyValue(new MFRotationObject(new MFRotation366().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat367().getArray())).setKeyValue(new MFRotationObject(new MFRotation368().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_wristRotInterp").setKey(new MFFloatObject(new MFFloat369().getArray())).setKeyValue(new MFRotationObject(new MFRotation370().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat371().getArray())).setKeyValue(new MFRotationObject(new MFRotation372().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat373().getArray())).setKeyValue(new MFRotationObject(new MFRotation374().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_headRotInterp").setKey(new MFFloatObject(new MFFloat375().getArray())).setKeyValue(new MFRotationObject(new MFRotation376().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_neckRotInterp").setKey(new MFFloatObject(new MFFloat377().getArray())).setKeyValue(new MFRotationObject(new MFRotation378().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_upper_bodyRotInterp").setKey(new MFFloatObject(new MFFloat379().getArray())).setKeyValue(new MFRotationObject(new MFRotation380().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_lower_bodyRotInterp").setKey(new MFFloatObject(new MFFloat381().getArray())).setKeyValue(new MFRotationObject(new MFRotation382().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaws_whole_bodyRotInterp").setKey(new MFFloatObject(new MFFloat383().getArray())).setKeyValue(new MFRotationObject(new MFRotation384().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Yaws_whole_bodyTransInterp").setKey(new MFFloatObject(new MFFloat385().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f386().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat387().getArray())).setKeyValue(new MFRotationObject(new MFRotation388().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat389().getArray())).setKeyValue(new MFRotationObject(new MFRotation390().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat391().getArray())).setKeyValue(new MFRotationObject(new MFRotation392().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat393().getArray())).setKeyValue(new MFRotationObject(new MFRotation394().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat395().getArray())).setKeyValue(new MFRotationObject(new MFRotation396().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_vl5Yaw").setKey(new MFFloatObject(new MFFloat397().getArray())).setKeyValue(new MFRotationObject(new MFRotation398().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_vc6Yaw").setKey(new MFFloatObject(new MFFloat399().getArray())).setKeyValue(new MFRotationObject(new MFRotation400().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat401().getArray())).setKeyValue(new MFRotationObject(new MFRotation402().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Yaw_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat403().getArray())).setKeyValue(new MFRotationObject(new MFRotation404().getArray()))))
        .addChild(new GroupObject().setDEF("RollsAnimation")
          .addChild(new TimeSensorObject().setDEF("RollTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat405().getArray())).setKeyValue(new MFRotationObject(new MFRotation406().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat407().getArray())).setKeyValue(new MFRotationObject(new MFRotation408().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat409().getArray())).setKeyValue(new MFRotationObject(new MFRotation410().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_hipRotInterp").setKey(new MFFloatObject(new MFFloat411().getArray())).setKeyValue(new MFRotationObject(new MFRotation412().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat413().getArray())).setKeyValue(new MFRotationObject(new MFRotation414().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat415().getArray())).setKeyValue(new MFRotationObject(new MFRotation416().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_hipRotInterp").setKey(new MFFloatObject(new MFFloat417().getArray())).setKeyValue(new MFRotationObject(new MFRotation418().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_wristRotInterp").setKey(new MFFloatObject(new MFFloat419().getArray())).setKeyValue(new MFRotationObject(new MFRotation420().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat421().getArray())).setKeyValue(new MFRotationObject(new MFRotation422().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat423().getArray())).setKeyValue(new MFRotationObject(new MFRotation424().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_wristRotInterp").setKey(new MFFloatObject(new MFFloat425().getArray())).setKeyValue(new MFRotationObject(new MFRotation426().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat427().getArray())).setKeyValue(new MFRotationObject(new MFRotation428().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat429().getArray())).setKeyValue(new MFRotationObject(new MFRotation430().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_headRotInterp").setKey(new MFFloatObject(new MFFloat431().getArray())).setKeyValue(new MFRotationObject(new MFRotation432().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_neckRotInterp").setKey(new MFFloatObject(new MFFloat433().getArray())).setKeyValue(new MFRotationObject(new MFRotation434().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_lower_bodyRotInterp").setKey(new MFFloatObject(new MFFloat435().getArray())).setKeyValue(new MFRotationObject(new MFRotation436().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_upper_bodyRotInterp").setKey(new MFFloatObject(new MFFloat437().getArray())).setKeyValue(new MFRotationObject(new MFRotation438().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Rolls_whole_bodyRotInterp").setKey(new MFFloatObject(new MFFloat439().getArray())).setKeyValue(new MFRotationObject(new MFRotation440().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Rolls_whole_bodyTransInterp").setKey(new MFFloatObject(new MFFloat441().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f442().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat443().getArray())).setKeyValue(new MFRotationObject(new MFRotation444().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat445().getArray())).setKeyValue(new MFRotationObject(new MFRotation446().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat447().getArray())).setKeyValue(new MFRotationObject(new MFRotation448().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat449().getArray())).setKeyValue(new MFRotationObject(new MFRotation450().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat451().getArray())).setKeyValue(new MFRotationObject(new MFRotation452().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_vl5Yaw").setKey(new MFFloatObject(new MFFloat453().getArray())).setKeyValue(new MFRotationObject(new MFRotation454().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_vc6Yaw").setKey(new MFFloatObject(new MFFloat455().getArray())).setKeyValue(new MFRotationObject(new MFRotation456().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat457().getArray())).setKeyValue(new MFRotationObject(new MFRotation458().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Roll_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat459().getArray())).setKeyValue(new MFRotationObject(new MFRotation460().getArray()))))
        .addChild(new GroupObject().setDEF("WalkAnimation")
          .addChild(new TimeSensorObject().setDEF("WalkTimer").setCycleInterval(1.73d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat461().getArray())).setKeyValue(new MFRotationObject(new MFRotation462().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat463().getArray())).setKeyValue(new MFRotationObject(new MFRotation464().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat465().getArray())).setKeyValue(new MFRotationObject(new MFRotation466().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_hipRotInterp").setKey(new MFFloatObject(new MFFloat467().getArray())).setKeyValue(new MFRotationObject(new MFRotation468().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat469().getArray())).setKeyValue(new MFRotationObject(new MFRotation470().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat471().getArray())).setKeyValue(new MFRotationObject(new MFRotation472().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_hipRotInterp").setKey(new MFFloatObject(new MFFloat473().getArray())).setKeyValue(new MFRotationObject(new MFRotation474().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_lower_bodyRotInterp").setKey(new MFFloatObject(new MFFloat475().getArray())).setKeyValue(new MFRotationObject(new MFRotation476().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_wristRotInterp").setKey(new MFFloatObject(new MFFloat477().getArray())).setKeyValue(new MFRotationObject(new MFRotation478().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat479().getArray())).setKeyValue(new MFRotationObject(new MFRotation480().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat481().getArray())).setKeyValue(new MFRotationObject(new MFRotation482().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_wristRotInterp").setKey(new MFFloatObject(new MFFloat483().getArray())).setKeyValue(new MFRotationObject(new MFRotation484().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat485().getArray())).setKeyValue(new MFRotationObject(new MFRotation486().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat487().getArray())).setKeyValue(new MFRotationObject(new MFRotation488().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_headRotInterp").setKey(new MFFloatObject(new MFFloat489().getArray())).setKeyValue(new MFRotationObject(new MFRotation490().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_neckRotInterp").setKey(new MFFloatObject(new MFFloat491().getArray())).setKeyValue(new MFRotationObject(new MFRotation492().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_upper_bodyRotInterp").setKey(new MFFloatObject(new MFFloat493().getArray())).setKeyValue(new MFRotationObject(new MFRotation494().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_whole_bodyRotInterp").setKey(new MFFloatObject(new MFFloat495().getArray())).setKeyValue(new MFRotationObject(new MFRotation496().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Walk_whole_bodyTranInterp").setKey(new MFFloatObject(new MFFloat497().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f498().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat499().getArray())).setKeyValue(new MFRotationObject(new MFRotation500().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat501().getArray())).setKeyValue(new MFRotationObject(new MFRotation502().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat503().getArray())).setKeyValue(new MFRotationObject(new MFRotation504().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat505().getArray())).setKeyValue(new MFRotationObject(new MFRotation506().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat507().getArray())).setKeyValue(new MFRotationObject(new MFRotation508().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_vl5Yaw").setKey(new MFFloatObject(new MFFloat509().getArray())).setKeyValue(new MFRotationObject(new MFRotation510().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_vc6Yaw").setKey(new MFFloatObject(new MFFloat511().getArray())).setKeyValue(new MFRotationObject(new MFRotation512().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat513().getArray())).setKeyValue(new MFRotationObject(new MFRotation514().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Walk_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat515().getArray())).setKeyValue(new MFRotationObject(new MFRotation516().getArray()))))
        .addChild(new GroupObject().setDEF("RunAnimation")
          .addChild(new TimeSensorObject().setDEF("RunTimer").setCycleInterval(0.9d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat517().getArray())).setKeyValue(new MFRotationObject(new MFRotation518().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_hipRotInterp_Run").setKey(new MFFloatObject(new MFFloat519().getArray())).setKeyValue(new MFRotationObject(new MFRotation520().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_kneeRotInterp_Run").setKey(new MFFloatObject(new MFFloat521().getArray())).setKeyValue(new MFRotationObject(new MFRotation522().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_ankleRotInterp_Run").setKey(new MFFloatObject(new MFFloat523().getArray())).setKeyValue(new MFRotationObject(new MFRotation524().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_hipRotInterp_Run").setKey(new MFFloatObject(new MFFloat525().getArray())).setKeyValue(new MFRotationObject(new MFRotation526().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_kneeRotInterp_Run").setKey(new MFFloatObject(new MFFloat527().getArray())).setKeyValue(new MFRotationObject(new MFRotation528().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_ankleRotInterp_Run").setKey(new MFFloatObject(new MFFloat529().getArray())).setKeyValue(new MFRotationObject(new MFRotation530().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_shoulderRotInterp_Run").setKey(new MFFloatObject(new MFFloat531().getArray())).setKeyValue(new MFRotationObject(new MFRotation532().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_elbowRotInterp_Run").setKey(new MFFloatObject(new MFFloat533().getArray())).setKeyValue(new MFRotationObject(new MFRotation534().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_wristRotInterp_Run").setKey(new MFFloatObject(new MFFloat535().getArray())).setKeyValue(new MFRotationObject(new MFRotation536().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_shoulderRotInterp_Run").setKey(new MFFloatObject(new MFFloat537().getArray())).setKeyValue(new MFRotationObject(new MFRotation538().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_elbowRotInterp_Run").setKey(new MFFloatObject(new MFFloat539().getArray())).setKeyValue(new MFRotationObject(new MFRotation540().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_wristRotInterp_Run").setKey(new MFFloatObject(new MFFloat541().getArray())).setKeyValue(new MFRotationObject(new MFRotation542().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_lower_bodyRotInterp_Run").setKey(new MFFloatObject(new MFFloat543().getArray())).setKeyValue(new MFRotationObject(new MFRotation544().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_headRotInterp_Run").setKey(new MFFloatObject(new MFFloat545().getArray())).setKeyValue(new MFRotationObject(new MFRotation546().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_neckRotInterp_Run").setKey(new MFFloatObject(new MFFloat547().getArray())).setKeyValue(new MFRotationObject(new MFRotation548().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_upper_bodyRotInterp_Run").setKey(new MFFloatObject(new MFFloat549().getArray())).setKeyValue(new MFRotationObject(new MFRotation550().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_whole_bodyRotInterp_Run").setKey(new MFFloatObject(new MFFloat551().getArray())).setKeyValue(new MFRotationObject(new MFRotation552().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Run_whole_bodyTranInterp_Run").setKey(new MFFloatObject(new MFFloat553().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f554().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat555().getArray())).setKeyValue(new MFRotationObject(new MFRotation556().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat557().getArray())).setKeyValue(new MFRotationObject(new MFRotation558().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat559().getArray())).setKeyValue(new MFRotationObject(new MFRotation560().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat561().getArray())).setKeyValue(new MFRotationObject(new MFRotation562().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat563().getArray())).setKeyValue(new MFRotationObject(new MFRotation564().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_vl5Yaw").setKey(new MFFloatObject(new MFFloat565().getArray())).setKeyValue(new MFRotationObject(new MFRotation566().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_vc6Yaw").setKey(new MFFloatObject(new MFFloat567().getArray())).setKeyValue(new MFRotationObject(new MFRotation568().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat569().getArray())).setKeyValue(new MFRotationObject(new MFRotation570().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Run_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat571().getArray())).setKeyValue(new MFRotationObject(new MFRotation572().getArray()))))
        .addChild(new GroupObject().setDEF("JumpAnimation")
          .addChild(new TimeSensorObject().setDEF("JumpTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat573().getArray())).setKeyValue(new MFRotationObject(new MFRotation574().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_ankleRotInterp").setKey(new MFFloatObject(new MFFloat575().getArray())).setKeyValue(new MFRotationObject(new MFRotation576().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_kneeRotInterp").setKey(new MFFloatObject(new MFFloat577().getArray())).setKeyValue(new MFRotationObject(new MFRotation578().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_hipRotInterp").setKey(new MFFloatObject(new MFFloat579().getArray())).setKeyValue(new MFRotationObject(new MFRotation580().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_ankleRotInterp").setKey(new MFFloatObject(new MFFloat581().getArray())).setKeyValue(new MFRotationObject(new MFRotation582().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_kneeRotInterp").setKey(new MFFloatObject(new MFFloat583().getArray())).setKeyValue(new MFRotationObject(new MFRotation584().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_hipRotInterp").setKey(new MFFloatObject(new MFFloat585().getArray())).setKeyValue(new MFRotationObject(new MFRotation586().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_lower_bodyRotInterp").setKey(new MFFloatObject(new MFFloat587().getArray())).setKeyValue(new MFRotationObject(new MFRotation588().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_wristRotInterp").setKey(new MFFloatObject(new MFFloat589().getArray())).setKeyValue(new MFRotationObject(new MFRotation590().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_elbowRotInterp").setKey(new MFFloatObject(new MFFloat591().getArray())).setKeyValue(new MFRotationObject(new MFRotation592().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat593().getArray())).setKeyValue(new MFRotationObject(new MFRotation594().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_wristRotInterp").setKey(new MFFloatObject(new MFFloat595().getArray())).setKeyValue(new MFRotationObject(new MFRotation596().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_elbowRotInterp").setKey(new MFFloatObject(new MFFloat597().getArray())).setKeyValue(new MFRotationObject(new MFRotation598().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_shoulderRotInterp").setKey(new MFFloatObject(new MFFloat599().getArray())).setKeyValue(new MFRotationObject(new MFRotation600().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_headRotInterp").setKey(new MFFloatObject(new MFFloat601().getArray())).setKeyValue(new MFRotationObject(new MFRotation602().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_neckRotInterp").setKey(new MFFloatObject(new MFFloat603().getArray())).setKeyValue(new MFRotationObject(new MFRotation604().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_upper_bodyRotInterp").setKey(new MFFloatObject(new MFFloat605().getArray())).setKeyValue(new MFRotationObject(new MFRotation606().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_whole_bodyRotInterp").setKey(new MFFloatObject(new MFFloat607().getArray())).setKeyValue(new MFRotationObject(new MFRotation608().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Jump_whole_bodyTranInterp").setKey(new MFFloatObject(new MFFloat609().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f610().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat611().getArray())).setKeyValue(new MFRotationObject(new MFRotation612().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat613().getArray())).setKeyValue(new MFRotationObject(new MFRotation614().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat615().getArray())).setKeyValue(new MFRotationObject(new MFRotation616().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat617().getArray())).setKeyValue(new MFRotationObject(new MFRotation618().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat619().getArray())).setKeyValue(new MFRotationObject(new MFRotation620().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_vl5Yaw").setKey(new MFFloatObject(new MFFloat621().getArray())).setKeyValue(new MFRotationObject(new MFRotation622().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_vc6Yaw").setKey(new MFFloatObject(new MFFloat623().getArray())).setKeyValue(new MFRotationObject(new MFRotation624().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat625().getArray())).setKeyValue(new MFRotationObject(new MFRotation626().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Jump_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat627().getArray())).setKeyValue(new MFRotationObject(new MFRotation628().getArray()))))
        .addChild(new GroupObject().setDEF("KickAnimation")
          .addChild(new TimeSensorObject().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat629().getArray())).setKeyValue(new MFRotationObject(new MFRotation630().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat631().getArray())).setKeyValue(new MFRotationObject(new MFRotation632().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_shoulderRoll").setKey(new MFFloatObject(new MFFloat633().getArray())).setKeyValue(new MFRotationObject(new MFRotation634().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_ForeArmPitch").setKey(new MFFloatObject(new MFFloat635().getArray())).setKeyValue(new MFRotationObject(new MFRotation636().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_wristRoll").setKey(new MFFloatObject(new MFFloat637().getArray())).setKeyValue(new MFRotationObject(new MFRotation638().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_thumb1Pitch").setKey(new MFFloatObject(new MFFloat639().getArray())).setKeyValue(new MFRotationObject(new MFRotation640().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_sternoclavicularRoll").setKey(new MFFloatObject(new MFFloat641().getArray())).setKeyValue(new MFRotationObject(new MFRotation642().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_acromioclavicularRoll").setKey(new MFFloatObject(new MFFloat643().getArray())).setKeyValue(new MFRotationObject(new MFRotation644().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_shoulderRoll").setKey(new MFFloatObject(new MFFloat645().getArray())).setKeyValue(new MFRotationObject(new MFRotation646().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_ForeArmPitch").setKey(new MFFloatObject(new MFFloat647().getArray())).setKeyValue(new MFRotationObject(new MFRotation648().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_wristRoll").setKey(new MFFloatObject(new MFFloat649().getArray())).setKeyValue(new MFRotationObject(new MFRotation650().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_thumb1Pitch").setKey(new MFFloatObject(new MFFloat651().getArray())).setKeyValue(new MFRotationObject(new MFRotation652().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_hipPitch").setKey(new MFFloatObject(new MFFloat653().getArray())).setKeyValue(new MFRotationObject(new MFRotation654().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_kneePitch").setKey(new MFFloatObject(new MFFloat655().getArray())).setKeyValue(new MFRotationObject(new MFRotation656().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_hipPitch").setKey(new MFFloatObject(new MFFloat657().getArray())).setKeyValue(new MFRotationObject(new MFRotation658().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_l_kneePitch").setKey(new MFFloatObject(new MFFloat659().getArray())).setKeyValue(new MFRotationObject(new MFRotation660().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_anklePitch").setKey(new MFFloatObject(new MFFloat661().getArray())).setKeyValue(new MFRotationObject(new MFRotation662().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_r_metatarsalPitch").setKey(new MFFloatObject(new MFFloat663().getArray())).setKeyValue(new MFRotationObject(new MFRotation664().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_sacroiliacYaw").setKey(new MFFloatObject(new MFFloat665().getArray())).setKeyValue(new MFRotationObject(new MFRotation666().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_vl5Yaw").setKey(new MFFloatObject(new MFFloat667().getArray())).setKeyValue(new MFRotationObject(new MFRotation668().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_vc6Yaw").setKey(new MFFloatObject(new MFFloat669().getArray())).setKeyValue(new MFRotationObject(new MFRotation670().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_lower_bodyRotInterp").setKey(new MFFloatObject(new MFFloat671().getArray())).setKeyValue(new MFRotationObject(new MFRotation672().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_upper_bodyRotInterp").setKey(new MFFloatObject(new MFFloat673().getArray())).setKeyValue(new MFRotationObject(new MFRotation674().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_whole_bodyRotInterp").setKey(new MFFloatObject(new MFFloat675().getArray())).setKeyValue(new MFRotationObject(new MFRotation676().getArray())))
          .addChild(new PositionInterpolatorObject().setDEF("Kick_whole_bodyTransInterp").setKey(new MFFloatObject(new MFFloat677().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f678().getArray())))
          .addChild(new OrientationInterpolatorObject().setDEF("Kick_neckRotInterp").setKey(new MFFloatObject(new MFFloat679().getArray())).setKeyValue(new MFRotationObject(new MFRotation680().getArray()))))
        .addChild(new GroupObject().setDEF("Interface")
          .addChild(new TransformObject().setDEF("CoordinateSystemFloor").setScale(new float[] {0.1f,0.1f,0.1f})
            .addChild(new ShapeObject().setDEF("AxisLinesShape")
              .addComments(new CommentsBlock("RGB lines showing XYZ axes"))
              .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32681().getArray())).setColorPerVertex(false).setCoordIndex(new MFInt32Object(new MFInt32682().getArray()))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f683().getArray())))
                .setColor(new ColorObject().setColor(new MFColorObject(new MFColor684().getArray()))))))
          .addChild(new ProximitySensorObject().setDEF("HudProx").setSize(new float[] {50f,50f,50f}))
          .addChild(new TransformObject().setDEF("HudXform").setRotation(new float[] {0f,1f,0f,0.78f}).setTranslation(new float[] {2f,1f,2f})
            .addChild(new TransformObject().setScale(new float[] {0.02f,0.02f,0.02f}).setTranslation(new float[] {-0.48f,-0.01f,-0.75f})
              .addChild(new TransformObject().setDEF("Stand_Text").setTranslation(new float[] {0f,-0.9f,0f})
                .addChild(new TouchSensorObject().setDEF("Stand_Touch"))
                .addChild(new ShapeObject().setDEF("StandText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("text_color").setAmbientIntensity(1f).setDiffuseColor(new float[] {0.819f,0.521f,0.169f}).setEmissiveColor(new float[] {0.819f,0.521f,0.169f}).setSpecularColor(new float[] {0.819f,0.521f,0.169f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString685().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString686().getArray())))))
                .addChild(new ShapeObject().setDEF("Stand_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("Clear").setAmbientIntensity(1f).setDiffuseColor(new float[] {0f,0.5f,0f}).setEmissiveColor(new float[] {0f,0.5f,0f}).setTransparency(0.8f)))
                  .setGeometry(new IndexedFaceSetObject().setDEF("Backing").setCoordIndex(new MFInt32Object(new MFInt32687().getArray()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f688().getArray()))))))
              .addChild(new TransformObject().setDEF("Pitch_Text").setTranslation(new float[] {0f,-2.4f,0f})
                .addChild(new TouchSensorObject().setDEF("Pitch_Touch"))
                .addChild(new ShapeObject().setDEF("PitchText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString689().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString690().getArray())))))
                .addChild(new ShapeObject().setDEF("Pitch_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Yaw_Text").setTranslation(new float[] {0f,-3.8f,0f})
                .addChild(new TouchSensorObject().setDEF("Yaw_Touch"))
                .addChild(new ShapeObject().setDEF("YawText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString691().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString692().getArray())))))
                .addChild(new ShapeObject().setDEF("Yaw_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Roll_Text").setTranslation(new float[] {0f,-5.2f,0f})
                .addChild(new TouchSensorObject().setDEF("Roll_Touch"))
                .addChild(new ShapeObject().setDEF("RollText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString693().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString694().getArray())))))
                .addChild(new ShapeObject().setDEF("Roll_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Walk_Text").setTranslation(new float[] {0f,-6.6f,0f})
                .addChild(new TouchSensorObject().setDEF("Walk_Touch"))
                .addChild(new ShapeObject().setDEF("WalkText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString695().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString696().getArray())))))
                .addChild(new ShapeObject().setDEF("Walk_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Run_Text").setTranslation(new float[] {0f,-8f,0f})
                .addChild(new TouchSensorObject().setDEF("Run_Touch"))
                .addChild(new ShapeObject().setDEF("RunText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString697().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString698().getArray())))))
                .addChild(new ShapeObject().setDEF("Run_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Jump_Text").setTranslation(new float[] {0f,-9.4f,0f})
                .addChild(new TouchSensorObject().setDEF("Jump_Touch"))
                .addChild(new ShapeObject().setDEF("JumpText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString699().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString700().getArray())))))
                .addChild(new ShapeObject().setDEF("Jump_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Kick_Text").setTranslation(new float[] {0f,-10.8f,0f})
                .addChild(new TouchSensorObject().setDEF("Kick_Touch"))
                .addChild(new ShapeObject().setDEF("KickText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString701().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString702().getArray())))))
                .addChild(new ShapeObject().setDEF("Kick_Back")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSetObject().setUSE("Backing"))))
              .addChild(new TransformObject().setDEF("Stop_Text").setTranslation(new float[] {0f,0.4f,0f})
                .addChild(new TouchSensorObject().setDEF("Stop_Touch"))
                .addChild(new ShapeObject().setDEF("StopText")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("text_color")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString703().getArray()))
                    .setFontStyle(new FontStyleObject().setFamily(new MFStringObject(new MFString704().getArray())))))
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
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.6f,0.6f,0.6f});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.75f,0.75f,0.75f});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"});
  }
}
protected class MFInt324 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11});
  }
}
protected class MFFloat5 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt326 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43});
  }
}
protected class MFFloat7 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f});
  }
}
protected class MFInt328 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63});
  }
}
protected class MFFloat9 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {64,65,66,67,68,69,70,71});
  }
}
protected class MFFloat11 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3212 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {72,73,74,75,76,77,78,79});
  }
}
protected class MFFloat13 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111});
  }
}
protected class MFFloat15 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f});
  }
}
protected class MFInt3216 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131});
  }
}
protected class MFFloat17 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3218 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {132,133,134,135,136,137,138,139});
  }
}
protected class MFFloat19 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3220 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {140,141,142,143,144,145,146,147});
  }
}
protected class MFFloat21 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3222 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167});
  }
}
protected class MFFloat23 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3224 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {168,169,170,171,172,173,174,175});
  }
}
protected class MFFloat25 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3226 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {176,177,178,179,180,181,182,183});
  }
}
protected class MFFloat27 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3228 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {184,185,186,187,188,189,190,191});
  }
}
protected class MFFloat29 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3230 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {192,193,194,195,196,197,198,199});
  }
}
protected class MFFloat31 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3232 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {200,201,202,203,204,205,206,207});
  }
}
protected class MFFloat33 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3234 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {208,209,210,211,212,213,214,215});
  }
}
protected class MFFloat35 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3236 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {216,217,218,219,220,221,222,223});
  }
}
protected class MFFloat37 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFVec3f38 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.05f,1f,0.05f,0.05f,1f,0.05f,0.03f,0.97f,-0.1f,-0.03f,0.97f,-0.1f,0.03f,0.94f,-0.075f,-0.03f,0.94f,-0.075f,0f,0.92f,0f,0f,0.94f,0.03f,-0.12f,1.06f,0.05f,0.12f,1.06f,0.05f,0.12f,1.06f,-0.1f,-0.12f,1.06f,-0.1f,0.0456f,0.9364f,0.05f,0.1456f,0.9364f,0.05f,0.1456f,0.9364f,-0.05f,0.0456f,0.9364f,-0.05f,0.0456f,0.9f,0.05f,0.1456f,0.9f,0.05f,0.1456f,0.9f,-0.05f,0.0456f,0.9f,-0.05f,0.0456f,0.8f,0.05f,0.1456f,0.8f,0.05f,0.1456f,0.8f,-0.05f,0.0456f,0.8f,-0.05f,0.0456f,0.7f,0.05f,0.1456f,0.7f,0.05f,0.1456f,0.7f,-0.05f,0.0456f,0.7f,-0.05f,0.0456f,0.6f,0.05f,0.1456f,0.6f,0.05f,0.1456f,0.6f,-0.05f,0.0456f,0.6f,-0.05f,0.0456f,0.55f,0.05f,0.1456f,0.55f,0.05f,0.1456f,0.55f,-0.05f,0.0456f,0.55f,-0.05f,0.0456f,0.52f,0.05f,0.1456f,0.52f,0.05f,0.1456f,0.52f,-0.05f,0.0456f,0.52f,-0.05f,0.0456f,0.5f,0.05f,0.1456f,0.5f,0.05f,0.1456f,0.5f,-0.05f,0.0456f,0.5f,-0.05f,0.0454f,0.43f,0.045f,0.1454f,0.43f,0.045f,0.1454f,0.43f,-0.055f,0.0454f,0.43f,-0.055f,0.0452f,0.36f,0.04f,0.1452f,0.36f,0.04f,0.1452f,0.36f,-0.06f,0.0452f,0.36f,-0.06f,0.045f,0.29f,0.035f,0.145f,0.29f,0.035f,0.145f,0.29f,-0.065f,0.045f,0.29f,-0.065f,0.0448f,0.21f,0.03f,0.1448f,0.21f,0.03f,0.1448f,0.21f,-0.07f,0.0448f,0.21f,-0.07f,0.0446f,0.1262f,0.025f,0.1446f,0.1262f,0.025f,0.1446f,0.1262f,-0.075f,0.0446f,0.1262f,-0.075f,0.0446f,0.0762f,0.025f,0.1446f,0.0762f,0.025f,0.1446f,0f,-0.075f,0.0446f,0f,-0.075f,0.0446f,0.0562f,0.057f,0.1446f,0.0562f,0.057f,0.1446f,0f,0.057f,0.0446f,0f,0.057f,0.0446f,0.0562f,0.087f,0.1446f,0.0562f,0.087f,0.1446f,0f,0.087f,0.0446f,0f,0.087f,0.0446f,0.0562f,0.1924f,0.1446f,0.0562f,0.1924f,0.1446f,0f,0.1924f,0.0446f,0f,0.1924f,-0.0456f,0.9364f,0.05f,-0.1456f,0.9364f,0.05f,-0.1456f,0.9364f,-0.05f,-0.0456f,0.9364f,-0.05f,-0.0456f,0.9f,0.05f,-0.1456f,0.9f,0.05f,-0.1456f,0.9f,-0.05f,-0.0456f,0.9f,-0.05f,-0.0456f,0.8f,0.05f,-0.1456f,0.8f,0.05f,-0.1456f,0.8f,-0.05f,-0.0456f,0.8f,-0.05f,-0.0456f,0.7f,0.05f,-0.1456f,0.7f,0.05f,-0.1456f,0.7f,-0.05f,-0.0456f,0.7f,-0.05f,-0.0456f,0.6f,0.05f,-0.1456f,0.6f,0.05f,-0.1456f,0.6f,-0.05f,-0.0456f,0.6f,-0.05f,-0.0456f,0.55f,0.05f,-0.1456f,0.55f,0.05f,-0.1456f,0.55f,-0.05f,-0.0456f,0.55f,-0.05f,-0.0456f,0.52f,0.05f,-0.1456f,0.52f,0.05f,-0.1456f,0.52f,-0.05f,-0.0456f,0.52f,-0.05f,-0.0456f,0.5f,0.05f,-0.1456f,0.5f,0.05f,-0.1456f,0.5f,-0.05f,-0.0456f,0.5f,-0.05f,-0.0454f,0.43f,0.045f,-0.1454f,0.43f,0.045f,-0.1454f,0.43f,-0.055f,-0.0454f,0.43f,-0.055f,-0.0452f,0.36f,0.04f,-0.1452f,0.36f,0.04f,-0.1452f,0.36f,-0.06f,-0.0452f,0.36f,-0.06f,-0.045f,0.29f,0.035f,-0.145f,0.29f,0.035f,-0.145f,0.29f,-0.065f,-0.045f,0.29f,-0.065f,-0.0448f,0.21f,0.03f,-0.1448f,0.21f,0.03f,-0.1448f,0.21f,-0.07f,-0.0448f,0.21f,-0.07f,-0.0446f,0.1262f,0.025f,-0.1446f,0.1262f,0.025f,-0.1446f,0.1262f,-0.075f,-0.0446f,0.1262f,-0.075f,-0.0446f,0.0762f,0.025f,-0.1446f,0.0762f,0.025f,-0.1446f,0f,-0.075f,-0.0446f,0f,-0.075f,-0.0446f,0.0562f,0.057f,-0.1446f,0.0562f,0.057f,-0.1446f,0f,0.057f,-0.0446f,0f,0.057f,-0.0446f,0.0562f,0.087f,-0.1446f,0.0562f,0.087f,-0.1446f,0f,0.087f,-0.0446f,0f,0.087f,-0.0446f,0.0562f,0.1924f,-0.1446f,0.0562f,0.1924f,-0.1446f,0f,0.1924f,-0.0446f,0f,0.1924f,-0.12f,1.1f,0.05f,0.12f,1.1f,0.05f,0.12f,1.1f,-0.1f,-0.12f,1.1f,-0.1f,-0.14f,1.42f,0.045f,0.14f,1.42f,0.045f,0.14f,1.42f,-0.09f,-0.14f,1.42f,-0.09f,-0.24f,1.52f,0.035f,0.24f,1.52f,0.035f,0.24f,1.52f,-0.09f,-0.24f,1.52f,-0.09f,-0.05f,1.56f,0.03f,0.05f,1.56f,0.03f,0.05f,1.56f,-0.06f,-0.05f,1.56f,-0.06f,-0.05f,1.6f,0.06f,0.05f,1.6f,0.06f,0.05f,1.62f,-0.03f,-0.05f,1.62f,-0.03f,-0.07f,1.777f,0.13f,0.07f,1.777f,0.13f,0.07f,1.777f,-0.03f,-0.07f,1.777f,-0.03f,-0.07f,1.6f,0.13f,0.07f,1.6f,0.13f,0.07f,1.66f,-0.03f,-0.07f,1.66f,-0.03f,0.16f,1.42f,0.015f,0.24f,1.5f,0.015f,0.24f,1.5f,-0.075f,0.16f,1.42f,-0.075f,0.17f,1.18f,-0.025f,0.23f,1.18f,-0.025f,0.23f,1.18f,-0.085f,0.17f,1.18f,-0.085f,0.17f,1.14f,-0.025f,0.23f,1.14f,-0.025f,0.23f,1.14f,-0.085f,0.17f,1.14f,-0.085f,0.18f,0.91f,-0.05f,0.22f,0.91f,-0.05f,0.22f,0.91f,-0.09f,0.18f,0.91f,-0.09f,0.18f,0.87f,-0.02f,0.22f,0.87f,-0.02f,0.22f,0.87f,-0.1f,0.18f,0.87f,-0.1f,0.18f,0.6976f,-0.02f,0.22f,0.6976f,-0.02f,0.22f,0.6976f,-0.1f,0.18f,0.6976f,-0.1f,-0.16f,1.42f,0.015f,-0.24f,1.5f,0.015f,-0.24f,1.5f,-0.075f,-0.16f,1.42f,-0.075f,-0.17f,1.18f,-0.025f,-0.23f,1.18f,-0.025f,-0.23f,1.18f,-0.085f,-0.17f,1.18f,-0.085f,-0.17f,1.14f,-0.025f,-0.23f,1.14f,-0.025f,-0.23f,1.14f,-0.085f,-0.17f,1.14f,-0.085f,-0.18f,0.91f,-0.05f,-0.22f,0.91f,-0.05f,-0.22f,0.91f,-0.09f,-0.18f,0.91f,-0.09f,-0.18f,0.87f,-0.02f,-0.22f,0.87f,-0.02f,-0.22f,0.87f,-0.1f,-0.18f,0.87f,-0.1f,-0.18f,0.6976f,-0.02f,-0.22f,0.6976f,-0.02f,-0.22f,0.6976f,-0.1f,-0.18f,0.6976f,-0.1f});
  }
}
protected class MFInt3239 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1});
  }
}
protected class MFInt3240 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1});
  }
}
protected class MFInt3241 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1});
  }
}
protected class MFInt3242 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1});
  }
}
protected class MFInt3243 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
  }
}
protected class MFInt3244 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1});
  }
}
protected class MFInt3245 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1});
  }
}
protected class MFInt3246 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1});
  }
}
protected class MFFloat47 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f48 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat49 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation50 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat51 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation52 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat53 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation54 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat55 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation56 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat57 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation58 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat59 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation60 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat61 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation62 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat63 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation64 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat65 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation66 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat67 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation68 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat69 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation70 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat71 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation72 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat73 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation74 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat75 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation76 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat77 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation78 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat79 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation80 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat81 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation82 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat83 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation84 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat85 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation86 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat87 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation88 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat89 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation90 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat91 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation92 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat93 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation94 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat95 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation96 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat97 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation98 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat99 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation100 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat101 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation102 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat103 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation104 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat105 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation106 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat107 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation108 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat109 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation110 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat111 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation112 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat113 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation114 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat115 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation116 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat117 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation118 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat119 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation120 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat121 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation122 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat123 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation124 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat125 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation126 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat127 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation128 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat129 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation130 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat131 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation132 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat133 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation134 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat135 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation136 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat137 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation138 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat139 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation140 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat141 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation142 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat143 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation144 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat145 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation146 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat147 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation148 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat149 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation150 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat151 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation152 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat153 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation154 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat155 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation156 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
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
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation160 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat161 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation162 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat163 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation164 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
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
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation172 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat173 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation174 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat175 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation176 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
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
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation224 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
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
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation228 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.015f,1f,0f,0f,0.17f,-1f,0f,0f,0.025f,1f,0f,0f,0.01f,1f,0f,0f,0f});
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
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation232 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
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
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,-1f,0.25f,0f,0f,1f,0f});
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
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation252 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat253 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation254 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat255 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation256 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat257 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,0.7f,1f});
  }
}
protected class MFRotation258 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f});
  }
}
protected class MFFloat259 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,0.7f,1f});
  }
}
protected class MFRotation260 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f});
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
protected class MFVec3f268 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat269 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation270 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat271 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation272 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat273 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation274 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat275 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation276 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat277 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation278 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat279 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation280 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat281 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation282 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0f,0f,-1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat283 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation284 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat285 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation286 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,0.1f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat287 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation288 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0.1f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat289 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation290 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0.4f,0f,0f,1f,0.32f,0f,0f,1f,0.25f,0f,0f,1f,0.2f,0f,0f,1f,0f});
  }
}
protected class MFFloat291 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation292 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0.35f,0f,0f,1f,0.2f,0f,0f,1f,0f});
  }
}
protected class MFFloat293 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation294 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat295 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation296 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
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
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation300 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat301 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation302 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat303 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation304 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat305 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation306 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
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
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation312 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat313 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation314 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat315 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation316 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat317 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation318 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat319 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation320 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat321 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.55f,1f});
  }
}
protected class MFRotation322 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,0.55f,-1f,0f,0f,1.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat323 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation324 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat325 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation326 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat327 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation328 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat329 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f});
  }
}
protected class MFVec3f330 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f});
  }
}
protected class MFFloat331 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation332 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat333 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation334 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat335 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation336 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat337 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation338 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat339 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation340 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat341 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation342 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat343 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation344 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat345 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation346 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat347 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation348 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat349 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation350 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat351 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation352 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat353 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation354 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat355 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation356 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat357 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation358 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat359 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation360 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat361 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation362 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat363 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation364 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat365 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation366 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat367 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation368 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat369 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation370 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat371 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation372 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat373 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation374 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat375 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation376 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat377 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation378 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat379 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation380 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat381 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation382 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat383 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation384 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat385 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f386 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat387 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation388 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat389 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation390 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat391 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation392 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat393 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation394 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat395 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation396 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,0f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat397 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation398 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat399 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation400 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat401 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation402 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat403 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation404 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat405 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation406 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat407 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation408 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat409 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation410 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat411 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation412 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,-1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat413 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation414 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat415 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation416 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat417 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation418 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat419 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation420 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat421 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation422 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat423 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation424 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,-1f,3f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat425 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation426 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat427 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation428 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat429 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation430 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,3f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat431 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation432 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat433 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation434 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,1.25f,0f,0f,1f,0f,0f,0f,-1f,1.25f,0f,0f,1f,0f});
  }
}
protected class MFFloat435 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation436 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat437 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation438 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat439 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation440 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat441 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f});
  }
}
protected class MFVec3f442 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f});
  }
}
protected class MFFloat443 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation444 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat445 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation446 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat447 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation448 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat449 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation450 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat451 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation452 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat453 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation454 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat455 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation456 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat457 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation458 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat459 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation460 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat461 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation462 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat463 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.125f,0.2083f,0.375f,0.4583f,0.5f,0.6667f,0.75f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation464 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.3533f,-1f,0f,0f,0.1072f,1f,0f,0f,0.2612f,1f,0f,0f,0.1268f,-1f,0f,0f,0.01793f,-1f,0f,0f,0.05824f,-1f,0f,0f,0.2398f,-1f,0f,0f,0.35f,-1f,0f,0f,0.3322f,0f,0f,1f,0f});
  }
}
protected class MFFloat465 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation466 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.8573f,1f,0f,0f,0.8926f,1f,0f,0f,0.5351f,1f,0f,0f,0.1756f,1f,0f,0f,0.1194f,1f,0f,0f,0.3153f,1f,0f,0f,0.09354f,1f,0f,0f,0.08558f,1f,0f,0f,0.2475f,1f,0f,0f,0.8573f});
  }
}
protected class MFFloat467 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation468 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-0.5831f,0.03511f,0.8116f,0.1481f,-0.995f,0.02296f,0.09674f,0.4683f,-1f,0.00192f,0.007964f,0.4732f,-0.998f,-0.0158f,-0.06102f,0.5079f,-0.9911f,-0.03541f,-0.1286f,0.5419f,-0.9131f,-0.06243f,-0.403f,0.3361f,-0.4306f,-0.07962f,-0.899f,0.07038f,1f,0f,0f,0.2571f,0.9891f,-0.02805f,0.1444f,0.3879f,-0.5831f,0.03511f,0.8116f,0.1481f});
  }
}
protected class MFFloat469 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.125f,0.2083f,0.375f,0.6667f,0.9167f,1f});
  }
}
protected class MFRotation470 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,0.06714f,-1f,0f,0f,0.2152f,-1f,0f,0f,0.3184f,-1f,0f,0f,0.4717f,-1f,0f,0f,0.2912f,1f,0f,0f,0.1222f,-1f,0f,0f,0.06714f});
  }
}
protected class MFFloat471 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2083f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation472 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.3226f,1f,0f,0f,0.1556f,1f,0f,0f,0.08678f,1f,0f,0f,0.8751f,1f,0f,0f,1.131f,1f,0f,0f,0.09961f,1f,0f,0f,0.3942f,1f,0f,0f,0.3226f});
  }
}
protected class MFFloat473 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation474 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-0.873f,0.06094f,0.484f,0.2865f,0.9963f,-0.01057f,0.08481f,0.2488f,0.9965f,0.01591f,-0.08222f,0.3836f,-0.7018f,-0.03223f,-0.7117f,0.1289f,-1f,0f,0f,0.5518f,-0.9964f,0.02231f,0.0817f,0.5351f,-0.9809f,0.04912f,0.1881f,0.5204f,-0.873f,0.06094f,0.484f,0.2865f});
  }
}
protected class MFFloat475 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation476 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,-1f,0.1056f,0f,0f,1f,0.09018f,0f,0f,-1f,0.1056f});
  }
}
protected class MFFloat477 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation478 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-0.8129f,0.4759f,-0.3357f,0.1346f,0.1533f,-0.9878f,0.02582f,0.3902f,-0.5701f,0.7604f,-0.311f,0.366f,-0.8129f,0.4759f,-0.3357f,0.1346f});
  }
}
protected class MFFloat479 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation480 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,0.411508f,-1f,0f,0f,0.0925011f,-1f,0f,0f,0.572568f,-1f,0f,0f,0.411508f});
  }
}
protected class MFFloat481 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation482 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,0.09346f,1f,0f,0f,0.3197f,-1f,0f,0f,0.1564f,-1f,0f,0f,0.09346f});
  }
}
protected class MFFloat483 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation484 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,-1f,0f,0.461076f,-0.330195f,-0.927451f,0.175516f,0.538852f,0.0327774f,-0.999314f,-0.0172185f,0.492033f,0f,-1f,0f,0.461076f});
  }
}
protected class MFFloat485 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation486 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,0.0659878f,-1f,0f,0f,0.488383f,-1f,0f,0f,0.0177536f,-1f,0f,0f,0.0659878f});
  }
}
protected class MFFloat487 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation488 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.1189f,-1f,0f,0f,0.1861f,1f,0f,0f,0.3357f,1f,0f,0f,0.1189f});
  }
}
protected class MFFloat489 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.4167f,0.5f,0.5833f,0.6667f,0.75f,0.8333f,0.9167f,1f});
  }
}
protected class MFRotation490 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,-1f,0f,0.08642f,0f,1f,0f,0.1825f,0f,1f,0f,0.1505f,0f,1f,0f,0.1053f,0f,1f,0f,0.04391f,0f,-1f,0f,0.03119f,0f,-1f,0f,0.07936f,0f,-1f,0f,0.1616f,0f,-1f,0f,0.155f,0f,-1f,0f,0.08642f});
  }
}
protected class MFFloat491 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFRotation492 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat493 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2083f,0.375f,0.75f,0.8333f,1f});
  }
}
protected class MFRotation494 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.0826f,-0.01972f,-0.5974f,0.8017f,0.08231f,0.009296f,-0.9648f,0.2627f,0.1734f,-0.01238f,0.9549f,-0.2968f,0.08732f,-0.008125f,0.9691f,-0.2463f,0.158f,0f,1f,0f,0.0826f});
  }
}
protected class MFFloat495 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFRotation496 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat497 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.04167f,0.125f,0.1667f,0.2083f,0.25f,0.2917f,0.375f,0.4583f,0.5f,0.5417f,0.5833f,0.625f,0.7083f,0.75f,0.7917f,0.875f,0.9167f,1f});
  }
}
protected class MFVec3f498 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.00928f,0f,0f,-0.003858f,0f,0f,-0.008847f,0f,0f,-0.01486f,0f,0f,-0.02641f,0f,0f,-0.03934f,0f,0f,-0.0502f,0f,0f,-0.07469f,0f,0f,-0.02732f,0f,0f,-0.01608f,0f,0f,-0.01129f,0f,0f,-0.005819f,0f,0f,-0.002004f,0f,0f,-0.002579f,0f,0f,-0.0143f,0f,0f,-0.03799f,0f,0f,-0.05648f,0f,0f,-0.045f,0f,0f,-0.00928f,0f});
  }
}
protected class MFFloat499 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation500 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat501 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation502 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat503 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation504 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat505 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation506 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat507 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation508 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat509 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation510 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat511 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation512 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat513 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation514 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat515 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation516 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat517 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation518 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat519 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation520 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-0.99f,0.033f,0.04f,1.42f,-0.99f,0.1328f,0.067f,0.42f,0.99f,0.014f,0.009f,0.9f,-0.99f,0.0703f,0.05f,0.7f,-0.99f,0.033f,0.04f,1.42f});
  }
}
protected class MFFloat521 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation522 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f});
  }
}
protected class MFFloat523 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.22f,0.3f,0.4f,1f});
  }
}
protected class MFRotation524 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.0374f,-1f,0f,0f,0.1037f,-1f,0f,0f,0.4328f,1f,0f,0f,0.1929f,1f,0f,0f,0.03574f});
  }
}
protected class MFFloat525 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation526 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0.99f,-0.014f,0.009f,0.9f,-0.99f,-0.0703f,-0.05f,0.7f,-0.99f,-0.033f,0.04f,1.42f,-0.99f,-0.1328f,-0.067f,0.42f,0.99f,-0.014f,0.009f,0.9f});
  }
}
protected class MFFloat527 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation528 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f});
  }
}
protected class MFFloat529 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,0.71f,0.8f,0.82f,1f});
  }
}
protected class MFRotation530 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.2323f,-1f,0f,0f,0.07843f,-1f,0f,0f,0.32f,-1f,0f,0f,0.374f,-1f,0f,0f,0.3478f,1f,0f,0f,0.2323f});
  }
}
protected class MFFloat531 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation532 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0.99f,-0.074f,0.25f,1.5f,0.99f,-0.092f,0.44f,0.3f,-0.99f,0.136f,0.25f,0.85f,0.99f,-0.081f,0.38f,0.4f,0.99f,-0.074f,0.25f,1.5f});
  }
}
protected class MFFloat533 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation534 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,1.85f,-0.99f,-0.19f,0.18f,1.35f,-1f,0f,0f,0.975f,-0.99f,-0.09f,-0.02f,1.55f,-1f,0f,0f,1.85f});
  }
}
protected class MFFloat535 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation536 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-0.25f,-1f,0.08f,0.14f,0.25f,1f,0.08f,0.14f,0f,0f,1f,0f,-0.25f,1f,0.08f,-0.14f,-0.25f,1f,0.08f,0.14f});
  }
}
protected class MFFloat537 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation538 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-0.99f,-0.136f,-0.25f,0.85f,0.99f,0.081f,-0.38f,0.4f,0.99f,0.074f,-0.25f,1.5f,0.99f,0.081f,-0.38f,0.4f,-0.99f,-0.136f,-0.25f,0.85f});
  }
}
protected class MFFloat539 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation540 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-1f,0f,0f,0.975f,-0.99f,0.09f,0.02f,1.55f,-1f,0f,0f,1.85f,-0.99f,0.19f,-0.18f,1.35f,-1f,0f,0f,0.975f});
  }
}
protected class MFFloat541 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFRotation542 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {-0.917742f,-0.237244f,-0.318536f,0.214273f,-0.917742f,-0.237244f,-0.318536f,0.214273f});
  }
}
protected class MFFloat543 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation544 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,-1f,0f,0.125f,0f,0f,1f,0f,0f,1f,0f,0.125f,0f,0f,1f,0f,0f,-1f,0f,0.125f});
  }
}
protected class MFFloat545 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation546 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.08f,1f,0f,0f,0.12f,1f,0f,0f,0.3f,1f,0f,0f,0.3f,1f,0f,0f,0.08f});
  }
}
protected class MFFloat547 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation548 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0.7f,0f,0f,0.4f,-0.7f,-0.7f,0f,0.4f,0f,0f,0f,0.4f,-0.7f,0.7f,0f,0.4f,0.7f,0f,0f,0.4f});
  }
}
protected class MFFloat549 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2545f,0.4909f,0.7636f,1f});
  }
}
protected class MFRotation550 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0.97f,0.65f,0.086f,0.5f,0.9f,0.003f,-0.02f,0.38f,0.95f,-0.68f,-0.086f,0.5f,0.9f,0.004f,-0.025f,0.4f,0.97f,0.65f,0.086f,0.5f});
  }
}
protected class MFFloat551 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation552 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0.06f,1f,0f,0f,0.167f,1f,0f,0f,0.06f,1f,0f,0f,0.168f,1f,0f,0f,0.06f});
  }
}
protected class MFFloat553 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.22f,0.3f,0.31f,0.5f,0.69f,0.7f,0.78f,1f});
  }
}
protected class MFVec3f554 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f});
  }
}
protected class MFFloat555 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation556 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat557 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation558 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat559 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation560 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat561 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation562 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat563 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation564 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat565 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation566 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat567 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation568 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat569 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation570 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat571 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation572 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat573 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation574 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat575 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.15f,0.25f,0.28f,0.32f,0.35f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFRotation576 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.3527f,-1f,0f,0f,0.3038f,-1f,0f,0f,0.07964f,1f,0f,0f,1.3f,1f,0f,0f,0.6509f,1f,0f,0f,0.3001f,-1f,0f,0f,0.2087f,-1f,0f,0f,0.3756f,-1f,0f,0f,0.3279f,-1f,0f,0f,0.1193f,0f,0f,1f,0f});
  }
}
protected class MFFloat577 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.25f,0.3f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation578 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,2.5f,1f,0f,0f,1.7f,0f,0f,1f,0f,1f,0f,0f,0.9507f,1f,0f,0f,0.5845f,1f,0f,0f,0.9054f,0f,0f,1f,0f});
  }
}
protected class MFFloat579 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.18f,0.24f,0.26f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation580 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.63f,-1f,0f,0f,1.7f,-1f,0f,0f,1.55f,-1f,0f,0f,0.8943f,-1f,0f,0f,0.3698f,0f,0f,1f,0f,-1f,0f,0f,0.4963f,-1f,0f,0f,0.3829f,-1f,0f,0f,0.5169f,0f,0f,1f,0f});
  }
}
protected class MFFloat581 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFRotation582 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.625f,-1f,0f,0f,0.625f,-1f,0f,0f,0.3364f,-1f,0f,0f,0.2742f,-1f,0f,0f,0.05078f,1f,0f,0f,0.2833f,1f,0f,0f,0.6667f,1f,0f,0f,0.2833f,-1f,0f,0f,0.2108f,-1f,0f,0f,0.375f,-1f,0f,0f,0.3146f,-1f,0f,0f,0.1174f,0f,0f,1f,0f});
  }
}
protected class MFFloat583 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation584 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,2.047f,1f,0f,0f,2.047f,0f,0f,1f,0f,1f,0f,0f,1.566f,1f,0f,0f,0.5913f,1f,0f,0f,0.9235f,0f,0f,1f,0f});
  }
}
protected class MFFloat585 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation586 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,4.349f,1f,0f,0f,4.349f,1f,0f,0f,4.615f,-1f,0f,0f,0.9136f,-1f,0f,0f,0.3614f,0f,0f,1f,0f,-1f,0f,0f,0.7869f,-1f,0f,0f,0.3918f,-1f,0f,0f,0.5433f,0f,0f,1f,0f});
  }
}
protected class MFFloat587 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation588 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,0.1892f,1f,0f,0f,0.1892f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat589 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f});
  }
}
protected class MFRotation590 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.00222418f,0.99801f,-0.0630095f,1.46072f,0f,1f,0f,0.497349f,0f,0f,1f,0f});
  }
}
protected class MFFloat591 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f});
  }
}
protected class MFRotation592 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.5855f,-1f,0f,0f,0.5852f,0f,0f,1f,0f});
  }
}
protected class MFFloat593 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation594 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0.9992f,0.02042f,0.03558f,4.688f,0.9992f,0.02042f,0.03558f,4.688f,0.9989f,-0.04623f,0.005159f,4.079f,-0.8687f,-0.2525f,-0.4261f,1.501f,-0.941f,-0.2893f,-0.1754f,0.4788f,0f,0f,1f,0f});
  }
}
protected class MFFloat595 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.48f,0.52f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation596 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.00364942f,0.999901f,0.0135896f,4.5822f,0f,-1f,0f,0.655922f,-0.00050618f,-0.999999f,0.0012782f,1.28397f,0f,0f,1f,0f});
  }
}
protected class MFFloat597 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.58f,0.72f,1f});
  }
}
protected class MFRotation598 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.13f,-1f,0f,0f,1.7f,-1f,0f,0f,1.7f,-1f,0f,0f,0.4f,0f,0f,1f,0f});
  }
}
protected class MFFloat599 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation600 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-0.9987f,0.02554f,0.04498f,1.57f,-0.9987f,0.02554f,0.04498f,1.57f,1f,0.0004113f,0.003055f,4.114f,-0.8413f,0.3238f,0.4329f,1.453f,-0.877f,0.4198f,0.2337f,0.6009f,0f,0f,1f,0f});
  }
}
protected class MFFloat601 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation602 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.3216f,1f,0f,0f,0.06503f,0f,0f,1f,0f});
  }
}
protected class MFFloat603 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation604 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.1942f,-1f,0f,0f,0.1942f,0f,0f,1f,0f,1f,0f,0f,0.2284f,0f,0f,1f,0f});
  }
}
protected class MFFloat605 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.22f,0.28f,0.34f,0.71f,0.88f,1f});
  }
}
protected class MFRotation606 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,1.05f,1f,0f,0f,1.051f,-1f,0f,0f,0.257f,1f,0f,0f,0.2171f,1f,0f,0f,0.3465f,0f,0f,1f,0f});
  }
}
protected class MFFloat607 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,1f});
  }
}
protected class MFRotation608 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,0.3273f,1f,0f,0f,0.3273f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat609 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.04f,0.07f,0.11f,0.15f,0.19f,0.22f,0.25f,0.27f,0.31f,0.33f,0.35f,0.38f,0.53f,0.544f,0.76f,0.8f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFVec3f610 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,-0.01264f,-0.01289f,0f,-0.04712f,-0.03738f,-0.0003345f,-0.1049f,-0.05353f,-0.0005712f,-0.1892f,-0.06561f,-0.0008233f,-0.286f,-0.06276f,-0.0009591f,-0.3795f,-0.05148f,-0.00106f,-0.4484f,-0.03656f,-0.00106f,-0.4484f,-0.03656f,-0.001122f,-0.25f,-0.1499f,-0.0008616f,-0.05f,-0.06358f,-0.0005128f,0.15f,-0.05488f,0.0004779f,0.55f,0.02732f,0.0001728f,1.385f,0.006873f,0.00017f,1.395f,0.0069f,0f,0.35f,0.02148f,0f,-0.01299f,-0.01057f,0f,-0.06932f,-0.01064f,0.0001365f,-0.1037f,-0.005059f,0.0001279f,-0.07198f,-0.007596f,0.000141f,-0.01626f,-0.004935f,0f,0f,0f});
  }
}
protected class MFFloat611 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation612 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat613 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation614 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat615 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation616 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat617 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation618 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat619 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation620 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat621 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation622 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,-0.1f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,0.6f,0f,1f,0f,0.1f,0f,1f,0f,0f});
  }
}
protected class MFFloat623 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation624 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0.8f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0.6f,0f,-1f,0f,0.8f,0f,1f,0f,0f});
  }
}
protected class MFFloat625 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation626 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat627 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation628 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat629 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation630 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat631 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation632 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat633 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation634 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,1.76f,-0.25f,0f,1f,1.76f,0f,0f,1f,1.256f,0f,0f,1f,0.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat635 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation636 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,-1f,0.25f,0f,2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat637 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation638 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat639 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation640 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat641 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation642 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat643 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation644 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat645 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation646 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,-1.76f,0.25f,0f,1f,-1.76f,0f,0f,1f,-1.256f,0f,0f,1f,-0.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat647 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation648 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,1f,0.25f,0f,-2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat649 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation650 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,-0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat651 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation652 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat653 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f});
  }
}
protected class MFRotation654 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0.9f,-1f,0f,0f,1.75f,-1f,0f,0f,2.25f,-1f,0f,0f,2f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat655 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation656 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,1.95f,1f,0f,0f,1.75f,-1f,0f,0f,0.28f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat657 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f});
  }
}
protected class MFRotation658 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat659 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation660 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat661 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation662 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.9f,-1f,0f,0f,0.95f,1f,0f,0f,0.75f,-1f,0f,0f,0.05f,1f,0f,0f,0f});
  }
}
protected class MFFloat663 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation664 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat665 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation666 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat667 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation668 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat669 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation670 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat671 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation672 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat673 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation674 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat675 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation676 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat677 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f678 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat679 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.55f,1f});
  }
}
protected class MFRotation680 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f,1f,0f,0f,0.7f,1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
protected class MFInt32681 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2});
  }
}
protected class MFInt32682 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f683 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f});
  }
}
protected class MFColor684 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,0f,0f,0f,0.6f,0f,0f,0f,1f});
  }
}
protected class MFString685 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Stand"});
  }
}
protected class MFString686 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFInt32687 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFVec3f688 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.2f,-0.25f,-0.01f,3f,-0.25f,-0.01f,3f,1f,-0.01f,-0.2f,1f,-0.01f});
  }
}
protected class MFString689 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Pitch"});
  }
}
protected class MFString690 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString691 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Yaw"});
  }
}
protected class MFString692 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString693 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Roll"});
  }
}
protected class MFString694 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString695 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Walk"});
  }
}
protected class MFString696 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString697 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Run"});
  }
}
protected class MFString698 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString699 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Jump"});
  }
}
protected class MFString700 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString701 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Kick"});
  }
}
protected class MFString702 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString703 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Default"});
  }
}
protected class MFString704 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
}
