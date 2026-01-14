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
public class DiamondManLOA_2 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new DiamondManLOA_2().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/DiamondManLOA_2.new.java.x3d");
    model.toFileJSON("../data/DiamondManLOA_2.new.java.json");
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
        .addMeta(new meta().setName("title").setContent("DiamondManLOA_2.x3d"))
        .addMeta(new meta().setName("description").setContent("hanim skeletal structure at level of articulation two, one diamond at the base node for the structure"))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new meta().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("12 November 2001"))
        .addMeta(new meta().setName("modified").setContent("Tue, 09 Sep 2025 19:37:54 GMT"))
        .addMeta(new meta().setName("reference").setContent("../Templates/DiamondManLOA_2.x3d"))
        .addMeta(new meta().setName("reference").setContent("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("error").setContent("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"))
        .addMeta(new meta().setName("Image").setContent("DiamondManLOA_2.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new meta().setName("subject").setContent("human animation, x3d, vrml, animation"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_2.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HANIM 1.1 Default Joint Centers, LOA1").setInfo(new MFString0().getArray()))
        .addChild(new NavigationInfo().setSpeed(1.5f ))
        .addChild(new Viewpoint().setDescription("Diamond Man, LOA 2").setPosition(new float[] {0f ,1f ,3f }).setCenterOfRotation(new float[] {0f ,1f ,0f }))
        .addChild(new Transform().setTranslation(new float[] {1f ,1.5f ,0f })
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("TextMaterial").setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
              .setGeometry(new Text().setString(new MFString1().getArray())
                .setFontStyle(new FontStyle().setFamily(new MFString2().getArray()).setSize(0.1f ))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-0.3f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("MIN_COLOR").setDiffuseColor(new float[] {1f ,0f ,0f })))
                .setGeometry(new Sphere().setRadius(0.08f )))
              .addChild(new Transform().setTranslation(new float[] {0.2f ,0f ,0f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial")))
                  .setGeometry(new Text().setString(new MFString3().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString4().getArray()).setSize(0.1f ))))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-0.5f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("JOINT_COLOR").setDiffuseColor(new float[] {1f ,1f ,0f })))
                .setGeometry(new Sphere().setRadius(0.08f )))
              .addChild(new Transform().setTranslation(new float[] {0.2f ,0f ,0f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial")))
                  .setGeometry(new Text().setString(new MFString5().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString6().getArray()).setSize(0.1f ))))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-0.7f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("REC_SPINAL_COLOR").setDiffuseColor(new float[] {1f ,0f ,1f })))
                .setGeometry(new Sphere().setRadius(0.08f )))
              .addChild(new Transform().setTranslation(new float[] {0.2f ,0f ,0f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial")))
                  .setGeometry(new Text().setString(new MFString7().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString8().getArray()).setSize(0.1f ))))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-0.9f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("SPINAL_COLOR").setDiffuseColor(new float[] {0f ,1f ,0f })))
                .setGeometry(new Sphere().setRadius(0.08f )))
              .addChild(new Transform().setTranslation(new float[] {0.2f ,0f ,0f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial")))
                  .setGeometry(new Text().setString(new MFString9().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString10().getArray()).setSize(0.1f ))))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-1.3f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("SITE_COLOR").setDiffuseColor(new float[] {0f ,0f ,1f })))
                .setGeometry(new Sphere().setRadius(0.08f )))
              .addChild(new Transform().setTranslation(new float[] {0.2f ,0f ,0f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial")))
                  .setGeometry(new Text().setString(new MFString11().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString12().getArray()).setSize(0.1f ))))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-1.1f ,0f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAND_FEET_COLOR").setDiffuseColor(new float[] {0f ,1f ,1f })))
                .setGeometry(new Sphere().setRadius(0.08f )))
              .addChild(new Transform().setTranslation(new float[] {0.2f ,0f ,0f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial")))
                  .setGeometry(new Text().setString(new MFString13().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString14().getArray()).setSize(0.1f ))))))))
        .addChild(new HAnimHumanoid().setDEF("hanim_humanoid").setName("humanoid").setVersion("1.0")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .setMetadata(new MetadataString().setName("authorName")))
          .addSkeleton(new HAnimJoint("hanim_humanoid").setDEF("hanim_HumanoidRoot").setName("humanoid_root").setCenter(new float[] {0f ,0.824f ,0.0277f })
            .addChild(new HAnimSegment("hanim_HumanoidRoot").setDEF("hanim_sacrum").setName("sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f ,0.824f ,0.0277f })
                .addChild(new Shape().setDEF("DiamondShape")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("ROOT_COLOR").setDiffuseColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3215().getArray())
                    .setCoord(new Coordinate().setDEF("points").setPoint(new MFVec3f16().getArray()))))
                .addChild(new Transform().setTranslation(new float[] {0f ,0.01f ,0f })
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.039216f ,1f ,0.568627f })))
                      .setGeometry(new Text().setString(new MFString17().getArray())
                        .setFontStyle(new FontStyle().setFamily(new MFString18().getArray()).setStyle("ITALIC").setSize(0.01f ))))))))
            .addChild(new HAnimJoint("hanim_HumanoidRoot").setDEF("hanim_sacroiliac").setName("sacroiliac").setCenter(new float[] {0f ,0.9149f ,0.0016f })
              .addChild(new HAnimSegment("hanim_sacroiliac").setDEF("hanim_pelvis").setName("pelvis")
                .addChild(new Transform().setDEF("sacroiliacPos").setTranslation(new float[] {0f ,0.9149f ,0.0016f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MIN_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3219().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_iliocristale_pt").setName("r_iliocristale_pt").setTranslation(new float[] {-0.1525f ,1.0628f ,0.0035f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3220().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_trochanterion_pt").setName("r_trochanterion_pt").setTranslation(new float[] {-0.1689f ,0.8419f ,0.0352f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3221().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_iliocristale_pt").setName("l_iliocristale_pt").setTranslation(new float[] {0.1612f ,1.0537f ,0.0008f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3222().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_trochanterion_pt").setName("l_trochanterion_pt").setTranslation(new float[] {0.1677f ,0.8336f ,0.0303f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3223().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_asis_pt").setName("r_asis_pt").setTranslation(new float[] {-0.0887f ,1.0021f ,0.1112f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3224().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_asis_pt").setName("l_asis_pt").setTranslation(new float[] {0.0925f ,0.9983f ,0.1052f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3225().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_r_psis_pt").setName("r_psis_pt").setTranslation(new float[] {-0.0716f ,1.019f ,-0.1138f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3226().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_l_psis_pt").setName("l_psis_pt").setTranslation(new float[] {0.0774f ,1.019f ,-0.1151f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3227().getArray())
                      .setCoord(new Coordinate().setUSE("points")))))
                .addChild(new HAnimSite("hanim_pelvis").setDEF("hanim_crotch_pt").setName("crotch_pt").setTranslation(new float[] {0.0034f ,0.8266f ,0.0257f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3228().getArray())
                      .setCoord(new Coordinate().setUSE("points"))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_l_hip").setName("l_hip").setCenter(new float[] {0.0961f ,0.9124f ,-0.0001f })
                .addChild(new HAnimSegment("hanim_l_hip").setDEF("hanim_l_thigh").setName("l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0961f ,0.9124f ,-0.0001f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("MIN_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3229().getArray())
                        .setCoord(new Coordinate().setUSE("points")))))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_knee_crease_pt").setName("l_knee_crease_pt").setTranslation(new float[] {0.0993f ,0.4881f ,-0.0309f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3230().getArray())
                        .setCoord(new Coordinate().setUSE("points")))))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_lateral_epicn_pt").setName("l_femoral_lateral_epicn_pt").setTranslation(new float[] {0.1598f ,0.4967f ,0.0297f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3231().getArray())
                        .setCoord(new Coordinate().setUSE("points")))))
                  .addChild(new HAnimSite("hanim_l_thigh").setDEF("hanim_l_femoral_medial_epicn_pt").setName("l_femoral_medial_epicn_pt").setTranslation(new float[] {0.0398f ,0.4946f ,0.0303f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3232().getArray())
                        .setCoord(new Coordinate().setUSE("points"))))))
                .addChild(new HAnimJoint("hanim_l_hip").setDEF("hanim_l_knee").setName("l_knee").setCenter(new float[] {0.104f ,0.4867f ,0.0308f })
                  .addChild(new HAnimSegment("hanim_l_knee").setDEF("hanim_l_calf").setName("l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.104f ,0.4867f ,0.0308f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("MIN_COLOR")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3233().getArray())
                          .setCoord(new Coordinate().setUSE("points"))))))
                  .addChild(new HAnimJoint("hanim_l_knee").setDEF("hanim_l_ankle").setName("l_ankle").setCenter(new float[] {0.1101f ,0.0656f ,-0.0736f })
                    .addChild(new HAnimSegment("hanim_l_ankle").setDEF("hanim_l_hindfoot").setName("l_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {0.1101f ,0.0656f ,-0.0736f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("MIN_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3234().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_lateral_malleolus_pt").setName("l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f ,0.0597f ,-0.1032f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3235().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_medial_malleolus_pt").setName("l_medial_malleolus_pt").setTranslation(new float[] {0.089f ,0.0716f ,-0.0881f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3236().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_sphyrion_pt").setName("l_sphyrion_pt").setTranslation(new float[] {0.089f ,0.0575f ,-0.0943f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3237().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_l_hindfoot").setDEF("hanim_l_calcaneous_post_pt").setName("l_calcaneous_post_pt").setTranslation(new float[] {0.0974f ,0.0259f ,-0.1171f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3238().getArray())
                            .setCoord(new Coordinate().setUSE("points"))))))
                    .addChild(new HAnimJoint("hanim_l_ankle").setDEF("hanim_l_subtalar").setName("l_subtalar").setCenter(new float[] {0.1086f ,0.0001f ,-0.0368f })
                      .addChild(new HAnimSegment("hanim_l_subtalar").setDEF("hanim_midproximal").setName("midproximal")
                        .addChild(new Transform().setTranslation(new float[] {0.1086f ,0.0001f ,-0.0368f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("MIN_COLOR")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3239().getArray())
                              .setCoord(new Coordinate().setUSE("points"))))))
                      .addChild(new HAnimJoint("hanim_l_subtalar").setDEF("hanim_l_midtarsal").setName("l_midtarsal").setCenter(new float[] {0.1086f ,0.0001f ,0.0368f })
                        .addChild(new HAnimSegment("hanim_l_midtarsal").setDEF("hanim_l_middistal").setName("l_middistal")
                          .addChild(new Transform().setTranslation(new float[] {0.1086f ,0.0001f ,0.0368f })
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("JOINT_COLOR")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3240().getArray())
                                .setCoord(new Coordinate().setUSE("points")))))
                          .addChild(new HAnimSite("hanim_l_middistal").setDEF("hanim_l_middistal_tip").setName("l_middistal_tip").setTranslation(new float[] {0.1354f ,0.0016f ,0.1476f })
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3241().getArray())
                                .setCoord(new Coordinate().setUSE("points")))))
                          .addChild(new HAnimSite("hanim_l_middistal").setDEF("hanim_l_metatarsal_pha1_pt").setName("l_metatarsal_pha1_pt").setTranslation(new float[] {0.0816f ,0.0232f ,0.0106f })
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3242().getArray())
                                .setCoord(new Coordinate().setUSE("points"))))))
                        .addChild(new HAnimJoint("hanim_l_midtarsal").setDEF("hanim_l_metatarsal").setName("l_metatarsal").setCenter(new float[] {0.1086f ,0f ,0.0762f })
                          .addChild(new HAnimSegment("hanim_l_metatarsal").setDEF("hanim_l_forefoot").setName("l_forefoot")
                            .addChild(new Transform().setTranslation(new float[] {0.1086f ,0f ,0.0762f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3243().getArray())
                                  .setCoord(new Coordinate().setUSE("points")))))
                            .addChild(new HAnimSite("hanim_l_forefoot").setDEF("hanim_l_forefoot_tip").setName("l_forefoot_tip").setTranslation(new float[] {0.1354f ,0.0016f ,0.1476f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3244().getArray())
                                  .setCoord(new Coordinate().setUSE("points")))))
                            .addChild(new HAnimSite("hanim_l_forefoot").setDEF("hanim_l_metatarsal_pha5_pt").setName("l_metatarsal_pha5_pt").setTranslation(new float[] {0.1825f ,0.007f ,0.0928f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3245().getArray())
                                  .setCoord(new Coordinate().setUSE("points")))))
                            .addChild(new HAnimSite("hanim_l_forefoot").setDEF("hanim_l_digit2_pt").setName("l_digit2_pt").setTranslation(new float[] {0.1195f ,0.0079f ,0.1433f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3246().getArray())
                                  .setCoord(new Coordinate().setUSE("points"))))))))))))
              .addChild(new HAnimJoint("hanim_sacroiliac").setDEF("hanim_r_hip").setName("r_hip").setCenter(new float[] {-0.095f ,0.9171f ,0.0029f })
                .addChild(new HAnimSegment("hanim_r_hip").setDEF("hanim_r_thigh").setName("r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.095f ,0.9171f ,0.0029f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("MIN_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3247().getArray())
                        .setCoord(new Coordinate().setUSE("points")))))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_knee_crease_pt").setName("r_knee_crease_pt").setTranslation(new float[] {-0.0825f ,0.4932f ,-0.0326f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3248().getArray())
                        .setCoord(new Coordinate().setUSE("points")))))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_lateral_epicn_pt").setName("r_femoral_lateral_epicn_pt").setTranslation(new float[] {-0.1421f ,0.4992f ,0.031f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3249().getArray())
                        .setCoord(new Coordinate().setUSE("points")))))
                  .addChild(new HAnimSite("hanim_r_thigh").setDEF("hanim_r_femoral_medial_epicn_pt").setName("r_femoral_medial_epicn_pt").setTranslation(new float[] {-0.0221f ,0.5014f ,0.0289f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3250().getArray())
                        .setCoord(new Coordinate().setUSE("points"))))))
                .addChild(new HAnimJoint("hanim_r_hip").setDEF("hanim_r_knee").setName("r_knee").setCenter(new float[] {-0.0867f ,0.4913f ,0.0318f })
                  .addChild(new HAnimSegment("hanim_r_knee").setDEF("hanim_r_calf").setName("r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f ,0.4913f ,0.0318f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3251().getArray())
                          .setCoord(new Coordinate().setUSE("points"))))))
                  .addChild(new HAnimJoint("hanim_r_knee").setDEF("hanim_r_ankle").setName("r_ankle").setCenter(new float[] {-0.0801f ,0.0712f ,-0.0766f })
                    .addChild(new HAnimSegment("hanim_r_ankle").setDEF("hanim_r_hindfoot").setName("r_hindfoot")
                      .addChild(new Transform().setTranslation(new float[] {-0.0801f ,0.0712f ,-0.0766f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("MIN_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3252().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_lateral_malleolus_pt").setName("r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f ,0.0658f ,-0.1075f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3253().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_medial_malleolus_pt").setName("r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f ,0.076f ,-0.0928f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3254().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_sphyrion_pt").setName("r_sphyrion_pt").setTranslation(new float[] {-0.0603f ,0.061f ,-0.1002f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3255().getArray())
                            .setCoord(new Coordinate().setUSE("points")))))
                      .addChild(new HAnimSite("hanim_r_hindfoot").setDEF("hanim_r_calcaneous_post_pt").setName("r_calcaneous_post_pt").setTranslation(new float[] {-0.0692f ,0.0297f ,-0.1221f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3256().getArray())
                            .setCoord(new Coordinate().setUSE("points"))))))
                    .addChild(new HAnimJoint("hanim_r_ankle").setDEF("hanim_r_midtarsal").setName("r_midtarsal").setCenter(new float[] {-0.0801f ,0f ,0.0368f })
                      .addChild(new HAnimSegment("hanim_r_midtarsal").setDEF("hanim_r_middistal").setName("r_middistal")
                        .addChild(new Transform().setTranslation(new float[] {-0.0801f ,0f ,0.0368f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("JOINT_COLOR")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3257().getArray())
                              .setCoord(new Coordinate().setUSE("points")))))
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_middistal_tip").setName("r_middistal_tip").setTranslation(new float[] {-0.1043f ,-0.0227f ,0.145f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3258().getArray())
                              .setCoord(new Coordinate().setUSE("points")))))
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_metatarsal_pha5_pt").setName("r_metatarsal_pha5_pt").setTranslation(new float[] {-0.1523f ,0.0166f ,0.0895f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3259().getArray())
                              .setCoord(new Coordinate().setUSE("points")))))
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_metatarsal_pha1_pt").setName("r_metatarsal_pha1_pt").setTranslation(new float[] {-0.0521f ,0.026f ,0.0127f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3260().getArray())
                              .setCoord(new Coordinate().setUSE("points")))))
                        .addChild(new HAnimSite("hanim_r_middistal").setDEF("hanim_r_digit2_pt").setName("r_digit2_pt").setTranslation(new float[] {-0.0883f ,0.0134f ,0.1383f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3261().getArray())
                              .setCoord(new Coordinate().setUSE("points")))))))))))
            .addChild(new HAnimJoint("hanim_HumanoidRoot").setDEF("hanim_vl5").setName("vl5").setCenter(new float[] {0.0028f ,1.0568f ,-0.0776f })
              .addChild(new HAnimSegment("hanim_vl5").setDEF("hanim_l5").setName("l5")
                .addChild(new Transform().setTranslation(new float[] {0.0028f ,1.0568f ,-0.0776f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("REC_SPINAL_COLOR")))
                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3262().getArray())
                      .setCoord(new Coordinate().setUSE("points"))))))
              .addChild(new HAnimJoint("hanim_vl5").setDEF("hanim_vl4").setName("vl4").setCenter(new float[] {0.0035f ,1.0925f ,-0.0787f })
                .addChild(new HAnimSegment("hanim_vl4").setDEF("hanim_l4").setName("l4")
                  .addChild(new Transform().setTranslation(new float[] {0.0035f ,1.0925f ,-0.0787f })
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3263().getArray())
                        .setCoord(new Coordinate().setUSE("points"))))))
                .addChild(new HAnimJoint("hanim_vl4").setDEF("hanim_vl3").setName("vl3").setCenter(new float[] {0.0041f ,1.1276f ,-0.0796f })
                  .addChild(new HAnimSegment("hanim_vl3").setDEF("hanim_l3").setName("l3")
                    .addChild(new Transform().setTranslation(new float[] {0.0041f ,1.1276f ,-0.0796f })
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("REC_SPINAL_COLOR")))
                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3264().getArray())
                          .setCoord(new Coordinate().setUSE("points"))))))
                  .addChild(new HAnimJoint("hanim_vl3").setDEF("hanim_vl2").setName("vl2").setCenter(new float[] {0.0045f ,1.1546f ,-0.08f })
                    .addChild(new HAnimSegment("hanim_vl2").setDEF("hanim_l2").setName("l2")
                      .addChild(new Transform().setTranslation(new float[] {0.0045f ,1.1546f ,-0.08f })
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3265().getArray())
                            .setCoord(new Coordinate().setUSE("points"))))))
                    .addChild(new HAnimJoint("hanim_vl2").setDEF("hanim_vl1").setName("vl1").setCenter(new float[] {0.0048f ,1.1912f ,-0.0805f })
                      .addChild(new HAnimSegment("hanim_vl1").setDEF("hanim_l1").setName("l1")
                        .addChild(new Transform().setTranslation(new float[] {0.0048f ,1.1912f ,-0.0805f })
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("REC_SPINAL_COLOR")))
                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3266().getArray())
                              .setCoord(new Coordinate().setUSE("points"))))))
                      .addChild(new HAnimJoint("hanim_vl1").setDEF("hanim_vt12").setName("vt12").setCenter(new float[] {0.0051f ,1.2278f ,-0.0808f })
                        .addChild(new HAnimSegment("hanim_vt12").setDEF("hanim_t12").setName("t12")
                          .addChild(new Transform().setTranslation(new float[] {0.0051f ,1.2278f ,-0.0808f })
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3267().getArray())
                                .setCoord(new Coordinate().setUSE("points"))))))
                        .addChild(new HAnimJoint("hanim_vt12").setDEF("hanim_vt11").setName("vt11").setCenter(new float[] {0.0053f ,1.2679f ,-0.081f })
                          .addChild(new HAnimSegment("hanim_vt11").setDEF("hanim_t11").setName("t11")
                            .addChild(new Transform().setTranslation(new float[] {0.0053f ,1.2679f ,-0.081f })
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3268().getArray())
                                  .setCoord(new Coordinate().setUSE("points"))))))
                          .addChild(new HAnimJoint("hanim_vt11").setDEF("hanim_vt10").setName("vt10").setCenter(new float[] {0.0056f ,1.2848f ,-0.0822f })
                            .addChild(new HAnimSegment("hanim_vt10").setDEF("hanim_t10").setName("t10")
                              .addChild(new Transform().setTranslation(new float[] {0.0056f ,1.2848f ,-0.0822f })
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("REC_SPINAL_COLOR")))
                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3269().getArray())
                                    .setCoord(new Coordinate().setUSE("points"))))))
                            .addChild(new HAnimJoint("hanim_vt10").setDEF("hanim_vt9").setName("vt9").setCenter(new float[] {0.0057f ,1.3126f ,-0.0838f })
                              .addChild(new HAnimSegment("hanim_vt9").setDEF("hanim_t9").setName("t9")
                                .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3126f ,-0.0838f })
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3270().getArray())
                                      .setCoord(new Coordinate().setUSE("points"))))))
                              .addChild(new HAnimJoint("hanim_vt9").setDEF("hanim_vt8").setName("vt8").setCenter(new float[] {0.0057f ,1.3382f ,-0.0845f })
                                .addChild(new HAnimSegment("hanim_vt8").setDEF("hanim_t8").setName("t8")
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f ,1.3382f ,-0.0845f })
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3271().getArray())
                                        .setCoord(new Coordinate().setUSE("points"))))))
                                .addChild(new HAnimJoint("hanim_vt8").setDEF("hanim_vt7").setName("vt7").setCenter(new float[] {0.0058f ,1.3625f ,-0.0833f })
                                  .addChild(new HAnimSegment("hanim_vt7").setDEF("hanim_t7").setName("t7")
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f ,1.3625f ,-0.0833f })
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3272().getArray())
                                          .setCoord(new Coordinate().setUSE("points"))))))
                                  .addChild(new HAnimJoint("hanim_vt7").setDEF("hanim_vt6").setName("vt6").setCenter(new float[] {0.0059f ,1.3866f ,-0.08f })
                                    .addChild(new HAnimSegment("hanim_vt6").setDEF("hanim_t6").setName("t6")
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f ,1.3866f ,-0.08f })
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setUSE("REC_SPINAL_COLOR")))
                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3273().getArray())
                                            .setCoord(new Coordinate().setUSE("points"))))))
                                    .addChild(new HAnimJoint("hanim_vt6").setDEF("hanim_vt5").setName("vt5").setCenter(new float[] {0.006f ,1.4102f ,-0.0745f })
                                      .addChild(new HAnimSegment("hanim_vt5").setDEF("hanim_t5").setName("t5")
                                        .addChild(new Transform().setTranslation(new float[] {0.006f ,1.4102f ,-0.0745f })
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3274().getArray())
                                              .setCoord(new Coordinate().setUSE("points"))))))
                                      .addChild(new HAnimJoint("hanim_vt5").setDEF("hanim_vt4").setName("vt4").setCenter(new float[] {0.0061f ,1.432f ,-0.0675f })
                                        .addChild(new HAnimSegment("hanim_vt4").setDEF("hanim_t4").setName("t4")
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f ,1.432f ,-0.0675f })
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3275().getArray())
                                                .setCoord(new Coordinate().setUSE("points"))))))
                                        .addChild(new HAnimJoint("hanim_vt4").setDEF("hanim_vt3").setName("vt3").setCenter(new float[] {0.0062f ,1.4583f ,-0.057f })
                                          .addChild(new HAnimSegment("hanim_vt3").setDEF("hanim_t3").setName("t3")
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f ,1.4583f ,-0.057f })
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3276().getArray())
                                                  .setCoord(new Coordinate().setUSE("points"))))))
                                          .addChild(new HAnimJoint("hanim_vt3").setDEF("hanim_vt2").setName("vt2").setCenter(new float[] {0.0063f ,1.4761f ,-0.0484f })
                                            .addChild(new HAnimSegment("hanim_vt2").setDEF("hanim_t2").setName("t2")
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f ,1.4761f ,-0.0484f })
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3277().getArray())
                                                    .setCoord(new Coordinate().setUSE("points"))))))
                                            .addChild(new HAnimJoint("hanim_vt2").setDEF("hanim_vt1").setName("vt1").setCenter(new float[] {0.0065f ,1.4951f ,-0.0387f })
                                              .addChild(new HAnimSegment("hanim_vt1").setDEF("hanim_t1").setName("t1")
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f ,1.4951f ,-0.0387f })
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setUSE("REC_SPINAL_COLOR")))
                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3278().getArray())
                                                      .setCoord(new Coordinate().setUSE("points"))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_l_shoulder").setName("l_shoulder").setCenter(new float[] {0.2029f ,1.4376f ,-0.0387f })
                                                .addChild(new HAnimSegment("hanim_l_shoulder").setDEF("hanim_l_upperarm").setName("l_upperarm")
                                                  .addChild(new Transform().setTranslation(new float[] {0.2029f ,1.4376f ,-0.0387f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("MIN_COLOR")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3279().getArray())
                                                        .setCoord(new Coordinate().setUSE("points")))))
                                                  .addChild(new Transform().setDEF("l_upperarm_adjust").setTranslation(new float[] {0.2029f ,1.4376f ,-0.0387f }).setRotation(new float[] {1f ,0f ,0f ,0.119f }).setCenter(new float[] {0.182f ,1.22f ,-0.047f }))
                                                  .addChild(new HAnimSite("hanim_l_upperarm").setDEF("hanim_l_humeral_lateral_epicn_pt").setName("l_humeral_lateral_epicn_pt").setTranslation(new float[] {0.228f ,1.1482f ,-0.11f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3280().getArray())
                                                        .setCoord(new Coordinate().setUSE("points"))))))
                                                .addChild(new HAnimJoint("hanim_l_shoulder").setDEF("hanim_l_elbow").setName("l_elbow").setCenter(new float[] {0.2014f ,1.1357f ,-0.0682f })
                                                  .addChild(new HAnimSegment("hanim_l_elbow").setDEF("hanim_l_forearm").setName("l_forearm")
                                                    .addChild(new Transform().setTranslation(new float[] {0.2014f ,1.1357f ,-0.0682f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("MIN_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3281().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new Transform().setDEF("l_forearm_adjust").setTranslation(new float[] {0.2014f ,1.1357f ,-0.0682f }).setRotation(new float[] {-1f ,0f ,0f ,0.1f }).setCenter(new float[] {0.198f ,0.961f ,-0.0405f }))
                                                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_radial_styloid_pt").setName("l_radial_styloid_pt").setTranslation(new float[] {0.1901f ,0.8645f ,-0.0415f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3282().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_olecranon_pt").setName("l_olecranon_pt").setTranslation(new float[] {-0.1962f ,1.1375f ,-0.1123f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3283().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_humeral_medial_epicn_pt").setName("l_humeral_medial_epicn_pt").setTranslation(new float[] {0.1735f ,1.1272f ,-0.1113f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3284().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new HAnimSite("hanim_l_forearm").setDEF("hanim_l_radiale_pt").setName("l_radiale_pt").setTranslation(new float[] {0.2182f ,1.1212f ,-0.1167f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3285().getArray())
                                                          .setCoord(new Coordinate().setUSE("points"))))))
                                                  .addChild(new HAnimJoint("hanim_l_elbow").setDEF("hanim_l_wrist").setName("l_wrist").setCenter(new float[] {0.1984f ,0.8663f ,-0.0583f })
                                                    .addChild(new HAnimSegment("hanim_l_wrist").setDEF("hanim_l_hand").setName("l_hand")
                                                      .addChild(new Transform().setTranslation(new float[] {0.1984f ,0.8663f ,-0.0583f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("MIN_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3286().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new Transform().setDEF("l_hand_adjust").setTranslation(new float[] {0.1984f ,0.8663f ,-0.0583f }).setRotation(new float[] {-0.06361f ,-0.9967f ,0.04988f ,1.333f }).setCenter(new float[] {0.213f ,0.811f ,-0.0338f }))
                                                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_hand_tip").setName("l_hand_tip").setTranslation(new float[] {0.208f ,0.6731f ,-0.0491f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3287().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_metacarpal_pha2_pt").setName("l_metacarpal_pha2_pt").setTranslation(new float[] {0.2009f ,0.8139f ,-0.0237f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3288().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_dactylion_pt").setName("l_dactylion_pt").setTranslation(new float[] {0.2056f ,0.6743f ,-0.0482f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3289().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_ulnar_styloid_pt").setName("l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f ,0.8529f ,-0.0648f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3290().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_l_hand").setDEF("hanim_l_metacarpal_pha5_pt").setName("l_metacarpal_pha5_pt").setTranslation(new float[] {0.1929f ,0.786f ,-0.1122f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3291().getArray())
                                                            .setCoord(new Coordinate().setUSE("points"))))))
                                                    .addChild(new HAnimJoint("hanim_l_wrist").setDEF("hanim_l_thumb1").setName("l_thumb1").setCenter(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                      .addChild(new HAnimSegment("hanim_l_thumb1").setDEF("hanim_l_thumb_metacarpal").setName("l_thumb_metacarpal")
                                                        .addChild(new Transform().setTranslation(new float[] {0.1924f ,0.8472f ,-0.0534f })
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3292().getArray())
                                                              .setCoord(new Coordinate().setUSE("points"))))))
                                                      .addChild(new HAnimJoint("hanim_l_thumb1").setDEF("hanim_l_thumb2").setName("l_thumb2").setCenter(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                        .addChild(new HAnimSegment("hanim_l_thumb2").setDEF("hanim_l_thumb_proximal").setName("l_thumb_proximal")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1951f ,0.8226f ,0.0246f })
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3293().getArray())
                                                                .setCoord(new Coordinate().setUSE("points"))))))
                                                        .addChild(new HAnimJoint("hanim_l_thumb2").setDEF("hanim_l_thumb3").setName("l_thumb3").setCenter(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                          .addChild(new HAnimSegment("hanim_l_thumb3").setDEF("hanim_l_thumb_distal").setName("l_thumb_distal")
                                                            .addChild(new Transform().setTranslation(new float[] {0.1955f ,0.8159f ,0.0464f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3294().getArray())
                                                                  .setCoord(new Coordinate().setUSE("points")))))
                                                            .addChild(new HAnimSite("hanim_l_thumb_distal").setDEF("hanim_l_thumb_distal_tip").setName("l_thumb_distal_tip").setTranslation(new float[] {0.1982f ,0.8061f ,0.0759f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3295().getArray())
                                                                  .setCoord(new Coordinate().setUSE("points")))))))))
                                                    .addChild(new HAnimJoint("hanim_l_wrist").setDEF("hanim_l_index0").setName("l_index0").setCenter(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                      .addChild(new HAnimSegment("hanim_l_index0").setDEF("hanim_l_index_metacarpal").setName("l_index_metacarpal")
                                                        .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.8024f ,-0.028f })
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3296().getArray())
                                                              .setCoord(new Coordinate().setUSE("points"))))))
                                                      .addChild(new HAnimJoint("hanim_l_index0").setDEF("hanim_l_index1").setName("l_index1").setCenter(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                        .addChild(new HAnimSegment("hanim_l_index1").setDEF("hanim_l_index_proximal").setName("l_index_proximal")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1983f ,0.7815f ,-0.028f })
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3297().getArray())
                                                                .setCoord(new Coordinate().setUSE("points"))))))
                                                        .addChild(new HAnimJoint("hanim_l_index1").setDEF("hanim_l_index2").setName("l_index2").setCenter(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                          .addChild(new HAnimSegment("hanim_l_index2").setDEF("hanim_l_index_middle").setName("l_index_middle")
                                                            .addChild(new Transform().setTranslation(new float[] {0.2017f ,0.7363f ,-0.0248f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3298().getArray())
                                                                  .setCoord(new Coordinate().setUSE("points"))))))
                                                          .addChild(new HAnimJoint("hanim_l_index2").setDEF("hanim_l_index3").setName("l_index3").setCenter(new float[] {0.2028f ,0.7139f ,-0.0236f })
                                                            .addChild(new HAnimSegment("hanim_l_index3").setDEF("hanim_l_index_distal").setName("l_index_distal")
                                                              .addChild(new Transform().setTranslation(new float[] {0.2028f ,0.7139f ,-0.0236f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("JOINT_COLOR")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt3299().getArray())
                                                                    .setCoord(new Coordinate().setUSE("points")))))
                                                              .addChild(new HAnimSite("hanim_l_index_distal").setDEF("hanim_l_index_distal_tip").setName("l_index_distal_tip").setTranslation(new float[] {0.2089f ,0.6858f ,-0.0245f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32100().getArray())
                                                                    .setCoord(new Coordinate().setUSE("points")))))))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_r_shoulder").setName("r_shoulder").setCenter(new float[] {-0.1907f ,1.4407f ,-0.0325f })
                                                .addChild(new HAnimSegment("hanim_r_shoulder").setDEF("hanim_r_upperarm").setName("r_upperarm")
                                                  .addChild(new Transform().setTranslation(new float[] {-0.1907f ,1.4407f ,-0.0325f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("MIN_COLOR")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32101().getArray())
                                                        .setCoord(new Coordinate().setUSE("points")))))
                                                  .addChild(new Transform().setDEF("r_upperarm_adjust").setTranslation(new float[] {-0.1907f ,1.4407f ,-0.0325f }).setRotation(new float[] {1f ,0f ,0f ,0.0836f }).setCenter(new float[] {-0.182f ,1.22f ,-0.047f }))
                                                  .addChild(new HAnimSite("hanim_r_upperarm").setDEF("hanim_r_humeral_lateral_epicn_pt").setName("r_humeral_lateral_epicn_pt").setTranslation(new float[] {-0.2224f ,1.1517f ,-0.1033f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32102().getArray())
                                                        .setCoord(new Coordinate().setUSE("points"))))))
                                                .addChild(new HAnimJoint("hanim_r_shoulder").setDEF("hanim_r_elbow").setName("r_elbow").setCenter(new float[] {-0.1949f ,1.1388f ,-0.062f })
                                                  .addChild(new HAnimSegment("hanim_r_elbow").setDEF("hanim_r_forearm").setName("r_forearm")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.1949f ,1.1388f ,-0.062f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("MIN_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32103().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new Transform().setDEF("r_forearm_adjust").setTranslation(new float[] {-0.1949f ,1.1388f ,-0.062f }).setRotation(new float[] {-1f ,0f ,0f ,0.1254f }).setCenter(new float[] {-0.198f ,0.961f ,-0.0397f }))
                                                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_radial_styloid_pt").setName("r_radial_styloid_pt").setTranslation(new float[] {-0.1884f ,0.8676f ,-0.036f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32104().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_olecranon_pt").setName("r_olecranon_pt").setTranslation(new float[] {-0.1907f ,1.1405f ,-0.1065f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32105().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_humeral_medial_epicn_pt").setName("r_humeral_medial_epicn_pt").setTranslation(new float[] {-0.168f ,1.1298f ,-0.1062f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32106().getArray())
                                                          .setCoord(new Coordinate().setUSE("points")))))
                                                    .addChild(new HAnimSite("hanim_r_forearm").setDEF("hanim_r_radiale_pt").setName("r_radiale_pt").setTranslation(new float[] {-0.213f ,1.1305f ,-0.1091f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32107().getArray())
                                                          .setCoord(new Coordinate().setUSE("points"))))))
                                                  .addChild(new HAnimJoint("hanim_r_elbow").setDEF("hanim_r_wrist").setName("r_wrist").setCenter(new float[] {-0.1959f ,0.8694f ,-0.0521f })
                                                    .addChild(new HAnimSegment("hanim_r_wrist").setDEF("hanim_r_hand").setName("r_hand")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1959f ,0.8694f ,-0.0521f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("MIN_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32108().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new Transform().setDEF("r_hand_adjust").setRotation(new float[] {-0.09024f ,0.994f ,-0.0624f ,1.216f }).setCenter(new float[] {-0.217f ,0.811f ,-0.0338f }))
                                                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_hand_tip").setName("r_hand_tip").setTranslation(new float[] {-0.1969f ,0.6758f ,-0.0427f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32109().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_metacarpal_pha2_pt").setName("r_metacarpal_pha2_pt").setTranslation(new float[] {-0.1977f ,0.8169f ,-0.0177f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32110().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_dactylion_pt").setName("r_dactylion_pt").setTranslation(new float[] {-0.1941f ,0.6772f ,-0.0423f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32111().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_ulnar_styloid_pt").setName("r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f ,0.8562f ,-0.0584f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32112().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))
                                                      .addChild(new HAnimSite("hanim_r_hand").setDEF("hanim_r_metacarpal_pha5_pt").setName("r_metacarpal_pha5_pt").setTranslation(new float[] {-0.1929f ,0.789f ,-0.1064f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32113().getArray())
                                                            .setCoord(new Coordinate().setUSE("points")))))))))
                                              .addChild(new HAnimJoint("hanim_vt1").setDEF("hanim_vc7").setName("vc7").setCenter(new float[] {0.0066f ,1.5132f ,-0.0301f })
                                                .addChild(new HAnimSegment("hanim_vc7").setDEF("hanim_c7").setName("c7")
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5132f ,-0.0301f })
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                      .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32114().getArray())
                                                        .setCoord(new Coordinate().setUSE("points"))))))
                                                .addChild(new HAnimJoint("hanim_vc7").setDEF("hanim_vc6").setName("vc6").setCenter(new float[] {0.0066f ,1.5357f ,-0.0143f })
                                                  .addChild(new HAnimSegment("hanim_vc6").setDEF("hanim_c6").setName("c6")
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5357f ,-0.0143f })
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                        .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32115().getArray())
                                                          .setCoord(new Coordinate().setUSE("points"))))))
                                                  .addChild(new HAnimJoint("hanim_vc6").setDEF("hanim_vc5").setName("vc5").setCenter(new float[] {0.0066f ,1.552f ,-0.0082f })
                                                    .addChild(new HAnimSegment("hanim_vc5").setDEF("hanim_c5").setName("c5")
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.552f ,-0.0082f })
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                          .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32116().getArray())
                                                            .setCoord(new Coordinate().setUSE("points"))))))
                                                    .addChild(new HAnimJoint("hanim_vc5").setDEF("hanim_vc4").setName("vc4").setCenter(new float[] {0.0066f ,1.5662f ,-0.0084f })
                                                      .addChild(new HAnimSegment("hanim_vc4").setDEF("hanim_c4").setName("c4")
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5662f ,-0.0084f })
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32117().getArray())
                                                              .setCoord(new Coordinate().setUSE("points"))))))
                                                      .addChild(new HAnimJoint("hanim_vc4").setDEF("hanim_vc3").setName("vc3").setCenter(new float[] {0.0066f ,1.58f ,-0.0103f })
                                                        .addChild(new HAnimSegment("hanim_vc3").setDEF("hanim_c3").setName("c3")
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.58f ,-0.0103f })
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32118().getArray())
                                                                .setCoord(new Coordinate().setUSE("points"))))))
                                                        .addChild(new HAnimJoint("hanim_vc3").setDEF("hanim_vc2").setName("vc2").setCenter(new float[] {0.0066f ,1.5928f ,-0.0103f })
                                                          .addChild(new HAnimSegment("hanim_vc2").setDEF("hanim_c2").setName("c2")
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.5928f ,-0.0103f })
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("REC_SPINAL_COLOR")))
                                                                .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32119().getArray())
                                                                  .setCoord(new Coordinate().setUSE("points"))))))
                                                          .addChild(new HAnimJoint("hanim_vc2").setDEF("hanim_vc1").setName("vc1").setCenter(new float[] {0.0066f ,1.6144f ,-0.0034f })
                                                            .addChild(new HAnimSegment("hanim_vc1").setDEF("hanim_c1").setName("c1")
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f ,1.6144f ,-0.0034f })
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("SPINAL_COLOR")))
                                                                  .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32120().getArray())
                                                                    .setCoord(new Coordinate().setUSE("points"))))))
                                                            .addChild(new HAnimJoint("hanim_vc1").setDEF("hanim_skullbase").setName("skullbase").setCenter(new float[] {0.0044f ,1.6209f ,0.0236f })
                                                              .addChild(new HAnimSegment("hanim_skullbase").setDEF("hanim_skull").setName("skull")
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f ,1.6209f ,0.0236f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("MIN_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32121().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_skull_tip").setName("skull_tip").setTranslation(new float[] {0.005f ,1.7504f ,0.0055f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32122().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_sellion_pt").setName("sellion_pt").setTranslation(new float[] {0.0058f ,1.6316f ,0.0852f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32123().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_infraorbitale_pt").setName("r_infraorbitale_pt").setTranslation(new float[] {-0.0237f ,1.6171f ,0.0752f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32124().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_infraorbitale_pt").setName("l_infraorbitale_pt").setTranslation(new float[] {0.0341f ,1.6171f ,0.0752f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32125().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_supramenton_pt").setName("supramenton_pt").setTranslation(new float[] {0.0061f ,1.541f ,0.0805f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32126().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_tragion_pt").setName("r_tragion_pt").setTranslation(new float[] {-0.0646f ,1.6347f ,0.0302f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32127().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_r_gonion_pt").setName("r_gonion_pt").setTranslation(new float[] {-0.052f ,1.5529f ,0.0347f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32128().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_tragion_pt").setName("l_tragion_pt").setTranslation(new float[] {0.0739f ,1.6348f ,0.0282f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32129().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_l_gonion_pt").setName("l_gonion_pt").setTranslation(new float[] {0.0631f ,1.553f ,0.033f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32130().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points")))))
                                                                .addChild(new HAnimSite("hanim_skull").setDEF("hanim_nuchale_pt").setName("nuchale_pt").setTranslation(new float[] {0.0039f ,1.5972f ,-0.0796f })
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))
                                                                    .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5f ).setCoordIndex(new MFInt32131().getArray())
                                                                      .setCoord(new Coordinate().setUSE("points"))))))))))))))))))))))))))))))))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_HumanoidRoot"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt12"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt11"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt9"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt8"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt7"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt4"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc7"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc6"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc5"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_ankle"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_ankle"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index0"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_index3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_metatarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_midtarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_midtarsal"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_subtalar"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_thumb1"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_thumb2"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_thumb3"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_l_wrist"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_r_wrist"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c7"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_skull"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_midproximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t12"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t11"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t10"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t9"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t8"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t7"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t6"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t4"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_t1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c6"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c5"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c3"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c2"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_c1"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_forefoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_hand"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_hand"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_hindfoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_hindfoot"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_middle"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_index_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_middistal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_middistal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thumb_distal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thumb_metacarpal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_thumb_proximal"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment("hanim_humanoid").setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_skull_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_asis_pt"))
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
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_forefoot_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_hand_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_hand_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_lateral_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_humeral_medial_epicn_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_index_distal_tip"))
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
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_thumb_distal_tip"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite("hanim_humanoid").setUSE("hanim_r_ulnar_styloid_pt"))
          .addViewpoints(new HAnimSite("hanim_humanoid").setDEF("hanim_DiamondManLOA_2_view").setName("DiamondManLOA_2_view")
            .addChild(new Viewpoint().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0.35f ,0.854f ,2.57665f }))
            .addChild(new Viewpoint().setDEF("SideView").setDescription("Side View").setPosition(new float[] {2f ,0.854f ,0f }).setOrientation(new float[] {0f ,1f ,0f ,1.57079f }))
            .addChild(new Viewpoint().setDEF("TopView").setDescription("Top View").setPosition(new float[] {0f ,3.4495f ,0f }).setOrientation(new float[] {1f ,0f ,0f ,-1.57079f }))
            .addChild(new Viewpoint().setDEF("RootView").setDescription("Humanoid Root View").setPosition(new float[] {0f ,0.824f ,0.277f }))
            .addChild(new Viewpoint().setDEF("InclinedView").setDescription("Inclined View").setPosition(new float[] {1.62f ,1.05f ,2.06f }).setOrientation(new float[] {-0.113f ,0.993f ,0.0347f ,0.671f })))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Diamond Man Key"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Minimal Humanoid Joints"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Joints"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Recommended Spinal Joints"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Spinal Joints"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Sites"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Hand & Feet Joints"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFInt3215 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFVec3f16 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0.01f ,0f ,-0.01f ,0f ,0f ,0f ,0f ,0.01f ,0.01f ,0f ,0f ,0f ,0f ,-0.01f ,0f ,-0.01f ,0f });
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Root"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFInt3219 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3220 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3221 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3222 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3223 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3224 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3225 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3226 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3227 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3228 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3229 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3230 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3231 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3232 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3233 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3234 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3235 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3236 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3237 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3238 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3239 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3240 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3241 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3242 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3243 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3244 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3245 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3246 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3247 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3248 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3249 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3250 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3251 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3252 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3253 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3254 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3255 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3256 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3257 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3258 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3259 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3260 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3261 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3262 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3263 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3264 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3265 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3266 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3267 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3268 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3269 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3270 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3271 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3272 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3273 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3274 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3275 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3276 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3277 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3278 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3279 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3280 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3281 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3282 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3283 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3284 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3285 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3286 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3287 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3288 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3289 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3290 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3291 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3292 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3293 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3294 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3295 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3296 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3297 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3298 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt3299 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32100 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32101 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32102 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32103 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32104 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32105 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32106 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32107 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32108 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32109 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32110 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32111 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32112 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32113 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32114 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32115 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32116 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32117 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32118 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32119 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32120 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32121 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32122 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32123 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32124 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32125 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32126 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32127 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32128 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32129 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32130 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
private class MFInt32131 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
}
