package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.HumanoidAnimation;
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
public class DiamondManLOA_1 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new DiamondManLOA_1().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/HumanoidAnimation/DiamondManLOA_1.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("H-Anim").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("DiamondManLOA_1.x3d"))
        .addMeta(new metaObject().setName("description").setContent("H-Anim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy."))
        .addMeta(new metaObject().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new metaObject().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new metaObject().setName("created").setContent("12 November 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new metaObject().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new metaObject().setName("warning").setContent("Still needs comments on CAESAR feature points inserted"))
        .addMeta(new metaObject().setName("TODO").setContent("can X3dTidy sort top-level USE nodes by node type?"))
        .addMeta(new metaObject().setName("reference").setContent("H-Anim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"))
        .addMeta(new metaObject().setName("reference").setContent("http://H-Anim.org/Specifications/H-Anim1.1/appendices.html#appendixa"))
        .addMeta(new metaObject().setName("reference").setContent("http://H-Anim.org/Specifications/H-Anim1.1/JointCenters1_1_LOA1.wrl"))
        .addMeta(new metaObject().setName("reference").setContent("http://H-Anim.org/Specifications/H-Anim1.1/JointCenters1_1_LOA1-diamond.wrl"))
        .addMeta(new metaObject().setName("reference").setContent("http://ece.uwaterloo.ca/~h-anim"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
        .addMeta(new metaObject().setName("Image").setContent("humanoid_landmark_locations.gif"))
        .addMeta(new metaObject().setName("warning").setContent("need to fix HAnimHumanoid metadata form"))
        .addMeta(new metaObject().setName("Image").setContent("http://H-Anim.org/Specifications/H-Anim1.1/humanoid_landmark_locations.gif"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/DiamondManLOA_1.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("HANIM 1.1 Default Joint Centers, LOA1"))
        .addChild(new NavigationInfoObject().setSpeed(1.5f))
        .addChild(new ViewpointObject().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Diamond Man, LOA 1").setPosition(new float[] {0f,1f,3f}))
        .addChild(new HAnimHumanoidObject().setName("humanoid").setDEF("hanim_humanoid").setInfo(new MFStringObject(new MFString1().getArray())).setVersion("2.0")
          .addJoints(new HAnimJointObject().setName("humanoid_root").setDEF("hanim_HumanoidRoot").setCenter(new float[] {0f,0.824f,0.0277f})
            .addChild(new HAnimJointObject().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f})
              .addChild(new HAnimSegmentObject().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new TransformObject().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new ShapeObject().setDEF("DiamondShape")
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt322().getArray())).setCreaseAngle(0.5f)
                      .setCoord(new CoordinateObject().setDEF("points").setPoint(new MFVec3fObject(new MFVec3f3().getArray()))))
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f}))))))
              .addChild(new HAnimJointObject().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f})
                .addChild(new HAnimSegmentObject().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new TransformObject().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new ShapeObject().setUSE("DiamondShape")))
                  .addChild(new HAnimSiteObject().setName("l_knee_crease").setDEF("hanim_l_knee_crease").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f}))
                  .addChild(new HAnimSiteObject().setName("l_femoral_lateral_epicn").setDEF("hanim_l_femoral_lateral_epicn").setTranslation(new float[] {0.1598f,0.4967f,0.0297f}))
                  .addChild(new HAnimSiteObject().setName("l_femoral_lateral_epicn").setDEF("hanim_l_femoral_medial_epicn").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})))
                .addChild(new HAnimJointObject().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f})
                  .addChild(new HAnimSegmentObject().setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new TransformObject().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new ShapeObject().setUSE("DiamondShape"))))
                  .addChild(new HAnimJointObject().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.1101f,0.0656f,-0.0736f})
                    .addChild(new HAnimSegmentObject().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                      .addChild(new TransformObject().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                        .addChild(new ShapeObject().setUSE("DiamondShape")))
                      .addChild(new HAnimSiteObject().setName("l_lateral_malleolus").setDEF("hanim_l_lateral_malleolus").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f}))
                      .addChild(new HAnimSiteObject().setName("l_medial_malleolus").setDEF("hanim_l_medial_malleolus").setTranslation(new float[] {0.089f,0.0716f,-0.0881f}))
                      .addChild(new HAnimSiteObject().setName("l_sphyrion").setDEF("hanim_l_sphyrion").setTranslation(new float[] {0.089f,0.0575f,-0.0943f}))
                      .addChild(new HAnimSiteObject().setName("l_calcaneous_post").setDEF("hanim_l_calcaneous_post").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})))
                    .addChild(new HAnimJointObject().setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1086f,0.0001f,0.0368f})
                      .addChild(new HAnimSegmentObject().setName("l_middistal").setDEF("hanim_l_middistal")
                        .addChild(new HAnimSiteObject().setName("l_middistal_tip").setDEF("hanim_l_middistal_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f}))
                        .addChild(new HAnimSiteObject().setName("l_metatarsal_pha5").setDEF("hanim_l_metatarsal_pha5").setTranslation(new float[] {0.1825f,0.007f,0.0928f}))
                        .addChild(new HAnimSiteObject().setName("l_metatarsal_pha1").setDEF("hanim_l_metatarsal_pha1").setTranslation(new float[] {0.0816f,0.0232f,0.0106f}))
                        .addChild(new HAnimSiteObject().setName("l_digit2").setDEF("hanim_l_digit2").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})))))))
              .addChild(new HAnimJointObject().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f})
                .addChild(new HAnimSegmentObject().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new TransformObject().setTranslation(new float[] {-0.095f,0.9171f,0.0029f})
                    .addChild(new ShapeObject().setUSE("DiamondShape")))
                  .addChild(new HAnimSiteObject().setName("r_knee_crease").setDEF("hanim_r_knee_crease").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f}))
                  .addChild(new HAnimSiteObject().setName("r_femoral_lateral_epicn").setDEF("hanim_r_femoral_lateral_epicn").setTranslation(new float[] {-0.1421f,0.4992f,0.031f}))
                  .addChild(new HAnimSiteObject().setName("r_femoral_lateral_epicn").setDEF("hanim_r_femoral_medial_epicn").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})))
                .addChild(new HAnimJointObject().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f})
                  .addChild(new HAnimSegmentObject().setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.0867f,0.4913f,0.0318f})
                      .addChild(new ShapeObject().setUSE("DiamondShape"))))
                  .addChild(new HAnimJointObject().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f})
                    .addChild(new HAnimSegmentObject().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.0801f,0.0712f,-0.0766f})
                        .addChild(new ShapeObject().setUSE("DiamondShape")))
                      .addChild(new HAnimSiteObject().setName("r_lateral_malleolus").setDEF("hanim_r_lateral_malleolus").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f}))
                      .addChild(new HAnimSiteObject().setName("r_medial_malleolus").setDEF("hanim_r_medial_malleolus").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f}))
                      .addChild(new HAnimSiteObject().setName("r_sphyrion").setDEF("hanim_r_sphyrion").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f}))
                      .addChild(new HAnimSiteObject().setName("r_calcaneous_post").setDEF("hanim_r_calcaneous_post").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})))
                    .addChild(new HAnimJointObject().setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.0801f,0f,0.0368f})
                      .addChild(new HAnimSegmentObject().setName("r_middistal").setDEF("hanim_r_middistal")
                        .addChild(new HAnimSiteObject().setName("r_middistal_tip").setDEF("hanim_r_middistal_tip").setTranslation(new float[] {-0.1043f,-0.0227f,0.145f}))
                        .addChild(new HAnimSiteObject().setName("r_metatarsal_pha5").setDEF("hanim_r_metatarsal_pha5").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f}))
                        .addChild(new HAnimSiteObject().setName("r_metatarsal_pha1").setDEF("hanim_r_metatarsal_pha1").setTranslation(new float[] {-0.0521f,0.026f,0.0127f}))
                        .addChild(new HAnimSiteObject().setName("r_digit2").setDEF("hanim_r_digit2").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f}))))))))
            .addChild(new HAnimJointObject().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {-0.00405f,1.07f,-0.0275f})
              .addChild(new HAnimSegmentObject().setName("l1").setDEF("hanim_c7"))
              .addChild(new HAnimJointObject().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f})
                .addChild(new HAnimSegmentObject().setName("l_upperarm").setDEF("hanim_l_upperarm")
                  .addChild(new TransformObject().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                    .addChild(new ShapeObject().setUSE("DiamondShape")))
                  .addChild(new TransformObject().setDEF("l_upperarm_adjust").setCenter(new float[] {0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.119f}).setTranslation(new float[] {0.2029f,1.4376f,-0.0387f}))
                  .addChild(new HAnimSiteObject().setName("l_humeral_lateral_epicn").setDEF("hanim_l_humeral_lateral_epicn").setTranslation(new float[] {0.228f,1.1482f,-0.11f})))
                .addChild(new HAnimJointObject().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f})
                  .addChild(new HAnimSegmentObject().setName("l_forearm").setDEF("hanim_l_forearm")
                    .addChild(new TransformObject().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                      .addChild(new ShapeObject().setUSE("DiamondShape")))
                    .addChild(new TransformObject().setDEF("l_forearm_adjust").setCenter(new float[] {0.198f,0.961f,-0.0405f}).setRotation(new float[] {-1f,0f,0f,0.1f}).setTranslation(new float[] {0.2014f,1.1357f,-0.0682f}))
                    .addChild(new HAnimSiteObject().setName("l_radial_styloid").setDEF("hanim_l_radial_styloid").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f}))
                    .addChild(new HAnimSiteObject().setName("l_olecranon").setDEF("hanim_l_olecranon").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f}))
                    .addChild(new HAnimSiteObject().setName("l_humeral_medial_epicn").setDEF("hanim_l_humeral_medial_epicn").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f}))
                    .addChild(new HAnimSiteObject().setName("l_radiale").setDEF("hanim_l_radiale").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})))
                  .addChild(new HAnimJointObject().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1984f,0.8663f,-0.0583f})
                    .addChild(new HAnimSegmentObject().setName("l_hand").setDEF("hanim_l_hand")
                      .addChild(new TransformObject().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                        .addChild(new ShapeObject().setUSE("DiamondShape")))
                      .addChild(new TransformObject().setDEF("l_hand_adjust").setCenter(new float[] {0.213f,0.811f,-0.0338f}).setRotation(new float[] {-0.06361f,-0.9967f,0.04988f,1.333f}).setTranslation(new float[] {0.1984f,0.8663f,-0.0583f}))
                      .addChild(new HAnimSiteObject().setName("l_hand_tip").setDEF("hanim_l_hand_tip").setTranslation(new float[] {0.208f,0.6731f,-0.0491f}))
                      .addChild(new HAnimSiteObject().setName("l_metacarpal_pha2").setDEF("hanim_l_metacarpal_pha2").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f}))
                      .addChild(new HAnimSiteObject().setName("l_dactylion").setDEF("hanim_l_dactylion").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f}))
                      .addChild(new HAnimSiteObject().setName("l_ulnar_styloid").setDEF("hanim_l_ulnar_styloid").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f}))
                      .addChild(new HAnimSiteObject().setName("l_metacarpal_pha5").setDEF("hanim_l_metacarpal_pha5").setTranslation(new float[] {0.1929f,0.786f,-0.1122f}))))))
              .addChild(new HAnimJointObject().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f})
                .addChild(new HAnimSegmentObject().setName("r_upperarm").setDEF("hanim_r_upperarm")
                  .addChild(new TransformObject().setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f})
                    .addChild(new ShapeObject().setUSE("DiamondShape")))
                  .addChild(new TransformObject().setDEF("r_upperarm_adjust").setCenter(new float[] {-0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.0836f}).setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f}))
                  .addChild(new HAnimSiteObject().setName("r_humeral_lateral_epicn").setDEF("hanim_r_humeral_lateral_epicn").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})))
                .addChild(new HAnimJointObject().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f})
                  .addChild(new HAnimSegmentObject().setName("r_forearm").setDEF("hanim_r_forearm")
                    .addChild(new TransformObject().setTranslation(new float[] {-0.1949f,1.1388f,-0.062f})
                      .addChild(new ShapeObject().setUSE("DiamondShape")))
                    .addChild(new TransformObject().setDEF("r_forearm_adjust").setCenter(new float[] {-0.198f,0.961f,-0.0397f}).setRotation(new float[] {-1f,0f,0f,0.1254f}).setTranslation(new float[] {-0.1949f,1.1388f,-0.062f}))
                    .addChild(new HAnimSiteObject().setName("r_radial_styloid").setDEF("hanim_r_radial_styloid").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f}))
                    .addChild(new HAnimSiteObject().setName("r_olecranon").setDEF("hanim_r_olecranon").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f}))
                    .addChild(new HAnimSiteObject().setName("r_humeral_medial_epicn").setDEF("hanim_r_humeral_medial_epicn").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f}))
                    .addChild(new HAnimSiteObject().setName("r_radiale").setDEF("hanim_r_radiale").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})))
                  .addChild(new HAnimJointObject().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f})
                    .addChild(new HAnimSegmentObject().setName("r_hand").setDEF("hanim_r_hand")
                      .addChild(new TransformObject().setTranslation(new float[] {-0.1959f,0.8694f,-0.0521f})
                        .addChild(new ShapeObject().setUSE("DiamondShape")))
                      .addChild(new TransformObject().setDEF("r_hand_adjust").setCenter(new float[] {-0.217f,0.811f,-0.0338f}).setRotation(new float[] {-0.09024f,0.994f,-0.0624f,1.216f}))
                      .addChild(new HAnimSiteObject().setName("r_hand_tip").setDEF("hanim_r_hand_tip").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f}))
                      .addChild(new HAnimSiteObject().setName("r_metacarpal_pha2").setDEF("hanim_r_metacarpal_pha2").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f}))
                      .addChild(new HAnimSiteObject().setName("r_dactylion").setDEF("hanim_r_dactylion").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f}))
                      .addChild(new HAnimSiteObject().setName("r_ulnar_styloid").setDEF("hanim_r_ulnar_styloid").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f}))
                      .addChild(new HAnimSiteObject().setName("r_metacarpal_pha5").setDEF("hanim_r_metacarpal_pha5").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f}))))))
              .addChild(new HAnimJointObject().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0f,1.43f,-0.0458f})
                .addChild(new HAnimSegmentObject().setName("c4").setDEF("hanim_c4"))))
            .addChild(new HAnimJointObject().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f})
              .addChild(new HAnimJointObject().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f})
                .addChild(new HAnimSegmentObject().setName("skull").setDEF("hanim_skull")
                  .addChild(new TransformObject().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                    .addChild(new ShapeObject().setUSE("DiamondShape")))
                  .addChild(new HAnimSiteObject().setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {0.005f,1.7504f,0.0055f}))
                  .addChild(new HAnimSiteObject().setName("sellion").setDEF("hanim_sellion").setTranslation(new float[] {0.0058f,1.6316f,0.0852f}))
                  .addChild(new HAnimSiteObject().setName("r_infraorbitale").setDEF("hanim_r_infraorbitale").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f}))
                  .addChild(new HAnimSiteObject().setName("l_infraorbitale").setDEF("hanim_l_infraorbitale").setTranslation(new float[] {0.0341f,1.6171f,0.0752f}))
                  .addChild(new HAnimSiteObject().setName("supramenton").setDEF("hanim_supramenton").setTranslation(new float[] {0.0061f,1.541f,0.0805f}))
                  .addChild(new HAnimSiteObject().setName("r_tragion").setDEF("hanim_r_tragion").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f}))
                  .addChild(new HAnimSiteObject().setName("r_gonion").setDEF("hanim_r_gonion").setTranslation(new float[] {-0.052f,1.5529f,0.0347f}))
                  .addChild(new HAnimSiteObject().setName("l_tragion").setDEF("hanim_l_tragion").setTranslation(new float[] {0.0739f,1.6348f,0.0282f}))
                  .addChild(new HAnimSiteObject().setName("l_gonion").setDEF("hanim_l_gonion").setTranslation(new float[] {0.0631f,1.553f,0.033f}))
                  .addChild(new HAnimSiteObject().setName("nuchale").setDEF("hanim_nuchale").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f}))))))
          .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJointObject().setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJointObject().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJointObject().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJointObject().setUSE("hanim_l_ankle"))
          .addJoints(new HAnimJointObject().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJointObject().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJointObject().setUSE("hanim_r_ankle"))
          .addJoints(new HAnimJointObject().setUSE("hanim_vl1"))
          .addJoints(new HAnimJointObject().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJointObject().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJointObject().setUSE("hanim_l_wrist"))
          .addJoints(new HAnimJointObject().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJointObject().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJointObject().setUSE("hanim_r_wrist"))
          .addJoints(new HAnimJointObject().setUSE("hanim_vc4"))
          .addJoints(new HAnimJointObject().setUSE("hanim_skullbase"))
          .addJoints(new HAnimJointObject().setUSE("hanim_l_midtarsal"))
          .addJoints(new HAnimJointObject().setUSE("hanim_r_midtarsal"))
          .addJoints(new HAnimJointObject().setUSE("hanim_vl5"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_l_hindfoot"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_r_hindfoot"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_c7"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_l_hand"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_r_upperarm"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_r_hand"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_c4"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_skull"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_l_middistal"))
          .addSegments(new HAnimSegmentObject().setUSE("hanim_r_middistal"))
          .addViewpoints(new HAnimSiteObject().setName("DiamondManLOA_1_view")
            .addChild(new ViewpointObject().setDEF("InclinedView").setDescription("Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,2.06f}))
            .addChild(new ViewpointObject().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0f,0.854f,2.57665f}))
            .addChild(new ViewpointObject().setDEF("SideView").setDescription("Side View").setOrientation(new float[] {0f,1f,0f,1.57079f}).setPosition(new float[] {2.5929f,0.854f,0f}))
            .addChild(new ViewpointObject().setDEF("TopView").setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57079f}).setPosition(new float[] {0f,3.4495f,0f})))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_knee_crease"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_femoral_lateral_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_femoral_medial_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_lateral_malleolus"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_medial_malleolus"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_sphyrion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_calcaneous_post"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_middistal_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_metatarsal_pha5"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_metatarsal_pha1"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_digit2"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_knee_crease"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_femoral_lateral_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_femoral_medial_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_lateral_malleolus"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_medial_malleolus"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_sphyrion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_calcaneous_post"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_middistal_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_metatarsal_pha5"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_metatarsal_pha1"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_digit2"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_humeral_lateral_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_radial_styloid"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_olecranon"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_humeral_medial_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_radiale"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_hand_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_metacarpal_pha2"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_dactylion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_ulnar_styloid"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_metacarpal_pha5"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_humeral_lateral_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_radial_styloid"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_olecranon"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_humeral_medial_epicn"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_radiale"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_hand_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_metacarpal_pha2"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_dactylion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_ulnar_styloid"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_metacarpal_pha5"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_skull_tip"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_sellion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_infraorbitale"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_infraorbitale"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_supramenton"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_tragion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_r_gonion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_tragion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_l_gonion"))
          .addViewpoints(new HAnimSiteObject().setUSE("hanim_nuchale"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~h-anim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org","authorName=Matthew T. Beitler","copyright=Copyright 1999 Matthew T. Beitler","humanoidVersion=JointCenters 1.1 LOA1","usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
}
