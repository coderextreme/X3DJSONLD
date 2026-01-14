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
public class DiamondManLOA_1 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new DiamondManLOA_1().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/DiamondManLOA_1.new.java.x3d");
    model.toFileJSON("../data/DiamondManLOA_1.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("DiamondManLOA_1.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy."))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new meta().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new meta().setName("created").setContent("12 November 2001"))
        .addMeta(new meta().setName("modified").setContent("Tue, 09 Sep 2025 19:37:54 GMT"))
        .addMeta(new meta().setName("reference").setContent("../Templates/DiamondManLOA_1.x3d"))
        .addMeta(new meta().setName("reference").setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://ece.uwaterloo.ca/~HAnim"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
        .addMeta(new meta().setName("error").setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new meta().setName("Image").setContent("humanoid_landmark_locations.gif"))
        .addMeta(new meta().setName("Image").setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
        .addMeta(new meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new meta().setName("warning").setContent("Still needs comments on CAESAR feature points inserted"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HANIM 1.1 Default Joint Centers, LOA1").setInfo(new MFString0().getArray()))
        .addChild(new NavigationInfo().setSpeed(1.5f ))
        .addChild(new Viewpoint().setDescription("Diamond Man, LOA 1").setPosition(new float[] {0f ,1f ,3f }).setCenterOfRotation(new float[] {0f ,1f ,0f }))
        .addChild(new HAnimHumanoid().setDEF("hanim_humanoid").setName("humanoid").setVersion("1.0")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorEmail"))
            .setMetadata(new MetadataString().setName("authorName"))
            .setMetadata(new MetadataString().setName("copyright"))
            .setMetadata(new MetadataString().setName("humanoidVersion"))
            .setMetadata(new MetadataString().setName("usageRestrictions")))
          .addSkeleton(new HAnimJoint("hanim_humanoid").setDEF("hanim_HumanoidRoot").setName("humanoid_root").setCenter(new float[] {0f ,0.824f ,0.0277f })
            .addChild(new HAnimJoint("hanim_HumanoidRoot").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f ,0.9149f ,0.0016f })
              .addChild(new HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new Transform().setTranslation(new float[] {0f ,0.9149f ,0.0016f })
                  .addChild(new Shape().setDEF("DiamondShape")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0f })))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt321().getArray())
                      .setCoord(new Coordinate().setDEF("points").setPoint(new MFVec3f2().getArray()))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_l_hip").setName("l_hip").setCenter(new float[] {0.0961f ,0.9124f ,-0.0001f })
                .addChild(new HAnimSegment("hanim_l_hip").setDEF("hanim_l_thigh").setName("l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0961f ,0.9124f ,-0.0001f })
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_knee_crease_pt").setName("l_knee_crease_pt").setTranslation(new float[] {0.0993f ,0.4881f ,-0.0309f }))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_lateral_epicn_pt").setName("l_femoral_lateral_epicn_pt").setTranslation(new float[] {0.1598f ,0.4967f ,0.0297f }))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_medial_epicn_pt").setName("l_femoral_medial_epicn_pt").setTranslation(new float[] {0.0398f ,0.4946f ,0.0303f })))
                .addChild(new HAnimJoint("hanim_l_hip").setDEF("hanim_l_knee").setName("l_knee").setCenter(new float[] {0.104f ,0.4867f ,0.0308f })
                  .addChild(new HAnimSegment("hanim_l_knee").setDEF("hanim_l_calf").setName("l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.104f ,0.4867f ,0.0308f })
                      .addChild(new Shape().setUSE("DiamondShape"))))
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_ankle").setName("l_ankle").setCenter(new float[] {0.1101f ,0.0656f ,-0.0736f })
                    .addChild(new HAnimSegment("hanim_l_ankle").setDEF("hanim_l_hindfoot").setName("l_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {0.1101f ,0.0656f ,-0.0736f })
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_lateral_malleolus_pt").setName("l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f ,0.0597f ,-0.1032f }))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_medial_malleolus_pt").setName("l_medial_malleolus_pt").setTranslation(new float[] {0.089f ,0.0716f ,-0.0881f }))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_sphyrion_pt").setName("l_sphyrion_pt").setTranslation(new float[] {0.089f ,0.0575f ,-0.0943f }))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_calcaneous_post_pt").setName("l_calcaneous_post_pt").setTranslation(new float[] {0.0974f ,0.0259f ,-0.1171f })))
                    .addChild(new HAnimJoint("hanim_l_ankle").setDEF("hanim_l_midtarsal").setName("l_midtarsal").setCenter(new float[] {0.1086f ,0.0001f ,0.0368f })
                      .addChild(new HAnimSegment("hanim_l_midtarsal").setDEF("hanim_l_middistal").setName("l_middistal")
                        .addChild(new HAnimSite("hanim_l_middistal").setDEF("hanim_l_middistal_tip").setName("l_middistal_tip").setTranslation(new float[] {0.1354f ,0.0016f ,0.1476f }))
                        .addChild(new HAnimSite("hanim_l_middistal").setDEF("hanim_l_metatarsal_pha5_pt").setName("l_metatarsal_pha5_pt").setTranslation(new float[] {0.1825f ,0.007f ,0.0928f }))
                        .addChild(new HAnimSite("hanim_l_middistal").setDEF("hanim_l_metatarsal_pha1_pt").setName("l_metatarsal_pha1_pt").setTranslation(new float[] {0.0816f ,0.0232f ,0.0106f }))
                        .addChild(new HAnimSite("hanim_l_middistal").setDEF("hanim_l_digit2_pt").setName("l_digit2_pt").setTranslation(new float[] {0.1195f ,0.0079f ,0.1433f })))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setCenter(new float[] {-0.095f ,0.9171f ,0.0029f })
                .addChild(new HAnimSegment("hanim_r_hip").setDEF("hanim_r_thigh").setName("r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.9171f ,0.0029f })
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_knee_crease_pt").setName("r_knee_crease_pt").setTranslation(new float[] {-0.0825f ,0.4932f ,-0.0326f }))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_lateral_epicn_pt").setName("r_femoral_lateral_epicn_pt").setTranslation(new float[] {-0.1421f ,0.4992f ,0.031f }))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_medial_epicn_pt").setName("r_femoral_medial_epicn_pt").setTranslation(new float[] {-0.0221f ,0.5014f ,0.0289f })))
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setCenter(new float[] {-0.0867f ,0.4913f ,0.0318f })
                  .addChild(new HAnimSegment("hanim_r_knee").setDEF("hanim_r_calf").setName("r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f ,0.4913f ,0.0318f })
                      .addChild(new Shape().setUSE("DiamondShape"))))
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_ankle").setName("r_ankle").setCenter(new float[] {-0.0801f ,0.0712f ,-0.0766f })
                    .addChild(new HAnimSegment("hanim_r_ankle").setDEF("hanim_r_hindfoot").setName("r_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {-0.0801f ,0.0712f ,-0.0766f })
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_lateral_malleolus_pt").setName("r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f ,0.0658f ,-0.1075f }))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_medial_malleolus_pt").setName("r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f ,0.076f ,-0.0928f }))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_sphyrion_pt").setName("r_sphyrion_pt").setTranslation(new float[] {-0.0603f ,0.061f ,-0.1002f }))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_calcaneous_post_pt").setName("r_calcaneous_post_pt").setTranslation(new float[] {-0.0692f ,0.0297f ,-0.1221f })))
                    .addChild(new HAnimJoint("hanim_r_ankle").setDEF("hanim_r_midtarsal").setName("r_midtarsal").setCenter(new float[] {-0.0801f ,0f ,0.0368f })
                      .addChild(new HAnimSegment("hanim_r_midtarsal").setDEF("hanim_r_middistal").setName("r_middistal")
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_middistal_tip").setName("r_middistal_tip").setTranslation(new float[] {-0.1043f ,-0.0227f ,0.145f }))
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_metatarsal_pha5_pt").setName("r_metatarsal_pha5_pt").setTranslation(new float[] {-0.1523f ,0.0166f ,0.0895f }))
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_metatarsal_pha1_pt").setName("r_metatarsal_pha1_pt").setTranslation(new float[] {-0.0521f ,0.026f ,0.0127f }))
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_digit2_pt").setName("r_digit2_pt").setTranslation(new float[] {-0.0883f ,0.0134f ,0.1383f }))))))))
            .addChild(new HAnimJoint("hanim_HumanoidRoot").setDEF("hanim_vl1").setName("vl1").setCenter(new float[] {-0.00405f ,1.07f ,-0.0275f })
              .addChild(new HAnimSegment("hanim_vl1").setDEF("hanim_l1").setName("l1"))
              .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_l_shoulder").setName("l_shoulder").setCenter(new float[] {0.2029f ,1.4376f ,-0.0387f })
                .addChild(new HAnimSegment("hanim_l_shoulder").setDEF("hanim_l_upperarm").setName("l_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {0.2029f ,1.4376f ,-0.0387f })
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new Transform().setDEF("l_upperarm_adjust").setTranslation(new float[] {0.2029f ,1.4376f ,-0.0387f }).setRotation(new float[] {1f ,0f ,0f ,0.119f }).setCenter(new float[] {0.182f ,1.22f ,-0.047f }))
                  .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_humeral_lateral_epicn_pt").setName("l_humeral_lateral_epicn_pt").setTranslation(new float[] {0.228f ,1.1482f ,-0.11f })))
                .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setCenter(new float[] {0.2014f ,1.1357f ,-0.0682f })
                  .addChild(new HAnimSegment("hanim_l_elbow").setDEF("hanim_l_forearm").setName("l_forearm")
                    .addChild(new Transform().setTranslation(new float[] {0.2014f ,1.1357f ,-0.0682f })
                      .addChild(new Shape().setUSE("DiamondShape")))
                    .addChild(new Transform().setDEF("l_forearm_adjust").setTranslation(new float[] {0.2014f ,1.1357f ,-0.0682f }).setRotation(new float[] {-1f ,0f ,0f ,0.1f }).setCenter(new float[] {0.198f ,0.961f ,-0.0405f }))
                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_radial_styloid_pt").setName("l_radial_styloid_pt").setTranslation(new float[] {0.1901f ,0.8645f ,-0.0415f }))
                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_olecranon_pt").setName("l_olecranon_pt").setTranslation(new float[] {-0.1962f ,1.1375f ,-0.1123f }))
                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_humeral_medial_epicn_pt").setName("l_humeral_medial_epicn_pt").setTranslation(new float[] {0.1735f ,1.1272f ,-0.1113f }))
                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_radiale_pt").setName("l_radiale_pt").setTranslation(new float[] {0.2182f ,1.1212f ,-0.1167f })))
                  .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_wrist").setName("l_wrist").setCenter(new float[] {0.1984f ,0.8663f ,-0.0583f })
                    .addChild(new HAnimSegment("hanim_l_wrist").setDEF("hanim_l_hand").setName("l_hand")
                      .addChild(new Transform().setTranslation(new float[] {0.1984f ,0.8663f ,-0.0583f })
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new Transform().setDEF("l_hand_adjust").setTranslation(new float[] {0.1984f ,0.8663f ,-0.0583f }).setRotation(new float[] {-0.06361f ,-0.9967f ,0.04988f ,1.333f }).setCenter(new float[] {0.213f ,0.811f ,-0.0338f }))
                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_hand_tip").setName("l_hand_tip").setTranslation(new float[] {0.208f ,0.6731f ,-0.0491f }))
                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_metacarpal_pha2_pt").setName("l_metacarpal_pha2_pt").setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f }))
                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_dactylion_pt").setName("l_dactylion_pt").setTranslation(new float[] {0.2056f ,0.6743f ,-0.0482f }))
                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_ulnar_styloid_pt").setName("l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f ,0.8529f ,-0.0648f }))
                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_metacarpal_pha5_pt").setName("l_metacarpal_pha5_pt").setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f }))))))
              .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_r_shoulder").setName("r_shoulder").setCenter(new float[] {-0.1907f ,1.4407f ,-0.0325f })
                .addChild(new HAnimSegment("hanim_r_shoulder").setDEF("hanim_r_upperarm").setName("r_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {-0.1907f ,1.4407f ,-0.0325f })
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new Transform().setDEF("r_upperarm_adjust").setTranslation(new float[] {-0.1907f ,1.4407f ,-0.0325f }).setRotation(new float[] {1f ,0f ,0f ,0.0836f }).setCenter(new float[] {-0.182f ,1.22f ,-0.047f }))
                  .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_humeral_lateral_epicn_pt").setName("r_humeral_lateral_epicn_pt").setTranslation(new float[] {-0.2224f ,1.1517f ,-0.1033f })))
                .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setCenter(new float[] {-0.1949f ,1.1388f ,-0.062f })
                  .addChild(new HAnimSegment("hanim_r_elbow").setDEF("hanim_r_forearm").setName("r_forearm")
                    .addChild(new Transform().setTranslation(new float[] {-0.1949f ,1.1388f ,-0.062f })
                      .addChild(new Shape().setUSE("DiamondShape")))
                    .addChild(new Transform().setDEF("r_forearm_adjust").setTranslation(new float[] {-0.1949f ,1.1388f ,-0.062f }).setRotation(new float[] {-1f ,0f ,0f ,0.1254f }).setCenter(new float[] {-0.198f ,0.961f ,-0.0397f }))
                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_radial_styloid_pt").setName("r_radial_styloid_pt").setTranslation(new float[] {-0.1884f ,0.8676f ,-0.036f }))
                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_olecranon_pt").setName("r_olecranon_pt").setTranslation(new float[] {-0.1907f ,1.1405f ,-0.1065f }))
                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_humeral_medial_epicn_pt").setName("r_humeral_medial_epicn_pt").setTranslation(new float[] {-0.168f ,1.1298f ,-0.1062f }))
                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_radiale_pt").setName("r_radiale_pt").setTranslation(new float[] {-0.213f ,1.1305f ,-0.1091f })))
                  .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_wrist").setName("r_wrist").setCenter(new float[] {-0.1959f ,0.8694f ,-0.0521f })
                    .addChild(new HAnimSegment("hanim_r_wrist").setDEF("hanim_r_hand").setName("r_hand")
                      .addChild(new Transform().setTranslation(new float[] {-0.1959f ,0.8694f ,-0.0521f })
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new Transform().setDEF("r_hand_adjust").setRotation(new float[] {-0.09024f ,0.994f ,-0.0624f ,1.216f }).setCenter(new float[] {-0.217f ,0.811f ,-0.0338f }))
                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_hand_tip").setName("r_hand_tip").setTranslation(new float[] {-0.1969f ,0.6758f ,-0.0427f }))
                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_metacarpal_pha2_pt").setName("r_metacarpal_pha2_pt").setTranslation(new float[] {-0.1977f ,0.8169f ,-0.0177f }))
                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_dactylion_pt").setName("r_dactylion_pt").setTranslation(new float[] {-0.1941f ,0.6772f ,-0.0423f }))
                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_ulnar_styloid_pt").setName("r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f ,0.8562f ,-0.0584f }))
                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_metacarpal_pha5_pt").setName("r_metacarpal_pha5_pt").setTranslation(new float[] {-0.1929f ,0.789f ,-0.1064f }))))))
              .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_vc4").setName("vc4").setCenter(new float[] {0f ,1.43f ,-0.0458f })
                .addChild(new HAnimSegment("hanim_vc4").setDEF("hanim_c4").setName("c4"))))
            .addChild(new HAnimJoint("hanim_HumanoidRoot").setDEF("hanim_vl5").setName("vl5").setCenter(new float[] {0.0028f ,1.0568f ,-0.0776f })
              .addChild(new HAnimJoint("hanim_vl5").setDEF("hanim_skullbase").setName("skullbase").setCenter(new float[] {0.0044f ,1.6209f ,0.0236f })
                .addChild(new HAnimSegment("hanim_skullbase").setDEF("hanim_skull").setName("skull")
                  .addChild(new Transform().setTranslation(new float[] {0.0044f ,1.6209f ,0.0236f })
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_skull_tip").setName("skull_tip").setTranslation(new float[] {0.005f ,1.7504f ,0.0055f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_sellion_pt").setName("sellion_pt").setTranslation(new float[] {0.0058f ,1.6316f ,0.0852f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_infraorbitale_pt").setName("r_infraorbitale_pt").setTranslation(new float[] {-0.0237f ,1.6171f ,0.0752f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_infraorbitale_pt").setName("l_infraorbitale_pt").setTranslation(new float[] {0.0341f ,1.6171f ,0.0752f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_supramenton_pt").setName("supramenton_pt").setTranslation(new float[] {0.0061f ,1.541f ,0.0805f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_tragion_pt").setName("r_tragion_pt").setTranslation(new float[] {-0.0646f ,1.6347f ,0.0302f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_gonion_pt").setName("r_gonion_pt").setTranslation(new float[] {-0.052f ,1.5529f ,0.0347f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_tragion_pt").setName("l_tragion_pt").setTranslation(new float[] {0.0739f ,1.6348f ,0.0282f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_gonion_pt").setName("l_gonion_pt").setTranslation(new float[] {0.0631f ,1.553f ,0.033f }))
                  .addChild(new HAnimSite("hanim_skull").setDEF("hanim_nuchale_pt").setName("nuchale_pt").setTranslation(new float[] {0.0039f ,1.5972f ,-0.0796f }))))))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_ankle"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_ankle"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_midtarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_midtarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_wrist"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_wrist"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_hand"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_hand"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_hindfoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_hindfoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_middistal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_middistal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_skull_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_calcaneous_post_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_calcaneous_post_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_digit2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_digit2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_hand_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_hand_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metacarpal_pha2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metacarpal_pha2_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metacarpal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metacarpal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metatarsal_pha1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metatarsal_pha1_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_metatarsal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_metatarsal_pha5_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_middistal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_middistal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_ulnar_styloid_pt"))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_DiamondManLOA_1_view").setName("DiamondManLOA_1_view")
            .addChild(new Viewpoint().setDEF("InclinedView").setDescription("Inclined View").setPosition(new float[] {1.62f ,1.05f ,2.06f }).setOrientation(new float[] {-0.113f ,0.993f ,0.0347f ,0.671f }))
            .addChild(new Viewpoint().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0f ,0.854f ,2.57665f }))
            .addChild(new Viewpoint().setDEF("SideView").setDescription("Side View").setPosition(new float[] {2.5929f ,0.854f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,1.57079f }))
            .addChild(new Viewpoint().setDEF("TopView").setDescription("Top View").setPosition(new float[] {0f ,3.4495f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,-1.57079f })))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
}
