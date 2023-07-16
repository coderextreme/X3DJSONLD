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
public class JoeLevel2LOA3SSPYRWRJKHud_Holger {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new JoeLevel2LOA3SSPYRWRJKHud_Holger().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/JoeLevel2LOA3SSPYRWRJKHud_Holger.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addComponent(new component().setName("Text").setLevel(1))
        .addComponent(new component().setName("Core").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addMeta(new meta().setName("Joe").setContent("20090328 20130628 http://www.hypermultimedia.com/acontents.htm#X3DHANIM"))
        .addMeta(new meta().setName("converter").setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"))
        .addMeta(new meta().setName("converted").setContent("Wed, 12 Jul 2023 08:05:49 GMT")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setDEF("JoeTest_WorldInfo").setTitle("JoeLevel2LOA3SSPYRWRJKHud.x3dv 20130723 20230108"))
        .addChild(new NavigationInfo().setSpeed(0.75f).setHeadlight(false))
        .addChild(new Group().setDEF("IllustrationGeometry")
          .addChild(new Transform().setTranslation(new float[] {0f,2.1f,0f}).setScale(new float[] {2f,2f,2f})
            .addChild(new Shape().setDEF("jointbox")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f).setDiffuseColor(new float[] {1f,1f,0f}).setSpecularColor(new float[] {1f,1f,0f}).setShininess(0.7f)))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.1f).setCoordIndex(new MFInt320().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f1().getArray())))))
          .addChild(new Transform().setTranslation(new float[] {0f,2.2f,0f}).setScale(new float[] {2f,2f,2f})
            .addChild(new Shape().setDEF("sitebox")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.5f).setDiffuseColor(new float[] {1f,0f,0f}).setSpecularColor(new float[] {1f,0f,0f}).setShininess(0.7f)))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.1f).setCoordIndex(new MFInt322().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray())))))
          .addChild(new Transform().setTranslation(new float[] {0f,2.3f,0f}).setScale(new float[] {2f,2f,2f})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("SegmentLine")
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}).setSpecularColor(new float[] {0f,1f,0f}).setEmissiveColor(new float[] {0f,1f,0f})))
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt324().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f5().getArray())))))
          .addChild(new Transform().setTranslation(new float[] {0f,2.4f,0f}).setScale(new float[] {2f,2f,2f})
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("SiteParentLine")
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setSpecularColor(new float[] {1f,0f,0f}).setEmissiveColor(new float[] {1f,0f,0f})))
              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt326().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f7().getArray()))))))
        .addChild(new Group().setDEF("SpecHumanoid")
          .addChild(new HAnimHumanoid("SpecHumanoid").setDEF("humanoid").setVersion("2.0")
            .addSkeleton(new HAnimJoint("humanoid").setName("HumanoidRoot").setDEF("hanim_HumanoidRoot").setCenter(new float[] {0f,0.824f,0.0277f}).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
              .addChild(new HAnimSegment("hanim_HumanoidRoot").setName("sacrum").setDEF("hanim_sacrum")
                .addChild(new Transform().setTranslation(new float[] {0f,0.824f,0.0277f})
                  .addChild(new Shape().setUSE("jointbox")))
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3210().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f11().getArray())))))
              .addChild(new HAnimJoint("hanim_HumanoidRoot").setName("sacroiliac").setDEF("hanim_sacroiliac").setCenter(new float[] {0f,0.9149f,0.0016f}).setSkinCoordIndex(new MFInt3212().getArray()).setSkinCoordWeight(new MFFloat13().getArray()).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                .addChild(new HAnimSegment("hanim_sacroiliac").setName("pelvis").setDEF("hanim_pelvis")
                  .addChild(new Transform().setTranslation(new float[] {0f,0.9149f,0.0016f})
                    .addChild(new Shape().setUSE("jointbox")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3216().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f17().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("SiteParentLine"))
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3218().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f19().getArray()))))
                  .addChild(new HAnimSite("hanim_pelvis").setName("r_iliocristale").setDEF("hanim_r_iliocristale").setTranslation(new float[] {-0.1525f,1.0628f,0.0035f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("r_trochanterion").setDEF("hanim_r_trochanterion").setTranslation(new float[] {-0.1689f,0.8419f,0.0352f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("l_iliocristale").setDEF("hanim_l_iliocristale").setTranslation(new float[] {0.1612f,1.0537f,0.0008f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("l_trochanterion").setDEF("hanim_l_trochanterion").setTranslation(new float[] {0.1677f,0.8336f,0.0303f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("r_asis").setDEF("hanim_r_asis").setTranslation(new float[] {-0.0887f,1.0021f,0.1112f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("l_asis").setDEF("hanim_l_asis").setTranslation(new float[] {0.0925f,0.9983f,0.1052f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("r_psis").setDEF("hanim_r_psis").setTranslation(new float[] {-0.0716f,1.019f,-0.1138f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("l_psis").setDEF("hanim_l_psis").setTranslation(new float[] {0.0774f,1.019f,-0.1151f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_pelvis").setName("crotch").setDEF("hanim_crotch").setTranslation(new float[] {0.0034f,0.8266f,0.0257f})
                    .addChild(new Shape().setUSE("sitebox"))))
                .addChild(new HAnimJoint("hanim_sacroiliac").setName("l_hip").setDEF("hanim_l_hip").setCenter(new float[] {0.0961f,0.9124f,-0.0001f}).setSkinCoordIndex(new MFInt3220().getArray()).setSkinCoordWeight(new MFFloat21().getArray()).setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray())
                  .addChild(new HAnimSegment("hanim_l_hip").setName("l_thigh").setDEF("hanim_l_thigh")
                    .addChild(new Transform().setTranslation(new float[] {0.0961f,0.9124f,-0.0001f})
                      .addChild(new Shape().setUSE("jointbox")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3224().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f25().getArray()))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3226().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f27().getArray()))))
                    .addChild(new HAnimSite("hanim_l_thigh").setName("l_knee_crease").setDEF("hanim_l_knee_crease").setTranslation(new float[] {0.0993f,0.4881f,-0.0309f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_lateral_epicn").setDEF("hanim_l_femoral_lateral_epicn").setTranslation(new float[] {0.1598f,0.4967f,0.0297f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("hanim_l_thigh").setName("l_femoral_medial_epicn").setDEF("hanim_l_femoral_medial_epicn").setTranslation(new float[] {0.0398f,0.4946f,0.0303f})
                      .addChild(new Shape().setUSE("sitebox"))))
                  .addChild(new HAnimJoint("hanim_l_hip").setName("l_knee").setDEF("hanim_l_knee").setCenter(new float[] {0.104f,0.4867f,0.0308f}).setSkinCoordIndex(new MFInt3228().getArray()).setSkinCoordWeight(new MFFloat29().getArray()).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray())
                    .addChild(new HAnimSegment("hanim_l_knee").setName("l_calf").setDEF("hanim_l_calf")
                      .addChild(new Transform().setTranslation(new float[] {0.104f,0.4867f,0.0308f})
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3232().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray())))))
                    .addChild(new HAnimJoint("hanim_l_knee").setName("l_ankle").setDEF("hanim_l_ankle").setCenter(new float[] {0.1101f,0.0656f,-0.0736f}).setSkinCoordIndex(new MFInt3234().getArray()).setSkinCoordWeight(new MFFloat35().getArray()).setUlimit(new MFFloat36().getArray()).setLlimit(new MFFloat37().getArray())
                      .addChild(new HAnimSegment("hanim_l_ankle").setName("l_hindfoot").setDEF("hanim_l_hindfoot")
                        .addChild(new Transform().setTranslation(new float[] {0.1101f,0.0656f,-0.0736f})
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3238().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f39().getArray()))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SiteParentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3240().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))))
                        .addChild(new HAnimSite("hanim_l_hindfoot").setName("l_lateral_malleolus").setDEF("hanim_l_lateral_malleolus").setTranslation(new float[] {0.1308f,0.0597f,-0.1032f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_l_hindfoot").setName("l_medial_malleolus").setDEF("hanim_l_medial_malleolus").setTranslation(new float[] {0.089f,0.0716f,-0.0881f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_l_hindfoot").setName("l_sphyrion").setDEF("hanim_l_sphyrion").setTranslation(new float[] {0.089f,0.0575f,-0.0943f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_l_hindfoot").setName("l_calcaneous_post").setDEF("hanim_l_calcaneous_post").setTranslation(new float[] {0.0974f,0.0259f,-0.1171f})
                          .addChild(new Shape().setUSE("sitebox"))))
                      .addChild(new HAnimJoint("hanim_l_ankle").setName("l_subtalar").setDEF("hanim_l_subtalar").setCenter(new float[] {0.1086f,0.0001f,-0.0368f}).setSkinCoordIndex(new MFInt3242().getArray()).setSkinCoordWeight(new MFFloat43().getArray()).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())
                        .addChild(new HAnimSegment("hanim_l_subtalar").setName("l_midproximal").setDEF("hanim_l_l_midproximal")
                          .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,-0.0368f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3246().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray())))))
                        .addChild(new HAnimJoint("hanim_l_subtalar").setName("l_midtarsal").setDEF("hanim_l_midtarsal").setCenter(new float[] {0.1086f,0.0001f,0.0368f}).setSkinCoordIndex(new MFInt3248().getArray()).setSkinCoordWeight(new MFFloat49().getArray()).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                          .addChild(new HAnimSegment("hanim_l_midtarsal").setName("l_middistal").setDEF("hanim_l_middistal")
                            .addChild(new Transform().setTranslation(new float[] {0.1086f,0.0001f,0.0368f})
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3252().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray()))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SiteParentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3254().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f55().getArray()))))
                            .addChild(new HAnimSite("hanim_l_middistal").setName("l_metatarsal_pha1").setDEF("hanim_l_metatarsal_pha1").setTranslation(new float[] {0.0816f,0.0232f,0.0106f})
                              .addChild(new Shape().setUSE("sitebox"))))
                          .addChild(new HAnimJoint("hanim_l_midtarsal").setName("l_metatarsal").setDEF("hanim_l_metatarsal").setCenter(new float[] {0.1086f,0f,0.0762f}).setSkinCoordIndex(new MFInt3256().getArray()).setSkinCoordWeight(new MFFloat57().getArray()).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray())
                            .addChild(new HAnimSegment("hanim_l_metatarsal").setName("l_forefoot").setDEF("hanim_l_forefoot")
                              .addChild(new Transform().setTranslation(new float[] {0.1086f,0f,0.0762f})
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3260().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray()))))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3262().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f63().getArray()))))
                              .addChild(new HAnimSite("hanim_l_forefoot").setName("l_forefoot_tip").setDEF("hanim_l_forefoot_tip").setTranslation(new float[] {0.1354f,0.0016f,0.1476f})
                                .addChild(new Shape().setUSE("sitebox")))
                              .addChild(new HAnimSite("hanim_l_forefoot").setName("l_metatarsal_pha5").setDEF("hanim_l_metatarsal_pha5").setTranslation(new float[] {0.1825f,0.007f,0.0928f})
                                .addChild(new Shape().setUSE("sitebox")))
                              .addChild(new HAnimSite("hanim_l_forefoot").setName("l_digit2").setDEF("hanim_l_digit2").setTranslation(new float[] {0.1195f,0.0079f,0.1433f})
                                .addChild(new Shape().setUSE("sitebox"))))))))))
                .addChild(new HAnimJoint("hanim_sacroiliac").setName("r_hip").setDEF("hanim_r_hip").setCenter(new float[] {-0.095f,0.9171f,0.0029f}).setSkinCoordIndex(new MFInt3264().getArray()).setSkinCoordWeight(new MFFloat65().getArray()).setUlimit(new MFFloat66().getArray()).setLlimit(new MFFloat67().getArray())
                  .addChild(new HAnimSegment("hanim_r_hip").setName("r_thigh").setDEF("hanim_r_thigh")
                    .addChild(new Transform().setTranslation(new float[] {-0.095f,0.9171f,0.0029f})
                      .addChild(new Shape().setUSE("jointbox")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3268().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f69().getArray()))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3270().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray()))))
                    .addChild(new HAnimSite("hanim_r_thigh").setName("r_knee_crease").setDEF("hanim_r_knee_crease").setTranslation(new float[] {-0.0825f,0.4932f,-0.0326f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_lateral_epicn").setDEF("hanim_r_femoral_lateral_epicn").setTranslation(new float[] {-0.1421f,0.4992f,0.031f})
                      .addChild(new Shape().setUSE("sitebox")))
                    .addChild(new HAnimSite("hanim_r_thigh").setName("r_femoral_medial_epicn").setDEF("hanim_r_femoral_medial_epicn").setTranslation(new float[] {-0.0221f,0.5014f,0.0289f})
                      .addChild(new Shape().setUSE("sitebox"))))
                  .addChild(new HAnimJoint("hanim_r_hip").setName("r_knee").setDEF("hanim_r_knee").setCenter(new float[] {-0.0867f,0.4913f,0.0318f}).setSkinCoordIndex(new MFInt3272().getArray()).setSkinCoordWeight(new MFFloat73().getArray()).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                    .addChild(new HAnimSegment("hanim_r_knee").setName("r_calf").setDEF("hanim_r_calf")
                      .addChild(new Transform().setTranslation(new float[] {-0.0867f,0.4913f,0.0318f})
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3276().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray())))))
                    .addChild(new HAnimJoint("hanim_r_knee").setName("r_ankle").setDEF("hanim_r_ankle").setCenter(new float[] {-0.0801f,0.0712f,-0.0766f}).setSkinCoordIndex(new MFInt3278().getArray()).setSkinCoordWeight(new MFFloat79().getArray()).setUlimit(new MFFloat80().getArray()).setLlimit(new MFFloat81().getArray())
                      .addChild(new HAnimSegment("hanim_r_ankle").setName("r_hindfoot").setDEF("hanim_r_hindfoot")
                        .addChild(new Transform().setTranslation(new float[] {-0.0801f,0.0712f,-0.0766f})
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3282().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f83().getArray()))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SiteParentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3284().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f85().getArray()))))
                        .addChild(new HAnimSite("hanim_r_hindfoot").setName("r_lateral_malleolus").setDEF("hanim_r_lateral_malleolus").setTranslation(new float[] {-0.1006f,0.0658f,-0.1075f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_r_hindfoot").setName("r_medial_malleolus").setDEF("hanim_r_medial_malleolus").setTranslation(new float[] {-0.0591f,0.076f,-0.0928f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_r_hindfoot").setName("r_sphyrion").setDEF("hanim_r_sphyrion").setTranslation(new float[] {-0.0603f,0.061f,-0.1002f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_r_hindfoot").setName("r_calcaneous_post").setDEF("hanim_r_calcaneous_post").setTranslation(new float[] {-0.0692f,0.0297f,-0.1221f})
                          .addChild(new Shape().setUSE("sitebox"))))
                      .addChild(new HAnimJoint("hanim_r_ankle").setName("r_subtalar").setDEF("hanim_r_subtalar").setCenter(new float[] {-0.0801f,0f,-0.0368f}).setSkinCoordIndex(new MFInt3286().getArray()).setSkinCoordWeight(new MFFloat87().getArray()).setUlimit(new MFFloat88().getArray()).setLlimit(new MFFloat89().getArray())
                        .addChild(new HAnimSegment("hanim_r_subtalar").setName("r_midproximal").setDEF("hanim_r_midproximal")
                          .addChild(new Transform().setTranslation(new float[] {-0.0801f,0f,-0.0368f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3290().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f91().getArray())))))
                        .addChild(new HAnimJoint("hanim_r_subtalar").setName("r_midtarsal").setDEF("hanim_r_midtarsal").setCenter(new float[] {-0.0801f,0f,0.0368f}).setSkinCoordIndex(new MFInt3292().getArray()).setSkinCoordWeight(new MFFloat93().getArray()).setUlimit(new MFFloat94().getArray()).setLlimit(new MFFloat95().getArray())
                          .addChild(new HAnimSegment("hanim_r_midtarsal").setName("r_middistal").setDEF("hanim_r_middistal")
                            .addChild(new Transform().setTranslation(new float[] {-0.0801f,0f,0.0368f})
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3296().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f97().getArray()))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SiteParentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3298().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f99().getArray()))))
                            .addChild(new HAnimSite("hanim_r_middistal").setName("r_metatarsal_pha1").setDEF("hanim_r_metatarsal_pha1").setTranslation(new float[] {-0.0521f,0.026f,0.0127f})
                              .addChild(new Shape().setUSE("sitebox"))))
                          .addChild(new HAnimJoint("hanim_r_midtarsal").setName("r_metatarsal").setDEF("hanim_r_metatarsal").setCenter(new float[] {-0.0801f,0.0039f,0.0732f}).setSkinCoordIndex(new MFInt32100().getArray()).setSkinCoordWeight(new MFFloat101().getArray()).setUlimit(new MFFloat102().getArray()).setLlimit(new MFFloat103().getArray())
                            .addChild(new HAnimSegment("hanim_r_metatarsal").setName("r_forefoot").setDEF("hanim_r_forefoot")
                              .addChild(new Transform().setTranslation(new float[] {-0.0801f,0.0039f,0.0732f})
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32104().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f105().getArray()))))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32106().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f107().getArray()))))
                              .addChild(new HAnimSite("hanim_r_forefoot").setName("r_forefoot_tip").setDEF("hanim_r_forefoot_tip").setTranslation(new float[] {-0.1043f,-0.0227f,0.145f})
                                .addChild(new Shape().setUSE("sitebox")))
                              .addChild(new HAnimSite("hanim_r_forefoot").setName("r_metatarsal_pha5").setDEF("hanim_r_metatarsal_pha5").setTranslation(new float[] {-0.1523f,0.0166f,0.0895f})
                                .addChild(new Shape().setUSE("sitebox")))
                              .addChild(new HAnimSite("hanim_r_forefoot").setName("r_digit2").setDEF("hanim_r_digit2").setTranslation(new float[] {-0.0883f,0.0134f,0.1383f})
                                .addChild(new Shape().setUSE("sitebox")))))))))))
              .addChild(new HAnimJoint("hanim_HumanoidRoot").setName("vl5").setDEF("hanim_vl5").setCenter(new float[] {0.0028f,1.0568f,-0.0776f}).setSkinCoordIndex(new MFInt32108().getArray()).setSkinCoordWeight(new MFFloat109().getArray()).setUlimit(new MFFloat110().getArray()).setLlimit(new MFFloat111().getArray())
                .addChild(new HAnimSegment("hanim_vl5").setName("l5").setDEF("hanim_l5")
                  .addChild(new Transform().setTranslation(new float[] {0.0028f,1.0568f,-0.0776f})
                    .addChild(new Shape().setUSE("jointbox")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32112().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f113().getArray()))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("SiteParentLine"))
                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32114().getArray())
                      .setCoord(new Coordinate().setPoint(new MFVec3f115().getArray()))))
                  .addChild(new HAnimSite("hanim_l5").setName("waist_preferred_post").setDEF("hanim_waist_preferred_post").setTranslation(new float[] {0.005f,1.0915f,-0.1091f})
                    .addChild(new Shape().setUSE("sitebox")))
                  .addChild(new HAnimSite("hanim_l5").setName("navel").setDEF("hanim_navel").setTranslation(new float[] {0.0069f,1.0966f,0.1017f})
                    .addChild(new Shape().setUSE("sitebox"))))
                .addChild(new HAnimJoint("hanim_vl5").setName("vl4").setDEF("hanim_vl4").setCenter(new float[] {0.0035f,1.0925f,-0.0787f}).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                  .addChild(new HAnimSegment("hanim_vl4").setName("l4").setDEF("hanim_l4")
                    .addChild(new Transform().setTranslation(new float[] {0.0035f,1.0925f,-0.0787f})
                      .addChild(new Shape().setUSE("jointbox")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32118().getArray())
                        .setCoord(new Coordinate().setPoint(new MFVec3f119().getArray())))))
                  .addChild(new HAnimJoint("hanim_vl4").setName("vl3").setDEF("hanim_vl3").setCenter(new float[] {0.0041f,1.1276f,-0.0796f}).setUlimit(new MFFloat120().getArray()).setLlimit(new MFFloat121().getArray())
                    .addChild(new HAnimSegment("hanim_vl3").setName("l3").setDEF("hanim_l3")
                      .addChild(new Transform().setTranslation(new float[] {0.0041f,1.1276f,-0.0796f})
                        .addChild(new Shape().setUSE("jointbox")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32122().getArray())
                          .setCoord(new Coordinate().setPoint(new MFVec3f123().getArray())))))
                    .addChild(new HAnimJoint("hanim_vl3").setName("vl2").setDEF("hanim_vl2").setCenter(new float[] {0.0045f,1.1546f,-0.08f}).setSkinCoordIndex(new MFInt32124().getArray()).setSkinCoordWeight(new MFFloat125().getArray()).setUlimit(new MFFloat126().getArray()).setLlimit(new MFFloat127().getArray())
                      .addChild(new HAnimSegment("hanim_vl2").setName("l2").setDEF("hanim_l2")
                        .addChild(new Transform().setTranslation(new float[] {0.0045f,1.1546f,-0.08f})
                          .addChild(new Shape().setUSE("jointbox")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32128().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f129().getArray()))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance().setUSE("SiteParentLine"))
                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32130().getArray())
                            .setCoord(new Coordinate().setPoint(new MFVec3f131().getArray()))))
                        .addChild(new HAnimSite("hanim_l2").setName("r_rib10").setDEF("hanim_r_rib10").setTranslation(new float[] {-0.0711f,1.1941f,0.1016f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_l2").setName("l_rib10").setDEF("hanim_l_rib10").setTranslation(new float[] {0.0871f,1.1925f,0.0992f})
                          .addChild(new Shape().setUSE("sitebox")))
                        .addChild(new HAnimSite("hanim_l2").setName("rib10_midspine").setDEF("hanim_rib10_midspine").setTranslation(new float[] {0.0049f,1.1908f,-0.1113f})
                          .addChild(new Shape().setUSE("sitebox"))))
                      .addChild(new HAnimJoint("hanim_vl2").setName("vl1").setDEF("hanim_vl1").setCenter(new float[] {0.0048f,1.1912f,-0.0805f}).setUlimit(new MFFloat132().getArray()).setLlimit(new MFFloat133().getArray())
                        .addChild(new HAnimSegment("hanim_vl1").setName("l1").setDEF("hanim_l1")
                          .addChild(new Transform().setTranslation(new float[] {0.0048f,1.1912f,-0.0805f})
                            .addChild(new Shape().setUSE("jointbox")))
                          .addChild(new Shape()
                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32134().getArray())
                              .setCoord(new Coordinate().setPoint(new MFVec3f135().getArray())))))
                        .addChild(new HAnimJoint("hanim_vl1").setName("vt12").setDEF("hanim_vt12").setCenter(new float[] {0.0051f,1.2278f,-0.0808f}).setUlimit(new MFFloat136().getArray()).setLlimit(new MFFloat137().getArray())
                          .addChild(new HAnimSegment("hanim_vt12").setName("t12").setDEF("hanim_t12")
                            .addChild(new Transform().setTranslation(new float[] {0.0051f,1.2278f,-0.0808f})
                              .addChild(new Shape().setUSE("jointbox")))
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32138().getArray())
                                .setCoord(new Coordinate().setPoint(new MFVec3f139().getArray())))))
                          .addChild(new HAnimJoint("hanim_vt12").setName("vt11").setDEF("hanim_vt11").setCenter(new float[] {0.0053f,1.2679f,-0.081f}).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray())
                            .addChild(new HAnimSegment("hanim_vt11").setName("t11").setDEF("hanim_t11")
                              .addChild(new Transform().setTranslation(new float[] {0.0053f,1.2679f,-0.081f})
                                .addChild(new Shape().setUSE("jointbox")))
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32142().getArray())
                                  .setCoord(new Coordinate().setPoint(new MFVec3f143().getArray())))))
                            .addChild(new HAnimJoint("hanim_vt11").setName("vt10").setDEF("hanim_vt10").setCenter(new float[] {0.0056f,1.2848f,-0.0822f}).setSkinCoordIndex(new MFInt32144().getArray()).setSkinCoordWeight(new MFFloat145().getArray()).setUlimit(new MFFloat146().getArray()).setLlimit(new MFFloat147().getArray())
                              .addChild(new HAnimSegment("hanim_vt10").setName("t10").setDEF("hanim_t10")
                                .addChild(new Transform().setTranslation(new float[] {0.0056f,1.2848f,-0.0822f})
                                  .addChild(new Shape().setUSE("jointbox")))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32148().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f149().getArray()))))
                                .addChild(new Shape()
                                  .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32150().getArray())
                                    .setCoord(new Coordinate().setPoint(new MFVec3f151().getArray()))))
                                .addChild(new HAnimSite("hanim_t10").setName("substernale").setDEF("hanim_substernale").setTranslation(new float[] {0.0085f,1.2995f,0.1147f})
                                  .addChild(new Shape().setUSE("sitebox"))))
                              .addChild(new HAnimJoint("hanim_vt10").setName("vt9").setDEF("hanim_vt9").setCenter(new float[] {0.0057f,1.3126f,-0.0838f}).setSkinCoordIndex(new MFInt32152().getArray()).setSkinCoordWeight(new MFFloat153().getArray()).setUlimit(new MFFloat154().getArray()).setLlimit(new MFFloat155().getArray())
                                .addChild(new HAnimSegment("hanim_vt9").setName("t9").setDEF("hanim_t9")
                                  .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3126f,-0.0838f})
                                    .addChild(new Shape().setUSE("jointbox")))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32156().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f157().getArray()))))
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32158().getArray())
                                      .setCoord(new Coordinate().setPoint(new MFVec3f159().getArray()))))
                                  .addChild(new HAnimSite("hanim_t9").setName("r_thelion").setDEF("hanim_r_thelion").setTranslation(new float[] {-0.0736f,1.3385f,0.1217f})
                                    .addChild(new Shape().setUSE("sitebox")))
                                  .addChild(new HAnimSite("hanim_t9").setName("l_thelion").setDEF("hanim_l_thelion").setTranslation(new float[] {0.0918f,1.3382f,0.1192f})
                                    .addChild(new Shape().setUSE("sitebox"))))
                                .addChild(new HAnimJoint("hanim_vt9").setName("vt8").setDEF("hanim_vt8").setCenter(new float[] {0.0057f,1.3382f,-0.0845f}).setUlimit(new MFFloat160().getArray()).setLlimit(new MFFloat161().getArray())
                                  .addChild(new HAnimSegment("hanim_vt8").setName("t8").setDEF("hanim_t8")
                                    .addChild(new Transform().setTranslation(new float[] {0.0057f,1.3382f,-0.0845f})
                                      .addChild(new Shape().setUSE("jointbox")))
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32162().getArray())
                                        .setCoord(new Coordinate().setPoint(new MFVec3f163().getArray())))))
                                  .addChild(new HAnimJoint("hanim_vt8").setName("vt7").setDEF("hanim_vt7").setCenter(new float[] {0.0058f,1.3625f,-0.0833f}).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())
                                    .addChild(new HAnimSegment("hanim_vt7").setName("t7").setDEF("hanim_t7")
                                      .addChild(new Transform().setTranslation(new float[] {0.0058f,1.3625f,-0.0833f})
                                        .addChild(new Shape().setUSE("jointbox")))
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32166().getArray())
                                          .setCoord(new Coordinate().setPoint(new MFVec3f167().getArray())))))
                                    .addChild(new HAnimJoint("hanim_vt7").setName("vt6").setDEF("hanim_vt6").setCenter(new float[] {0.0059f,1.3866f,-0.08f}).setUlimit(new MFFloat168().getArray()).setLlimit(new MFFloat169().getArray())
                                      .addChild(new HAnimSegment("hanim_vt6").setName("t6").setDEF("hanim_t6")
                                        .addChild(new Transform().setTranslation(new float[] {0.0059f,1.3866f,-0.08f})
                                          .addChild(new Shape().setUSE("jointbox")))
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32170().getArray())
                                            .setCoord(new Coordinate().setPoint(new MFVec3f171().getArray())))))
                                      .addChild(new HAnimJoint("hanim_vt6").setName("vt5").setDEF("hanim_vt5").setCenter(new float[] {0.006f,1.4102f,-0.0745f}).setUlimit(new MFFloat172().getArray()).setLlimit(new MFFloat173().getArray())
                                        .addChild(new HAnimSegment("hanim_vt5").setName("t5").setDEF("hanim_t5")
                                          .addChild(new Transform().setTranslation(new float[] {0.006f,1.4102f,-0.0745f})
                                            .addChild(new Shape().setUSE("jointbox")))
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32174().getArray())
                                              .setCoord(new Coordinate().setPoint(new MFVec3f175().getArray())))))
                                        .addChild(new HAnimJoint("hanim_vt5").setName("vt4").setDEF("hanim_vt4").setCenter(new float[] {0.0061f,1.432f,-0.0675f}).setSkinCoordIndex(new MFInt32176().getArray()).setSkinCoordWeight(new MFFloat177().getArray()).setUlimit(new MFFloat178().getArray()).setLlimit(new MFFloat179().getArray())
                                          .addChild(new HAnimSegment("hanim_vt4").setName("t4").setDEF("hanim_t4")
                                            .addChild(new Transform().setTranslation(new float[] {0.0061f,1.432f,-0.0675f})
                                              .addChild(new Shape().setUSE("jointbox")))
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32180().getArray())
                                                .setCoord(new Coordinate().setPoint(new MFVec3f181().getArray())))))
                                          .addChild(new HAnimJoint("hanim_vt4").setName("vt3").setDEF("hanim_vt3").setCenter(new float[] {0.0062f,1.4583f,-0.057f}).setUlimit(new MFFloat182().getArray()).setLlimit(new MFFloat183().getArray())
                                            .addChild(new HAnimSegment("hanim_vt3").setName("t3").setDEF("hanim_t3")
                                              .addChild(new Transform().setTranslation(new float[] {0.0062f,1.4583f,-0.057f})
                                                .addChild(new Shape().setUSE("jointbox")))
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32184().getArray())
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f185().getArray())))))
                                            .addChild(new HAnimJoint("hanim_vt3").setName("vt2").setDEF("hanim_vt2").setCenter(new float[] {0.0063f,1.4761f,-0.0484f}).setUlimit(new MFFloat186().getArray()).setLlimit(new MFFloat187().getArray())
                                              .addChild(new HAnimSegment("hanim_vt2").setName("t2").setDEF("hanim_t2")
                                                .addChild(new Transform().setTranslation(new float[] {0.0063f,1.4761f,-0.0484f})
                                                  .addChild(new Shape().setUSE("jointbox")))
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32188().getArray())
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f189().getArray())))))
                                              .addChild(new HAnimJoint("hanim_vt2").setName("vt1").setDEF("hanim_vt1").setCenter(new float[] {0.0065f,1.4951f,-0.0387f}).setSkinCoordIndex(new MFInt32190().getArray()).setSkinCoordWeight(new MFFloat191().getArray()).setUlimit(new MFFloat192().getArray()).setLlimit(new MFFloat193().getArray())
                                                .addChild(new HAnimSegment("hanim_vt1").setName("t1").setDEF("hanim_t1")
                                                  .addChild(new Transform().setTranslation(new float[] {0.0065f,1.4951f,-0.0387f})
                                                    .addChild(new Shape().setUSE("jointbox")))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32194().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f195().getArray()))))
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32196().getArray())
                                                      .setCoord(new Coordinate().setPoint(new MFVec3f197().getArray()))))
                                                  .addChild(new HAnimSite("hanim_t1").setName("suprasternale").setDEF("hanim_suprasternale").setTranslation(new float[] {0.0084f,1.4714f,0.0551f})
                                                    .addChild(new Shape().setUSE("sitebox")))
                                                  .addChild(new HAnimSite("hanim_t1").setName("cervicale").setDEF("hanim_cervicale").setTranslation(new float[] {0.0064f,1.52f,-0.0815f})
                                                    .addChild(new Shape().setUSE("sitebox"))))
                                                .addChild(new HAnimJoint("hanim_vt1").setName("vc7").setDEF("hanim_vc7").setCenter(new float[] {0.0066f,1.5132f,-0.0301f}).setSkinCoordIndex(new MFInt32198().getArray()).setSkinCoordWeight(new MFFloat199().getArray()).setUlimit(new MFFloat200().getArray()).setLlimit(new MFFloat201().getArray())
                                                  .addChild(new HAnimSegment("hanim_vc7").setName("c7").setDEF("hanim_c7")
                                                    .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5132f,-0.0301f})
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32202().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f203().getArray()))))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32204().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f205().getArray()))))
                                                    .addChild(new HAnimSite("hanim_c7").setName("r_neck_base").setDEF("hanim_r_neck_base").setTranslation(new float[] {-0.0419f,1.5149f,-0.022f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("hanim_c7").setName("l_neck_base").setDEF("hanim_l_neck_base").setTranslation(new float[] {0.0646f,1.5141f,-0.038f})
                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                  .addChild(new HAnimJoint("hanim_vc7").setName("vc6").setDEF("hanim_vc6").setCenter(new float[] {0.0066f,1.5357f,-0.0143f}).setUlimit(new MFFloat206().getArray()).setLlimit(new MFFloat207().getArray())
                                                    .addChild(new HAnimSegment("hanim_vc6").setName("c6").setDEF("hanim_c6")
                                                      .addChild(new Transform().setDEF("cordsysvc6").setTranslation(new float[] {0.0066f,1.5357f,-0.0143f}).setScale(new float[] {0.175f,0.175f,0.175f})
                                                        .addChild(new Inline().setGlobal(true).setUrl(new MFString208().getArray())))
                                                      .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5357f,-0.0143f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32209().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f210().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_vc6").setName("vc5").setDEF("hanim_vc5").setCenter(new float[] {0.0066f,1.552f,-0.0082f}).setUlimit(new MFFloat211().getArray()).setLlimit(new MFFloat212().getArray())
                                                      .addChild(new HAnimSegment("hanim_vc5").setName("c5").setDEF("hanim_c5")
                                                        .addChild(new Transform().setTranslation(new float[] {0.0066f,1.552f,-0.0082f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32213().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f214().getArray())))))
                                                      .addChild(new HAnimJoint("hanim_vc5").setName("vc4").setDEF("hanim_vc4").setCenter(new float[] {0.0066f,1.5662f,-0.0084f}).setUlimit(new MFFloat215().getArray()).setLlimit(new MFFloat216().getArray())
                                                        .addChild(new HAnimSegment("hanim_vc4").setName("c4").setDEF("hanim_c4")
                                                          .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5662f,-0.0084f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32217().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f218().getArray())))))
                                                        .addChild(new HAnimJoint("hanim_vc4").setName("vc3").setDEF("hanim_vc3").setCenter(new float[] {0.0066f,1.58f,-0.0103f}).setUlimit(new MFFloat219().getArray()).setLlimit(new MFFloat220().getArray())
                                                          .addChild(new HAnimSegment("hanim_vc3").setName("c3").setDEF("hanim_c3")
                                                            .addChild(new Transform().setTranslation(new float[] {0.0066f,1.58f,-0.0103f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32221().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f222().getArray())))))
                                                          .addChild(new HAnimJoint("hanim_vc3").setName("vc2").setDEF("hanim_vc2").setCenter(new float[] {0.0066f,1.5928f,-0.0103f}).setUlimit(new MFFloat223().getArray()).setLlimit(new MFFloat224().getArray())
                                                            .addChild(new HAnimSegment("hanim_vc2").setName("c2").setDEF("hanim_c2")
                                                              .addChild(new Transform().setTranslation(new float[] {0.0066f,1.5928f,-0.0103f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32225().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f226().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_vc2").setName("vc1").setDEF("hanim_vc1").setCenter(new float[] {0.0066f,1.6144f,-0.0034f}).setUlimit(new MFFloat227().getArray()).setLlimit(new MFFloat228().getArray())
                                                              .addChild(new HAnimSegment("hanim_vc1").setName("c1").setDEF("hanim_c1")
                                                                .addChild(new Transform().setTranslation(new float[] {0.0066f,1.6144f,-0.0034f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32229().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f230().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_vc1").setName("skullbase").setDEF("hanim_skullbase").setCenter(new float[] {0.0044f,1.6209f,0.0236f}).setSkinCoordIndex(new MFInt32231().getArray()).setSkinCoordWeight(new MFFloat232().getArray()).setUlimit(new MFFloat233().getArray()).setLlimit(new MFFloat234().getArray())
                                                                .addChild(new HAnimSegment("hanim_skullbase").setName("skull").setDEF("hanim_skull")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.0044f,1.6209f,0.0236f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32235().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f236().getArray()))))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32237().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f238().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("skull_tip").setDEF("hanim_skull_tip").setTranslation(new float[] {0.005f,1.7504f,0.0055f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("sellion").setDEF("hanim_sellion").setTranslation(new float[] {0.0058f,1.6316f,0.0852f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("r_infraorbitale").setDEF("hanim_r_infraorbitale").setTranslation(new float[] {-0.0237f,1.6171f,0.0752f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("l_infraorbitale").setDEF("hanim_l_infraorbitale").setTranslation(new float[] {0.0341f,1.6171f,0.0752f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("supramenton").setDEF("hanim_supramenton").setTranslation(new float[] {0.0061f,1.541f,0.0805f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("r_tragion").setDEF("hanim_r_tragion").setTranslation(new float[] {-0.0646f,1.6347f,0.0302f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("r_gonion").setDEF("hanim_r_gonion").setTranslation(new float[] {-0.052f,1.5529f,0.0347f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("l_tragion").setDEF("hanim_l_tragion").setTranslation(new float[] {0.0739f,1.6348f,0.0282f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("l_gonion").setDEF("hanim_l_gonion").setTranslation(new float[] {0.0631f,1.553f,0.033f})
                                                                    .addChild(new Shape().setUSE("sitebox")))
                                                                  .addChild(new HAnimSite("hanim_skull").setName("nuchale").setDEF("hanim_nuchale").setTranslation(new float[] {0.0039f,1.5972f,-0.0796f})
                                                                    .addChild(new Shape().setUSE("sitebox"))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName("l_eyeball_joint").setDEF("hanim_l_eyeball_joint").setCenter(new float[] {0.0336f,1.6332f,0.0502f}).setUlimit(new MFFloat239().getArray()).setLlimit(new MFFloat240().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_eyeball_joint").setName("l_eyeball").setDEF("hanim_l_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.0336f,1.6332f,0.0502f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32241().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f242().getArray()))))))
                                                                .addChild(new HAnimJoint("hanim_skullbase").setName("r_eyeball_joint").setDEF("hanim_r_eyeball_joint").setCenter(new float[] {-0.0236f,1.6331f,0.051f}).setUlimit(new MFFloat243().getArray()).setLlimit(new MFFloat244().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_eyeball_joint").setName("r_eyeball").setDEF("hanim_r_eyeball")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0236f,1.6331f,0.051f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32245().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f246().getArray()))))))))))))))
                                                .addChild(new HAnimJoint("hanim_vt1").setName("l_sternoclavicular").setDEF("hanim_l_sternoclavicular").setCenter(new float[] {0.082f,1.4488f,-0.0353f}).setSkinCoordIndex(new MFInt32247().getArray()).setSkinCoordWeight(new MFFloat248().getArray()).setUlimit(new MFFloat249().getArray()).setLlimit(new MFFloat250().getArray())
                                                  .addChild(new HAnimSegment("hanim_l_sternoclavicular").setName("l_clavicle").setDEF("hanim_l_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {0.082f,1.4488f,-0.0353f})
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32251().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f252().getArray()))))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32253().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f254().getArray()))))
                                                    .addChild(new HAnimSite("hanim_l_clavicle").setName("l_clavicale").setDEF("hanim_l_clavicale").setTranslation(new float[] {0.0271f,1.4943f,0.0394f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("hanim_l_clavicle").setName("l_acromion").setDEF("hanim_l_acromion").setTranslation(new float[] {0.2032f,1.476f,-0.049f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("hanim_l_clavicle").setName("l_axilla_ant").setDEF("hanim_l_axilla_ant").setTranslation(new float[] {0.1777f,1.4065f,-0.0075f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("hanim_l_clavicle").setName("l_axilla_post").setDEF("hanim_l_axilla_post").setTranslation(new float[] {0.1706f,1.4072f,-0.0875f})
                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                  .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_acromioclavicular").setDEF("hanim_l_acromioclavicular").setCenter(new float[] {0.0962f,1.4269f,-0.0424f}).setSkinCoordIndex(new MFInt32255().getArray()).setSkinCoordWeight(new MFFloat256().getArray()).setUlimit(new MFFloat257().getArray()).setLlimit(new MFFloat258().getArray())
                                                    .addChild(new HAnimSegment("hanim_l_acromioclavicular").setName("l_scapula").setDEF("hanim_l_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {0.0962f,1.4269f,-0.0424f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32259().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f260().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_shoulder").setDEF("hanim_l_shoulder").setCenter(new float[] {0.2029f,1.4376f,-0.0387f}).setSkinCoordIndex(new MFInt32261().getArray()).setSkinCoordWeight(new MFFloat262().getArray()).setUlimit(new MFFloat263().getArray()).setLlimit(new MFFloat264().getArray())
                                                      .addChild(new HAnimSegment("hanim_l_shoulder").setName("l_upperarm").setDEF("hanim_l_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {0.2029f,1.4376f,-0.0387f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32265().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f266().getArray()))))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32267().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f268().getArray()))))
                                                        .addChild(new HAnimSite("hanim_l_upperarm").setName("l_humeral_lateral_epicn").setDEF("hanim_l_humeral_lateral_epicn").setTranslation(new float[] {0.228f,1.1482f,-0.11f})
                                                          .addChild(new Shape().setUSE("sitebox"))))
                                                      .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_elbow").setDEF("hanim_l_elbow").setCenter(new float[] {0.2014f,1.1357f,-0.0682f}).setSkinCoordIndex(new MFInt32269().getArray()).setSkinCoordWeight(new MFFloat270().getArray()).setUlimit(new MFFloat271().getArray()).setLlimit(new MFFloat272().getArray())
                                                        .addChild(new HAnimSegment("hanim_l_elbow").setName("l_forearm").setDEF("hanim_l_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {0.2014f,1.1357f,-0.0682f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32273().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f274().getArray()))))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32275().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f276().getArray()))))
                                                          .addChild(new HAnimSite("hanim_l_forearm").setName("l_radial_styloid").setDEF("hanim_l_radial_styloid").setTranslation(new float[] {0.1901f,0.8645f,-0.0415f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("hanim_l_forearm").setName("l_olecranon").setDEF("hanim_l_olecranon").setTranslation(new float[] {0.1962f,1.1375f,-0.1123f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("hanim_l_forearm").setName("l_humeral_medial_epicn").setDEF("hanim_l_humeral_medial_epicn").setTranslation(new float[] {0.1735f,1.1272f,-0.1113f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("hanim_l_forearm").setName("l_radiale").setDEF("hanim_l_radiale").setTranslation(new float[] {0.2182f,1.1212f,-0.1167f})
                                                            .addChild(new Shape().setUSE("sitebox"))))
                                                        .addChild(new HAnimJoint("hanim_l_elbow").setName("l_wrist").setDEF("hanim_l_wrist").setCenter(new float[] {0.1984f,0.8663f,-0.0583f}).setSkinCoordIndex(new MFInt32277().getArray()).setSkinCoordWeight(new MFFloat278().getArray()).setUlimit(new MFFloat279().getArray()).setLlimit(new MFFloat280().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_wrist").setName("l_hand").setDEF("hanim_l_hand")
                                                            .addChild(new Transform().setTranslation(new float[] {0.1984f,0.8663f,-0.0583f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32281().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f282().getArray()))))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32283().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f284().getArray()))))
                                                            .addChild(new HAnimSite("hanim_l_hand").setName("l_metacarpal_pha2").setDEF("hanim_l_metacarpal_pha2").setTranslation(new float[] {0.2009f,0.8139f,-0.0237f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("hanim_l_hand").setName("l_ulnar_styloid").setDEF("hanim_l_ulnar_styloid").setTranslation(new float[] {0.2142f,0.8529f,-0.0648f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("hanim_l_hand").setName("l_metacarpal_pha5").setDEF("hanim_l_metacarpal_pha5").setTranslation(new float[] {0.1929f,0.786f,-0.1122f})
                                                              .addChild(new Shape().setUSE("sitebox"))))
                                                          .addChild(new HAnimJoint("hanim_l_wrist").setName("l_thumb1").setDEF("hanim_l_thumb1").setCenter(new float[] {0.1924f,0.8472f,-0.0534f}).setSkinCoordIndex(new MFInt32285().getArray()).setSkinCoordWeight(new MFFloat286().getArray()).setUlimit(new MFFloat287().getArray()).setLlimit(new MFFloat288().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_thumb1").setName("l_thumb_metacarpal").setDEF("hanim_l_thumb_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1924f,0.8472f,-0.0534f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32289().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f290().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_thumb1").setName("l_thumb2").setDEF("hanim_l_thumb2").setCenter(new float[] {0.1951f,0.8226f,0.0246f}).setSkinCoordIndex(new MFInt32291().getArray()).setSkinCoordWeight(new MFFloat292().getArray()).setUlimit(new MFFloat293().getArray()).setLlimit(new MFFloat294().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_thumb2").setName("l_thumb_proximal").setDEF("hanim_l_thumb_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1951f,0.8226f,0.0246f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32295().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f296().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_thumb2").setName("l_thumb3").setDEF("hanim_l_thumb3").setCenter(new float[] {0.1955f,0.8159f,0.0464f}).setSkinCoordIndex(new MFInt32297().getArray()).setSkinCoordWeight(new MFFloat298().getArray()).setUlimit(new MFFloat299().getArray()).setLlimit(new MFFloat300().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_thumb3").setName("l_thumb_distal").setDEF("hanim_l_thumb_distal")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1955f,0.8159f,0.0464f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32301().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f302().getArray()))))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32303().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f304().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_l_thumb_distal").setName("l_thumb_distal_tip").setDEF("hanim_l_thumb_distal_tip").setTranslation(new float[] {0.1982f,0.8061f,0.0759f})
                                                                    .addChild(new Shape().setUSE("sitebox")))))))
                                                          .addChild(new HAnimJoint("hanim_l_wrist").setName("l_index0").setDEF("hanim_l_index0").setCenter(new float[] {0.1983f,0.8024f,-0.028f}).setSkinCoordIndex(new MFInt32305().getArray()).setSkinCoordWeight(new MFFloat306().getArray()).setUlimit(new MFFloat307().getArray()).setLlimit(new MFFloat308().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_index0").setName("l_index_metacarpal").setDEF("hanim_l_index_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1983f,0.8024f,-0.028f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32309().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f310().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_index0").setName("l_index1").setDEF("hanim_l_index1").setCenter(new float[] {0.1983f,0.7815f,-0.028f}).setSkinCoordIndex(new MFInt32311().getArray()).setSkinCoordWeight(new MFFloat312().getArray()).setUlimit(new MFFloat313().getArray()).setLlimit(new MFFloat314().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_index1").setName("l_index_proximal").setDEF("hanim_l_index_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7815f,-0.028f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32315().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f316().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_index1").setName("l_index2").setDEF("hanim_l_index2").setCenter(new float[] {0.2017f,0.7363f,-0.0248f}).setSkinCoordIndex(new MFInt32317().getArray()).setSkinCoordWeight(new MFFloat318().getArray()).setUlimit(new MFFloat319().getArray()).setLlimit(new MFFloat320().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_index2").setName("l_index_middle").setDEF("hanim_l_index_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2017f,0.7363f,-0.0248f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32321().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f322().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_index2").setName("l_index3").setDEF("hanim_l_index3").setCenter(new float[] {0.2028f,0.7139f,-0.0236f}).setSkinCoordIndex(new MFInt32323().getArray()).setSkinCoordWeight(new MFFloat324().getArray()).setUlimit(new MFFloat325().getArray()).setLlimit(new MFFloat326().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_index3").setName("l_index_distal").setDEF("hanim_l_index_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2028f,0.7139f,-0.0236f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32327().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f328().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32329().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f330().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_l_index_distal").setName("l_index_distal_tip").setDEF("hanim_l_index_distal_tip").setTranslation(new float[] {0.2089f,0.6858f,-0.0245f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("hanim_l_index_distal").setName("l_dactylion").setDEF("hanim_l_dactylion").setTranslation(new float[] {0.2056f,0.6743f,-0.0482f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint("hanim_l_wrist").setName("l_middle0").setDEF("hanim_l_middle0").setCenter(new float[] {0.1987f,0.8029f,-0.053f}).setSkinCoordIndex(new MFInt32331().getArray()).setSkinCoordWeight(new MFFloat332().getArray()).setUlimit(new MFFloat333().getArray()).setLlimit(new MFFloat334().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_middle0").setName("l_middle_metacarpal").setDEF("hanim_l_middle_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1987f,0.8029f,-0.053f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32335().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f336().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_middle0").setName("l_middle1").setDEF("hanim_l_middle1").setCenter(new float[] {0.1987f,0.7818f,-0.053f}).setSkinCoordIndex(new MFInt32337().getArray()).setSkinCoordWeight(new MFFloat338().getArray()).setUlimit(new MFFloat339().getArray()).setLlimit(new MFFloat340().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_middle1").setName("l_middle_proximal").setDEF("hanim_l_middle_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1987f,0.7818f,-0.053f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32341().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f342().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_middle1").setName("l_middle2").setDEF("hanim_l_middle2").setCenter(new float[] {0.2013f,0.7273f,-0.0503f}).setSkinCoordIndex(new MFInt32343().getArray()).setSkinCoordWeight(new MFFloat344().getArray()).setUlimit(new MFFloat345().getArray()).setLlimit(new MFFloat346().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_middle2").setName("l_middle_middle").setDEF("hanim_l_middle_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.2013f,0.7273f,-0.0503f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32347().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f348().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_middle2").setName("l_middle3").setDEF("hanim_l_middle3").setCenter(new float[] {0.2026f,0.7011f,-0.0494f}).setSkinCoordIndex(new MFInt32349().getArray()).setSkinCoordWeight(new MFFloat350().getArray()).setUlimit(new MFFloat351().getArray()).setLlimit(new MFFloat352().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_middle3").setName("l_middle_distal").setDEF("hanim_l_middle_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.2026f,0.7011f,-0.0494f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32353().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f354().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32355().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f356().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_l_middle_distal").setName("l_middle_distal_tip").setDEF("hanim_l_middle_distal_tip").setTranslation(new float[] {0.208f,0.6731f,-0.0491f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint("hanim_l_wrist").setName("l_ring0").setDEF("hanim_l_ring0").setCenter(new float[] {0.1956f,0.8019f,-0.0794f}).setSkinCoordIndex(new MFInt32357().getArray()).setSkinCoordWeight(new MFFloat358().getArray()).setUlimit(new MFFloat359().getArray()).setLlimit(new MFFloat360().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_ring0").setName("l_ring_metacarpal").setDEF("hanim_l_ring_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1956f,0.8019f,-0.0794f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32361().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f362().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_ring0").setName("l_ring1").setDEF("hanim_l_ring1").setCenter(new float[] {0.1956f,0.7815f,-0.0794f}).setSkinCoordIndex(new MFInt32363().getArray()).setSkinCoordWeight(new MFFloat364().getArray()).setUlimit(new MFFloat365().getArray()).setLlimit(new MFFloat366().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_ring1").setName("l_ring_proximal").setDEF("hanim_l_ring_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1956f,0.7815f,-0.0794f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32367().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f368().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_ring1").setName("l_ring2").setDEF("hanim_l_ring2").setCenter(new float[] {0.1973f,0.7287f,-0.0777f}).setSkinCoordIndex(new MFInt32369().getArray()).setSkinCoordWeight(new MFFloat370().getArray()).setUlimit(new MFFloat371().getArray()).setLlimit(new MFFloat372().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_ring2").setName("l_ring_middle").setDEF("hanim_l_ring_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1973f,0.7287f,-0.0777f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32373().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f374().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_ring2").setName("l_ring3").setDEF("hanim_l_ring3").setCenter(new float[] {0.1983f,0.7045f,-0.0767f}).setSkinCoordIndex(new MFInt32375().getArray()).setSkinCoordWeight(new MFFloat376().getArray()).setUlimit(new MFFloat377().getArray()).setLlimit(new MFFloat378().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_ring3").setName("l_ring_distal").setDEF("hanim_l_ring_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1983f,0.7045f,-0.0767f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32379().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f380().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32381().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f382().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_l_ring_distal").setName("l_ring_distal_tip").setDEF("hanim_l_ring_distal_tip").setTranslation(new float[] {0.2035f,0.675f,-0.0756f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint("hanim_l_wrist").setName("l_pinky0").setDEF("hanim_l_pinky0").setCenter(new float[] {0.1925f,0.8066f,-0.1036f}).setSkinCoordIndex(new MFInt32383().getArray()).setSkinCoordWeight(new MFFloat384().getArray()).setUlimit(new MFFloat385().getArray()).setLlimit(new MFFloat386().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_pinky0").setName("l_pinky_metacarpal").setDEF("hanim_l_pinky_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {0.1925f,0.8066f,-0.1036f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32387().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f388().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_l_pinky0").setName("l_pinky1").setDEF("hanim_l_pinky1").setCenter(new float[] {0.1925f,0.7866f,-0.1036f}).setSkinCoordIndex(new MFInt32389().getArray()).setSkinCoordWeight(new MFFloat390().getArray()).setUlimit(new MFFloat391().getArray()).setLlimit(new MFFloat392().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_pinky1").setName("l_pinky_proximal").setDEF("hanim_l_pinky_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {0.1925f,0.7866f,-0.1036f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32393().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f394().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_l_pinky1").setName("l_pinky2").setDEF("hanim_l_pinky2").setCenter(new float[] {0.1938f,0.7452f,-0.1024f}).setSkinCoordIndex(new MFInt32395().getArray()).setSkinCoordWeight(new MFFloat396().getArray()).setUlimit(new MFFloat397().getArray()).setLlimit(new MFFloat398().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_pinky2").setName("l_pinky_middle").setDEF("hanim_l_pinky_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1938f,0.7452f,-0.1024f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32399().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f400().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_l_pinky2").setName("l_pinky3").setDEF("hanim_l_pinky3").setCenter(new float[] {0.1948f,0.7277f,-0.1017f}).setSkinCoordIndex(new MFInt32401().getArray()).setSkinCoordWeight(new MFFloat402().getArray()).setUlimit(new MFFloat403().getArray()).setLlimit(new MFFloat404().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_pinky3").setName("l_pinky_distal").setDEF("hanim_l_pinky_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1948f,0.7277f,-0.1017f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32405().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f406().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32407().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f408().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_l_pinky_distal").setName("l_pinky_distal_tip").setDEF("hanim_l_pinky_distal_tip").setTranslation(new float[] {0.2014f,0.7009f,-0.1012f})
                                                                      .addChild(new Shape().setUSE("sitebox")))))))))))))
                                                .addChild(new HAnimJoint("hanim_vt1").setName("r_sternoclavicular").setDEF("hanim_r_sternoclavicular").setCenter(new float[] {-0.0694f,1.46f,-0.033f}).setSkinCoordIndex(new MFInt32409().getArray()).setSkinCoordWeight(new MFFloat410().getArray()).setUlimit(new MFFloat411().getArray()).setLlimit(new MFFloat412().getArray())
                                                  .addChild(new HAnimSegment("hanim_r_sternoclavicular").setName("r_clavicle").setDEF("hanim_r_clavicle")
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0694f,1.46f,-0.033f})
                                                      .addChild(new Shape().setUSE("jointbox")))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32413().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f414().getArray()))))
                                                    .addChild(new Shape()
                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32415().getArray())
                                                        .setCoord(new Coordinate().setPoint(new MFVec3f416().getArray()))))
                                                    .addChild(new HAnimSite("hanim_r_clavicle").setName("r_clavicale").setDEF("hanim_r_clavicale").setTranslation(new float[] {-0.0115f,1.4943f,0.04f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("hanim_r_clavicle").setName("r_acromion").setDEF("hanim_r_acromion").setTranslation(new float[] {-0.1905f,1.4791f,-0.0431f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("hanim_r_clavicle").setName("r_axilla_ant").setDEF("hanim_r_axilla_ant").setTranslation(new float[] {-0.1626f,1.4072f,-0.0031f})
                                                      .addChild(new Shape().setUSE("sitebox")))
                                                    .addChild(new HAnimSite("hanim_r_clavicle").setName("r_axilla_post").setDEF("hanim_r_axilla_post").setTranslation(new float[] {-0.1603f,1.4098f,-0.0826f})
                                                      .addChild(new Shape().setUSE("sitebox"))))
                                                  .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_acromioclavicular").setDEF("hanim_r_acromioclavicular").setCenter(new float[] {-0.0836f,1.4281f,-0.0401f}).setSkinCoordIndex(new MFInt32417().getArray()).setSkinCoordWeight(new MFFloat418().getArray()).setUlimit(new MFFloat419().getArray()).setLlimit(new MFFloat420().getArray())
                                                    .addChild(new HAnimSegment("hanim_r_acromioclavicular").setName("r_scapula").setDEF("hanim_r_scapula")
                                                      .addChild(new Transform().setTranslation(new float[] {-0.0836f,1.4281f,-0.0401f})
                                                        .addChild(new Shape().setUSE("jointbox")))
                                                      .addChild(new Shape()
                                                        .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                        .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32421().getArray())
                                                          .setCoord(new Coordinate().setPoint(new MFVec3f422().getArray())))))
                                                    .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_shoulder").setDEF("hanim_r_shoulder").setCenter(new float[] {-0.1907f,1.4407f,-0.0325f}).setSkinCoordIndex(new MFInt32423().getArray()).setSkinCoordWeight(new MFFloat424().getArray()).setUlimit(new MFFloat425().getArray()).setLlimit(new MFFloat426().getArray())
                                                      .addChild(new HAnimSegment("hanim_r_shoulder").setName("r_upperarm").setDEF("hanim_r_upperarm")
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1907f,1.4407f,-0.0325f})
                                                          .addChild(new Shape().setUSE("jointbox")))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32427().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f428().getArray()))))
                                                        .addChild(new Shape()
                                                          .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32429().getArray())
                                                            .setCoord(new Coordinate().setPoint(new MFVec3f430().getArray()))))
                                                        .addChild(new HAnimSite("hanim_r_upperarm").setName("r_humeral_lateral_epicn").setDEF("hanim_r_humeral_lateral_epicn").setTranslation(new float[] {-0.2224f,1.1517f,-0.1033f})
                                                          .addChild(new Shape().setUSE("sitebox"))))
                                                      .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_elbow").setDEF("hanim_r_elbow").setCenter(new float[] {-0.1949f,1.1388f,-0.062f}).setSkinCoordIndex(new MFInt32431().getArray()).setSkinCoordWeight(new MFFloat432().getArray()).setUlimit(new MFFloat433().getArray()).setLlimit(new MFFloat434().getArray())
                                                        .addChild(new HAnimSegment("hanim_r_elbow").setName("r_forearm").setDEF("hanim_r_forearm")
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1949f,1.1388f,-0.062f})
                                                            .addChild(new Shape().setUSE("jointbox")))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32435().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f436().getArray()))))
                                                          .addChild(new Shape()
                                                            .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                            .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32437().getArray())
                                                              .setCoord(new Coordinate().setPoint(new MFVec3f438().getArray()))))
                                                          .addChild(new HAnimSite("hanim_r_forearm").setName("r_radial_styloid").setDEF("hanim_r_radial_styloid").setTranslation(new float[] {-0.1884f,0.8676f,-0.036f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("hanim_r_forearm").setName("r_olecranon").setDEF("hanim_r_olecranon").setTranslation(new float[] {-0.1907f,1.1405f,-0.1065f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("hanim_r_forearm").setName("r_humeral_medial_epicn").setDEF("hanim_r_humeral_medial_epicn").setTranslation(new float[] {-0.168f,1.1298f,-0.1062f})
                                                            .addChild(new Shape().setUSE("sitebox")))
                                                          .addChild(new HAnimSite("hanim_r_forearm").setName("r_radiale").setDEF("hanim_r_radiale").setTranslation(new float[] {-0.213f,1.1305f,-0.1091f})
                                                            .addChild(new Shape().setUSE("sitebox"))))
                                                        .addChild(new HAnimJoint("hanim_r_elbow").setName("r_wrist").setDEF("hanim_r_wrist").setCenter(new float[] {-0.1959f,0.8694f,-0.0521f}).setSkinCoordIndex(new MFInt32439().getArray()).setSkinCoordWeight(new MFFloat440().getArray()).setUlimit(new MFFloat441().getArray()).setLlimit(new MFFloat442().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_wrist").setName("r_hand").setDEF("hanim_r_hand")
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1959f,0.8694f,-0.0521f})
                                                              .addChild(new Shape().setUSE("jointbox")))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32443().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f444().getArray()))))
                                                            .addChild(new Shape()
                                                              .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                              .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32445().getArray())
                                                                .setCoord(new Coordinate().setPoint(new MFVec3f446().getArray()))))
                                                            .addChild(new HAnimSite("hanim_r_hand").setName("r_metacarpal_pha2").setDEF("hanim_r_metacarpal_pha2").setTranslation(new float[] {-0.1977f,0.8169f,-0.0177f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("hanim_r_hand").setName("r_ulnar_styloid").setDEF("hanim_r_ulnar_styloid").setTranslation(new float[] {-0.2117f,0.8562f,-0.0584f})
                                                              .addChild(new Shape().setUSE("sitebox")))
                                                            .addChild(new HAnimSite("hanim_r_hand").setName("r_metacarpal_pha5").setDEF("hanim_r_metacarpal_pha5").setTranslation(new float[] {-0.1929f,0.789f,-0.1064f})
                                                              .addChild(new Shape().setUSE("sitebox"))))
                                                          .addChild(new HAnimJoint("hanim_r_wrist").setName("r_thumb1").setDEF("hanim_r_thumb1").setCenter(new float[] {-0.1899f,0.8502f,-0.0473f}).setSkinCoordIndex(new MFInt32447().getArray()).setSkinCoordWeight(new MFFloat448().getArray()).setUlimit(new MFFloat449().getArray()).setLlimit(new MFFloat450().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_thumb1").setName("r_thumb_metacarpal").setDEF("hanim_r_thumb_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1899f,0.8502f,-0.0473f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32451().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f452().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_thumb1").setName("r_thumb2").setDEF("hanim_r_thumb2").setCenter(new float[] {-0.1874f,0.8256f,0.0306f}).setSkinCoordIndex(new MFInt32453().getArray()).setSkinCoordWeight(new MFFloat454().getArray()).setUlimit(new MFFloat455().getArray()).setLlimit(new MFFloat456().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_thumb2").setName("r_thumb_proximal").setDEF("hanim_r_thumb_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1874f,0.8256f,0.0306f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32457().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f458().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_thumb2").setName("r_thumb3").setDEF("hanim_r_thumb3").setCenter(new float[] {-0.1864f,0.819f,0.0506f}).setSkinCoordIndex(new MFInt32459().getArray()).setSkinCoordWeight(new MFFloat460().getArray()).setUlimit(new MFFloat461().getArray()).setLlimit(new MFFloat462().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_thumb3").setName("r_thumb_distal").setDEF("hanim_r_thumb_distal")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1864f,0.819f,0.0506f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32463().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f464().getArray()))))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32465().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f466().getArray()))))
                                                                  .addChild(new HAnimSite("hanim_r_thumb_distal").setName("r_thumb_distal_tip").setDEF("hanim_r_thumb_distal_tip").setTranslation(new float[] {-0.1869f,0.809f,0.082f})
                                                                    .addChild(new Shape().setUSE("sitebox")))))))
                                                          .addChild(new HAnimJoint("hanim_r_wrist").setName("r_index0").setDEF("hanim_r_index0").setCenter(new float[] {-0.1961f,0.8055f,-0.0218f}).setSkinCoordIndex(new MFInt32467().getArray()).setSkinCoordWeight(new MFFloat468().getArray()).setUlimit(new MFFloat469().getArray()).setLlimit(new MFFloat470().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_index0").setName("r_index_metacarpal").setDEF("hanim_r_index_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1961f,0.8055f,-0.0218f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32471().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f472().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_index0").setName("r_index1").setDEF("hanim_r_index1").setCenter(new float[] {-0.1961f,0.7846f,-0.0218f}).setSkinCoordIndex(new MFInt32473().getArray()).setSkinCoordWeight(new MFFloat474().getArray()).setUlimit(new MFFloat475().getArray()).setLlimit(new MFFloat476().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_index1").setName("r_index_proximal").setDEF("hanim_r_index_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1961f,0.7846f,-0.0218f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32477().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f478().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_index1").setName("r_index2").setDEF("hanim_r_index2").setCenter(new float[] {-0.1954f,0.7393f,-0.0185f}).setSkinCoordIndex(new MFInt32479().getArray()).setSkinCoordWeight(new MFFloat480().getArray()).setUlimit(new MFFloat481().getArray()).setLlimit(new MFFloat482().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_index2").setName("r_index_middle").setDEF("hanim_r_index_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1954f,0.7393f,-0.0185f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32483().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f484().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_index2").setName("r_index3").setDEF("hanim_r_index3").setCenter(new float[] {-0.1945f,0.7169f,-0.0173f}).setSkinCoordIndex(new MFInt32485().getArray()).setSkinCoordWeight(new MFFloat486().getArray()).setUlimit(new MFFloat487().getArray()).setLlimit(new MFFloat488().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_index3").setName("r_index_distal").setDEF("hanim_r_index_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1945f,0.7169f,-0.0173f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32489().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f490().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32491().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f492().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_r_index_distal").setName("r_index_distal_tip").setDEF("hanim_r_index_distal_tip").setTranslation(new float[] {-0.198f,0.6883f,-0.018f})
                                                                      .addChild(new Shape().setUSE("sitebox")))
                                                                    .addChild(new HAnimSite("hanim_r_index_distal").setName("r_dactylion").setDEF("hanim_r_dactylion").setTranslation(new float[] {-0.1941f,0.6772f,-0.0423f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint("hanim_r_wrist").setName("r_middle0").setDEF("hanim_r_middle0").setCenter(new float[] {-0.1972f,0.806f,-0.0468f}).setSkinCoordIndex(new MFInt32493().getArray()).setSkinCoordWeight(new MFFloat494().getArray()).setUlimit(new MFFloat495().getArray()).setLlimit(new MFFloat496().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_middle0").setName("r_middle_metacarpal").setDEF("hanim_r_middle_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1972f,0.806f,-0.0468f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32497().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f498().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_middle0").setName("r_middle1").setDEF("hanim_r_middle1").setCenter(new float[] {-0.1972f,0.7849f,-0.0468f}).setSkinCoordIndex(new MFInt32499().getArray()).setSkinCoordWeight(new MFFloat500().getArray()).setUlimit(new MFFloat501().getArray()).setLlimit(new MFFloat502().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_middle1").setName("r_middle_proximal").setDEF("hanim_r_middle_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1972f,0.7849f,-0.0468f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32503().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f504().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_middle1").setName("r_middle2").setDEF("hanim_r_middle2").setCenter(new float[] {-0.195f,0.7304f,-0.0441f}).setSkinCoordIndex(new MFInt32505().getArray()).setSkinCoordWeight(new MFFloat506().getArray()).setUlimit(new MFFloat507().getArray()).setLlimit(new MFFloat508().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_middle2").setName("r_middle_middle").setDEF("hanim_r_middle_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.195f,0.7304f,-0.0441f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32509().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f510().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_middle2").setName("r_middle3").setDEF("hanim_r_middle3").setCenter(new float[] {-0.1939f,0.7042f,-0.0432f}).setSkinCoordIndex(new MFInt32511().getArray()).setSkinCoordWeight(new MFFloat512().getArray()).setUlimit(new MFFloat513().getArray()).setLlimit(new MFFloat514().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_middle3").setName("r_middle_distal").setDEF("hanim_r_middle_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1939f,0.7042f,-0.0432f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32515().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f516().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32517().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f518().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_r_middle_distal").setName("r_middle_distal_tip").setDEF("hanim_r_middle_distal_tip").setTranslation(new float[] {-0.1969f,0.6758f,-0.0427f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint("hanim_r_wrist").setName("r_ring0").setDEF("hanim_r_ring0").setCenter(new float[] {-0.1951f,0.8049f,-0.0732f}).setSkinCoordIndex(new MFInt32519().getArray()).setSkinCoordWeight(new MFFloat520().getArray()).setUlimit(new MFFloat521().getArray()).setLlimit(new MFFloat522().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_ring0").setName("r_ring_metacarpal").setDEF("hanim_r_ring_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1951f,0.8049f,-0.0732f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32523().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f524().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_ring0").setName("r_ring1").setDEF("hanim_r_ring1").setCenter(new float[] {-0.1951f,0.7845f,-0.0732f}).setSkinCoordIndex(new MFInt32525().getArray()).setSkinCoordWeight(new MFFloat526().getArray()).setUlimit(new MFFloat527().getArray()).setLlimit(new MFFloat528().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_ring1").setName("r_ring_proximal").setDEF("hanim_r_ring_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1951f,0.7845f,-0.0732f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32529().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f530().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_ring1").setName("r_ring2").setDEF("hanim_r_ring2").setCenter(new float[] {-0.192f,0.7318f,-0.0716f}).setSkinCoordIndex(new MFInt32531().getArray()).setSkinCoordWeight(new MFFloat532().getArray()).setUlimit(new MFFloat533().getArray()).setLlimit(new MFFloat534().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_ring2").setName("r_ring_middle").setDEF("hanim_r_ring_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.192f,0.7318f,-0.0716f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32535().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f536().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_ring2").setName("r_ring3").setDEF("hanim_r_ring3").setCenter(new float[] {-0.1908f,0.7077f,-0.0706f}).setSkinCoordIndex(new MFInt32537().getArray()).setSkinCoordWeight(new MFFloat538().getArray()).setUlimit(new MFFloat539().getArray()).setLlimit(new MFFloat540().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_ring3").setName("r_ring_distal").setDEF("hanim_r_ring_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1908f,0.7077f,-0.0706f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32541().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f542().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32543().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f544().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_r_ring_distal").setName("r_ring_distal_tip").setDEF("hanim_r_ring_distal_tip").setTranslation(new float[] {-0.1934f,0.6778f,-0.0693f})
                                                                      .addChild(new Shape().setUSE("sitebox"))))))))
                                                          .addChild(new HAnimJoint("hanim_r_wrist").setName("r_pinky0").setDEF("hanim_r_pinky0").setCenter(new float[] {-0.1926f,0.8096f,-0.0975f}).setSkinCoordIndex(new MFInt32545().getArray()).setSkinCoordWeight(new MFFloat546().getArray()).setUlimit(new MFFloat547().getArray()).setLlimit(new MFFloat548().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_pinky0").setName("r_pinky_metacarpal").setDEF("hanim_r_pinky_metacarpal")
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1926f,0.8096f,-0.0975f})
                                                                .addChild(new Shape().setUSE("jointbox")))
                                                              .addChild(new Shape()
                                                                .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32549().getArray())
                                                                  .setCoord(new Coordinate().setPoint(new MFVec3f550().getArray())))))
                                                            .addChild(new HAnimJoint("hanim_r_pinky0").setName("r_pinky1").setDEF("hanim_r_pinky1").setCenter(new float[] {-0.1926f,0.7896f,-0.0975f}).setSkinCoordIndex(new MFInt32551().getArray()).setSkinCoordWeight(new MFFloat552().getArray()).setUlimit(new MFFloat553().getArray()).setLlimit(new MFFloat554().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_pinky1").setName("r_pinky_proximal").setDEF("hanim_r_pinky_proximal")
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1926f,0.7896f,-0.0975f})
                                                                  .addChild(new Shape().setUSE("jointbox")))
                                                                .addChild(new Shape()
                                                                  .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                  .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32555().getArray())
                                                                    .setCoord(new Coordinate().setPoint(new MFVec3f556().getArray())))))
                                                              .addChild(new HAnimJoint("hanim_r_pinky1").setName("r_pinky2").setDEF("hanim_r_pinky2").setCenter(new float[] {-0.1902f,0.7483f,-0.0963f}).setSkinCoordIndex(new MFInt32557().getArray()).setSkinCoordWeight(new MFFloat558().getArray()).setUlimit(new MFFloat559().getArray()).setLlimit(new MFFloat560().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_pinky2").setName("r_pinky_middle").setDEF("hanim_r_pinky_middle")
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1902f,0.7483f,-0.0963f})
                                                                    .addChild(new Shape().setUSE("jointbox")))
                                                                  .addChild(new Shape()
                                                                    .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                    .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32561().getArray())
                                                                      .setCoord(new Coordinate().setPoint(new MFVec3f562().getArray())))))
                                                                .addChild(new HAnimJoint("hanim_r_pinky2").setName("r_pinky3").setDEF("hanim_r_pinky3").setCenter(new float[] {-0.1908f,0.754f,-0.096f}).setSkinCoordIndex(new MFInt32563().getArray()).setSkinCoordWeight(new MFFloat564().getArray()).setUlimit(new MFFloat565().getArray()).setLlimit(new MFFloat566().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_pinky3").setName("r_pinky_distal").setDEF("hanim_r_pinky_distal")
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1908f,0.754f,-0.096f})
                                                                      .addChild(new Shape().setUSE("jointbox")))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SegmentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32567().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f568().getArray()))))
                                                                    .addChild(new Shape()
                                                                      .setAppearance(new Appearance().setUSE("SiteParentLine"))
                                                                      .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt32569().getArray())
                                                                        .setCoord(new Coordinate().setPoint(new MFVec3f570().getArray()))))
                                                                    .addChild(new HAnimSite("hanim_r_pinky_distal").setName("r_pinky_distal_tip").setDEF("hanim_r_pinky_distal_tip").setTranslation(new float[] {-0.1938f,0.7035f,-0.0949f})
                                                                      .addChild(new Shape().setUSE("sitebox")))))))))))))))))))))))))))))))
            .setSkinCoord(new Coordinate().setDEF("JoeSkinCoord").setPoint(new MFVec3f571().getArray().append(new MFVec3f572().getArray())))
            .addSkin(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {0.5f,0f,0.5f}).setSpecularColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {0.13f,0.55f,0.13f}).setShininess(0.9f).setTransparency(0.4f))
                .setTexture(new ImageTexture().setUrl(new MFString573().getArray())))
              .setGeometry(new IndexedFaceSet().setCreaseAngle(3.1f).setColorPerVertex(false).setCoordIndex(new MFInt32574().getArray().append(new MFInt32575().getArray()).append(new MFInt32576().getArray()).append(new MFInt32577().getArray()))
                .setCoord(new Coordinate().setUSE("JoeSkinCoord"))))))
        .addChild(new Group().setDEF("SceneViewpoints")
          .addChild(new Viewpoint().setDEF("hanim_InclinedView").setDescription("hanim_Inclined View").setPosition(new float[] {1.62f,1.05f,2.06f}).setOrientation(new float[] {-0.113f,0.993f,0.0347f,0.671f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_IFrontView_1").setDescription("hanim_Front View").setPosition(new float[] {0f,0.854f,2.57665f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_ISideView_1").setDescription("hanim_Side View").setPosition(new float[] {2.5929f,0.854f,0f}).setOrientation(new float[] {0f,1f,0f,1.5708f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_ITopView").setDescription("hanim_Top View").setPosition(new float[] {0f,3.4495f,0f}).setOrientation(new float[] {1f,0f,0f,-1.5708f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_IRightHandFront").setDescription("hanim_RightHandFront View").setPosition(new float[] {-0.3f,0.75f,0.45f}).setCenterOfRotation(new float[] {-0.1959f,0.8694f,-0.0521f}))
          .addChild(new Viewpoint().setDEF("hanim_ILeftHandFront").setDescription("hanim_LeftHandFront View").setPosition(new float[] {0.3f,0.75f,0.45f}).setCenterOfRotation(new float[] {0.1959f,0.8694f,-0.0521f}))
          .addChild(new Viewpoint().setDEF("hanim_InclinedView2").setDescription("hanim_Inclined View2").setPosition(new float[] {-1.62f,1.05f,2.06f}).setOrientation(new float[] {-0.113f,-0.993f,0.0347f,0.671f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_IFrontView").setDescription("hanim_Front View2").setPosition(new float[] {0f,0.854f,1.575f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_ISideView").setDescription("hanim_Side View2").setPosition(new float[] {1.5929f,0.854f,0f}).setOrientation(new float[] {0f,1f,0f,1.5708f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_IHeadFront").setDescription("hanim_HeadFront View").setPosition(new float[] {0f,1.5f,1f}).setCenterOfRotation(new float[] {0.0066f,1.5357f,-0.0143f}))
          .addChild(new Viewpoint().setDEF("hanim_IChestFront").setDescription("hanim_ChestFront View").setPosition(new float[] {0f,1.2f,1f}).setCenterOfRotation(new float[] {0.0066f,1.5357f,-0.0143f}))
          .addChild(new Viewpoint().setDEF("hanim_IPelvisFront").setDescription("hanim_PelvisFront View").setPosition(new float[] {0f,0.8f,1f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f}))
          .addChild(new Viewpoint().setDEF("hanim_IKneesFront").setDescription("hanim_KneesFront View").setPosition(new float[] {0f,0.4f,1f}).setCenterOfRotation(new float[] {0f,0.824f,0.0277f})))
        .addChild(new Group().setDEF("StandAnimation")
          .addChild(new TimeSensor().setDEF("StandTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_metatarsalPitch").setKey(new MFFloat578().getArray()).setKeyValue(new MFRotation579().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_ankleRotInterp").setKey(new MFFloat580().getArray()).setKeyValue(new MFRotation581().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_kneeRotInterp").setKey(new MFFloat582().getArray()).setKeyValue(new MFRotation583().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_hipRotInterp").setKey(new MFFloat584().getArray()).setKeyValue(new MFRotation585().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_ankleRotInterp").setKey(new MFFloat586().getArray()).setKeyValue(new MFRotation587().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_kneeRotInterp").setKey(new MFFloat588().getArray()).setKeyValue(new MFRotation589().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_hipRotInterp").setKey(new MFFloat590().getArray()).setKeyValue(new MFRotation591().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_wristRotInterp").setKey(new MFFloat592().getArray()).setKeyValue(new MFRotation593().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_elbowRotInterp").setKey(new MFFloat594().getArray()).setKeyValue(new MFRotation595().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_shoulderRotInterp").setKey(new MFFloat596().getArray()).setKeyValue(new MFRotation597().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_wristRotInterp").setKey(new MFFloat598().getArray()).setKeyValue(new MFRotation599().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_elbowRotInterp").setKey(new MFFloat600().getArray()).setKeyValue(new MFRotation601().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_shoulderRotInterp").setKey(new MFFloat602().getArray()).setKeyValue(new MFRotation603().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_headRotInterp").setKey(new MFFloat604().getArray()).setKeyValue(new MFRotation605().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_neckRotInterp").setKey(new MFFloat606().getArray()).setKeyValue(new MFRotation607().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_eyeballRotInterp").setKey(new MFFloat608().getArray()).setKeyValue(new MFRotation609().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_eyeballRotInterp").setKey(new MFFloat610().getArray()).setKeyValue(new MFRotation611().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_lower_bodyRotInterp").setKey(new MFFloat612().getArray()).setKeyValue(new MFRotation613().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_upper_bodyRotInterp").setKey(new MFFloat614().getArray()).setKeyValue(new MFRotation615().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_whole_bodyRotInterp").setKey(new MFFloat616().getArray()).setKeyValue(new MFRotation617().getArray()))
          .addChild(new PositionInterpolator().setDEF("Stand_whole_bodyTransInterp").setKey(new MFFloat618().getArray()).setKeyValue(new MFVec3f619().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_sternoclavicularRoll").setKey(new MFFloat620().getArray()).setKeyValue(new MFRotation621().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_acromioclavicularRoll").setKey(new MFFloat622().getArray()).setKeyValue(new MFRotation623().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_sternoclavicularRoll").setKey(new MFFloat624().getArray()).setKeyValue(new MFRotation625().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_acromioclavicularRoll").setKey(new MFFloat626().getArray()).setKeyValue(new MFRotation627().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_sacroiliacYaw").setKey(new MFFloat628().getArray()).setKeyValue(new MFRotation629().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vl5Yaw").setKey(new MFFloat630().getArray()).setKeyValue(new MFRotation631().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_vc6Yaw").setKey(new MFFloat632().getArray()).setKeyValue(new MFRotation633().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_l_thumb1Pitch").setKey(new MFFloat634().getArray()).setKeyValue(new MFRotation635().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_thumb1Pitch").setKey(new MFFloat636().getArray()).setKeyValue(new MFRotation637().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index1Roll").setKey(new MFFloat638().getArray()).setKeyValue(new MFRotation639().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index2Roll").setKey(new MFFloat640().getArray()).setKeyValue(new MFRotation641().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stand_r_index3Roll").setKey(new MFFloat642().getArray()).setKeyValue(new MFRotation643().getArray())))
        .addChild(new Group().setDEF("PitchesAnimation")
          .addChild(new TimeSensor().setDEF("PitchTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_metatarsalPitch").setKey(new MFFloat644().getArray()).setKeyValue(new MFRotation645().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_ankleRotInterp").setKey(new MFFloat646().getArray()).setKeyValue(new MFRotation647().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_kneeRotInterp").setKey(new MFFloat648().getArray()).setKeyValue(new MFRotation649().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_hipRotInterp").setKey(new MFFloat650().getArray()).setKeyValue(new MFRotation651().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_ankleRotInterp").setKey(new MFFloat652().getArray()).setKeyValue(new MFRotation653().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_kneeRotInterp").setKey(new MFFloat654().getArray()).setKeyValue(new MFRotation655().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_hipRotInterp").setKey(new MFFloat656().getArray()).setKeyValue(new MFRotation657().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_wristRotInterp").setKey(new MFFloat658().getArray()).setKeyValue(new MFRotation659().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_elbowRotInterp").setKey(new MFFloat660().getArray()).setKeyValue(new MFRotation661().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_r_shoulderRotInterp").setKey(new MFFloat662().getArray()).setKeyValue(new MFRotation663().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_wristRotInterp").setKey(new MFFloat664().getArray()).setKeyValue(new MFRotation665().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_elbowRotInterp").setKey(new MFFloat666().getArray()).setKeyValue(new MFRotation667().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_l_shoulderRotInterp").setKey(new MFFloat668().getArray()).setKeyValue(new MFRotation669().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_headRotInterp").setKey(new MFFloat670().getArray()).setKeyValue(new MFRotation671().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_neckRotInterp").setKey(new MFFloat672().getArray()).setKeyValue(new MFRotation673().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_lower_bodyRotInterp").setKey(new MFFloat674().getArray()).setKeyValue(new MFRotation675().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_upper_bodyRotInterp").setKey(new MFFloat676().getArray()).setKeyValue(new MFRotation677().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitches_whole_bodyRotInterp").setKey(new MFFloat678().getArray()).setKeyValue(new MFRotation679().getArray()))
          .addChild(new PositionInterpolator().setDEF("Pitches_whole_bodyTransInterp").setKey(new MFFloat680().getArray()).setKeyValue(new MFVec3f681().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_sternoclavicularRoll").setKey(new MFFloat682().getArray()).setKeyValue(new MFRotation683().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_acromioclavicularRoll").setKey(new MFFloat684().getArray()).setKeyValue(new MFRotation685().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_sternoclavicularRoll").setKey(new MFFloat686().getArray()).setKeyValue(new MFRotation687().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_acromioclavicularRoll").setKey(new MFFloat688().getArray()).setKeyValue(new MFRotation689().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_sacroiliacYaw").setKey(new MFFloat690().getArray()).setKeyValue(new MFRotation691().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vl5Yaw").setKey(new MFFloat692().getArray()).setKeyValue(new MFRotation693().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_vc6Yaw").setKey(new MFFloat694().getArray()).setKeyValue(new MFRotation695().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_l_thumb1Pitch").setKey(new MFFloat696().getArray()).setKeyValue(new MFRotation697().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Pitch_r_thumb1Pitch").setKey(new MFFloat698().getArray()).setKeyValue(new MFRotation699().getArray())))
        .addChild(new Group().setDEF("YawsAnimation")
          .addChild(new TimeSensor().setDEF("YawTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_metatarsalPitch").setKey(new MFFloat700().getArray()).setKeyValue(new MFRotation701().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_ankleRotInterp").setKey(new MFFloat702().getArray()).setKeyValue(new MFRotation703().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_kneeRotInterp").setKey(new MFFloat704().getArray()).setKeyValue(new MFRotation705().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_hipRotInterp").setKey(new MFFloat706().getArray()).setKeyValue(new MFRotation707().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_ankleRotInterp").setKey(new MFFloat708().getArray()).setKeyValue(new MFRotation709().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_kneeRotInterp").setKey(new MFFloat710().getArray()).setKeyValue(new MFRotation711().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_hipRotInterp").setKey(new MFFloat712().getArray()).setKeyValue(new MFRotation713().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_wristRotInterp").setKey(new MFFloat714().getArray()).setKeyValue(new MFRotation715().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_elbowRotInterp").setKey(new MFFloat716().getArray()).setKeyValue(new MFRotation717().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_r_shoulderRotInterp").setKey(new MFFloat718().getArray()).setKeyValue(new MFRotation719().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_wristRotInterp").setKey(new MFFloat720().getArray()).setKeyValue(new MFRotation721().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_elbowRotInterp").setKey(new MFFloat722().getArray()).setKeyValue(new MFRotation723().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_l_shoulderRotInterp").setKey(new MFFloat724().getArray()).setKeyValue(new MFRotation725().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_headRotInterp").setKey(new MFFloat726().getArray()).setKeyValue(new MFRotation727().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_neckRotInterp").setKey(new MFFloat728().getArray()).setKeyValue(new MFRotation729().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_upper_bodyRotInterp").setKey(new MFFloat730().getArray()).setKeyValue(new MFRotation731().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_lower_bodyRotInterp").setKey(new MFFloat732().getArray()).setKeyValue(new MFRotation733().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaws_whole_bodyRotInterp").setKey(new MFFloat734().getArray()).setKeyValue(new MFRotation735().getArray()))
          .addChild(new PositionInterpolator().setDEF("Yaws_whole_bodyTransInterp").setKey(new MFFloat736().getArray()).setKeyValue(new MFVec3f737().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_sternoclavicularRoll").setKey(new MFFloat738().getArray()).setKeyValue(new MFRotation739().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_acromioclavicularRoll").setKey(new MFFloat740().getArray()).setKeyValue(new MFRotation741().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_sternoclavicularRoll").setKey(new MFFloat742().getArray()).setKeyValue(new MFRotation743().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_acromioclavicularRoll").setKey(new MFFloat744().getArray()).setKeyValue(new MFRotation745().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_sacroiliacYaw").setKey(new MFFloat746().getArray()).setKeyValue(new MFRotation747().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vl5Yaw").setKey(new MFFloat748().getArray()).setKeyValue(new MFRotation749().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_vc6Yaw").setKey(new MFFloat750().getArray()).setKeyValue(new MFRotation751().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_l_thumb1Pitch").setKey(new MFFloat752().getArray()).setKeyValue(new MFRotation753().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Yaw_r_thumb1Pitch").setKey(new MFFloat754().getArray()).setKeyValue(new MFRotation755().getArray())))
        .addChild(new Group().setDEF("RollsAnimation")
          .addChild(new TimeSensor().setDEF("RollTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_metatarsalPitch").setKey(new MFFloat756().getArray()).setKeyValue(new MFRotation757().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_ankleRotInterp").setKey(new MFFloat758().getArray()).setKeyValue(new MFRotation759().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_kneeRotInterp").setKey(new MFFloat760().getArray()).setKeyValue(new MFRotation761().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_hipRotInterp").setKey(new MFFloat762().getArray()).setKeyValue(new MFRotation763().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_ankleRotInterp").setKey(new MFFloat764().getArray()).setKeyValue(new MFRotation765().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_kneeRotInterp").setKey(new MFFloat766().getArray()).setKeyValue(new MFRotation767().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_hipRotInterp").setKey(new MFFloat768().getArray()).setKeyValue(new MFRotation769().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_wristRotInterp").setKey(new MFFloat770().getArray()).setKeyValue(new MFRotation771().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_elbowRotInterp").setKey(new MFFloat772().getArray()).setKeyValue(new MFRotation773().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_r_shoulderRotInterp").setKey(new MFFloat774().getArray()).setKeyValue(new MFRotation775().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_wristRotInterp").setKey(new MFFloat776().getArray()).setKeyValue(new MFRotation777().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_elbowRotInterp").setKey(new MFFloat778().getArray()).setKeyValue(new MFRotation779().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_l_shoulderRotInterp").setKey(new MFFloat780().getArray()).setKeyValue(new MFRotation781().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_headRotInterp").setKey(new MFFloat782().getArray()).setKeyValue(new MFRotation783().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_neckRotInterp").setKey(new MFFloat784().getArray()).setKeyValue(new MFRotation785().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_lower_bodyRotInterp").setKey(new MFFloat786().getArray()).setKeyValue(new MFRotation787().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_upper_bodyRotInterp").setKey(new MFFloat788().getArray()).setKeyValue(new MFRotation789().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Rolls_whole_bodyRotInterp").setKey(new MFFloat790().getArray()).setKeyValue(new MFRotation791().getArray()))
          .addChild(new PositionInterpolator().setDEF("Rolls_whole_bodyTransInterp").setKey(new MFFloat792().getArray()).setKeyValue(new MFVec3f793().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_sternoclavicularRoll").setKey(new MFFloat794().getArray()).setKeyValue(new MFRotation795().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_acromioclavicularRoll").setKey(new MFFloat796().getArray()).setKeyValue(new MFRotation797().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_sternoclavicularRoll").setKey(new MFFloat798().getArray()).setKeyValue(new MFRotation799().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_acromioclavicularRoll").setKey(new MFFloat800().getArray()).setKeyValue(new MFRotation801().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_sacroiliacYaw").setKey(new MFFloat802().getArray()).setKeyValue(new MFRotation803().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vl5Yaw").setKey(new MFFloat804().getArray()).setKeyValue(new MFRotation805().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_vc6Yaw").setKey(new MFFloat806().getArray()).setKeyValue(new MFRotation807().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_l_thumb1Pitch").setKey(new MFFloat808().getArray()).setKeyValue(new MFRotation809().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Roll_r_thumb1Pitch").setKey(new MFFloat810().getArray()).setKeyValue(new MFRotation811().getArray())))
        .addChild(new Group().setDEF("WalkAnimation")
          .addChild(new TimeSensor().setDEF("WalkTimer").setCycleInterval(1.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_metatarsalPitch").setKey(new MFFloat812().getArray()).setKeyValue(new MFRotation813().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_ankleRotInterp").setKey(new MFFloat814().getArray()).setKeyValue(new MFRotation815().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_kneeRotInterp").setKey(new MFFloat816().getArray()).setKeyValue(new MFRotation817().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_hipRotInterp").setKey(new MFFloat818().getArray()).setKeyValue(new MFRotation819().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_ankleRotInterp").setKey(new MFFloat820().getArray()).setKeyValue(new MFRotation821().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_kneeRotInterp").setKey(new MFFloat822().getArray()).setKeyValue(new MFRotation823().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_hipRotInterp").setKey(new MFFloat824().getArray()).setKeyValue(new MFRotation825().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_lower_bodyRotInterp").setKey(new MFFloat826().getArray()).setKeyValue(new MFRotation827().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_wristRotInterp").setKey(new MFFloat828().getArray()).setKeyValue(new MFRotation829().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_elbowRotInterp").setKey(new MFFloat830().getArray()).setKeyValue(new MFRotation831().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_shoulderRotInterp").setKey(new MFFloat832().getArray()).setKeyValue(new MFRotation833().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_wristRotInterp").setKey(new MFFloat834().getArray()).setKeyValue(new MFRotation835().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_elbowRotInterp").setKey(new MFFloat836().getArray()).setKeyValue(new MFRotation837().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_shoulderRotInterp").setKey(new MFFloat838().getArray()).setKeyValue(new MFRotation839().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_headRotInterp").setKey(new MFFloat840().getArray()).setKeyValue(new MFRotation841().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_neckRotInterp").setKey(new MFFloat842().getArray()).setKeyValue(new MFRotation843().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_upper_bodyRotInterp").setKey(new MFFloat844().getArray()).setKeyValue(new MFRotation845().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_whole_bodyRotInterp").setKey(new MFFloat846().getArray()).setKeyValue(new MFRotation847().getArray()))
          .addChild(new PositionInterpolator().setDEF("Walk_whole_bodyTranInterp").setKey(new MFFloat848().getArray()).setKeyValue(new MFVec3f849().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_sternoclavicularRoll").setKey(new MFFloat850().getArray()).setKeyValue(new MFRotation851().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_acromioclavicularRoll").setKey(new MFFloat852().getArray()).setKeyValue(new MFRotation853().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_sternoclavicularRoll").setKey(new MFFloat854().getArray()).setKeyValue(new MFRotation855().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_acromioclavicularRoll").setKey(new MFFloat856().getArray()).setKeyValue(new MFRotation857().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_sacroiliacYaw").setKey(new MFFloat858().getArray()).setKeyValue(new MFRotation859().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vl5Yaw").setKey(new MFFloat860().getArray()).setKeyValue(new MFRotation861().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_vc6Yaw").setKey(new MFFloat862().getArray()).setKeyValue(new MFRotation863().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_l_thumb1Pitch").setKey(new MFFloat864().getArray()).setKeyValue(new MFRotation865().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Walk_r_thumb1Pitch").setKey(new MFFloat866().getArray()).setKeyValue(new MFRotation867().getArray())))
        .addChild(new Group().setDEF("RunAnimation")
          .addChild(new TimeSensor().setDEF("RunTimer").setCycleInterval(0.9d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Run_r_metatarsalPitch").setKey(new MFFloat868().getArray()).setKeyValue(new MFRotation869().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_hipRotInterp_Run").setKey(new MFFloat870().getArray()).setKeyValue(new MFRotation871().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_kneeRotInterp_Run").setKey(new MFFloat872().getArray()).setKeyValue(new MFRotation873().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_ankleRotInterp_Run").setKey(new MFFloat874().getArray()).setKeyValue(new MFRotation875().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_hipRotInterp_Run").setKey(new MFFloat876().getArray()).setKeyValue(new MFRotation877().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_kneeRotInterp_Run").setKey(new MFFloat878().getArray()).setKeyValue(new MFRotation879().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_ankleRotInterp_Run").setKey(new MFFloat880().getArray()).setKeyValue(new MFRotation881().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_shoulderRotInterp_Run").setKey(new MFFloat882().getArray()).setKeyValue(new MFRotation883().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_elbowRotInterp_Run").setKey(new MFFloat884().getArray()).setKeyValue(new MFRotation885().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_wristRotInterp_Run").setKey(new MFFloat886().getArray()).setKeyValue(new MFRotation887().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_shoulderRotInterp_Run").setKey(new MFFloat888().getArray()).setKeyValue(new MFRotation889().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_elbowRotInterp_Run").setKey(new MFFloat890().getArray()).setKeyValue(new MFRotation891().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_wristRotInterp_Run").setKey(new MFFloat892().getArray()).setKeyValue(new MFRotation893().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_lower_bodyRotInterp_Run").setKey(new MFFloat894().getArray()).setKeyValue(new MFRotation895().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_headRotInterp_Run").setKey(new MFFloat896().getArray()).setKeyValue(new MFRotation897().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_neckRotInterp_Run").setKey(new MFFloat898().getArray()).setKeyValue(new MFRotation899().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_upper_bodyRotInterp_Run").setKey(new MFFloat900().getArray()).setKeyValue(new MFRotation901().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_whole_bodyRotInterp_Run").setKey(new MFFloat902().getArray()).setKeyValue(new MFRotation903().getArray()))
          .addChild(new PositionInterpolator().setDEF("Run_whole_bodyTranInterp_Run").setKey(new MFFloat904().getArray()).setKeyValue(new MFVec3f905().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_sternoclavicularRoll").setKey(new MFFloat906().getArray()).setKeyValue(new MFRotation907().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_acromioclavicularRoll").setKey(new MFFloat908().getArray()).setKeyValue(new MFRotation909().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_sternoclavicularRoll").setKey(new MFFloat910().getArray()).setKeyValue(new MFRotation911().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_acromioclavicularRoll").setKey(new MFFloat912().getArray()).setKeyValue(new MFRotation913().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_sacroiliacYaw").setKey(new MFFloat914().getArray()).setKeyValue(new MFRotation915().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vl5Yaw").setKey(new MFFloat916().getArray()).setKeyValue(new MFRotation917().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_vc6Yaw").setKey(new MFFloat918().getArray()).setKeyValue(new MFRotation919().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_l_thumb1Pitch").setKey(new MFFloat920().getArray()).setKeyValue(new MFRotation921().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Run_r_thumb1Pitch").setKey(new MFFloat922().getArray()).setKeyValue(new MFRotation923().getArray())))
        .addChild(new Group().setDEF("JumpAnimation")
          .addChild(new TimeSensor().setDEF("JumpTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_metatarsalPitch").setKey(new MFFloat924().getArray()).setKeyValue(new MFRotation925().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_ankleRotInterp").setKey(new MFFloat926().getArray()).setKeyValue(new MFRotation927().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_kneeRotInterp").setKey(new MFFloat928().getArray()).setKeyValue(new MFRotation929().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_hipRotInterp").setKey(new MFFloat930().getArray()).setKeyValue(new MFRotation931().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_ankleRotInterp").setKey(new MFFloat932().getArray()).setKeyValue(new MFRotation933().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_kneeRotInterp").setKey(new MFFloat934().getArray()).setKeyValue(new MFRotation935().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_hipRotInterp").setKey(new MFFloat936().getArray()).setKeyValue(new MFRotation937().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_lower_bodyRotInterp").setKey(new MFFloat938().getArray()).setKeyValue(new MFRotation939().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_wristRotInterp").setKey(new MFFloat940().getArray()).setKeyValue(new MFRotation941().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_elbowRotInterp").setKey(new MFFloat942().getArray()).setKeyValue(new MFRotation943().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_shoulderRotInterp").setKey(new MFFloat944().getArray()).setKeyValue(new MFRotation945().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_wristRotInterp").setKey(new MFFloat946().getArray()).setKeyValue(new MFRotation947().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_elbowRotInterp").setKey(new MFFloat948().getArray()).setKeyValue(new MFRotation949().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_shoulderRotInterp").setKey(new MFFloat950().getArray()).setKeyValue(new MFRotation951().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_headRotInterp").setKey(new MFFloat952().getArray()).setKeyValue(new MFRotation953().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_neckRotInterp").setKey(new MFFloat954().getArray()).setKeyValue(new MFRotation955().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_upper_bodyRotInterp").setKey(new MFFloat956().getArray()).setKeyValue(new MFRotation957().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_whole_bodyRotInterp").setKey(new MFFloat958().getArray()).setKeyValue(new MFRotation959().getArray()))
          .addChild(new PositionInterpolator().setDEF("Jump_whole_bodyTranInterp").setKey(new MFFloat960().getArray()).setKeyValue(new MFVec3f961().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_sternoclavicularRoll").setKey(new MFFloat962().getArray()).setKeyValue(new MFRotation963().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_acromioclavicularRoll").setKey(new MFFloat964().getArray()).setKeyValue(new MFRotation965().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_sternoclavicularRoll").setKey(new MFFloat966().getArray()).setKeyValue(new MFRotation967().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_acromioclavicularRoll").setKey(new MFFloat968().getArray()).setKeyValue(new MFRotation969().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_sacroiliacYaw").setKey(new MFFloat970().getArray()).setKeyValue(new MFRotation971().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vl5Yaw").setKey(new MFFloat972().getArray()).setKeyValue(new MFRotation973().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_vc6Yaw").setKey(new MFFloat974().getArray()).setKeyValue(new MFRotation975().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_l_thumb1Pitch").setKey(new MFFloat976().getArray()).setKeyValue(new MFRotation977().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Jump_r_thumb1Pitch").setKey(new MFFloat978().getArray()).setKeyValue(new MFRotation979().getArray())))
        .addChild(new Group().setDEF("KickAnimation")
          .addChild(new TimeSensor().setDEF("KickTimer").setCycleInterval(3.73d).setLoop(true))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_sternoclavicularRoll").setKey(new MFFloat980().getArray()).setKeyValue(new MFRotation981().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_acromioclavicularRoll").setKey(new MFFloat982().getArray()).setKeyValue(new MFRotation983().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_shoulderRoll").setKey(new MFFloat984().getArray()).setKeyValue(new MFRotation985().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_ForeArmPitch").setKey(new MFFloat986().getArray()).setKeyValue(new MFRotation987().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_wristRoll").setKey(new MFFloat988().getArray()).setKeyValue(new MFRotation989().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_thumb1Pitch").setKey(new MFFloat990().getArray()).setKeyValue(new MFRotation991().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_sternoclavicularRoll").setKey(new MFFloat992().getArray()).setKeyValue(new MFRotation993().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_acromioclavicularRoll").setKey(new MFFloat994().getArray()).setKeyValue(new MFRotation995().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_shoulderRoll").setKey(new MFFloat996().getArray()).setKeyValue(new MFRotation997().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_ForeArmPitch").setKey(new MFFloat998().getArray()).setKeyValue(new MFRotation999().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_wristRoll").setKey(new MFFloat1000().getArray()).setKeyValue(new MFRotation1001().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_thumb1Pitch").setKey(new MFFloat1002().getArray()).setKeyValue(new MFRotation1003().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_hipPitch").setKey(new MFFloat1004().getArray()).setKeyValue(new MFRotation1005().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_kneePitch").setKey(new MFFloat1006().getArray()).setKeyValue(new MFRotation1007().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_hipPitch").setKey(new MFFloat1008().getArray()).setKeyValue(new MFRotation1009().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_l_kneePitch").setKey(new MFFloat1010().getArray()).setKeyValue(new MFRotation1011().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_anklePitch").setKey(new MFFloat1012().getArray()).setKeyValue(new MFRotation1013().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_r_metatarsalPitch").setKey(new MFFloat1014().getArray()).setKeyValue(new MFRotation1015().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_sacroiliacYaw").setKey(new MFFloat1016().getArray()).setKeyValue(new MFRotation1017().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vl5Yaw").setKey(new MFFloat1018().getArray()).setKeyValue(new MFRotation1019().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_vc6Yaw").setKey(new MFFloat1020().getArray()).setKeyValue(new MFRotation1021().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_lower_bodyRotInterp").setKey(new MFFloat1022().getArray()).setKeyValue(new MFRotation1023().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_upper_bodyRotInterp").setKey(new MFFloat1024().getArray()).setKeyValue(new MFRotation1025().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_whole_bodyRotInterp").setKey(new MFFloat1026().getArray()).setKeyValue(new MFRotation1027().getArray()))
          .addChild(new PositionInterpolator().setDEF("Kick_whole_bodyTransInterp").setKey(new MFFloat1028().getArray()).setKeyValue(new MFVec3f1029().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Kick_neckRotInterp").setKey(new MFFloat1030().getArray()).setKeyValue(new MFRotation1031().getArray())))
        .addChild(new Group().setDEF("StopAnimation")
          .addChild(new TimeSensor().setDEF("StopTimer").setCycleInterval(5.73d).setLoop(true))
          .addChild(new PositionInterpolator().setDEF("Stop_HumanoidRootTransInterp").setKey(new MFFloat1032().getArray()).setKeyValue(new MFVec3f1033().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_HumanoidRootRotInterp").setKey(new MFFloat1034().getArray()).setKeyValue(new MFRotation1035().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_sacroiliacRotInterp").setKey(new MFFloat1036().getArray()).setKeyValue(new MFRotation1037().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_hipRotInterp").setKey(new MFFloat1038().getArray()).setKeyValue(new MFRotation1039().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_kneeRotInterp").setKey(new MFFloat1040().getArray()).setKeyValue(new MFRotation1041().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ankleRotInterp").setKey(new MFFloat1042().getArray()).setKeyValue(new MFRotation1043().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_subtalarRotInterp").setKey(new MFFloat1044().getArray()).setKeyValue(new MFRotation1045().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_midtarsalRotInterp").setKey(new MFFloat1046().getArray()).setKeyValue(new MFRotation1047().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_metatarsalRotInterp").setKey(new MFFloat1048().getArray()).setKeyValue(new MFRotation1049().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_hipRotInterp").setKey(new MFFloat1050().getArray()).setKeyValue(new MFRotation1051().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_kneeRotInterp").setKey(new MFFloat1052().getArray()).setKeyValue(new MFRotation1053().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ankleRotInterp").setKey(new MFFloat1054().getArray()).setKeyValue(new MFRotation1055().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_subtalarRotInterp").setKey(new MFFloat1056().getArray()).setKeyValue(new MFRotation1057().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_midtarsalRotInterp").setKey(new MFFloat1058().getArray()).setKeyValue(new MFRotation1059().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_metatarsalRotInterp").setKey(new MFFloat1060().getArray()).setKeyValue(new MFRotation1061().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl5RotInterp").setKey(new MFFloat1062().getArray()).setKeyValue(new MFRotation1063().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl4RotInterp").setKey(new MFFloat1064().getArray()).setKeyValue(new MFRotation1065().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl3RotInterp").setKey(new MFFloat1066().getArray()).setKeyValue(new MFRotation1067().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl2RotInterp").setKey(new MFFloat1068().getArray()).setKeyValue(new MFRotation1069().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vl1RotInterp").setKey(new MFFloat1070().getArray()).setKeyValue(new MFRotation1071().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt12RotInterp").setKey(new MFFloat1072().getArray()).setKeyValue(new MFRotation1073().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt11RotInterp").setKey(new MFFloat1074().getArray()).setKeyValue(new MFRotation1075().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt10RotInterp").setKey(new MFFloat1076().getArray()).setKeyValue(new MFRotation1077().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt9RotInterp").setKey(new MFFloat1078().getArray()).setKeyValue(new MFRotation1079().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt8RotInterp").setKey(new MFFloat1080().getArray()).setKeyValue(new MFRotation1081().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt7RotInterp").setKey(new MFFloat1082().getArray()).setKeyValue(new MFRotation1083().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt6RotInterp").setKey(new MFFloat1084().getArray()).setKeyValue(new MFRotation1085().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt5RotInterp").setKey(new MFFloat1086().getArray()).setKeyValue(new MFRotation1087().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt4RotInterp").setKey(new MFFloat1088().getArray()).setKeyValue(new MFRotation1089().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt3RotInterp").setKey(new MFFloat1090().getArray()).setKeyValue(new MFRotation1091().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt2RotInterp").setKey(new MFFloat1092().getArray()).setKeyValue(new MFRotation1093().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vt1RotInterp").setKey(new MFFloat1094().getArray()).setKeyValue(new MFRotation1095().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc7RotInterp").setKey(new MFFloat1096().getArray()).setKeyValue(new MFRotation1097().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc6RotInterp").setKey(new MFFloat1098().getArray()).setKeyValue(new MFRotation1099().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc5RotInterp").setKey(new MFFloat1100().getArray()).setKeyValue(new MFRotation1101().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc4RotInterp").setKey(new MFFloat1102().getArray()).setKeyValue(new MFRotation1103().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc3RotInterp").setKey(new MFFloat1104().getArray()).setKeyValue(new MFRotation1105().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc2RotInterp").setKey(new MFFloat1106().getArray()).setKeyValue(new MFRotation1107().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_vc1RotInterp").setKey(new MFFloat1108().getArray()).setKeyValue(new MFRotation1109().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_skullbaseRotInterp").setKey(new MFFloat1110().getArray()).setKeyValue(new MFRotation1111().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_eyeball_jointRotInterp").setKey(new MFFloat1112().getArray()).setKeyValue(new MFRotation1113().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_eyeball_jointRotInterp").setKey(new MFFloat1114().getArray()).setKeyValue(new MFRotation1115().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_sternoclavicularRotInterp").setKey(new MFFloat1116().getArray()).setKeyValue(new MFRotation1117().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_acromioclavicularRotInterp").setKey(new MFFloat1118().getArray()).setKeyValue(new MFRotation1119().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_shoulderRotInterp").setKey(new MFFloat1120().getArray()).setKeyValue(new MFRotation1121().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_elbowRotInterp").setKey(new MFFloat1122().getArray()).setKeyValue(new MFRotation1123().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_wristRotInterp").setKey(new MFFloat1124().getArray()).setKeyValue(new MFRotation1125().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb1RotInterp").setKey(new MFFloat1126().getArray()).setKeyValue(new MFRotation1127().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb2RotInterp").setKey(new MFFloat1128().getArray()).setKeyValue(new MFRotation1129().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_thumb3RotInterp").setKey(new MFFloat1130().getArray()).setKeyValue(new MFRotation1131().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index0RotInterp").setKey(new MFFloat1132().getArray()).setKeyValue(new MFRotation1133().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index1RotInterp").setKey(new MFFloat1134().getArray()).setKeyValue(new MFRotation1135().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index2RotInterp").setKey(new MFFloat1136().getArray()).setKeyValue(new MFRotation1137().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_index3RotInterp").setKey(new MFFloat1138().getArray()).setKeyValue(new MFRotation1139().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle0RotInterp").setKey(new MFFloat1140().getArray()).setKeyValue(new MFRotation1141().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle1RotInterp").setKey(new MFFloat1142().getArray()).setKeyValue(new MFRotation1143().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle2RotInterp").setKey(new MFFloat1144().getArray()).setKeyValue(new MFRotation1145().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_middle3RotInterp").setKey(new MFFloat1146().getArray()).setKeyValue(new MFRotation1147().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring0RotInterp").setKey(new MFFloat1148().getArray()).setKeyValue(new MFRotation1149().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring1RotInterp").setKey(new MFFloat1150().getArray()).setKeyValue(new MFRotation1151().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring2RotInterp").setKey(new MFFloat1152().getArray()).setKeyValue(new MFRotation1153().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_ring3RotInterp").setKey(new MFFloat1154().getArray()).setKeyValue(new MFRotation1155().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky0RotInterp").setKey(new MFFloat1156().getArray()).setKeyValue(new MFRotation1157().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky1RotInterp").setKey(new MFFloat1158().getArray()).setKeyValue(new MFRotation1159().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky2RotInterp").setKey(new MFFloat1160().getArray()).setKeyValue(new MFRotation1161().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_l_pinky3RotInterp").setKey(new MFFloat1162().getArray()).setKeyValue(new MFRotation1163().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_sternoclavicularRotInterp").setKey(new MFFloat1164().getArray()).setKeyValue(new MFRotation1165().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_acromioclavicularRotInterp").setKey(new MFFloat1166().getArray()).setKeyValue(new MFRotation1167().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_shoulderRotInterp").setKey(new MFFloat1168().getArray()).setKeyValue(new MFRotation1169().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_elbowRotInterp").setKey(new MFFloat1170().getArray()).setKeyValue(new MFRotation1171().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_wristRotInterp").setKey(new MFFloat1172().getArray()).setKeyValue(new MFRotation1173().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb1RotInterp").setKey(new MFFloat1174().getArray()).setKeyValue(new MFRotation1175().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb2RotInterp").setKey(new MFFloat1176().getArray()).setKeyValue(new MFRotation1177().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_thumb3RotInterp").setKey(new MFFloat1178().getArray()).setKeyValue(new MFRotation1179().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index0RotInterp").setKey(new MFFloat1180().getArray()).setKeyValue(new MFRotation1181().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index1RotInterp").setKey(new MFFloat1182().getArray()).setKeyValue(new MFRotation1183().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index2RotInterp").setKey(new MFFloat1184().getArray()).setKeyValue(new MFRotation1185().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_index3RotInterp").setKey(new MFFloat1186().getArray()).setKeyValue(new MFRotation1187().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle0RotInterp").setKey(new MFFloat1188().getArray()).setKeyValue(new MFRotation1189().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle1RotInterp").setKey(new MFFloat1190().getArray()).setKeyValue(new MFRotation1191().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle2RotInterp").setKey(new MFFloat1192().getArray()).setKeyValue(new MFRotation1193().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_middle3RotInterp").setKey(new MFFloat1194().getArray()).setKeyValue(new MFRotation1195().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring0RotInterp").setKey(new MFFloat1196().getArray()).setKeyValue(new MFRotation1197().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring1RotInterp").setKey(new MFFloat1198().getArray()).setKeyValue(new MFRotation1199().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring2RotInterp").setKey(new MFFloat1200().getArray()).setKeyValue(new MFRotation1201().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_ring3RotInterp").setKey(new MFFloat1202().getArray()).setKeyValue(new MFRotation1203().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky0RotInterp").setKey(new MFFloat1204().getArray()).setKeyValue(new MFRotation1205().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky1RotInterp").setKey(new MFFloat1206().getArray()).setKeyValue(new MFRotation1207().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky2RotInterp").setKey(new MFFloat1208().getArray()).setKeyValue(new MFRotation1209().getArray()))
          .addChild(new OrientationInterpolator().setDEF("Stop_r_pinky3RotInterp").setKey(new MFFloat1210().getArray()).setKeyValue(new MFRotation1211().getArray())))
        .addChild(new Group().setDEF("Interface")
          .addChild(new Transform().setDEF("cordsysfloor").setScale(new float[] {0.175f,0.175f,0.175f})
            .addChild(new Inline().setGlobal(true).setUrl(new MFString1212().getArray())))
          .addChild(new ProximitySensor().setDEF("HudProx").setSize(new float[] {50f,50f,50f}))
          .addChild(new Transform().setDEF("HudXform")
            .addChild(new Transform().setTranslation(new float[] {-0.2f,0.15f,-0.7f}).setScale(new float[] {0.02f,0.02f,0.02f})
              .addChild(new Transform().setDEF("Stand_Text").setTranslation(new float[] {0f,-0.9f,0f})
                .addChild(new TouchSensor().setDEF("Stand_Touch"))
                .addChild(new Shape().setDEF("StandText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("text_color").setAmbientIntensity(1f).setDiffuseColor(new float[] {0.819f,0.521f,0.169f}).setSpecularColor(new float[] {0.819f,0.521f,0.169f}).setEmissiveColor(new float[] {0.819f,0.521f,0.169f})))
                  .setGeometry(new Text().setString(new MFString1213().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1214().getArray()))))
                .addChild(new Shape().setDEF("Stand_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("Clear").setAmbientIntensity(1f).setDiffuseColor(new float[] {0f,0.5f,0f}).setEmissiveColor(new float[] {0f,0.5f,0f}).setTransparency(0.8f)))
                  .setGeometry(new IndexedFaceSet().setDEF("Backing").setCoordIndex(new MFInt321215().getArray())
                    .setCoord(new Coordinate().setPoint(new MFVec3f1216().getArray())))))
              .addChild(new Transform().setDEF("Pitch_Text").setTranslation(new float[] {0f,-2.4f,0f})
                .addChild(new TouchSensor().setDEF("Pitch_Touch"))
                .addChild(new Shape().setDEF("PitchText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1217().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1218().getArray()))))
                .addChild(new Shape().setDEF("Pitch_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Yaw_Text").setTranslation(new float[] {0f,-3.8f,0f})
                .addChild(new TouchSensor().setDEF("Yaw_Touch"))
                .addChild(new Shape().setDEF("YawText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1219().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1220().getArray()))))
                .addChild(new Shape().setDEF("Yaw_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Roll_Text").setTranslation(new float[] {0f,-5.2f,0f})
                .addChild(new TouchSensor().setDEF("Roll_Touch"))
                .addChild(new Shape().setDEF("RollText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1221().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1222().getArray()))))
                .addChild(new Shape().setDEF("Roll_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Walk_Text").setTranslation(new float[] {0f,-6.6f,0f})
                .addChild(new TouchSensor().setDEF("Walk_Touch"))
                .addChild(new Shape().setDEF("WalkText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1223().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1224().getArray()))))
                .addChild(new Shape().setDEF("Walk_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Run_Text").setTranslation(new float[] {0f,-8f,0f})
                .addChild(new TouchSensor().setDEF("Run_Touch"))
                .addChild(new Shape().setDEF("RunText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1225().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1226().getArray()))))
                .addChild(new Shape().setDEF("Run_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Jump_Text").setTranslation(new float[] {0f,-9.4f,0f})
                .addChild(new TouchSensor().setDEF("Jump_Touch"))
                .addChild(new Shape().setDEF("JumpText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1227().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1228().getArray()))))
                .addChild(new Shape().setDEF("Jump_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Kick_Text").setTranslation(new float[] {0f,-10.8f,0f})
                .addChild(new TouchSensor().setDEF("Kick_Touch"))
                .addChild(new Shape().setDEF("KickText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1229().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1230().getArray()))))
                .addChild(new Shape().setDEF("Kick_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing"))))
              .addChild(new Transform().setDEF("Stop_Text").setTranslation(new float[] {0f,0.4f,0f})
                .addChild(new TouchSensor().setDEF("Stop_Touch"))
                .addChild(new Shape().setDEF("StopText")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("text_color")))
                  .setGeometry(new Text().setString(new MFString1231().getArray())
                    .setFontStyle(new FontStyle().setFamily(new MFString1232().getArray()))))
                .addChild(new Shape().setDEF("Stop_Back")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("Clear")))
                  .setGeometry(new IndexedFaceSet().setUSE("Backing")))))))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_lower_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_headRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_neckRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_eyeballRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_eyeballRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_upper_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_whole_bodyTransInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index1Roll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index2Roll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StandTimer").setFromField("fraction_changed").setToNode("Stand_r_index3Roll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Stand_r_ankleRotInterp").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_kneeRotInterp").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_hipRotInterp").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_ankleRotInterp").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_kneeRotInterp").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_hipRotInterp").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_wristRotInterp").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_elbowRotInterp").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_wristRotInterp").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_elbowRotInterp").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_headRotInterp").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_neckRotInterp").setFromField("value_changed").setToNode("hanim_vc7").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_eyeballRotInterp").setFromField("value_changed").setToNode("hanim_l_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_eyeballRotInterp").setFromField("value_changed").setToNode("hanim_r_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_upper_bodyRotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_lower_bodyRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_whole_bodyRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_whole_bodyTransInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Stand_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1Roll").setFromField("value_changed").setToNode("hanim_r_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1Roll").setFromField("value_changed").setToNode("hanim_r_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1Roll").setFromField("value_changed").setToNode("hanim_r_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index1Roll").setFromField("value_changed").setToNode("hanim_r_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_r_index2Roll").setFromField("value_changed").setToNode("hanim_r_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_lower_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_r_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_l_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_headRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_neckRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_upper_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitches_whole_bodyTransInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PitchTimer").setFromField("fraction_changed").setToNode("Pitch_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Pitches_r_ankleRotInterp").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_kneeRotInterp").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_hipRotInterp").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_ankleRotInterp").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_kneeRotInterp").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_hipRotInterp").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_lower_bodyRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_wristRotInterp").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_elbowRotInterp").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_r_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_wristRotInterp").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_elbowRotInterp").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_l_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_headRotInterp").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_neckRotInterp").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_upper_bodyRotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_whole_bodyRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitches_whole_bodyTransInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Pitch_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Pitch_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_lower_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_r_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_l_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_headRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_neckRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_upper_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaws_whole_bodyTransInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("YawTimer").setFromField("fraction_changed").setToNode("Yaw_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Yaws_r_ankleRotInterp").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_kneeRotInterp").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_hipRotInterp").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_ankleRotInterp").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_kneeRotInterp").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_hipRotInterp").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_lower_bodyRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_wristRotInterp").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_elbowRotInterp").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_r_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_wristRotInterp").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_elbowRotInterp").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_l_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_headRotInterp").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_neckRotInterp").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_upper_bodyRotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_whole_bodyRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaws_whole_bodyTransInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Yaw_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Yaw_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_lower_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_r_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_l_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_headRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_neckRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_upper_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Rolls_whole_bodyTransInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RollTimer").setFromField("fraction_changed").setToNode("Roll_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Rolls_r_ankleRotInterp").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_kneeRotInterp").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_hipRotInterp").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_ankleRotInterp").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_kneeRotInterp").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_hipRotInterp").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_lower_bodyRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_wristRotInterp").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_elbowRotInterp").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_r_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_wristRotInterp").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_elbowRotInterp").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_l_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_headRotInterp").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_neckRotInterp").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_upper_bodyRotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_whole_bodyRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rolls_whole_bodyTransInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Roll_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Roll_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_lower_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_headRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_neckRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_upper_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_whole_bodyTranInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WalkTimer").setFromField("fraction_changed").setToNode("Walk_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Walk_r_ankleRotInterp").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_kneeRotInterp").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_hipRotInterp").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_ankleRotInterp").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_kneeRotInterp").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_hipRotInterp").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_lower_bodyRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_wristRotInterp").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_elbowRotInterp").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_wristRotInterp").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_elbowRotInterp").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_headRotInterp").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_neckRotInterp").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_upper_bodyRotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_whole_bodyRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_whole_bodyTranInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Walk_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Walk_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_ankleRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_kneeRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_hipRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_ankleRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_kneeRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_hipRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_lower_bodyRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_wristRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_elbowRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_shoulderRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_wristRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_elbowRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_shoulderRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_headRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_neckRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_upper_bodyRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_bodyRotInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_whole_bodyTranInterp_Run").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("RunTimer").setFromField("fraction_changed").setToNode("Run_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Run_r_ankleRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_kneeRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_hipRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_ankleRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_kneeRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_hipRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_wristRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_elbowRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_shoulderRotInterp_Run").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_wristRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_elbowRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_shoulderRotInterp_Run").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_lower_bodyRotInterp_Run").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_headRotInterp_Run").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_neckRotInterp_Run").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_upper_bodyRotInterp_Run").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_whole_bodyRotInterp_Run").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_whole_bodyTranInterp_Run").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Run_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Run_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_lower_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_headRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_neckRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_upper_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_whole_bodyTranInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("JumpTimer").setFromField("fraction_changed").setToNode("Jump_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Jump_r_ankleRotInterp").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_kneeRotInterp").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_hipRotInterp").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_ankleRotInterp").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_kneeRotInterp").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_hipRotInterp").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_lower_bodyRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_wristRotInterp").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_elbowRotInterp").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_wristRotInterp").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_elbowRotInterp").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_headRotInterp").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_neckRotInterp").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_upper_bodyRotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_whole_bodyRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_whole_bodyTranInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Jump_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Jump_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_shoulderRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_ForeArmPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_wristRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_sternoclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_acromioclavicularRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_shoulderRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_ForeArmPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_wristRoll").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_thumb1Pitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_hipPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_kneePitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_hipPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_l_kneePitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_anklePitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_r_metatarsalPitch").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_sacroiliacYaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vl5Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_vc6Yaw").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_lower_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_upper_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_bodyRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_whole_bodyTransInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("Kick_neckRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Kick_l_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_shoulderRoll").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_ForeArmPitch").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_wristRoll").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_thumb1Pitch").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_sternoclavicularRoll").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_acromioclavicularRoll").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_shoulderRoll").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_ForeArmPitch").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_wristRoll").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_thumb1Pitch").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_hipPitch").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_kneePitch").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_anklePitch").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_hipPitch").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_l_kneePitch").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_anklePitch").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_r_metatarsalPitch").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_sacroiliacYaw").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_vl5Yaw").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_vc6Yaw").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_upper_bodyRotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_lower_bodyRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_whole_bodyRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Kick_whole_bodyTransInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Kick_neckRotInterp").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRootTransInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_HumanoidRootRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_sacroiliacRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_subtalarRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_midtarsalRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_metatarsalRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_hipRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_kneeRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ankleRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_subtalarRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_midtarsalRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_metatarsalRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl5RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl4RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vl1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt12RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt11RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt10RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt9RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt8RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt7RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt6RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt5RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt4RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vt1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc7RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc6RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc5RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc4RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_vc1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_skullbaseRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_eyeball_jointRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_eyeball_jointRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_sternoclavicularRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_acromioclavicularRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_thumb3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_index3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_middle3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_ring3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_l_pinky3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_sternoclavicularRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_acromioclavicularRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_shoulderRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_elbowRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_wristRotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_thumb3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_index3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_middle3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_ring3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky0RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky1RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky2RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("StopTimer").setFromField("fraction_changed").setToNode("Stop_r_pinky3RotInterp").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Stop_HumanoidRootTransInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("Stop_HumanoidRootRotInterp").setFromField("value_changed").setToNode("hanim_HumanoidRoot").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_sacroiliacRotInterp").setFromField("value_changed").setToNode("hanim_sacroiliac").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_hipRotInterp").setFromField("value_changed").setToNode("hanim_l_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_kneeRotInterp").setFromField("value_changed").setToNode("hanim_l_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ankleRotInterp").setFromField("value_changed").setToNode("hanim_l_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_subtalarRotInterp").setFromField("value_changed").setToNode("hanim_l_subtalar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_midtarsalRotInterp").setFromField("value_changed").setToNode("hanim_l_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_metatarsalRotInterp").setFromField("value_changed").setToNode("hanim_l_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_hipRotInterp").setFromField("value_changed").setToNode("hanim_r_hip").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_kneeRotInterp").setFromField("value_changed").setToNode("hanim_r_knee").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ankleRotInterp").setFromField("value_changed").setToNode("hanim_r_ankle").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_subtalarRotInterp").setFromField("value_changed").setToNode("hanim_r_subtalar").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_midtarsalRotInterp").setFromField("value_changed").setToNode("hanim_r_midtarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_metatarsalRotInterp").setFromField("value_changed").setToNode("hanim_r_metatarsal").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl5RotInterp").setFromField("value_changed").setToNode("hanim_vl5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl4RotInterp").setFromField("value_changed").setToNode("hanim_vl4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl3RotInterp").setFromField("value_changed").setToNode("hanim_vl3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl2RotInterp").setFromField("value_changed").setToNode("hanim_vl2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vl1RotInterp").setFromField("value_changed").setToNode("hanim_vl1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt12RotInterp").setFromField("value_changed").setToNode("hanim_vt12").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt11RotInterp").setFromField("value_changed").setToNode("hanim_vt11").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt10RotInterp").setFromField("value_changed").setToNode("hanim_vt10").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt9RotInterp").setFromField("value_changed").setToNode("hanim_vt9").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt8RotInterp").setFromField("value_changed").setToNode("hanim_vt8").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt7RotInterp").setFromField("value_changed").setToNode("hanim_vt7").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt6RotInterp").setFromField("value_changed").setToNode("hanim_vt6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt5RotInterp").setFromField("value_changed").setToNode("hanim_vt5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt4RotInterp").setFromField("value_changed").setToNode("hanim_vt4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt3RotInterp").setFromField("value_changed").setToNode("hanim_vt3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt2RotInterp").setFromField("value_changed").setToNode("hanim_vt2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vt1RotInterp").setFromField("value_changed").setToNode("hanim_vt1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc7RotInterp").setFromField("value_changed").setToNode("hanim_vc7").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc6RotInterp").setFromField("value_changed").setToNode("hanim_vc6").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc5RotInterp").setFromField("value_changed").setToNode("hanim_vc5").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc4RotInterp").setFromField("value_changed").setToNode("hanim_vc4").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc3RotInterp").setFromField("value_changed").setToNode("hanim_vc3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc2RotInterp").setFromField("value_changed").setToNode("hanim_vc2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_vc1RotInterp").setFromField("value_changed").setToNode("hanim_vc1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_skullbaseRotInterp").setFromField("value_changed").setToNode("hanim_skullbase").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_eyeball_jointRotInterp").setFromField("value_changed").setToNode("hanim_l_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_eyeball_jointRotInterp").setFromField("value_changed").setToNode("hanim_r_eyeball_joint").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_sternoclavicularRotInterp").setFromField("value_changed").setToNode("hanim_l_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_acromioclavicularRotInterp").setFromField("value_changed").setToNode("hanim_l_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_l_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_elbowRotInterp").setFromField("value_changed").setToNode("hanim_l_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_wristRotInterp").setFromField("value_changed").setToNode("hanim_l_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_thumb1RotInterp").setFromField("value_changed").setToNode("hanim_l_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_thumb2RotInterp").setFromField("value_changed").setToNode("hanim_l_thumb2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_thumb3RotInterp").setFromField("value_changed").setToNode("hanim_l_thumb3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index0RotInterp").setFromField("value_changed").setToNode("hanim_l_index0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index1RotInterp").setFromField("value_changed").setToNode("hanim_l_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index2RotInterp").setFromField("value_changed").setToNode("hanim_l_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_index3RotInterp").setFromField("value_changed").setToNode("hanim_l_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle0RotInterp").setFromField("value_changed").setToNode("hanim_l_middle0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle1RotInterp").setFromField("value_changed").setToNode("hanim_l_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle2RotInterp").setFromField("value_changed").setToNode("hanim_l_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_middle3RotInterp").setFromField("value_changed").setToNode("hanim_l_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring0RotInterp").setFromField("value_changed").setToNode("hanim_l_ring0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring1RotInterp").setFromField("value_changed").setToNode("hanim_l_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring2RotInterp").setFromField("value_changed").setToNode("hanim_l_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_ring3RotInterp").setFromField("value_changed").setToNode("hanim_l_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky0RotInterp").setFromField("value_changed").setToNode("hanim_l_pinky0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky1RotInterp").setFromField("value_changed").setToNode("hanim_l_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky2RotInterp").setFromField("value_changed").setToNode("hanim_l_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_l_pinky3RotInterp").setFromField("value_changed").setToNode("hanim_l_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_sternoclavicularRotInterp").setFromField("value_changed").setToNode("hanim_r_sternoclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_acromioclavicularRotInterp").setFromField("value_changed").setToNode("hanim_r_acromioclavicular").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_shoulderRotInterp").setFromField("value_changed").setToNode("hanim_r_shoulder").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_elbowRotInterp").setFromField("value_changed").setToNode("hanim_r_elbow").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_wristRotInterp").setFromField("value_changed").setToNode("hanim_r_wrist").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_thumb1RotInterp").setFromField("value_changed").setToNode("hanim_r_thumb1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_thumb2RotInterp").setFromField("value_changed").setToNode("hanim_r_thumb2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_thumb3RotInterp").setFromField("value_changed").setToNode("hanim_r_thumb3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index0RotInterp").setFromField("value_changed").setToNode("hanim_r_index0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index1RotInterp").setFromField("value_changed").setToNode("hanim_r_index1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index2RotInterp").setFromField("value_changed").setToNode("hanim_r_index2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_index3RotInterp").setFromField("value_changed").setToNode("hanim_r_index3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle0RotInterp").setFromField("value_changed").setToNode("hanim_r_middle0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle1RotInterp").setFromField("value_changed").setToNode("hanim_r_middle1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle2RotInterp").setFromField("value_changed").setToNode("hanim_r_middle2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_middle3RotInterp").setFromField("value_changed").setToNode("hanim_r_middle3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring0RotInterp").setFromField("value_changed").setToNode("hanim_r_ring0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring1RotInterp").setFromField("value_changed").setToNode("hanim_r_ring1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring2RotInterp").setFromField("value_changed").setToNode("hanim_r_ring2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_ring3RotInterp").setFromField("value_changed").setToNode("hanim_r_ring3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky0RotInterp").setFromField("value_changed").setToNode("hanim_r_pinky0").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky1RotInterp").setFromField("value_changed").setToNode("hanim_r_pinky1").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky2RotInterp").setFromField("value_changed").setToNode("hanim_r_pinky2").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stop_r_pinky3RotInterp").setFromField("value_changed").setToNode("hanim_r_pinky3").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("HudProx").setFromField("position_changed").setToNode("HudXform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("HudProx").setFromField("orientation_changed").setToNode("HudXform").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stand_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Pitch_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Yaw_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Walk_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Roll_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Run_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Jump_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Kick_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StandTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("PitchTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("YawTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RollTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("WalkTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("RunTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("JumpTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("KickTimer").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("Stop_Touch").setFromField("touchTime").setToNode("StopTimer").setToField("set_startTime")))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
protected class MFInt322 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.01f,0f,-0.01f,0f,0f,0f,0f,0.01f,0.01f,0f,0f,0f,0f,-0.01f,0f,-0.01f,0f});
  }
}
protected class MFInt324 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f5 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.2f,0f,0f});
  }
}
protected class MFInt326 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0.2f,0f,0f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f11 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.824f,0.0277f,0f,0.9149f,0.0016f,0.0028f,1.0568f,-0.0776f});
  }
}
protected class MFInt3212 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93});
  }
}
protected class MFFloat13 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,0.35f,0.35f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,0.0961f,0.9124f,-0.0001f,-0.095f,0.9171f,0.0029f});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0.9149f,0.0016f,-0.1525f,1.0628f,0.0035f,-0.1689f,0.8419f,0.0352f,0.1612f,1.0537f,0.0008f,0.1677f,0.8336f,0.0303f,-0.0887f,1.0021f,0.1112f,0.0925f,0.9983f,0.1052f,-0.0716f,1.019f,-0.1138f,0.0774f,1.019f,-0.1151f,0.0034f,0.8266f,0.0257f});
  }
}
protected class MFInt3220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {89,90,94,95,96,97});
  }
}
protected class MFFloat21 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f25 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.104f,0.4867f,0.0308f});
  }
}
protected class MFInt3226 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f27 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0961f,0.9124f,-0.0001f,0.0993f,0.4881f,-0.0309f,0.1598f,0.4967f,0.0297f,0.0398f,0.4946f,0.0303f});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {334,335,336,337,338,339,340,341});
  }
}
protected class MFFloat29 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f33 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.104f,0.4867f,0.0308f,0.1101f,0.0656f,-0.0736f});
  }
}
protected class MFInt3234 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {342,343,344,345});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt3238 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f39 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1086f,0.0001f,-0.0368f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1101f,0.0656f,-0.0736f,0.1308f,0.0597f,-0.1032f,0.089f,0.0716f,-0.0881f,0.089f,0.0575f,-0.0943f,0.0974f,0.0259f,-0.1171f});
  }
}
protected class MFInt3242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {346,347,348,71});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f47 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,-0.0368f,0.1086f,0.0001f,0.0368f});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {349,350,351,352});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,0.0368f,0.1086f,0f,0.0762f});
  }
}
protected class MFInt3254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f55 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0.0001f,-0.0368f,0.0816f,0.0232f,0.0106f});
  }
}
protected class MFInt3256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {353,354,355,356,357,358,359,360,361});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f61 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1354f,0.0016f,0.1476f});
  }
}
protected class MFInt3262 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f63 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1086f,0f,0.0762f,0.1354f,0.0016f,0.1476f,0.1825f,0.007f,0.0928f,0.1195f,0.0079f,0.1433f});
  }
}
protected class MFInt3264 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {91,92,98,99,100,101,362,363});
  }
}
protected class MFFloat65 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.65f,1f,0.8f,1f,1f,1f,0.4f,0.8f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f69 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.095f,0.9171f,0.0029f,-0.0867f,0.4913f,0.0318f});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.095f,0.9171f,0.0029f,-0.0825f,0.4932f,-0.0326f,-0.1421f,0.4992f,0.031f,-0.0221f,0.5014f,0.0289f});
  }
}
protected class MFInt3272 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {362,363,364,365,366,367,368,369,98});
  }
}
protected class MFFloat73 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.6f,0.2f,1f,1f,1f,1f,1f,1f,0.2f});
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
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0867f,0.4913f,0.0318f,-0.0801f,0.0712f,-0.0766f});
  }
}
protected class MFInt3278 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {370,371,372,373});
  }
}
protected class MFFloat79 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f83 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,-0.0801f,0f,-0.0368f});
  }
}
protected class MFInt3284 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1});
  }
}
protected class MFVec3f85 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0712f,-0.0766f,-0.1006f,0.0658f,-0.1075f,-0.0591f,0.076f,-0.0928f,-0.0603f,0.061f,-0.1002f,-0.0692f,0.0297f,-0.1221f});
  }
}
protected class MFInt3286 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {374,375,376});
  }
}
protected class MFFloat87 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
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
protected class MFInt3290 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f91 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0f,-0.0368f,-0.0801f,0f,0.0368f});
  }
}
protected class MFInt3292 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {377,378,379,380});
  }
}
protected class MFFloat93 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat94 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat95 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt3296 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f97 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0f,-0.0368f,-0.0801f,0.0039f,0.0732f});
  }
}
protected class MFInt3298 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f99 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0f,0.0368f,-0.0521f,0.026f,0.0127f});
  }
}
protected class MFInt32100 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {381,382,383,384,385,386,387,388,389});
  }
}
protected class MFFloat101 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat103 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32104 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f105 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0039f,0.0732f,-0.1043f,-0.0227f,0.145f});
  }
}
protected class MFInt32106 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f107 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0801f,0.0039f,0.0732f,-0.1043f,-0.0227f,0.145f,-0.1523f,0.0166f,0.0895f,-0.0883f,0.0134f,0.1383f});
  }
}
protected class MFInt32108 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {28,76});
  }
}
protected class MFFloat109 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
protected class MFInt32112 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f113 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.0035f,1.0925f,-0.0787f});
  }
}
protected class MFInt32114 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f115 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0028f,1.0568f,-0.0776f,0.005f,1.0915f,-0.1091f,0.0069f,1.0966f,0.1017f});
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
protected class MFInt32118 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f119 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0035f,1.0925f,-0.0787f,0.0041f,1.1276f,-0.0796f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f123 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0041f,1.1276f,-0.0796f,0.0045f,1.1546f,-0.08f});
  }
}
protected class MFInt32124 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {16,18,25,83,84,85,86,87,88});
  }
}
protected class MFFloat125 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,0.7f,1f,0.8f});
  }
}
protected class MFFloat126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat127 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32128 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f129 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,0.0048f,1.1912f,-0.0805f});
  }
}
protected class MFInt32130 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f131 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0045f,1.1546f,-0.08f,-0.0711f,1.1941f,0.1016f,0.0871f,1.1925f,0.0992f,0.0049f,1.1908f,-0.1113f});
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
protected class MFInt32134 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f135 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0048f,1.1912f,-0.0805f,0.0051f,1.2278f,-0.0808f});
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
protected class MFInt32138 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f139 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0051f,1.2278f,-0.0808f,0.0053f,1.2679f,-0.081f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f143 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0053f,1.2679f,-0.081f,0.0056f,1.2848f,-0.0822f});
  }
}
protected class MFInt32144 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {15});
  }
}
protected class MFFloat145 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat146 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat147 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32148 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f149 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0057f,1.3126f,-0.0838f});
  }
}
protected class MFInt32150 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f151 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0056f,1.2848f,-0.0822f,0.0085f,1.2995f,0.1147f});
  }
}
protected class MFInt32152 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,14});
  }
}
protected class MFFloat153 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat154 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat155 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32156 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f157 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,0.0057f,1.3382f,-0.0845f});
  }
}
protected class MFInt32158 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f159 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3126f,-0.0838f,-0.0736f,1.3385f,0.1217f,0.0918f,1.3382f,0.1192f,0.0057f,1.3382f,-0.0845f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f163 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0057f,1.3382f,-0.0845f,0.0058f,1.3625f,-0.0833f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f167 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0058f,1.3625f,-0.0833f,0.0059f,1.3866f,-0.08f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f171 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0059f,1.3866f,-0.08f,0.006f,1.4102f,-0.0745f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f175 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.006f,1.4102f,-0.0745f,0.0061f,1.432f,-0.0675f});
  }
}
protected class MFInt32176 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {81});
  }
}
protected class MFFloat177 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat179 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32180 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f181 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0061f,1.432f,-0.0675f,0.0062f,1.4583f,-0.057f});
  }
}
protected class MFFloat182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat183 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32184 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f185 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0062f,1.4583f,-0.057f,0.0063f,1.4761f,-0.0484f});
  }
}
protected class MFFloat186 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat187 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32188 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f189 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0063f,1.4761f,-0.0484f,0.0065f,1.4951f,-0.0387f});
  }
}
protected class MFInt32190 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {11,24});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f195 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0066f,1.5132f,-0.0301f,0.082f,1.4488f,-0.0353f,-0.0694f,1.46f,-0.033f});
  }
}
protected class MFInt32196 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f197 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0065f,1.4951f,-0.0387f,0.0084f,1.4714f,0.0551f,0.0064f,1.52f,-0.0815f});
  }
}
protected class MFInt32198 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {74,75});
  }
}
protected class MFFloat199 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
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
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f203 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,0.0066f,1.5357f,-0.0143f});
  }
}
protected class MFInt32204 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f205 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5132f,-0.0301f,-0.0419f,1.5149f,-0.022f,0.0646f,1.5141f,-0.038f});
  }
}
protected class MFFloat206 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat207 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFString208 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
protected class MFInt32209 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f210 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5357f,-0.0143f,0.0066f,1.552f,-0.0082f});
  }
}
protected class MFFloat211 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat212 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f214 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.552f,-0.0082f,0.0066f,1.5662f,-0.0084f});
  }
}
protected class MFFloat215 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat216 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32217 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f218 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.58f,-0.0103f});
  }
}
protected class MFFloat219 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat220 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32221 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f222 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5662f,-0.0084f,0.0066f,1.5928f,-0.0103f});
  }
}
protected class MFFloat223 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat224 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32225 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f226 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.5928f,-0.0103f,0.0066f,1.6144f,-0.0034f});
  }
}
protected class MFFloat227 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat228 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f230 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0066f,1.6144f,-0.0034f,0.0044f,1.6209f,0.0236f});
  }
}
protected class MFInt32231 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9});
  }
}
protected class MFFloat232 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat233 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat234 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32235 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f236 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.0336f,1.6332f,0.0502f,-0.0236f,1.6331f,0.051f});
  }
}
protected class MFInt32237 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1,0,10,-1});
  }
}
protected class MFVec3f238 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0044f,1.6209f,0.0236f,0.005f,1.7504f,0.0055f,0.0058f,1.6316f,0.0852f,-0.0237f,1.6171f,0.0752f,0.0341f,1.6171f,0.0752f,0.0061f,1.541f,0.0805f,-0.0646f,1.6347f,0.0302f,-0.052f,1.5529f,0.0347f,0.0739f,1.6348f,0.0282f,0.0631f,1.553f,0.033f,0.0039f,1.5972f,-0.0796f});
  }
}
protected class MFFloat239 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat240 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32241 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f242 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0336f,1.6332f,0.0502f,0.0336f,1.6332f,0.0702f});
  }
}
protected class MFFloat243 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat244 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32245 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f246 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0236f,1.6331f,0.051f,-0.0236f,1.6331f,0.071f});
  }
}
protected class MFInt32247 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12});
  }
}
protected class MFFloat248 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat249 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat250 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32251 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f252 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0962f,1.4269f,-0.0424f});
  }
}
protected class MFInt32253 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1});
  }
}
protected class MFVec3f254 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.082f,1.4488f,-0.0353f,0.0271f,1.4943f,0.0394f,0.2032f,1.476f,-0.049f,0.1777f,1.4065f,-0.0075f,0.1706f,1.4072f,-0.0875f});
  }
}
protected class MFInt32255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {79});
  }
}
protected class MFFloat256 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat257 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat258 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32259 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f260 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0962f,1.4269f,-0.0424f,0.2029f,1.4376f,-0.0387f});
  }
}
protected class MFInt32261 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {41,42,44,80,102,103,104,105});
  }
}
protected class MFFloat262 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat263 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat264 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32265 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f266 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.2014f,1.1357f,-0.0682f});
  }
}
protected class MFInt32267 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f268 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2029f,1.4376f,-0.0387f,0.228f,1.1482f,-0.11f});
  }
}
protected class MFInt32269 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {45,46,47,109,110,111,112,113,115,116,117,118});
  }
}
protected class MFFloat270 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat271 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat272 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32273 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f274 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1984f,0.8663f,-0.0583f});
  }
}
protected class MFInt32275 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1});
  }
}
protected class MFVec3f276 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2014f,1.1357f,-0.0682f,0.1901f,0.8645f,-0.0415f,0.1962f,1.1375f,-0.1123f,0.1735f,1.1272f,-0.1113f,0.2182f,1.1212f,-0.1167f});
  }
}
protected class MFInt32277 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {119,120,121,122,123,124,125,126});
  }
}
protected class MFFloat278 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat279 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat280 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32281 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
protected class MFVec3f282 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.1924f,0.8472f,-0.0534f,0.1983f,0.8024f,-0.028f,0.1987f,0.8029f,-0.053f,0.1956f,0.8019f,-0.0794f,0.1925f,0.8066f,-0.1036f});
  }
}
protected class MFInt32283 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f284 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1984f,0.8663f,-0.0583f,0.2009f,0.8139f,-0.0237f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f});
  }
}
protected class MFInt32285 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {127,128});
  }
}
protected class MFFloat286 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat287 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat288 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32289 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f290 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1924f,0.8472f,-0.0534f,0.1951f,0.8226f,0.0246f});
  }
}
protected class MFInt32291 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,141,142,143});
  }
}
protected class MFFloat292 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFFloat293 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat294 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32295 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f296 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1951f,0.8226f,0.0246f,0.1955f,0.8159f,0.0464f});
  }
}
protected class MFInt32297 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {144,145,146,147,148,149,150,151,152});
  }
}
protected class MFFloat298 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat299 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat300 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32301 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f302 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f,0.8159f,0.0464f,0.1982f,0.8061f,0.0759f});
  }
}
protected class MFInt32303 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f304 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1955f,0.8159f,0.0464f,0.1982f,0.8061f,0.0759f});
  }
}
protected class MFInt32305 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {129,130});
  }
}
protected class MFFloat306 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat307 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat308 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32309 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f310 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.8024f,-0.028f,0.1983f,0.7815f,-0.028f});
  }
}
protected class MFInt32311 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {138,139,140,153,154,155,163});
  }
}
protected class MFFloat312 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFFloat313 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat314 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32315 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f316 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7815f,-0.028f,0.2017f,0.7363f,-0.0248f});
  }
}
protected class MFInt32317 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {166,167,168,169});
  }
}
protected class MFFloat318 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat319 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat320 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f322 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2017f,0.7363f,-0.0248f,0.2028f,0.7139f,-0.0236f});
  }
}
protected class MFInt32323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {170,171,172,173,174,175,176,177,178});
  }
}
protected class MFFloat324 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat325 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat326 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f328 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2089f,0.6858f,-0.0245f});
  }
}
protected class MFInt32329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f330 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2028f,0.7139f,-0.0236f,0.2089f,0.6858f,-0.0245f,0.2056f,0.6743f,-0.0482f});
  }
}
protected class MFInt32331 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {131,132});
  }
}
protected class MFFloat332 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat333 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat334 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32335 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f336 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.8029f,-0.053f,0.1987f,0.7818f,-0.053f});
  }
}
protected class MFInt32337 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,157,163,164});
  }
}
protected class MFFloat338 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat339 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat340 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32341 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f342 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1987f,0.7818f,-0.053f,0.2013f,0.7273f,-0.0503f});
  }
}
protected class MFInt32343 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {179,180,181,182});
  }
}
protected class MFFloat344 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat345 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat346 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32347 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f348 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2013f,0.7273f,-0.0503f,0.2026f,0.7011f,-0.0494f});
  }
}
protected class MFInt32349 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {183,184,185,186,187,188,189,190,191});
  }
}
protected class MFFloat350 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat351 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat352 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32353 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f354 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f,0.7011f,-0.0494f,0.208f,0.6731f,-0.0491f});
  }
}
protected class MFInt32355 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f356 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2026f,0.7011f,-0.0494f,0.208f,0.6731f,-0.0491f});
  }
}
protected class MFInt32357 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {133,134});
  }
}
protected class MFFloat358 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat359 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat360 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32361 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f362 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.8019f,-0.0794f,0.1956f,0.7815f,-0.0794f});
  }
}
protected class MFInt32363 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {158,159,164,165});
  }
}
protected class MFFloat364 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat365 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat366 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32367 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f368 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1956f,0.7815f,-0.0794f,0.1973f,0.7287f,-0.0777f});
  }
}
protected class MFInt32369 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {192,193,194,195});
  }
}
protected class MFFloat370 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat371 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat372 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32373 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f374 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1973f,0.7287f,-0.0777f,0.1983f,0.7045f,-0.0767f});
  }
}
protected class MFInt32375 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {196,197,198,199,200,201,202,203,204});
  }
}
protected class MFFloat376 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat377 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat378 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32379 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f380 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7045f,-0.0767f,0.2035f,0.675f,-0.0756f});
  }
}
protected class MFInt32381 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f382 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1983f,0.7045f,-0.0767f,0.2035f,0.675f,-0.0756f});
  }
}
protected class MFInt32383 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {135,136,137,165});
  }
}
protected class MFFloat384 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat385 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat386 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32387 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f388 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.8066f,-0.1036f,0.1925f,0.7866f,-0.1036f});
  }
}
protected class MFInt32389 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {160,161,162});
  }
}
protected class MFFloat390 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat391 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat392 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32393 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f394 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1925f,0.7866f,-0.1036f,0.1938f,0.7452f,-0.1024f});
  }
}
protected class MFInt32395 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {205,206,207,208});
  }
}
protected class MFFloat396 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat397 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat398 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32399 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f400 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1938f,0.7452f,-0.1024f,0.1948f,0.7277f,-0.1017f});
  }
}
protected class MFInt32401 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {209,210,211,212,213,214,215,216,217});
  }
}
protected class MFFloat402 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat403 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat404 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32405 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f406 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f,0.7277f,-0.1017f,0.2014f,0.7009f,-0.1012f});
  }
}
protected class MFInt32407 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f408 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1948f,0.7277f,-0.1017f,0.2014f,0.7009f,-0.1012f});
  }
}
protected class MFInt32409 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10});
  }
}
protected class MFFloat410 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f});
  }
}
protected class MFFloat411 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat412 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32413 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f414 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f,1.46f,-0.033f,-0.0836f,1.4281f,-0.0401f});
  }
}
protected class MFInt32415 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1});
  }
}
protected class MFVec3f416 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0694f,1.46f,-0.033f,-0.0115f,1.4943f,0.04f,-0.1905f,1.4791f,-0.0431f,-0.1626f,1.4072f,-0.0031f,-0.1603f,1.4098f,-0.0826f});
  }
}
protected class MFInt32417 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {77,29});
  }
}
protected class MFFloat418 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,0.9f});
  }
}
protected class MFFloat419 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat420 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32421 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f422 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0836f,1.4281f,-0.0401f,-0.1907f,1.4407f,-0.0325f});
  }
}
protected class MFInt32423 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {29,30,32,78,218,219,220,221,86,88});
  }
}
protected class MFFloat424 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.1f,1f,1f,1f,1f,1f,1f,1f,0.3f,0.2f});
  }
}
protected class MFFloat425 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat426 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32427 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f428 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f,1.4407f,-0.0325f,-0.1949f,1.1388f,-0.062f});
  }
}
protected class MFInt32429 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f430 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1907f,1.4407f,-0.0325f,-0.2224f,1.1517f,-0.1033f});
  }
}
protected class MFInt32431 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {33,34,35,225,226,227,228,229,231,232,233,234});
  }
}
protected class MFFloat432 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat433 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat434 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32435 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f436 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f,1.1388f,-0.062f,-0.1959f,0.8694f,-0.0521f});
  }
}
protected class MFInt32437 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1});
  }
}
protected class MFVec3f438 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1949f,1.1388f,-0.062f,-0.1884f,0.8676f,-0.036f,-0.1907f,1.1405f,-0.1065f,-0.168f,1.1298f,-0.1062f,-0.213f,1.1305f,-0.1091f});
  }
}
protected class MFInt32439 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {235,236,237,238,239,240,241,242});
  }
}
protected class MFFloat440 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat441 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat442 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32443 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
  }
}
protected class MFVec3f444 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,-0.1899f,0.8502f,-0.0473f,-0.1961f,0.8055f,-0.0218f,-0.1972f,0.806f,-0.0468f,-0.1951f,0.8049f,-0.0732f,-0.1926f,0.8096f,-0.0975f});
  }
}
protected class MFInt32445 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1,0,3,-1});
  }
}
protected class MFVec3f446 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1959f,0.8694f,-0.0521f,-0.1977f,0.8169f,-0.0177f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f});
  }
}
protected class MFInt32447 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {243,244});
  }
}
protected class MFFloat448 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat449 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat450 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32451 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f452 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1899f,0.8502f,-0.0473f,-0.1874f,0.8256f,0.0306f});
  }
}
protected class MFInt32453 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,257,258,259});
  }
}
protected class MFFloat454 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f});
  }
}
protected class MFFloat455 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat456 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32457 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f458 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1874f,0.8256f,0.0306f,-0.1864f,0.819f,0.0506f});
  }
}
protected class MFInt32459 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {260,261,262,263,264,265,266,267,268});
  }
}
protected class MFFloat460 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat461 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat462 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32463 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f464 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1864f,0.819f,0.0506f,-0.1869f,0.809f,0.082f});
  }
}
protected class MFInt32465 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f466 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1864f,0.819f,0.0506f,-0.1869f,0.809f,0.082f});
  }
}
protected class MFInt32467 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {245,246});
  }
}
protected class MFFloat468 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat469 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat470 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32471 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f472 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.8055f,-0.0218f,-0.1961f,0.7846f,-0.0218f});
  }
}
protected class MFInt32473 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {254,255,256,269,270,271,279});
  }
}
protected class MFFloat474 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
protected class MFFloat475 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat476 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32477 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f478 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1961f,0.7846f,-0.0218f,-0.1945f,0.7169f,-0.0173f});
  }
}
protected class MFInt32479 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {282,283,284,285});
  }
}
protected class MFFloat480 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat481 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat482 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32483 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f484 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1954f,0.7393f,-0.0185f,-0.1945f,0.7169f,-0.0173f});
  }
}
protected class MFInt32485 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {286,287,288,289,290,291,292,293,294});
  }
}
protected class MFFloat486 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat487 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat488 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32489 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f490 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1945f,0.7169f,-0.0173f,-0.198f,0.6883f,-0.018f});
  }
}
protected class MFInt32491 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1,0,2,-1});
  }
}
protected class MFVec3f492 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1945f,0.7169f,-0.0173f,-0.198f,0.6883f,-0.018f,-0.1941f,0.6772f,-0.0423f});
  }
}
protected class MFInt32493 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {247,248});
  }
}
protected class MFFloat494 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat495 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat496 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32497 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f498 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.806f,-0.0468f,-0.1972f,0.7849f,-0.0468f});
  }
}
protected class MFInt32499 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {272,273,279,280});
  }
}
protected class MFFloat500 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat501 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat502 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32503 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f504 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1972f,0.7849f,-0.0468f,-0.195f,0.7304f,-0.0441f});
  }
}
protected class MFInt32505 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {295,296,297,298});
  }
}
protected class MFFloat506 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat507 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat508 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32509 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f510 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.195f,0.7304f,-0.0441f,-0.1939f,0.7042f,-0.0432f});
  }
}
protected class MFInt32511 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {299,300,301,302,303,304,305,306,307});
  }
}
protected class MFFloat512 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat513 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat514 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32515 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f516 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1939f,0.7042f,-0.0432f,-0.1969f,0.6758f,-0.0427f});
  }
}
protected class MFInt32517 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f518 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1939f,0.7042f,-0.0432f,-0.1969f,0.6758f,-0.0427f});
  }
}
protected class MFInt32519 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {249,250});
  }
}
protected class MFFloat520 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f});
  }
}
protected class MFFloat521 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat522 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32523 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f524 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.8049f,-0.0732f,-0.1951f,0.7845f,-0.0732f});
  }
}
protected class MFInt32525 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {274,275,280,281});
  }
}
protected class MFFloat526 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,0.5f,0.5f});
  }
}
protected class MFFloat527 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat528 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32529 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f530 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1951f,0.7845f,-0.0732f,-0.192f,0.7318f,-0.0716f});
  }
}
protected class MFInt32531 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {308,309,310,311});
  }
}
protected class MFFloat532 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat533 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat534 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32535 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f536 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.192f,0.7318f,-0.0716f,-0.1908f,0.7077f,-0.07063f});
  }
}
protected class MFInt32537 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {312,313,314,315,316,317,318,319,320});
  }
}
protected class MFFloat538 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat539 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat540 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32541 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f542 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1908f,0.7077f,-0.0706f,-0.1934f,0.6778f,-0.0693f});
  }
}
protected class MFInt32543 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f544 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1908f,0.7077f,-0.0706f,-0.1934f,0.6778f,-0.0693f});
  }
}
protected class MFInt32545 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {251,252,253,281});
  }
}
protected class MFFloat546 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,0.5f});
  }
}
protected class MFFloat547 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat548 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32549 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f550 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.8096f,-0.0975f,-0.1926f,0.7896f,-0.0975f});
  }
}
protected class MFInt32551 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {276,277,278});
  }
}
protected class MFFloat552 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f});
  }
}
protected class MFFloat553 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat554 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32555 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f556 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1926f,0.7896f,-0.0975f,-0.1902f,0.7483f,-0.0963f});
  }
}
protected class MFInt32557 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {321,322,323,324});
  }
}
protected class MFFloat558 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f});
  }
}
protected class MFFloat559 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat560 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32561 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f562 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1902f,0.7483f,-0.0963f,-0.1908f,0.754f,-0.096f});
  }
}
protected class MFInt32563 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {325,326,327,328,329,330,331,332,333});
  }
}
protected class MFFloat564 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f,1f,1f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat565 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFFloat566 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0f,0f});
  }
}
protected class MFInt32567 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f568 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1908f,0.754f,-0.096f,-0.1938f,0.7035f,-0.0949f});
  }
}
protected class MFInt32569 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
protected class MFVec3f570 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1908f,0.754f,-0.096f,-0.1938f,0.7035f,-0.0949f});
  }
}
protected class MFVec3f571 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.77f,0f,0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.789f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.786f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.11f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0f,0.05f,0.4867f,0f,0.165f,0.01f,0.12f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.11f,0.011f,0.19f,0.0034f,0.8266f,0.0257f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0f,1.41f,-0.145f,0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.9f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.9f,0.075f,0f,0.78f,0f,0.171f,0.65f,0f,0.02f,0.65f,0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0f,-0.02f,0.65f,0f,-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1f,-0.01f,0.225f,1f,-0.07f,0.185f,1f,-0.01f,0.185f,1f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0f,0.21f,0.85f,0f,0.1854f,0.85f,0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.19f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.19f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0f,0.193f,0.815f,0.005f,0.198f,0.8f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f,0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.255f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1f,-0.01f,-0.225f,1f,-0.07f,-0.185f,1f,-0.01f,-0.185f,1f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0f,-0.21f,0.85f,0f,-0.1854f,0.85f,0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.19f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.19f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0f,-0.193f,0.815f,0.005f,-0.198f,0.8f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f});
  }
}
protected class MFVec3f572 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f,-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0f,0.05f,0.466f,0f,0.17f,0.3f,0f,0.06f,0.3f,0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0f,0.07f,0.165f,0f,0.07f,0.095f,0f,0.07f,0.115f,0.04f,0.13f,0.125f,0f,0.12f,0.165f,0f,0.12f,0.087f,0f,0.122f,0.09f,0.012f,0.188f,0.11f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.01f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0f,-0.05f,0.466f,0f,-0.17f,0.3f,0f,-0.06f,0.3f,0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0f,0.07f,-0.165f,0f,0.07f,-0.095f,0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0f,0.12f,-0.165f,0f,0.12f,-0.087f,0f,0.122f,-0.09f,0.012f,0.188f,-0.11f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.01f,0.168f});
  }
}
protected class MFString573 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"cbodytexture28.png"});
  }
}
protected class MFInt32574 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1});
  }
}
protected class MFInt32575 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1});
  }
}
protected class MFInt32576 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1});
  }
}
protected class MFInt32577 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
  }
}
protected class MFFloat578 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation579 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.015f,1f,0f,0f,0.17f,-1f,0f,0f,0.025f,1f,0f,0f,0.01f,1f,0f,0f,0f});
  }
}
protected class MFFloat580 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation581 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat582 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation583 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat584 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation585 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat586 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation587 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat588 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation589 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat590 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation591 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat592 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation593 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,0.25f,0f,0f,1f,0f});
  }
}
protected class MFFloat594 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation595 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat596 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation597 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat598 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation599 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat600 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation601 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat602 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation603 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat604 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation605 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat606 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation607 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat608 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.7f,1f});
  }
}
protected class MFRotation609 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f});
  }
}
protected class MFFloat610 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.7f,1f});
  }
}
protected class MFRotation611 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5f,1f,0f,0f,0.45f,0f,0f,1f,0f});
  }
}
protected class MFFloat612 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation613 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat614 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation615 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat616 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation617 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat618 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f619 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat620 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation621 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat622 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation623 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat624 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation625 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat626 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation627 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat628 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation629 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat630 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation631 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat632 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation633 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0f,0f,-1f,0f,0f,0f,1f,0f,0f});
  }
}
protected class MFFloat634 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation635 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat636 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation637 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,0.1f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat638 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation639 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.1f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat640 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation641 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.4f,0f,0f,1f,0.32f,0f,0f,1f,0.25f,0f,0f,1f,0.2f,0f,0f,1f,0f});
  }
}
protected class MFFloat642 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.8f,1f});
  }
}
protected class MFRotation643 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.3f,0f,0f,1f,0.35f,0f,0f,1f,0.2f,0f,0f,1f,0f});
  }
}
protected class MFFloat644 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation645 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat646 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation647 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat648 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation649 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat650 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation651 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat652 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation653 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat654 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation655 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat656 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation657 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat658 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation659 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat660 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation661 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat662 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation663 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat664 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation665 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat666 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation667 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat668 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation669 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.5f,0f,0f,1f,0f,1f,0f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat670 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation671 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat672 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.55f,1f});
  }
}
protected class MFRotation673 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.55f,-1f,0f,0f,1.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat674 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation675 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat676 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation677 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat678 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation679 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat680 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f});
  }
}
protected class MFVec3f681 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f,0f,-0.15f,0f,0f,-0.7f,0f,0f,-0.15f,0f,0f,0f,0f});
  }
}
protected class MFFloat682 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation683 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat684 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation685 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat686 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation687 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat688 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation689 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat690 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation691 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat692 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation693 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat694 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation695 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat696 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation697 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat698 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation699 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.3f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat700 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation701 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat702 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation703 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat704 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation705 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat706 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation707 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat708 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation709 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat710 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation711 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat712 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation713 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat714 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation715 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat716 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation717 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat718 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation719 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat720 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation721 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat722 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation723 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat724 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation725 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat726 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation727 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat728 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation729 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat730 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation731 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,-1f,0f,1.5f,0f,0f,1f,0f,0f,1f,0f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat732 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation733 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat734 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation735 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat736 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f737 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat738 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation739 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat740 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation741 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat742 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation743 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat744 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation745 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat746 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation747 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,0f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat748 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation749 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat750 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation751 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat752 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation753 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat754 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation755 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat756 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation757 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat758 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation759 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat760 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation761 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat762 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation763 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,-1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat764 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation765 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat766 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation767 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat768 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation769 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat770 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation771 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat772 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation773 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat774 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation775 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,-1f,3f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat776 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation777 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,0f,0f,0f,-1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat778 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation779 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat780 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation781 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.5f,0f,0f,1f,3f,0f,0f,1f,1.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat782 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation783 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat784 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation785 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.25f,0f,0f,1f,0f,0f,0f,-1f,1.25f,0f,0f,1f,0f});
  }
}
protected class MFFloat786 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation787 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat788 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation789 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat790 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation791 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat792 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.25f,0.375f,0.5f,0.625f,0.75f,0.875f,1f});
  }
}
protected class MFVec3f793 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f,0f,-0.25f,0f,0f,-0.8f,0f,0f,-0.25f,0f,0f,0f,0f});
  }
}
protected class MFFloat794 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation795 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat796 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation797 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat798 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation799 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat800 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation801 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat802 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation803 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat804 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation805 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat806 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation807 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat808 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation809 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat810 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation811 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat812 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation813 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat814 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.375f,0.4583f,0.5f,0.6667f,0.75f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation815 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.3533f,-1f,0f,0f,0.1072f,1f,0f,0f,0.2612f,1f,0f,0f,0.1268f,-1f,0f,0f,0.01793f,-1f,0f,0f,0.05824f,-1f,0f,0f,0.2398f,-1f,0f,0f,0.35f,-1f,0f,0f,0.3322f,0f,0f,1f,0f});
  }
}
protected class MFFloat816 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation817 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.8573f,1f,0f,0f,0.8926f,1f,0f,0f,0.5351f,1f,0f,0f,0.1756f,1f,0f,0f,0.1194f,1f,0f,0f,0.3153f,1f,0f,0f,0.09354f,1f,0f,0f,0.08558f,1f,0f,0f,0.2475f,1f,0f,0f,0.8573f});
  }
}
protected class MFFloat818 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.2917f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation819 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f,0.03511f,0.8116f,0.1481f,-0.995f,0.02296f,0.09674f,0.4683f,-1f,0.00192f,0.007964f,0.4732f,-0.998f,-0.0158f,-0.06102f,0.5079f,-0.9911f,-0.03541f,-0.1286f,0.5419f,-0.9131f,-0.06243f,-0.403f,0.3361f,-0.4306f,-0.07962f,-0.899f,0.07038f,1f,0f,0f,0.2571f,0.9891f,-0.02805f,0.1444f,0.3879f,-0.5831f,0.03511f,0.8116f,0.1481f});
  }
}
protected class MFFloat820 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.2083f,0.375f,0.6667f,0.9167f,1f});
  }
}
protected class MFRotation821 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.06714f,-1f,0f,0f,0.2152f,-1f,0f,0f,0.3184f,-1f,0f,0f,0.4717f,-1f,0f,0f,0.2912f,1f,0f,0f,0.1222f,-1f,0f,0f,0.06714f});
  }
}
protected class MFFloat822 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2083f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation823 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.3226f,1f,0f,0f,0.1556f,1f,0f,0f,0.08678f,1f,0f,0f,0.8751f,1f,0f,0f,1.131f,1f,0f,0f,0.09961f,1f,0f,0f,0.3942f,1f,0f,0f,0.3226f});
  }
}
protected class MFFloat824 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.375f,0.5f,0.6667f,0.7917f,0.9167f,1f});
  }
}
protected class MFRotation825 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.873f,0.06094f,0.484f,0.2865f,0.9963f,-0.01057f,0.08481f,0.2488f,0.9965f,0.01591f,-0.08222f,0.3836f,-0.7018f,-0.03223f,-0.7117f,0.1289f,-1f,0f,0f,0.5518f,-0.9964f,0.02231f,0.0817f,0.5351f,-0.9809f,0.04912f,0.1881f,0.5204f,-0.873f,0.06094f,0.484f,0.2865f});
  }
}
protected class MFFloat826 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation827 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,-1f,0.1056f,0f,0f,1f,0.09018f,0f,0f,-1f,0.1056f});
  }
}
protected class MFFloat828 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation829 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8129f,0.4759f,-0.3357f,0.1346f,0.1533f,-0.9878f,0.02582f,0.3902f,-0.5701f,0.7604f,-0.311f,0.366f,-0.8129f,0.4759f,-0.3357f,0.1346f});
  }
}
protected class MFFloat830 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation831 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.411508f,-1f,0f,0f,0.0925011f,-1f,0f,0f,0.572568f,-1f,0f,0f,0.411508f});
  }
}
protected class MFFloat832 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation833 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.09346f,1f,0f,0f,0.3197f,-1f,0f,0f,0.1564f,-1f,0f,0f,0.09346f});
  }
}
protected class MFFloat834 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation835 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.461076f,-0.330195f,-0.927451f,0.175516f,0.538852f,0.0327774f,-0.999314f,-0.0172185f,0.492033f,0f,-1f,0f,0.461076f});
  }
}
protected class MFFloat836 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation837 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.0659878f,-1f,0f,0f,0.488383f,-1f,0f,0f,0.0177536f,-1f,0f,0f,0.0659878f});
  }
}
protected class MFFloat838 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.9167f,1f});
  }
}
protected class MFRotation839 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.1189f,-1f,0f,0f,0.1861f,1f,0f,0f,0.3357f,1f,0f,0f,0.1189f});
  }
}
protected class MFFloat840 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.375f,0.4167f,0.5f,0.5833f,0.6667f,0.75f,0.8333f,0.9167f,1f});
  }
}
protected class MFRotation841 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.08642f,0f,1f,0f,0.1825f,0f,1f,0f,0.1505f,0f,1f,0f,0.1053f,0f,1f,0f,0.04391f,0f,-1f,0f,0.03119f,0f,-1f,0f,0.07936f,0f,-1f,0f,0.1616f,0f,-1f,0f,0.155f,0f,-1f,0f,0.08642f});
  }
}
protected class MFFloat842 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation843 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat844 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2083f,0.375f,0.75f,0.8333f,1f});
  }
}
protected class MFRotation845 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0.0826f,-0.01972f,-0.5974f,0.8017f,0.08231f,0.009296f,-0.9648f,0.2627f,0.1734f,-0.01238f,0.9549f,-0.2968f,0.08732f,-0.008125f,0.9691f,-0.2463f,0.158f,0f,1f,0f,0.0826f});
  }
}
protected class MFFloat846 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation847 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat848 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.04167f,0.125f,0.1667f,0.2083f,0.25f,0.2917f,0.375f,0.4583f,0.5f,0.5417f,0.5833f,0.625f,0.7083f,0.75f,0.7917f,0.875f,0.9167f,1f});
  }
}
protected class MFVec3f849 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.00928f,0f,0f,-0.003858f,0f,0f,-0.008847f,0f,0f,-0.01486f,0f,0f,-0.02641f,0f,0f,-0.03934f,0f,0f,-0.0502f,0f,0f,-0.07469f,0f,0f,-0.02732f,0f,0f,-0.01608f,0f,0f,-0.01129f,0f,0f,-0.005819f,0f,0f,-0.002004f,0f,0f,-0.002579f,0f,0f,-0.0143f,0f,0f,-0.03799f,0f,0f,-0.05648f,0f,0f,-0.045f,0f,0f,-0.00928f,0f});
  }
}
protected class MFFloat850 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation851 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat852 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation853 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat854 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation855 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat856 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation857 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat858 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation859 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat860 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation861 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat862 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation863 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat864 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation865 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat866 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation867 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.5f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat868 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation869 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat870 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation871 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f,0.033f,0.04f,1.42f,-0.99f,0.1328f,0.067f,0.42f,0.99f,0.014f,0.009f,0.9f,-0.99f,0.0703f,0.05f,0.7f,-0.99f,0.033f,0.04f,1.42f});
  }
}
protected class MFFloat872 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation873 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f});
  }
}
protected class MFFloat874 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.22f,0.3f,0.4f,1f});
  }
}
protected class MFRotation875 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.0374f,-1f,0f,0f,0.1037f,-1f,0f,0f,0.4328f,1f,0f,0f,0.1929f,1f,0f,0f,0.03574f});
  }
}
protected class MFFloat876 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation877 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f,-0.014f,0.009f,0.9f,-0.99f,-0.0703f,-0.05f,0.7f,-0.99f,-0.033f,0.04f,1.42f,-0.99f,-0.1328f,-0.067f,0.42f,0.99f,-0.014f,0.009f,0.9f});
  }
}
protected class MFFloat878 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation879 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.705f,1f,0f,0f,2.179f,1f,0f,0f,1.01f,1f,0f,0f,0.426f,1f,0f,0f,0.705f});
  }
}
protected class MFFloat880 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.4f,0.71f,0.8f,0.82f,1f});
  }
}
protected class MFRotation881 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.2323f,-1f,0f,0f,0.07843f,-1f,0f,0f,0.32f,-1f,0f,0f,0.374f,-1f,0f,0f,0.3478f,1f,0f,0f,0.2323f});
  }
}
protected class MFFloat882 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation883 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.99f,-0.074f,0.25f,1.5f,0.99f,-0.092f,0.44f,0.3f,-0.99f,0.136f,0.25f,0.85f,0.99f,-0.081f,0.38f,0.4f,0.99f,-0.074f,0.25f,1.5f});
  }
}
protected class MFFloat884 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation885 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,1.85f,-0.99f,-0.19f,0.18f,1.35f,-1f,0f,0f,0.975f,-0.99f,-0.09f,-0.02f,1.55f,-1f,0f,0f,1.85f});
  }
}
protected class MFFloat886 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation887 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.25f,-1f,0.08f,0.14f,0.25f,1f,0.08f,0.14f,0f,0f,1f,0f,-0.25f,1f,0.08f,-0.14f,-0.25f,1f,0.08f,0.14f});
  }
}
protected class MFFloat888 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation889 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.99f,-0.136f,-0.25f,0.85f,0.99f,0.081f,-0.38f,0.4f,0.99f,0.074f,-0.25f,1.5f,0.99f,0.081f,-0.38f,0.4f,-0.99f,-0.136f,-0.25f,0.85f});
  }
}
protected class MFFloat890 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation891 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1f,0f,0f,0.975f,-0.99f,0.09f,0.02f,1.55f,-1f,0f,0f,1.85f,-0.99f,0.19f,-0.18f,1.35f,-1f,0f,0f,0.975f});
  }
}
protected class MFFloat892 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFRotation893 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.917742f,-0.237244f,-0.318536f,0.214273f,-0.917742f,-0.237244f,-0.318536f,0.214273f});
  }
}
protected class MFFloat894 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2182f,0.4909f,0.7455f,1f});
  }
}
protected class MFRotation895 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,-1f,0f,0.125f,0f,0f,1f,0f,0f,1f,0f,0.125f,0f,0f,1f,0f,0f,-1f,0f,0.125f});
  }
}
protected class MFFloat896 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation897 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.08f,1f,0f,0f,0.12f,1f,0f,0f,0.3f,1f,0f,0f,0.3f,1f,0f,0f,0.08f});
  }
}
protected class MFFloat898 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7091f,1f});
  }
}
protected class MFRotation899 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.7f,0f,0f,0.4f,-0.7f,-0.7f,0f,0.4f,0f,0f,0f,0.4f,-0.7f,0.7f,0f,0.4f,0.7f,0f,0f,0.4f});
  }
}
protected class MFFloat900 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2545f,0.4909f,0.7636f,1f});
  }
}
protected class MFRotation901 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.97f,0.65f,0.086f,0.5f,0.9f,0.003f,-0.02f,0.38f,0.95f,-0.68f,-0.086f,0.5f,0.9f,0.004f,-0.025f,0.4f,0.97f,0.65f,0.086f,0.5f});
  }
}
protected class MFFloat902 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFRotation903 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0.06f,1f,0f,0f,0.167f,1f,0f,0f,0.06f,1f,0f,0f,0.168f,1f,0f,0f,0.06f});
  }
}
protected class MFFloat904 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.22f,0.3f,0.31f,0.5f,0.69f,0.7f,0.78f,1f});
  }
}
protected class MFVec3f905 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f,0f,-0.037f,0f,0f,-0.049f,0f,0f,-0.037f,0f,0f,-0.01f,0f});
  }
}
protected class MFFloat906 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation907 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat908 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation909 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat910 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation911 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat912 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation913 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat914 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation915 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat916 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation917 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat918 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation919 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat920 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation921 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat922 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation923 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.25f,1f,0f,0f,0.7f,1f,0f,0f,0.27f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat924 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation925 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat926 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.15f,0.25f,0.28f,0.32f,0.35f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFRotation927 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.6735f,-1f,0f,0f,0.3527f,-1f,0f,0f,0.3038f,-1f,0f,0f,0.07964f,1f,0f,0f,1.3f,1f,0f,0f,0.6509f,1f,0f,0f,0.3001f,-1f,0f,0f,0.2087f,-1f,0f,0f,0.3756f,-1f,0f,0f,0.3279f,-1f,0f,0f,0.1193f,0f,0f,1f,0f});
  }
}
protected class MFFloat928 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.25f,0.3f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation929 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,2.5f,1f,0f,0f,1.7f,0f,0f,1f,0f,1f,0f,0f,0.9507f,1f,0f,0f,0.5845f,1f,0f,0f,0.9054f,0f,0f,1f,0f});
  }
}
protected class MFFloat930 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.18f,0.24f,0.26f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation931 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.63f,-1f,0f,0f,1.7f,-1f,0f,0f,1.55f,-1f,0f,0f,0.8943f,-1f,0f,0f,0.3698f,0f,0f,1f,0f,-1f,0f,0f,0.4963f,-1f,0f,0f,0.3829f,-1f,0f,0f,0.5169f,0f,0f,1f,0f});
  }
}
protected class MFFloat932 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFRotation933 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.625f,-1f,0f,0f,0.625f,-1f,0f,0f,0.3364f,-1f,0f,0f,0.2742f,-1f,0f,0f,0.05078f,1f,0f,0f,0.2833f,1f,0f,0f,0.6667f,1f,0f,0f,0.2833f,-1f,0f,0f,0.2108f,-1f,0f,0f,0.375f,-1f,0f,0f,0.3146f,-1f,0f,0f,0.1174f,0f,0f,1f,0f});
  }
}
protected class MFFloat934 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation935 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,2.047f,1f,0f,0f,2.047f,0f,0f,1f,0f,1f,0f,0f,1.566f,1f,0f,0f,0.5913f,1f,0f,0f,0.9235f,0f,0f,1f,0f});
  }
}
protected class MFFloat936 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.36f,0.4f,0.44f,0.48f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation937 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,4.349f,1f,0f,0f,4.349f,1f,0f,0f,4.615f,-1f,0f,0f,0.9136f,-1f,0f,0f,0.3614f,0f,0f,1f,0f,-1f,0f,0f,0.7869f,-1f,0f,0f,0.3918f,-1f,0f,0f,0.5433f,0f,0f,1f,0f});
  }
}
protected class MFFloat938 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation939 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.1892f,1f,0f,0f,0.1892f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat940 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f});
  }
}
protected class MFRotation941 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.0585279f,0.983903f,-0.168849f,1.85956f,-0.00222418f,0.99801f,-0.0630095f,1.46072f,0f,1f,0f,0.497349f,0f,0f,1f,0f});
  }
}
protected class MFFloat942 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,1f});
  }
}
protected class MFRotation943 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.04151f,-1f,0f,0f,0.5855f,-1f,0f,0f,0.5852f,0f,0f,1f,0f});
  }
}
protected class MFFloat944 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation945 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0.9992f,0.02042f,0.03558f,4.688f,0.9992f,0.02042f,0.03558f,4.688f,0.9989f,-0.04623f,0.005159f,4.079f,-0.8687f,-0.2525f,-0.4261f,1.501f,-0.941f,-0.2893f,-0.1754f,0.4788f,0f,0f,1f,0f});
  }
}
protected class MFFloat946 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.48f,0.52f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation947 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.0672928f,0.989475f,-0.128107f,4.15574f,0.00364942f,0.999901f,0.0135896f,4.5822f,0f,-1f,0f,0.655922f,-0.00050618f,-0.999999f,0.0012782f,1.28397f,0f,0f,1f,0f});
  }
}
protected class MFFloat948 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.58f,0.72f,1f});
  }
}
protected class MFRotation949 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,1.13f,-1f,0f,0f,1.7f,-1f,0f,0f,1.7f,-1f,0f,0f,0.4f,0f,0f,1f,0f});
  }
}
protected class MFFloat950 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.64f,0.76f,0.88f,1f});
  }
}
protected class MFRotation951 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-0.9987f,0.02554f,0.04498f,1.57f,-0.9987f,0.02554f,0.04498f,1.57f,1f,0.0004113f,0.003055f,4.114f,-0.8413f,0.3238f,0.4329f,1.453f,-0.877f,0.4198f,0.2337f,0.6009f,0f,0f,1f,0f});
  }
}
protected class MFFloat952 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation953 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.5989f,-1f,0f,0f,0.3216f,1f,0f,0f,0.06503f,0f,0f,1f,0f});
  }
}
protected class MFFloat954 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.76f,1f});
  }
}
protected class MFRotation955 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.1942f,-1f,0f,0f,0.1942f,0f,0f,1f,0f,1f,0f,0f,0.2284f,0f,0f,1f,0f});
  }
}
protected class MFFloat956 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.22f,0.28f,0.34f,0.71f,0.88f,1f});
  }
}
protected class MFRotation957 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.05f,1f,0f,0f,1.051f,-1f,0f,0f,0.257f,1f,0f,0f,0.2171f,1f,0f,0f,0.3465f,0f,0f,1f,0f});
  }
}
protected class MFFloat958 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.28f,0.32f,0.48f,0.64f,0.76f,1f});
  }
}
protected class MFRotation959 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.3273f,1f,0f,0f,0.3273f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat960 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.04f,0.07f,0.11f,0.15f,0.19f,0.22f,0.25f,0.27f,0.31f,0.33f,0.35f,0.38f,0.53f,0.544f,0.76f,0.8f,0.84f,0.88f,0.92f,0.96f,1f});
  }
}
protected class MFVec3f961 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,-0.01264f,-0.01289f,0f,-0.04712f,-0.03738f,-0.0003345f,-0.1049f,-0.05353f,-0.0005712f,-0.1892f,-0.06561f,-0.0008233f,-0.286f,-0.06276f,-0.0009591f,-0.3795f,-0.05148f,-0.00106f,-0.4484f,-0.03656f,-0.00106f,-0.4484f,-0.03656f,-0.001122f,-0.25f,-0.1499f,-0.0008616f,-0.05f,-0.06358f,-0.0005128f,0.15f,-0.05488f,0.0004779f,0.55f,0.02732f,0.0001728f,1.385f,0.006873f,0.00017f,1.395f,0.0069f,0f,0.35f,0.02148f,0f,-0.01299f,-0.01057f,0f,-0.06932f,-0.01064f,0.0001365f,-0.1037f,-0.005059f,0.0001279f,-0.07198f,-0.007596f,0.000141f,-0.01626f,-0.004935f,0f,0f,0f});
  }
}
protected class MFFloat962 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation963 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat964 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation965 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat966 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation967 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat968 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation969 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat970 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation971 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat972 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation973 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,-0.1f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0f,0.6f,0f,1f,0f,0.1f,0f,1f,0f,0f});
  }
}
protected class MFFloat974 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation975 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0.8f,0f,1f,0f,0f,0f,1f,0f,0f,-1f,0f,0f,0.6f,0f,-1f,0f,0.8f,0f,1f,0f,0f});
  }
}
protected class MFFloat976 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation977 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat978 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation979 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat980 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation981 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0.2f,0f,0f,1f,0.22f,0f,0f,1f,0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat982 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation983 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat984 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation985 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,1.76f,-0.25f,0f,1f,1.76f,0f,0f,1f,1.256f,0f,0f,1f,0.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat986 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation987 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,-1f,0.25f,0f,2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat988 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation989 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat990 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation991 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat992 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation993 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-0.2f,0f,0f,1f,-0.22f,0f,0f,1f,-0.2f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat994 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation995 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,-0.05f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat996 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation997 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,-1.76f,0.25f,0f,1f,-1.76f,0f,0f,1f,-1.256f,0f,0f,1f,-0.05f,0f,0f,1f,0f});
  }
}
protected class MFFloat998 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation999 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,-0.55f,1f,0.25f,0f,-2.55f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat1000 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1001 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,1f,0f,-0.55f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1002 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1003 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.5f,1f,0f,0f,1.1f,1f,0f,0f,0.7f,1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1004 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f});
  }
}
protected class MFRotation1005 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,1f,0f,0f,0.9f,-1f,0f,0f,1.75f,-1f,0f,0f,2.25f,-1f,0f,0f,2f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat1006 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1007 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,1.95f,1f,0f,0f,1.75f,-1f,0f,0f,0.28f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFFloat1008 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.3f,0.5f,0.6f,0.9f,1f});
  }
}
protected class MFRotation1009 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1010 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1011 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1012 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation1013 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,-1f,0f,0f,0.9f,-1f,0f,0f,0.95f,1f,0f,0f,0.75f,-1f,0f,0f,0.05f,1f,0f,0f,0f});
  }
}
protected class MFFloat1014 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.7f,1f});
  }
}
protected class MFRotation1015 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1f,0f,0f,0f,-1f,0f,0f,0.5f,-1f,0f,0f,0.7f,1f,0f,0f,0.75f,-1f,0f,0f,0.2f,1f,0f,0f,0f});
  }
}
protected class MFFloat1016 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1017 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,-1f,0f,0.1f,0f,1f,0f,0f,0f,1f,-1f,0.24f,0f,-1f,0f,0.4f,0f,1f,0f,0f});
  }
}
protected class MFFloat1018 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1019 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1020 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.2f,0.4f,0.5f,0.6f,0.8f,1f});
  }
}
protected class MFRotation1021 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1022 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1023 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1024 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1025 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1026 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1027 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1028 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f1029 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat1030 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.55f,1f});
  }
}
protected class MFRotation1031 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,1f,0f,0f,0.7f,1f,0f,0f,0.5f,0f,0f,1f,0f});
  }
}
protected class MFFloat1032 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f1033 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFFloat1034 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1035 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1036 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1037 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1038 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1039 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1040 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1041 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1042 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1043 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1044 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1045 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1046 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1047 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1048 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1049 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1050 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1051 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1052 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1053 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1054 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1055 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1056 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1057 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1058 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1059 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1060 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1061 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1062 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1063 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1064 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1065 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1066 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1067 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1068 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1069 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1070 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1071 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1072 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1073 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1074 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1075 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1076 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1077 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1078 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1079 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1080 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1081 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1082 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1083 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1084 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1085 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1086 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1087 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1088 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1089 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1090 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1091 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1092 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1093 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1094 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1095 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1096 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1097 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1098 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1099 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1100 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1101 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1103 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1105 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1106 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1107 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1109 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1111 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1113 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1114 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1115 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1117 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1118 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1119 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1121 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1123 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1124 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1125 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1127 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1129 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1130 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1131 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1132 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1133 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1135 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1136 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1137 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1138 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1139 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1140 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1141 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1142 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1143 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1144 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1145 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1146 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1147 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1148 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1149 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1150 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1151 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1152 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1153 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1154 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1155 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1156 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1157 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1158 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1159 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1160 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1161 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1162 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1163 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1164 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1165 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1166 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1167 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1168 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1169 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1170 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1171 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1172 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1173 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1174 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1175 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1176 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1177 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1178 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1179 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1180 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1181 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1182 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1183 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1184 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1185 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1186 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1187 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1188 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1189 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1190 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1191 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1192 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1193 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1194 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1195 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1196 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1197 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1198 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1199 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1200 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1201 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1202 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1203 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1204 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1205 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1206 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1207 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1208 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1209 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFFloat1210 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation1211 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f});
  }
}
protected class MFString1212 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JointCoordinateAxes.x3dv"});
  }
}
protected class MFString1213 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Stand"});
  }
}
protected class MFString1214 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFInt321215 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,-1});
  }
}
protected class MFVec3f1216 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2f,-0.25f,-0.01f,3f,-0.25f,-0.01f,3f,1f,-0.01f,-0.2f,1f,-0.01f});
  }
}
protected class MFString1217 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Pitch"});
  }
}
protected class MFString1218 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString1219 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Yaw"});
  }
}
protected class MFString1220 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString1221 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Roll"});
  }
}
protected class MFString1222 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString1223 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Walk"});
  }
}
protected class MFString1224 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString1225 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Run"});
  }
}
protected class MFString1226 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString1227 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Jump"});
  }
}
protected class MFString1228 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString1229 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Kick"});
  }
}
protected class MFString1230 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString1231 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Default"});
  }
}
protected class MFString1232 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
}
