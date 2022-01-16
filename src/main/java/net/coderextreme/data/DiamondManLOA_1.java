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
public class DiamondManLOA_1 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new DiamondManLOA_1().initialize().toFileJSON("../data/DiamondManLOA_1.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("DiamondManLOA_1.x3d"))
        .addMeta(new meta().setName("description").setContent("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy."))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new meta().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new meta().setName("created").setContent("12 November 2001"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA1.png"))
        .addMeta(new meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new meta().setName("warning").setContent("Still needs comments on CAESAR feature points inserted"))
        .addMeta(new meta().setName("reference").setContent("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"))
        .addMeta(new meta().setName("reference").setContent("http://ece.uwaterloo.ca/~HAnim"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("reference").setContent("http://www.cis.upenn.edu/~beitler"))
        .addMeta(new meta().setName("Image").setContent("humanoid_landmark_locations.gif"))
        .addMeta(new meta().setName("Image").setContent("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("HANIM 1.1 Default Joint Centers, LOA1"))
        .addChild(new NavigationInfo().setSpeed(1.5f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Diamond Man, LOA 1").setPosition(new float[] {0f,1f,3f}))
        .addChild(new HAnimHumanoid().setName("humanoid").setDEF("hanim_humanoid").setVersion("1.0")
          .addComments("original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("authorEmail").setValue(new MFString1().getArray()))
            .addValue(new MetadataString().setName("authorName").setValue(new MFString2().getArray()))
            .addValue(new MetadataString().setName("copyright").setValue(new MFString3().getArray()))
            .addValue(new MetadataString().setName("humanoidVersion").setValue(new MFString4().getArray()))
            .addValue(new MetadataString().setName("usageRestrictions").setValue(new MFString5().getArray())))
          .addSkeleton(new HAnimJoint().setName("HumanoidRoot").setDEF("hanim_HumanoidRoot").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Shape().setDEF("DiamondShape")
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3210().getArray()).setCreaseAngle(0.5f)
                      .setCoord(new Coordinate().setDEF("points").setPoint(new MFVec3f11().getArray())))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0f}))))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat12().getArray()).setLlimit(new MFFloat13().getArray())
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f}))
                  .addChild(new HAnimSite().setName("l_femoral_lateral_epicn_pt").setDEF("hanim_l_femoral_lateral_epicn_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f}))
                  .addChild(new HAnimSite().setName("l_femoral_medial_epicn_pt").setDEF("hanim_l_femoral_medial_epicn_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Shape().setUSE("DiamondShape"))))
                  .addChild(new HAnimJoint().setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat16().getArray()).setLlimit(new MFFloat17().getArray())
                    .addChild(new HAnimSegment().setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f}))
                      .addChild(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f}))
                      .addChild(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f}))
                      .addChild(new HAnimSite().setName("l_calcaneous_post_pt").setDEF("hanim_l_calcaneous_post_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})))
                    .addChild(new HAnimJoint().setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1086f,0.0001f,0.0368f}).setUlimit(new MFFloat18().getArray()).setLlimit(new MFFloat19().getArray())
                      .addChild(new HAnimSegment().setName("l_middistal").setDEF("hanim_l_middistal")
                        .addChild(new HAnimSite().setName("l_middistal_tip").setDEF("hanim_l_middistal_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f}))
                        .addChild(new HAnimSite().setName("l_metatarsal_pha5_pt").setDEF("hanim_l_metatarsal_pha5_pt").setTranslation(new float[] {0.1825f,0.007f,0.0928f}))
                        .addChild(new HAnimSite().setName("l_metatarsal_pha1_pt").setDEF("hanim_l_metatarsal_pha1_pt").setTranslation(new float[] {0.0816f,0.0232f,0.0106f}))
                        .addChild(new HAnimSite().setName("l_digit2_pt").setDEF("hanim_l_digit2_pt").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f}).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray())
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.095f,0.9171f,0.0029f})
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f}))
                  .addChild(new HAnimSite().setName("r_femoral_lateral_epicn_pt").setDEF("hanim_r_femoral_lateral_epicn_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f}))
                  .addChild(new HAnimSite().setName("r_femoral_medial_epicn_pt").setDEF("hanim_r_femoral_medial_epicn_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f}).setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray())
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f,0.4913f,0.0318f})
                      .addChild(new Shape().setUSE("DiamondShape"))))
                  .addChild(new HAnimJoint().setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f}).setUlimit(new MFFloat24().getArray()).setLlimit(new MFFloat25().getArray())
                    .addChild(new HAnimSegment().setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {-0.0801f,0.0712f,-0.0766f})
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f}))
                      .addChild(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f}))
                      .addChild(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f}))
                      .addChild(new HAnimSite().setName("r_calcaneous_post_pt").setDEF("hanim_r_calcaneous_post_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})))
                    .addChild(new HAnimJoint().setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.0801f,0f,0.0368f}).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
                      .addChild(new HAnimSegment().setName("r_middistal").setDEF("hanim_r_middistal")
                        .addChild(new HAnimSite().setName("r_middistal_tip").setDEF("hanim_r_middistal_tip").setTranslation(new float[] {-0.1043f,-0.0227f,0.145f}))
                        .addChild(new HAnimSite().setName("r_metatarsal_pha5_pt").setDEF("hanim_r_metatarsal_pha5_pt").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f}))
                        .addChild(new HAnimSite().setName("r_metatarsal_pha1_pt").setDEF("hanim_r_metatarsal_pha1_pt").setTranslation(new float[] {-0.0521f,0.026f,0.0127f}))
                        .addChild(new HAnimSite().setName("r_digit2_pt").setDEF("hanim_r_digit2_pt").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f}))))))))
            .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {-0.00405f,1.07f,-0.0275f}).setUlimit(new MFFloat28().getArray()).setLlimit(new MFFloat29().getArray())
              .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1"))
              .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray())
                .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new Transform().setDEF("l_upperarm_adjust").setCenter(new float[] {0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.119f}).setTranslation(new float[] {0.2029f,1.4376f,-0.0387f}))
                  .addChild(new HAnimSite().setName("l_humeral_lateral_epicn_pt").setDEF("hanim_l_humeral_lateral_epicn_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})))
                .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray())
                  .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                    .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                      .addChild(new Shape().setUSE("DiamondShape")))
                    .addChild(new Transform().setDEF("l_forearm_adjust").setCenter(new float[] {0.198f,0.961f,-0.0405f}).setRotation(new float[] {-1f,0f,0f,0.1f}).setTranslation(new float[] {0.2014f,1.1357f,-0.0682f}))
                    .addChild(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f}))
                    .addChild(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f}))
                    .addChild(new HAnimSite().setName("l_humeral_medial_epicn_pt").setDEF("hanim_l_humeral_medial_epicn_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f}))
                    .addChild(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})))
                  .addChild(new HAnimJoint().setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray())
                    .addChild(new HAnimSegment().setName("l_hand").setDEF("hanim_l_hand")
                      .addChild(new Transform().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new Transform().setDEF("l_hand_adjust").setCenter(new float[] {0.213f,0.811f,-0.0338f}).setRotation(new float[] {-0.06361f,-0.9967f,0.04988f,1.333f}).setTranslation(new float[] {0.1984f,0.8663f,-0.0583f}))
                      .addChild(new HAnimSite().setName("l_hand_tip").setDEF("hanim_l_hand_tip").setTranslation(new float[] {0.208f,0.6731f,-0.0491f}))
                      .addChild(new HAnimSite().setName("l_metacarpal_pha2_pt").setDEF("hanim_l_metacarpal_pha2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f}))
                      .addChild(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f}))
                      .addChild(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f}))
                      .addChild(new HAnimSite().setName("l_metacarpal_pha5_pt").setDEF("hanim_l_metacarpal_pha5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f}))))))
              .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f}).setUlimit(new MFFloat36().getArray()).setLlimit(new MFFloat37().getArray())
                .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                  .addChild(new Transform().setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f})
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new Transform().setDEF("r_upperarm_adjust").setCenter(new float[] {-0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.0836f}).setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f}))
                  .addChild(new HAnimSite().setName("r_humeral_lateral_epicn_pt").setDEF("hanim_r_humeral_lateral_epicn_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})))
                .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f}).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                  .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                    .addChild(new Transform().setTranslation(new float[] {-0.1949f,1.1388f,-0.062f})
                      .addChild(new Shape().setUSE("DiamondShape")))
                    .addChild(new Transform().setDEF("r_forearm_adjust").setCenter(new float[] {-0.198f,0.961f,-0.0397f}).setRotation(new float[] {-1f,0f,0f,0.1254f}).setTranslation(new float[] {-0.1949f,1.1388f,-0.062f}))
                    .addChild(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f}))
                    .addChild(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f}))
                    .addChild(new HAnimSite().setName("r_humeral_medial_epicn_pt").setDEF("hanim_r_humeral_medial_epicn_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f}))
                    .addChild(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})))
                  .addChild(new HAnimJoint().setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f}).setUlimit(new MFFloat40().getArray()).setLlimit(new MFFloat41().getArray())
                    .addChild(new HAnimSegment().setName("r_hand").setDEF("hanim_r_hand")
                      .addChild(new Transform().setTranslation(new float[] {-0.1959f,0.8694f,-0.0521f})
                        .addChild(new Shape().setUSE("DiamondShape")))
                      .addChild(new Transform().setDEF("r_hand_adjust").setCenter(new float[] {-0.217f,0.811f,-0.0338f}).setRotation(new float[] {-0.09024f,0.994f,-0.0624f,1.216f}))
                      .addChild(new HAnimSite().setName("r_hand_tip").setDEF("hanim_r_hand_tip").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f}))
                      .addChild(new HAnimSite().setName("r_metacarpal_pha2_pt").setDEF("hanim_r_metacarpal_pha2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f}))
                      .addChild(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f}))
                      .addChild(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f}))
                      .addChild(new HAnimSite().setName("r_metacarpal_pha5_pt").setDEF("hanim_r_metacarpal_pha5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f}))))))
              .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0f,1.43f,-0.0458f}).setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())
                .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4"))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())
              .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())
                .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                  .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                    .addChild(new Shape().setUSE("DiamondShape")))
                  .addChild(new HAnimSite().setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {0.005f,1.7504f,0.0055f}))
                  .addChild(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f}))
                  .addChild(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f}))
                  .addChild(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f}))
                  .addChild(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f}))
                  .addChild(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f}))
                  .addChild(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f}))
                  .addChild(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f}))
                  .addChild(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f}))
                  .addChild(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f}))))))
          .addViewpoints(new HAnimSite().setName("DiamondManLOA_1_view").setDEF("hanim_DiamondManLOA_1_view")
            .addChild(new Viewpoint().setDEF("InclinedView").setDescription("Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,2.06f}))
            .addChild(new Viewpoint().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0f,0.854f,2.57665f}))
            .addChild(new Viewpoint().setDEF("SideView").setDescription("Side View").setOrientation(new float[] {0f,1f,0f,1.57079f}).setPosition(new float[] {2.5929f,0.854f,0f}))
            .addChild(new Viewpoint().setDEF("TopView").setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57079f}).setPosition(new float[] {0f,3.4495f,0f})))
          .addJoints(new HAnimJoint().setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_ankle"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_ankle"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_midtarsal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_midtarsal"))
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
          .addSegments(new HAnimSegment().setUSE("hanim_l_middistal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_middistal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite().setUSE("hanim_skull_tip"))
          .addSites(new HAnimSite().setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite().setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_calcaneous_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_calcaneous_post_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_digit2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_digit2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_hand_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_hand_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_pha2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_pha2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_pha1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_pha1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_pha5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_middistal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_middistal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_ulnar_styloid_pt"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"beitler@graphics.cis.upenn.edu beitler@acm.org"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Matthew T. Beitler"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Copyright 1999 Matthew T. Beitler"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCenters 1.1 LOA1"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat8 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat9 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3210 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
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
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat32 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat33 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
protected class MFFloat36 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat37 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
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
}
