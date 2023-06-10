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
public class DiamondManLOA2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new DiamondManLOA2().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/DiamondManLOA2.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("DiamondManLOA2.x3d"))
        .addMeta(new meta().setName("description").setContent("hanim skeletal structure at level of articulation two, one diamond at the base node for the structure"))
        .addMeta(new meta().setName("creator").setContent("Matthew T. Beitler"))
        .addMeta(new meta().setName("translator").setContent("Joel S. Pawloski"))
        .addMeta(new meta().setName("created").setContent("12 November 2001"))
        .addMeta(new meta().setName("modified").setContent("23 December 2021"))
        .addMeta(new meta().setName("Image").setContent("DiamondManLOA2.png"))
        .addMeta(new meta().setName("Image").setContent("images/BonesAllSkeletonFrontViewLOA2.png"))
        .addMeta(new meta().setName("motto").setContent("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""))
        .addMeta(new meta().setName("reference").setContent("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps"))
        .addMeta(new meta().setName("subject").setContent("human animation, x3d, vrml, animation"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setInfo(new MFString0().getArray()).setTitle("HANIM 1.1 Default Joint Centers, LOA1"))
        .addChild(new NavigationInfo().setSpeed(1.5000f))
        .addChild(new Viewpoint().setCenterOfRotation(new float[] {0f,1f,0f}).setDescription("Diamond Man, LOA 2").setPosition(new float[] {0f,1f,3f}))
        .addChild(new Transform().setTranslation(new float[] {1f,1.5f,0f})
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString1().getArray())
                .setFontStyle(new FontStyle().setFamily(new MFString2().getArray()).setSize(0.1000f)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("TextMaterial").setDiffuseColor(new float[] {0.9f,0.9f,0.9f}))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.3f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.0800f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("MIN_COLOR").setDiffuseColor(new float[] {1f,0f,0f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString3().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString4().getArray()).setSize(0.1000f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.5f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.0800f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("JOINT_COLOR").setDiffuseColor(new float[] {1f,1f,0f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString5().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString6().getArray()).setSize(0.1000f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.7f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.0800f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("REC_SPINAL_COLOR").setDiffuseColor(new float[] {1f,0f,1f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString7().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString8().getArray()).setSize(0.1000f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.9f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.0800f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("SPINAL_COLOR").setDiffuseColor(new float[] {0f,1f,0f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString9().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString10().getArray()).setSize(0.1000f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-1.3f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.0800f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("SITE_COLOR").setDiffuseColor(new float[] {0f,0f,1f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString11().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString12().getArray()).setSize(0.1000f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))
            .addChild(new Transform().setTranslation(new float[] {0f,-1.1f,0f})
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.0800f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAND_FEET_COLOR").setDiffuseColor(new float[] {0f,1f,1f}))))
              .addChild(new Transform().setTranslation(new float[] {0.2f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString13().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString14().getArray()).setSize(0.1000f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMaterial"))))))))
        .addChild(new HAnimHumanoid().setName("humanoid").setDEF("hanim_humanoid").setLoa(2).setVersion("2.0")
          .addComments("original HAnimHumanoid info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'")
          .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
            .addValue(new MetadataString().setName("humanoidVersion").setValue(new MFString15().getArray()))
            .addValue(new MetadataString().setName("authorEmail").setValue(new MFString16().getArray()))
            .addValue(new MetadataString().setName("authorName").setValue(new MFString17().getArray()))
            .addValue(new MetadataString().setName("copyright").setValue(new MFString18().getArray()))
            .addValue(new MetadataString().setName("creationDate").setValue(new MFString19().getArray()))
            .addValue(new MetadataString().setName("usageRestrictions").setValue(new MFString20().getArray())))
          .addSkeleton(new HAnimJoint().setName("humanoid_root").setDEF("hanim_humanoid_root").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat21().getArray()).setLlimit(new MFFloat22().getArray())
            .addChild(new HAnimSegment().setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new Transform().setTranslation(new float[] {0f,0.824f,0.0277f})
                .addChild(new Shape().setDEF("DiamondShape")
                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3223().getArray()).setCreaseAngle(0.5000f)
                    .setCoord(new Coordinate().setDEF("points").setPoint(new MFVec3f24().getArray())))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("ROOT_COLOR").setDiffuseColor(new float[] {1f,1f,1f}))))
                .addChild(new Transform().setTranslation(new float[] {0f,0.01f,0f})
                  .addChild(new Billboard()
                    .addChild(new Shape()
                      .setGeometry(new Text().setString(new MFString25().getArray())
                        .setFontStyle(new FontStyle().setFamily(new MFString26().getArray()).setSize(0.0100f).setStyle("ITALIC")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(new float[] {0.039216f,1f,0.568627f}))))))))
            .addChild(new HAnimJoint().setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setUlimit(new MFFloat27().getArray()).setLlimit(new MFFloat28().getArray())
              .addChild(new HAnimSegment().setName("pelvis").setDEF("hanim_pelvis")
                .addChild(new Transform().setDEF("sacroiliacPos").setTranslation(new float[] {0f,0.9149f,0.0016f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3229().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MIN_COLOR")))))
                .addChild(new HAnimSite().setName("r_iliocristale_pt").setDEF("hanim_r_iliocristale_pt").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3230().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("r_trochanterion_pt").setDEF("hanim_r_trochanterion_pt").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3231().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_iliocristale_pt").setDEF("hanim_l_iliocristale_pt").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3232().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_trochanterion_pt").setDEF("hanim_l_trochanterion_pt").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3233().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("r_asis_pt").setDEF("hanim_r_asis_pt").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3234().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_asis_pt").setDEF("hanim_l_asis_pt").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3235().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("r_psis_pt").setDEF("hanim_r_psis_pt").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3236().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("l_psis_pt").setDEF("hanim_l_psis_pt").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3237().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                .addChild(new HAnimSite().setName("crotch_pt").setDEF("hanim_crotch_pt").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3238().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SITE_COLOR"))))))
              .addChild(new HAnimJoint().setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setUlimit(new MFFloat39().getArray()).setLlimit(new MFFloat40().getArray())
                .addChild(new HAnimSegment().setName("l_thigh").setDEF("hanim_l_thigh")
                  .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3241().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                  .addChild(new HAnimSite().setName("l_knee_crease_pt").setDEF("hanim_l_knee_crease_pt").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3242().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("l_femoral_lateral_epicondyle_pt").setDEF("hanim_l_femoral_lateral_epicondyle_pt").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3243().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("l_femoral_medial_epicondyle_pt").setDEF("hanim_l_femoral_medial_epicondyle_pt").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3244().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                .addChild(new HAnimJoint().setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setUlimit(new MFFloat45().getArray()).setLlimit(new MFFloat46().getArray())
                  .addChild(new HAnimSegment().setName("l_calf").setDEF("hanim_l_calf")
                    .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                      .addChild(new Shape()
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3247().getArray()).setCreaseAngle(0.5000f)
                          .setCoord(new Coordinate().setUSE("points")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("MIN_COLOR"))))))
                  .addChild(new HAnimJoint().setName("l_talocrural").setDEF("hanim_l_talocrural").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setUlimit(new MFFloat48().getArray()).setLlimit(new MFFloat49().getArray())
                    .addChild(new HAnimSegment().setName("l_talus").setDEF("hanim_l_talus")
                      .addChild(new Transform().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3250().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                      .addChild(new HAnimSite().setName("l_lateral_malleolus_pt").setDEF("hanim_l_lateral_malleolus_pt").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3251().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("l_medial_malleolus_pt").setDEF("hanim_l_medial_malleolus_pt").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3252().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("l_sphyrion_pt").setDEF("hanim_l_sphyrion_pt").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3253().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("l_calcaneus_posterior_pt").setDEF("hanim_l_calcaneus_posterior_pt").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3254().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))
                    .addChild(new HAnimJoint().setName("l_tarsometatarsal_2").setDEF("hanim_l_tarsometatarsal_2").setCenter(new float[] {0.1086f,0.0001f,-0.0368f}).setUlimit(new MFFloat55().getArray()).setLlimit(new MFFloat56().getArray())
                      .addChild(new HAnimSegment().setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2")
                        .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,-0.0368f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3257().getArray()).setCreaseAngle(0.5000f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("MIN_COLOR"))))))
                      .addChild(new HAnimJoint().setName("l_metatarsophalangeal_2").setDEF("hanim_l_metatarsophalangeal_2").setCenter(new float[] {0.1086f,0.0001f,0.0368f}).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray())
                        .addChild(new HAnimSegment().setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2")
                          .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,0.0368f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3260().getArray()).setCreaseAngle(0.5000f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                          .addChild(new HAnimSite().setName("l_middistal_tip").setDEF("hanim_l_middistal_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3261().getArray()).setCreaseAngle(0.5000f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                          .addChild(new HAnimSite().setName("l_metatarsal_phalanx_1_pt").setDEF("hanim_l_metatarsal_phalanx_1_pt").setTranslation(new float[] {0.0816f,0.0232f,0.0106f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3262().getArray()).setCreaseAngle(0.5000f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))
                        .addChild(new HAnimJoint().setName("l_tarsal_distal_interphalangeal_2").setDEF("hanim_l_tarsal_distal_interphalangeal_2").setCenter(new float[] {0.1086f,0f,0.0762f}).setUlimit(new MFFloat63().getArray()).setLlimit(new MFFloat64().getArray())
                          .addChild(new HAnimSegment().setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2")
                            .addChild(new Transform().setTranslation(new float[] {0.1086f,0f,0.0762f})
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3265().getArray()).setCreaseAngle(0.5000f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                            .addChild(new HAnimSite().setName("l_forefoot_tip").setDEF("hanim_l_forefoot_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3266().getArray()).setCreaseAngle(0.5000f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                            .addChild(new HAnimSite().setName("l_metatarsal_phalanx_5_pt").setDEF("hanim_l_metatarsal_phalanx_5_pt").setTranslation(new float[] {0.1825f,0.007f,0.0928f})
                              .addComments("# CAESAR Feature Point #66")
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3267().getArray()).setCreaseAngle(0.5000f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                            .addChild(new HAnimSite().setName("l_tarsal_distal_phalanx_2_pt").setDEF("hanim_l_tarsal_distal_phalanx_2_pt").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                              .addComments("# CAESAR Feature Point #72")
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3268().getArray()).setCreaseAngle(0.5000f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))))))))
              .addChild(new HAnimJoint().setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f}).setUlimit(new MFFloat69().getArray()).setLlimit(new MFFloat70().getArray())
                .addChild(new HAnimSegment().setName("r_thigh").setDEF("hanim_r_thigh")
                  .addChild(new Transform().setTranslation(new float[] {-0.095f,0.9171f,0.0029f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3271().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                  .addChild(new HAnimSite().setName("r_knee_crease_pt").setDEF("hanim_r_knee_crease_pt").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3272().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("r_femoral_lateral_epicondyle_pt").setDEF("hanim_r_femoral_lateral_epicondyle_pt").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3273().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR")))))
                  .addChild(new HAnimSite().setName("r_femoral_medial_epicondyle_pt").setDEF("hanim_r_femoral_medial_epicondyle_pt").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3274().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                .addChild(new HAnimJoint().setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f}).setUlimit(new MFFloat75().getArray()).setLlimit(new MFFloat76().getArray())
                  .addChild(new HAnimSegment().setName("r_calf").setDEF("hanim_r_calf")
                    .addChild(new Transform().setTranslation(new float[] {-0.0867f,0.4913f,0.0318f})
                      .addChild(new Shape()
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3277().getArray()).setCreaseAngle(0.5000f)
                          .setCoord(new Coordinate().setUSE("points")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                  .addChild(new HAnimJoint().setName("r_talocrural").setDEF("hanim_r_talocrural").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f}).setUlimit(new MFFloat78().getArray()).setLlimit(new MFFloat79().getArray())
                    .addChild(new HAnimSegment().setName("r_talus").setDEF("hanim_r_talus")
                      .addChild(new Transform().setTranslation(new float[] {-0.0801f,0.0712f,-0.0766f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3280().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                      .addChild(new HAnimSite().setName("r_lateral_malleolus_pt").setDEF("hanim_r_lateral_malleolus_pt").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3281().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("r_medial_malleolus_pt").setDEF("hanim_r_medial_malleolus_pt").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3282().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("r_sphyrion_pt").setDEF("hanim_r_sphyrion_pt").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3283().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                      .addChild(new HAnimSite().setName("r_calcaneus_posterior_pt").setDEF("hanim_r_calcaneus_posterior_pt").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3284().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("HAND_FEET_COLOR"))))))
                    .addChild(new HAnimJoint().setName("r_metatarsophalangeal_2").setDEF("hanim_r_metatarsophalangeal_2").setCenter(new float[] {-0.0801f,0f,0.0368f}).setUlimit(new MFFloat85().getArray()).setLlimit(new MFFloat86().getArray())
                      .addChild(new HAnimSegment().setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2")
                        .addChild(new Transform().setTranslation(new float[] {-0.0801f,0f,0.0368f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3287().getArray()).setCreaseAngle(0.5000f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                        .addChild(new HAnimSite().setName("r_middistal_tip").setDEF("hanim_r_middistal_tip").setTranslation(new float[] {-0.1043f,-0.0227f,0.145f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3288().getArray()).setCreaseAngle(0.5000f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                        .addChild(new HAnimSite().setName("r_metatarsal_phalanx_5_pt").setDEF("hanim_r_metatarsal_phalanx_5_pt").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3289().getArray()).setCreaseAngle(0.5000f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                        .addChild(new HAnimSite().setName("r_metatarsal_phalanx_1_pt").setDEF("hanim_r_metatarsal_phalanx_1_pt").setTranslation(new float[] {-0.0521f,0.026f,0.0127f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3290().getArray()).setCreaseAngle(0.5000f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))
                        .addChild(new HAnimSite().setName("r_tarsal_distal_phalanx_2_pt").setDEF("hanim_r_tarsal_distal_phalanx_2_pt").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3291().getArray()).setCreaseAngle(0.5000f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))))))))
            .addChild(new HAnimJoint().setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setUlimit(new MFFloat92().getArray()).setLlimit(new MFFloat93().getArray())
              .addChild(new HAnimSegment().setName("l5").setDEF("hanim_l5")
                .addChild(new Transform().setTranslation(new float[] {0.0028f,1.0568f,-0.0776f})
                  .addChild(new Shape()
                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3294().getArray()).setCreaseAngle(0.5000f)
                      .setCoord(new Coordinate().setUSE("points")))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
              .addChild(new HAnimJoint().setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat95().getArray()).setLlimit(new MFFloat96().getArray())
                .addChild(new HAnimSegment().setName("l4").setDEF("hanim_l4")
                  .addChild(new Transform().setTranslation(new float[] {0.0035f,1.0925f,-0.0787f})
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3297().getArray()).setCreaseAngle(0.5000f)
                        .setCoord(new Coordinate().setUSE("points")))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                .addChild(new HAnimJoint().setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat98().getArray()).setLlimit(new MFFloat99().getArray())
                  .addChild(new HAnimSegment().setName("l3").setDEF("hanim_l3")
                    .addChild(new Transform().setTranslation(new float[] {0.0041f,1.1276f,-0.0796f})
                      .addChild(new Shape()
                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32100().getArray()).setCreaseAngle(0.5000f)
                          .setCoord(new Coordinate().setUSE("points")))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                  .addChild(new HAnimJoint().setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f}).setUlimit(new MFFloat101().getArray()).setLlimit(new MFFloat102().getArray())
                    .addChild(new HAnimSegment().setName("l2").setDEF("hanim_l2")
                      .addChild(new Transform().setTranslation(new float[] {0.0045f,1.1546f,-0.08f})
                        .addChild(new Shape()
                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32103().getArray()).setCreaseAngle(0.5000f)
                            .setCoord(new Coordinate().setUSE("points")))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                    .addChild(new HAnimJoint().setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat104().getArray()).setLlimit(new MFFloat105().getArray())
                      .addChild(new HAnimSegment().setName("l1").setDEF("hanim_l1")
                        .addChild(new Transform().setTranslation(new float[] {0.0048f,1.1912f,-0.0805f})
                          .addChild(new Shape()
                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32106().getArray()).setCreaseAngle(0.5000f)
                              .setCoord(new Coordinate().setUSE("points")))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                      .addChild(new HAnimJoint().setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat107().getArray()).setLlimit(new MFFloat108().getArray())
                        .addChild(new HAnimSegment().setName("t12").setDEF("hanim_t12")
                          .addChild(new Transform().setTranslation(new float[] {0.0051f,1.2278f,-0.0808f})
                            .addChild(new Shape()
                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32109().getArray()).setCreaseAngle(0.5000f)
                                .setCoord(new Coordinate().setUSE("points")))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                        .addChild(new HAnimJoint().setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat110().getArray()).setLlimit(new MFFloat111().getArray())
                          .addChild(new HAnimSegment().setName("t11").setDEF("hanim_t11")
                            .addChild(new Transform().setTranslation(new float[] {0.0053f,1.2679f,-0.081f})
                              .addChild(new Shape()
                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32112().getArray()).setCreaseAngle(0.5000f)
                                  .setCoord(new Coordinate().setUSE("points")))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                          .addChild(new HAnimJoint().setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f}).setUlimit(new MFFloat113().getArray()).setLlimit(new MFFloat114().getArray())
                            .addChild(new HAnimSegment().setName("t10").setDEF("hanim_t10")
                              .addChild(new Transform().setTranslation(new float[] {0.0056f,1.2848f,-0.0822f})
                                .addChild(new Shape()
                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32115().getArray()).setCreaseAngle(0.5000f)
                                    .setCoord(new Coordinate().setUSE("points")))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                            .addChild(new HAnimJoint().setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f}).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                              .addChild(new HAnimSegment().setName("t9").setDEF("hanim_t9")
                                .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3126f,-0.0838f})
                                  .addChild(new Shape()
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32118().getArray()).setCreaseAngle(0.5000f)
                                      .setCoord(new Coordinate().setUSE("points")))
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                              .addChild(new HAnimJoint().setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat119().getArray()).setLlimit(new MFFloat120().getArray())
                                .addChild(new HAnimSegment().setName("t8").setDEF("hanim_t8")
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3382f,-0.0845f})
                                    .addChild(new Shape()
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32121().getArray()).setCreaseAngle(0.5000f)
                                        .setCoord(new Coordinate().setUSE("points")))
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                .addChild(new HAnimJoint().setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat122().getArray()).setLlimit(new MFFloat123().getArray())
                                  .addChild(new HAnimSegment().setName("t7").setDEF("hanim_t7")
                                    .addChild(new Transform().setTranslation(new float[] {0.0058f,1.3625f,-0.0833f})
                                      .addChild(new Shape()
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32124().getArray()).setCreaseAngle(0.5000f)
                                          .setCoord(new Coordinate().setUSE("points")))
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                  .addChild(new HAnimJoint().setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat125().getArray()).setLlimit(new MFFloat126().getArray())
                                    .addChild(new HAnimSegment().setName("t6").setDEF("hanim_t6")
                                      .addChild(new Transform().setTranslation(new float[] {0.0059f,1.3866f,-0.08f})
                                        .addChild(new Shape()
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32127().getArray()).setCreaseAngle(0.5000f)
                                            .setCoord(new Coordinate().setUSE("points")))
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                                    .addChild(new HAnimJoint().setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat128().getArray()).setLlimit(new MFFloat129().getArray())
                                      .addChild(new HAnimSegment().setName("t5").setDEF("hanim_t5")
                                        .addChild(new Transform().setTranslation(new float[] {0.006f,1.4102f,-0.0745f})
                                          .addChild(new Shape()
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32130().getArray()).setCreaseAngle(0.5000f)
                                              .setCoord(new Coordinate().setUSE("points")))
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                      .addChild(new HAnimJoint().setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f}).setUlimit(new MFFloat131().getArray()).setLlimit(new MFFloat132().getArray())
                                        .addChild(new HAnimSegment().setName("t4").setDEF("hanim_t4")
                                          .addChild(new Transform().setTranslation(new float[] {0.0061f,1.432f,-0.0675f})
                                            .addChild(new Shape()
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32133().getArray()).setCreaseAngle(0.5000f)
                                                .setCoord(new Coordinate().setUSE("points")))
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                        .addChild(new HAnimJoint().setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat134().getArray()).setLlimit(new MFFloat135().getArray())
                                          .addChild(new HAnimSegment().setName("t3").setDEF("hanim_t3")
                                            .addChild(new Transform().setTranslation(new float[] {0.0062f,1.4583f,-0.057f})
                                              .addChild(new Shape()
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32136().getArray()).setCreaseAngle(0.5000f)
                                                  .setCoord(new Coordinate().setUSE("points")))
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                          .addChild(new HAnimJoint().setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat137().getArray()).setLlimit(new MFFloat138().getArray())
                                            .addChild(new HAnimSegment().setName("t2").setDEF("hanim_t2")
                                              .addChild(new Transform().setTranslation(new float[] {0.0063f,1.4761f,-0.0484f})
                                                .addChild(new Shape()
                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32139().getArray()).setCreaseAngle(0.5000f)
                                                    .setCoord(new Coordinate().setUSE("points")))
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                            .addChild(new HAnimJoint().setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f}).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray())
                                              .addChild(new HAnimSegment().setName("t1").setDEF("hanim_t1")
                                                .addChild(new Transform().setTranslation(new float[] {0.0065f,1.4951f,-0.0387f})
                                                  .addChild(new Shape()
                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32142().getArray()).setCreaseAngle(0.5000f)
                                                      .setCoord(new Coordinate().setUSE("points")))
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                                              .addChild(new HAnimJoint().setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setUlimit(new MFFloat143().getArray()).setLlimit(new MFFloat144().getArray())
                                                .addChild(new HAnimSegment().setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                  .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32145().getArray()).setCreaseAngle(0.5000f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                  .addChild(new Transform().setDEF("l_upperarm_adjust").setCenter(new float[] {0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.119f}).setTranslation(new float[] {0.2029f,1.4376f,-0.0387f}))
                                                  .addChild(new HAnimSite().setName("l_humeral_lateral_epicondyle_pt").setDEF("hanim_l_humeral_lateral_epicondyle_pt").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32146().getArray()).setCreaseAngle(0.5000f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                .addChild(new HAnimJoint().setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setUlimit(new MFFloat147().getArray()).setLlimit(new MFFloat148().getArray())
                                                  .addChild(new HAnimSegment().setName("l_forearm").setDEF("hanim_l_forearm")
                                                    .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32149().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                    .addChild(new Transform().setDEF("l_forearm_adjust").setCenter(new float[] {0.198f,0.961f,-0.0405f}).setRotation(new float[] {-1f,0f,0f,0.1f}).setTranslation(new float[] {0.2014f,1.1357f,-0.0682f}))
                                                    .addChild(new HAnimSite().setName("l_radial_styloid_pt").setDEF("hanim_l_radial_styloid_pt").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32150().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("l_olecranon_pt").setDEF("hanim_l_olecranon_pt").setTranslation(new float[] {-0.1962f,1.1375f,-0.1123f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32151().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("l_humeral_medial_epicondyle_pt").setDEF("hanim_l_humeral_medial_epicondyle_pt").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32152().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("l_radiale_pt").setDEF("hanim_l_radiale_pt").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32153().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                  .addChild(new HAnimJoint().setName("l_radiocarpal").setDEF("hanim_l_radiocarpal").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setUlimit(new MFFloat154().getArray()).setLlimit(new MFFloat155().getArray())
                                                    .addChild(new HAnimSegment().setName("l_carpal").setDEF("hanim_l_carpal")
                                                      .addChild(new Transform().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32156().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                      .addChild(new Transform().setDEF("l_hand_adjust").setCenter(new float[] {0.213f,0.811f,-0.0338f}).setRotation(new float[] {-0.06361f,-0.9967f,0.04988f,1.333f}).setTranslation(new float[] {0.1984f,0.8663f,-0.0583f}))
                                                      .addChild(new HAnimSite().setName("l_hand_tip").setDEF("hanim_l_hand_tip").setTranslation(new float[] {0.208f,0.6731f,-0.0491f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32157().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_metacarpal_phalanx_2_pt").setDEF("hanim_l_metacarpal_phalanx_2_pt").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32158().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_dactylion_pt").setDEF("hanim_l_dactylion_pt").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32159().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_ulnar_styloid_pt").setDEF("hanim_l_ulnar_styloid_pt").setTranslation(new float[] {-0.2142f,0.8529f,-0.0648f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32160().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("l_metacarpal_phalanx_5_pt").setDEF("hanim_l_metacarpal_phalanx_5_pt").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32161().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                    .addChild(new HAnimJoint().setName("l_carpometacarpal_1").setDEF("hanim_l_carpometacarpal_1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setUlimit(new MFFloat162().getArray()).setLlimit(new MFFloat163().getArray())
                                                      .addChild(new HAnimSegment().setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1")
                                                        .addChild(new Transform().setTranslation(new float[] {0.1924f,0.8472f,-0.0534f})
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32164().getArray()).setCreaseAngle(0.5000f)
                                                              .setCoord(new Coordinate().setUSE("points")))
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                      .addChild(new HAnimJoint().setName("l_metacarpophalangeal_1").setDEF("hanim_l_metacarpophalangeal_1").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setUlimit(new MFFloat165().getArray()).setLlimit(new MFFloat166().getArray())
                                                        .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1951f,0.8226f,0.0246f})
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32167().getArray()).setCreaseAngle(0.5000f)
                                                                .setCoord(new Coordinate().setUSE("points")))
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                        .addChild(new HAnimJoint().setName("l_carpal_interphalangeal_1").setDEF("hanim_l_carpal_interphalangeal_1").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setUlimit(new MFFloat168().getArray()).setLlimit(new MFFloat169().getArray())
                                                          .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1")
                                                            .addChild(new Transform().setTranslation(new float[] {0.1955f,0.8159f,0.0464f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32170().getArray()).setCreaseAngle(0.5000f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                                                            .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_1_tip").setDEF("hanim_l_carpal_distal_phalanx_1_tip").setTranslation(new float[] {0.1982f,0.8061f,0.0759f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32171().getArray()).setCreaseAngle(0.5000f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))))))
                                                    .addChild(new HAnimJoint().setName("l_carpometacarpal_2").setDEF("hanim_l_carpometacarpal_2").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setUlimit(new MFFloat172().getArray()).setLlimit(new MFFloat173().getArray())
                                                      .addChild(new HAnimSegment().setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2")
                                                        .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32174().getArray()).setCreaseAngle(0.5000f)
                                                              .setCoord(new Coordinate().setUSE("points")))
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                      .addChild(new HAnimJoint().setName("l_metacarpophalangeal_2").setDEF("hanim_l_metacarpophalangeal_2").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setUlimit(new MFFloat175().getArray()).setLlimit(new MFFloat176().getArray())
                                                        .addChild(new HAnimSegment().setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2")
                                                          .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32177().getArray()).setCreaseAngle(0.5000f)
                                                                .setCoord(new Coordinate().setUSE("points")))
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                        .addChild(new HAnimJoint().setName("l_carpal_proximal_interphalangeal_2").setDEF("hanim_l_carpal_proximal_interphalangeal_2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setUlimit(new MFFloat178().getArray()).setLlimit(new MFFloat179().getArray())
                                                          .addChild(new HAnimSegment().setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2")
                                                            .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32180().getArray()).setCreaseAngle(0.5000f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("JOINT_COLOR"))))))
                                                          .addChild(new HAnimJoint().setName("l_carpal_distal_interphalangeal_2").setDEF("hanim_l_carpal_distal_interphalangeal_2").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setUlimit(new MFFloat181().getArray()).setLlimit(new MFFloat182().getArray())
                                                            .addChild(new HAnimSegment().setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2")
                                                              .addChild(new Transform().setTranslation(new float[] {0.2028f,0.7139f,-0.0236f})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32183().getArray()).setCreaseAngle(0.5000f)
                                                                    .setCoord(new Coordinate().setUSE("points")))
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("JOINT_COLOR")))))
                                                              .addChild(new HAnimSite().setName("l_carpal_distal_phalanx_2_tip").setDEF("hanim_l_carpal_distal_phalanx_2_tip").setTranslation(new float[] {0.2089f,0.6858f,-0.0245f})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32184().getArray()).setCreaseAngle(0.5000f)
                                                                    .setCoord(new Coordinate().setUSE("points")))
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("HAND_FEET_COLOR")))))))))))))
                                              .addChild(new HAnimJoint().setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f}).setUlimit(new MFFloat185().getArray()).setLlimit(new MFFloat186().getArray())
                                                .addChild(new HAnimSegment().setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                  .addChild(new Transform().setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32187().getArray()).setCreaseAngle(0.5000f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                  .addChild(new Transform().setDEF("r_upperarm_adjust").setCenter(new float[] {-0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.0836f}).setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f}))
                                                  .addChild(new HAnimSite().setName("r_humeral_lateral_epicondyle_pt").setDEF("hanim_r_humeral_lateral_epicondyle_pt").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32188().getArray()).setCreaseAngle(0.5000f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                .addChild(new HAnimJoint().setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f}).setUlimit(new MFFloat189().getArray()).setLlimit(new MFFloat190().getArray())
                                                  .addChild(new HAnimSegment().setName("r_forearm").setDEF("hanim_r_forearm")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.1949f,1.1388f,-0.062f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32191().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                    .addChild(new Transform().setDEF("r_forearm_adjust").setCenter(new float[] {-0.198f,0.961f,-0.0397f}).setRotation(new float[] {-1f,0f,0f,0.1254f}).setTranslation(new float[] {-0.1949f,1.1388f,-0.062f}))
                                                    .addChild(new HAnimSite().setName("r_radial_styloid_pt").setDEF("hanim_r_radial_styloid_pt").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32192().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("r_olecranon_pt").setDEF("hanim_r_olecranon_pt").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32193().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("r_humeral_medial_epicondyle_pt").setDEF("hanim_r_humeral_medial_epicondyle_pt").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32194().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                    .addChild(new HAnimSite().setName("r_radiale_pt").setDEF("hanim_r_radiale_pt").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32195().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SITE_COLOR"))))))
                                                  .addChild(new HAnimJoint().setName("r_radiocarpal").setDEF("hanim_r_radiocarpal").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f}).setUlimit(new MFFloat196().getArray()).setLlimit(new MFFloat197().getArray())
                                                    .addChild(new HAnimSegment().setName("r_carpal").setDEF("hanim_r_carpal")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1959f,0.8694f,-0.0521f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32198().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                      .addChild(new Transform().setDEF("r_hand_adjust").setCenter(new float[] {-0.217f,0.811f,-0.0338f}).setRotation(new float[] {-0.09024f,0.994f,-0.0624f,1.216f}))
                                                      .addChild(new HAnimSite().setName("r_hand_tip").setDEF("hanim_r_hand_tip").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32199().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_metacarpal_phalanx_2_pt").setDEF("hanim_r_metacarpal_phalanx_2_pt").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32200().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_dactylion_pt").setDEF("hanim_r_dactylion_pt").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32201().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_ulnar_styloid_pt").setDEF("hanim_r_ulnar_styloid_pt").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32202().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                      .addChild(new HAnimSite().setName("r_metacarpal_phalanx_5_pt").setDEF("hanim_r_metacarpal_phalanx_5_pt").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32203().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SITE_COLOR")))))))))
                                              .addChild(new HAnimJoint().setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f}).setUlimit(new MFFloat204().getArray()).setLlimit(new MFFloat205().getArray())
                                                .addChild(new HAnimSegment().setName("c7").setDEF("hanim_c7")
                                                  .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5132f,-0.0301f})
                                                    .addChild(new Shape()
                                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32206().getArray()).setCreaseAngle(0.5000f)
                                                        .setCoord(new Coordinate().setUSE("points")))
                                                      .setAppearance(new Appearance()
                                                        .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                .addChild(new HAnimJoint().setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat207().getArray()).setLlimit(new MFFloat208().getArray())
                                                  .addChild(new HAnimSegment().setName("c6").setDEF("hanim_c6")
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5357f,-0.0143f})
                                                      .addChild(new Shape()
                                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32209().getArray()).setCreaseAngle(0.5000f)
                                                          .setCoord(new Coordinate().setUSE("points")))
                                                        .setAppearance(new Appearance()
                                                          .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                  .addChild(new HAnimJoint().setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat210().getArray()).setLlimit(new MFFloat211().getArray())
                                                    .addChild(new HAnimSegment().setName("c5").setDEF("hanim_c5")
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f,1.552f,-0.0082f})
                                                        .addChild(new Shape()
                                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32212().getArray()).setCreaseAngle(0.5000f)
                                                            .setCoord(new Coordinate().setUSE("points")))
                                                          .setAppearance(new Appearance()
                                                            .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                    .addChild(new HAnimJoint().setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat213().getArray()).setLlimit(new MFFloat214().getArray())
                                                      .addChild(new HAnimSegment().setName("c4").setDEF("hanim_c4")
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5662f,-0.0084f})
                                                          .addChild(new Shape()
                                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32215().getArray()).setCreaseAngle(0.5000f)
                                                              .setCoord(new Coordinate().setUSE("points")))
                                                            .setAppearance(new Appearance()
                                                              .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                      .addChild(new HAnimJoint().setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat216().getArray()).setLlimit(new MFFloat217().getArray())
                                                        .addChild(new HAnimSegment().setName("c3").setDEF("hanim_c3")
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f,1.58f,-0.0103f})
                                                            .addChild(new Shape()
                                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32218().getArray()).setCreaseAngle(0.5000f)
                                                                .setCoord(new Coordinate().setUSE("points")))
                                                              .setAppearance(new Appearance()
                                                                .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                        .addChild(new HAnimJoint().setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat219().getArray()).setLlimit(new MFFloat220().getArray())
                                                          .addChild(new HAnimSegment().setName("c2").setDEF("hanim_c2")
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5928f,-0.0103f})
                                                              .addChild(new Shape()
                                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32221().getArray()).setCreaseAngle(0.5000f)
                                                                  .setCoord(new Coordinate().setUSE("points")))
                                                                .setAppearance(new Appearance()
                                                                  .setMaterial(new Material().setUSE("REC_SPINAL_COLOR"))))))
                                                          .addChild(new HAnimJoint().setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat222().getArray()).setLlimit(new MFFloat223().getArray())
                                                            .addChild(new HAnimSegment().setName("c1").setDEF("hanim_c1")
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f,1.6144f,-0.0034f})
                                                                .addChild(new Shape()
                                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32224().getArray()).setCreaseAngle(0.5000f)
                                                                    .setCoord(new Coordinate().setUSE("points")))
                                                                  .setAppearance(new Appearance()
                                                                    .setMaterial(new Material().setUSE("SPINAL_COLOR"))))))
                                                            .addChild(new HAnimJoint().setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setUlimit(new MFFloat225().getArray()).setLlimit(new MFFloat226().getArray())
                                                              .addChild(new HAnimSegment().setName("skull").setDEF("hanim_skull")
                                                                .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32227().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("MIN_COLOR")))))
                                                                .addChild(new HAnimSite().setName("skull_vertex_tip").setDEF("hanim_skull_vertex_tip").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32228().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("sellion_pt").setDEF("hanim_sellion_pt").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32229().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("r_infraorbitale_pt").setDEF("hanim_r_infraorbitale_pt").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32230().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("l_infraorbitale_pt").setDEF("hanim_l_infraorbitale_pt").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32231().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("supramenton_pt").setDEF("hanim_supramenton_pt").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32232().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("r_tragion_pt").setDEF("hanim_r_tragion_pt").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32233().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("r_gonion_pt").setDEF("hanim_r_gonion_pt").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32234().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("l_tragion_pt").setDEF("hanim_l_tragion_pt").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32235().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("l_gonion_pt").setDEF("hanim_l_gonion_pt").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32236().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR")))))
                                                                .addChild(new HAnimSite().setName("nuchale_pt").setDEF("hanim_nuchale_pt").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                  .addChild(new Shape()
                                                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt32237().getArray()).setCreaseAngle(0.5000f)
                                                                      .setCoord(new Coordinate().setUSE("points")))
                                                                    .setAppearance(new Appearance()
                                                                      .setMaterial(new Material().setUSE("SITE_COLOR"))))))))))))))))))))))))))))))))
          .addViewpoints(new HAnimSite().setName("DiamondManLOA2_view").setDEF("hanim_DiamondManLOA2_view")
            .addChild(new Viewpoint().setDEF("FrontView").setDescription("Front View").setPosition(new float[] {0.35f,0.854f,2.57665f}))
            .addChild(new Viewpoint().setDEF("SideView").setDescription("Side View").setOrientation(new float[] {0f,1f,0f,1.57079f}).setPosition(new float[] {2f,0.854f,0f}))
            .addChild(new Viewpoint().setDEF("TopView").setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57079f}).setPosition(new float[] {0f,3.4495f,0f}))
            .addChild(new Viewpoint().setDEF("RootView").setDescription("Humanoid Root View").setPosition(new float[] {0f,0.824f,0.277f}))
            .addChild(new Viewpoint().setDEF("InclinedView").setDescription("Inclined View").setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setPosition(new float[] {1.62f,1.05f,2.06f})))
          .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
          .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
          .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vl2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt12"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt11"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt10"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt9"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt8"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt7"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt6"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt4"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vt1"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc7"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc6"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc5"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc3"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc2"))
          .addJoints(new HAnimJoint().setUSE("hanim_vc1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
          .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_pelvis"))
          .addSegments(new HAnimSegment().setUSE("hanim_c7"))
          .addSegments(new HAnimSegment().setUSE("hanim_c4"))
          .addSegments(new HAnimSegment().setUSE("hanim_skull"))
          .addSegments(new HAnimSegment().setUSE("hanim_sacrum"))
          .addSegments(new HAnimSegment().setUSE("hanim_l5"))
          .addSegments(new HAnimSegment().setUSE("hanim_l4"))
          .addSegments(new HAnimSegment().setUSE("hanim_l3"))
          .addSegments(new HAnimSegment().setUSE("hanim_l2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l1"))
          .addSegments(new HAnimSegment().setUSE("hanim_t12"))
          .addSegments(new HAnimSegment().setUSE("hanim_t11"))
          .addSegments(new HAnimSegment().setUSE("hanim_t10"))
          .addSegments(new HAnimSegment().setUSE("hanim_t9"))
          .addSegments(new HAnimSegment().setUSE("hanim_t8"))
          .addSegments(new HAnimSegment().setUSE("hanim_t7"))
          .addSegments(new HAnimSegment().setUSE("hanim_t6"))
          .addSegments(new HAnimSegment().setUSE("hanim_t5"))
          .addSegments(new HAnimSegment().setUSE("hanim_t4"))
          .addSegments(new HAnimSegment().setUSE("hanim_t3"))
          .addSegments(new HAnimSegment().setUSE("hanim_t2"))
          .addSegments(new HAnimSegment().setUSE("hanim_t1"))
          .addSegments(new HAnimSegment().setUSE("hanim_c6"))
          .addSegments(new HAnimSegment().setUSE("hanim_c5"))
          .addSegments(new HAnimSegment().setUSE("hanim_c3"))
          .addSegments(new HAnimSegment().setUSE("hanim_c2"))
          .addSegments(new HAnimSegment().setUSE("hanim_c1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_calf"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_carpal"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_forearm"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_1"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_metatarsal_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_distal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_thigh"))
          .addSegments(new HAnimSegment().setUSE("hanim_l_upperarm"))
          .addSegments(new HAnimSegment().setUSE("hanim_r_upperarm"))
          .addSites(new HAnimSite().setUSE("hanim_crotch_pt"))
          .addSites(new HAnimSite().setUSE("hanim_skull_vertex_tip"))
          .addSites(new HAnimSite().setUSE("hanim_sellion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_supramenton_pt"))
          .addSites(new HAnimSite().setUSE("hanim_nuchale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_asis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_calcaneus_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_calcaneus_posterior_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_1_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_carpal_distal_phalanx_2_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_dactylion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_femoral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_femoral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_forefoot_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_gonion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_hand_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_hand_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_lateral_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_humeral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_humeral_medial_epicondyle_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_iliocristale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_infraorbitale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_knee_crease_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_lateral_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_medial_malleolus_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metacarpal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_1_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_metatarsal_phalanx_5_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_middistal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_r_middistal_tip"))
          .addSites(new HAnimSite().setUSE("hanim_l_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_olecranon_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_psis_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radial_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_radiale_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_sphyrion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tarsal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tarsal_distal_phalanx_2_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_tragion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_trochanterion_pt"))
          .addSites(new HAnimSite().setUSE("hanim_l_ulnar_styloid_pt"))
          .addSites(new HAnimSite().setUSE("hanim_r_ulnar_styloid_pt"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Diamond Man Key"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Minimal Humanoid Joints"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Joints"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Recommended Spinal Joints"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Spinal Joints"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Sites"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Hand & Feet Joints"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Nancy V1.2b"});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"cindy@ballreich.net"});
  }
}
protected class MFString17 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Cindy Ballreich"});
  }
}
protected class MFString18 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."});
  }
}
protected class MFString19 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Tue Dec 30 08:30:08 PST 1997"});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat22 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3223 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f24 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0100f,0.0000f,-0.0100f,0.0000f,0.0000f,0.0000f,0.0000f,0.0100f,0.0100f,0.0000f,0.0000f,0.0000f,0.0000f,-0.0100f,0.0000f,-0.0100f,0.0000f});
  }
}
protected class MFString25 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Humanoid Root"});
  }
}
protected class MFString26 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFFloat27 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat28 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat39 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat40 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3243 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat46 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat48 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat55 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat56 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat58 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat59 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat63 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat64 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3266 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat69 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat70 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3271 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3272 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat75 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat76 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat78 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3280 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3282 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3284 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat85 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3287 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3288 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3290 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt3291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat93 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3294 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat95 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat96 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat99 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat101 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32103 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat105 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat107 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32109 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat111 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32112 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat113 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat114 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32115 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat117 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32118 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat119 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32121 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat123 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32124 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat125 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32127 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat129 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32130 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat131 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat132 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32133 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat135 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32136 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat137 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat138 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32139 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat141 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32142 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat143 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat144 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32145 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32146 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat147 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32149 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32150 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32151 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32152 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32153 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat154 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat155 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32156 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32157 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32158 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32159 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32160 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32161 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat162 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat163 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32164 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat165 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat166 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32167 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat168 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat169 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32170 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32171 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat172 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat173 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32174 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat175 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat176 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32177 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat179 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32180 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat181 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32183 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32184 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat185 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat186 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32187 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32188 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat189 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat190 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32191 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32192 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32193 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32194 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32195 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat196 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat197 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32198 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32199 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32200 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32201 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32202 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32203 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat204 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat205 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32206 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat207 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat208 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32209 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat210 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat211 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat213 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat214 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat216 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat217 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat219 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat220 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat222 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat223 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32224 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFFloat225 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFFloat226 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt32227 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32230 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32233 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32236 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFInt32237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
}
