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
public class blenderSkeleton implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new blenderSkeleton().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/blenderSkeleton.new.java.x3d");
    model.toFileJSON("../data/blenderSkeleton.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(3))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("blenderSkeleton.x3d")))
        .addMeta(new meta().setName(new SFString("copyright")).setContent(new SFString("2023")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://www.web3D.org")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Blender 4.0.1"))))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setDEF(new SFString("WO_World")).setGroundColor(new MFColor0().getArray()).setSkyColor(new MFColor1().getArray()))
        .addChild(new Transform()
          .addChild(new Shape().setDEF(new SFString("SiteShape"))
            .setGeometry(new Box().setSize(new float[] {0.05f ,0.05f ,0.05f }))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f })))))
        .addChild(new Transform()
          .addChild(new Shape().setDEF(new SFString("JointShape"))
            .setGeometry(new Sphere().setRadius(0.06f ))
            .setAppearance(new Appearance().setDEF(new SFString("JointAppearance"))
              .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0.5f ,0f }).setTransparency(0.5f )))))
        .addChild(new Transform().setDEF(new SFString("Light_TRANSFORM")).setRotation(new float[] {0.20594f ,0.33152f ,0.9207f ,1.92627f }).setTranslation(new float[] {4.07625f ,1.00545f ,5.90386f })
          .addChild(new PointLight().setDEF(new SFString("LA_Light")).setLocation(new float[] {-8.940696716308594e-8f ,-3.5762786865234375e-7f ,4.6193599700927734e-7f }).setRadius(40f )))
        .addChild(new Transform().setDEF(new SFString("Camera_TRANSFORM")).setRotation(new float[] {0.77344f ,0.33383f ,0.53884f ,1.35072f }).setTranslation(new float[] {7.35889f ,-6.92579f ,4.95831f })
          .addChild(new Viewpoint().setDEF(new SFString("CA_Camera")).setFieldOfView(0.6911112070083618f ).setOrientation(new float[] {-3.627339850709177e-8f ,-0.4730778932571411f ,-0.8810206651687622f ,0f }).setPosition(new float[] {-3.927080456378462e-7f ,-2.123415470123291e-7f ,2.384185791015625e-7f })))
        .addChild(new Transform().setDEF(new SFString("Armature_TRANSFORM"))
          .addChild(new HAnimHumanoid("Armature_TRANSFORM").setName(new SFString("humanoid")).setDEF(new SFString("hanim_humanoid")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("hanim_humanoid").setName(new SFString("Armature")).setDEF(new SFString("hanim_Armature")).setUlimit(new MFFloat2().getArray()).setLlimit(new MFFloat3().getArray())
              .addChild(new HAnimSegment("hanim_Armature").setName(new SFString("SEGMENT_FOR_Armature")).setDEF(new SFString("hanim_SEGMENT_FOR_Armature"))
                .addChild(new TouchSensor().setDescription(new SFString("joint Armature segment SEGMENT_FOR_Armature")))
                .addChild(new Transform()
                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                .addChild(new HAnimSite("hanim_SEGMENT_FOR_Armature").setName(new SFString("SEGMENT_FOR_Armature_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_Armature_tip"))
                  .addChild(new Transform()
                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
              .addChild(new HAnimJoint("hanim_Armature").setName(new SFString("sacrum")).setDEF(new SFString("hanim_sacrum")).setCenter(new float[] {-0.0002f ,-0.1178f ,0.8174f }).setUlimit(new MFFloat4().getArray()).setLlimit(new MFFloat5().getArray())
                .addChild(new HAnimSegment("hanim_sacrum").setName(new SFString("SEGMENT_FOR_sacrum")).setDEF(new SFString("hanim_SEGMENT_FOR_sacrum"))
                  .addChild(new TouchSensor().setDescription(new SFString("joint sacrum segment SEGMENT_FOR_sacrum")))
                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.8174f })
                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_sacrum").setName(new SFString("SEGMENT_FOR_sacrum_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_sacrum_tip"))
                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.8174f })
                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                .addChild(new HAnimJoint("hanim_sacrum").setName(new SFString("pelvis")).setDEF(new SFString("hanim_pelvis")).setCenter(new float[] {-0.0002f ,-0.1178f ,0.6986f }).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
                  .addChild(new HAnimSegment("hanim_pelvis").setName(new SFString("SEGMENT_FOR_pelvis")).setDEF(new SFString("hanim_SEGMENT_FOR_pelvis"))
                    .addChild(new TouchSensor().setDescription(new SFString("joint pelvis segment SEGMENT_FOR_pelvis")))
                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.6986f })
                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_pelvis").setName(new SFString("SEGMENT_FOR_pelvis_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_pelvis_tip"))
                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.6986f })
                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName(new SFString("l_thigh")).setDEF(new SFString("hanim_l_thigh")).setCenter(new float[] {0.0945f ,-0.1202f ,0.8181f }).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
                    .addChild(new HAnimSegment("hanim_l_thigh").setName(new SFString("SEGMENT_FOR_l_thigh")).setDEF(new SFString("hanim_SEGMENT_FOR_l_thigh"))
                      .addChild(new TouchSensor().setDescription(new SFString("joint l_thigh segment SEGMENT_FOR_l_thigh")))
                      .addChild(new Transform().setTranslation(new float[] {0.0945f ,-0.1202f ,0.8181f })
                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_thigh").setName(new SFString("SEGMENT_FOR_l_thigh_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_thigh_tip"))
                        .addChild(new Transform().setTranslation(new float[] {0.0945f ,-0.1202f ,0.8181f })
                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                    .addChild(new HAnimJoint("hanim_l_thigh").setName(new SFString("l_calf")).setDEF(new SFString("hanim_l_calf")).setCenter(new float[] {0.0924f ,-0.1213f ,0.4003f }).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())
                      .addChild(new HAnimSegment("hanim_l_calf").setName(new SFString("SEGMENT_FOR_l_calf")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calf"))
                        .addChild(new TouchSensor().setDescription(new SFString("joint l_calf segment SEGMENT_FOR_l_calf")))
                        .addChild(new Transform().setTranslation(new float[] {0.0924f ,-0.1213f ,0.4003f })
                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calf").setName(new SFString("SEGMENT_FOR_l_calf_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calf_tip"))
                          .addChild(new Transform().setTranslation(new float[] {0.0924f ,-0.1213f ,0.4003f })
                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                      .addChild(new HAnimJoint("hanim_l_calf").setName(new SFString("l_talus")).setDEF(new SFString("hanim_l_talus")).setCenter(new float[] {0.0886f ,-0.1123f ,0.0869f }).setUlimit(new MFFloat12().getArray()).setLlimit(new MFFloat13().getArray())
                        .addChild(new HAnimSegment("hanim_l_talus").setName(new SFString("SEGMENT_FOR_l_talus")).setDEF(new SFString("hanim_SEGMENT_FOR_l_talus"))
                          .addChild(new TouchSensor().setDescription(new SFString("joint l_talus segment SEGMENT_FOR_l_talus")))
                          .addChild(new Transform().setTranslation(new float[] {0.0886f ,-0.1123f ,0.0869f })
                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_talus").setName(new SFString("SEGMENT_FOR_l_talus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_talus_tip"))
                            .addChild(new Transform().setTranslation(new float[] {0.0886f ,-0.1123f ,0.0869f })
                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName(new SFString("l_navicular")).setDEF(new SFString("hanim_l_navicular")).setCenter(new float[] {0.0781f ,-0.097f ,0.0283f }).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
                          .addChild(new HAnimSegment("hanim_l_navicular").setName(new SFString("SEGMENT_FOR_l_navicular")).setDEF(new SFString("hanim_SEGMENT_FOR_l_navicular"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint l_navicular segment SEGMENT_FOR_l_navicular")))
                            .addChild(new Transform().setTranslation(new float[] {0.0781f ,-0.097f ,0.0283f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_navicular").setName(new SFString("SEGMENT_FOR_l_navicular_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_navicular_tip"))
                              .addChild(new Transform().setTranslation(new float[] {0.0781f ,-0.097f ,0.0283f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName(new SFString("l_cuneiform_1")).setDEF(new SFString("hanim_l_cuneiform_1")).setCenter(new float[] {0.0672f ,-0.0835f ,0.0235f }).setUlimit(new MFFloat16().getArray()).setLlimit(new MFFloat17().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuneiform_1").setName(new SFString("SEGMENT_FOR_l_cuneiform_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_1"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1")))
                              .addChild(new Transform().setTranslation(new float[] {0.0672f ,-0.0835f ,0.0235f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_1").setName(new SFString("SEGMENT_FOR_l_cuneiform_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_1_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.0672f ,-0.0835f ,0.0235f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_1").setName(new SFString("l_metatarsal_1")).setDEF(new SFString("hanim_l_metatarsal_1")).setCenter(new float[] {0.0644f ,-0.0577f ,0.0147f }).setUlimit(new MFFloat18().getArray()).setLlimit(new MFFloat19().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_1").setName(new SFString("SEGMENT_FOR_l_metatarsal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_1"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1")))
                                .addChild(new Transform().setTranslation(new float[] {0.0644f ,-0.0577f ,0.0147f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_1").setName(new SFString("SEGMENT_FOR_l_metatarsal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_1_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0644f ,-0.0577f ,0.0147f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_1").setName(new SFString("l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_1")).setCenter(new float[] {0.0619f ,-0.0083f ,0.0059f }).setUlimit(new MFFloat20().getArray()).setLlimit(new MFFloat21().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1")))
                                  .addChild(new Transform().setTranslation(new float[] {0.0619f ,-0.0083f ,0.0059f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0619f ,-0.0083f ,0.0059f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_1").setName(new SFString("l_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_1")).setUlimit(new MFFloat22().getArray()).setLlimit(new MFFloat23().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1")))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"))
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName(new SFString("l_cuneiform_2")).setDEF(new SFString("hanim_l_cuneiform_2")).setCenter(new float[] {0.0812f ,-0.0805f ,0.025f }).setUlimit(new MFFloat24().getArray()).setLlimit(new MFFloat25().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuneiform_2").setName(new SFString("SEGMENT_FOR_l_cuneiform_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_2"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2")))
                              .addChild(new Transform().setTranslation(new float[] {0.0812f ,-0.0805f ,0.025f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_2").setName(new SFString("SEGMENT_FOR_l_cuneiform_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_2_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.0812f ,-0.0805f ,0.025f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("hanim_l_metatarsal_2")).setCenter(new float[] {0.08f ,-0.0608f ,0.0175f }).setUlimit(new MFFloat26().getArray()).setLlimit(new MFFloat27().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_2").setName(new SFString("SEGMENT_FOR_l_metatarsal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_2"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2")))
                                .addChild(new Transform().setTranslation(new float[] {0.08f ,-0.0608f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_2").setName(new SFString("SEGMENT_FOR_l_metatarsal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_2_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.08f ,-0.0608f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_2")).setCenter(new float[] {0.0824f ,-0.004f ,0.0064f }).setUlimit(new MFFloat28().getArray()).setLlimit(new MFFloat29().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2")))
                                  .addChild(new Transform().setTranslation(new float[] {0.0824f ,-0.004f ,0.0064f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0824f ,-0.004f ,0.0064f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_2").setName(new SFString("l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_2")).setCenter(new float[] {0.0841f ,0.0121f ,0.0041f }).setUlimit(new MFFloat30().getArray()).setLlimit(new MFFloat31().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2")))
                                    .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0121f ,0.0041f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0121f ,0.0041f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_2").setName(new SFString("l_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_2")).setCenter(new float[] {0.0841f ,0.0216f ,0.0013f }).setUlimit(new MFFloat32().getArray()).setLlimit(new MFFloat33().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2")))
                                      .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0216f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0216f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName(new SFString("l_cuneiform_3")).setDEF(new SFString("hanim_l_cuneiform_3")).setCenter(new float[] {0.0928f ,-0.0821f ,0.0248f }).setUlimit(new MFFloat34().getArray()).setLlimit(new MFFloat35().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuneiform_3").setName(new SFString("SEGMENT_FOR_l_cuneiform_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_3"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3")))
                              .addChild(new Transform().setTranslation(new float[] {0.0928f ,-0.0821f ,0.0248f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_3").setName(new SFString("SEGMENT_FOR_l_cuneiform_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_3_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.0928f ,-0.0821f ,0.0248f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_3").setName(new SFString("l_metatarsal_3")).setDEF(new SFString("hanim_l_metatarsal_3")).setCenter(new float[] {0.0944f ,-0.0625f ,0.0175f }).setUlimit(new MFFloat36().getArray()).setLlimit(new MFFloat37().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_3").setName(new SFString("SEGMENT_FOR_l_metatarsal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_3"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3")))
                                .addChild(new Transform().setTranslation(new float[] {0.0944f ,-0.0625f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_3").setName(new SFString("SEGMENT_FOR_l_metatarsal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_3_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0944f ,-0.0625f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_3").setName(new SFString("l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_3")).setCenter(new float[] {0.0963f ,-0.0065f ,0.0065f }).setUlimit(new MFFloat38().getArray()).setLlimit(new MFFloat39().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3")))
                                  .addChild(new Transform().setTranslation(new float[] {0.0963f ,-0.0065f ,0.0065f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0963f ,-0.0065f ,0.0065f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_3").setName(new SFString("l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_3")).setCenter(new float[] {0.0987f ,0.0086f ,0.0034f }).setUlimit(new MFFloat40().getArray()).setLlimit(new MFFloat41().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3")))
                                    .addChild(new Transform().setTranslation(new float[] {0.0987f ,0.0086f ,0.0034f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0987f ,0.0086f ,0.0034f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_3").setName(new SFString("l_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_3")).setCenter(new float[] {0.1002f ,0.0178f ,0.0013f }).setUlimit(new MFFloat42().getArray()).setLlimit(new MFFloat43().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3")))
                                      .addChild(new Transform().setTranslation(new float[] {0.1002f ,0.0178f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.1002f ,0.0178f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName(new SFString("l_calcaneus")).setDEF(new SFString("hanim_l_calcaneus")).setCenter(new float[] {0.0889f ,-0.1278f ,0.0494f }).setUlimit(new MFFloat44().getArray()).setLlimit(new MFFloat45().getArray())
                          .addChild(new HAnimSegment("hanim_l_calcaneus").setName(new SFString("SEGMENT_FOR_l_calcaneus")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calcaneus"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus")))
                            .addChild(new Transform().setTranslation(new float[] {0.0889f ,-0.1278f ,0.0494f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calcaneus").setName(new SFString("SEGMENT_FOR_l_calcaneus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calcaneus_tip"))
                              .addChild(new Transform().setTranslation(new float[] {0.0889f ,-0.1278f ,0.0494f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_l_calcaneus").setName(new SFString("l_cuboid")).setDEF(new SFString("hanim_l_cuboid")).setCenter(new float[] {0.1105f ,-0.0998f ,0.0267f }).setUlimit(new MFFloat46().getArray()).setLlimit(new MFFloat47().getArray())
                            .addChild(new HAnimSegment("hanim_l_cuboid").setName(new SFString("SEGMENT_FOR_l_cuboid")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuboid"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuboid segment SEGMENT_FOR_l_cuboid")))
                              .addChild(new Transform().setTranslation(new float[] {0.1105f ,-0.0998f ,0.0267f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuboid").setName(new SFString("SEGMENT_FOR_l_cuboid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuboid_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.1105f ,-0.0998f ,0.0267f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName(new SFString("l_metatarsal_4")).setDEF(new SFString("hanim_l_metatarsal_4")).setCenter(new float[] {0.1063f ,-0.0634f ,0.016f }).setUlimit(new MFFloat48().getArray()).setLlimit(new MFFloat49().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_4").setName(new SFString("SEGMENT_FOR_l_metatarsal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_4"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4")))
                                .addChild(new Transform().setTranslation(new float[] {0.1063f ,-0.0634f ,0.016f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_4").setName(new SFString("SEGMENT_FOR_l_metatarsal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_4_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.1063f ,-0.0634f ,0.016f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_4").setName(new SFString("l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_4")).setCenter(new float[] {0.1097f ,-0.0107f ,0.0058f }).setUlimit(new MFFloat50().getArray()).setLlimit(new MFFloat51().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4")))
                                  .addChild(new Transform().setTranslation(new float[] {0.1097f ,-0.0107f ,0.0058f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.1097f ,-0.0107f ,0.0058f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_4").setName(new SFString("l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_4")).setCenter(new float[] {0.114f ,0.0044f ,0.0037f }).setUlimit(new MFFloat52().getArray()).setLlimit(new MFFloat53().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4")))
                                    .addChild(new Transform().setTranslation(new float[] {0.114f ,0.0044f ,0.0037f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.114f ,0.0044f ,0.0037f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_4").setName(new SFString("l_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_4")).setCenter(new float[] {0.1155f ,0.0118f ,0.0008f }).setUlimit(new MFFloat54().getArray()).setLlimit(new MFFloat55().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4")))
                                      .addChild(new Transform().setTranslation(new float[] {0.1155f ,0.0118f ,0.0008f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.1155f ,0.0118f ,0.0008f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName(new SFString("l_metatarsal_5")).setDEF(new SFString("hanim_l_metatarsal_5")).setCenter(new float[] {0.1206f ,-0.0671f ,0.0124f }).setUlimit(new MFFloat56().getArray()).setLlimit(new MFFloat57().getArray())
                              .addChild(new HAnimSegment("hanim_l_metatarsal_5").setName(new SFString("SEGMENT_FOR_l_metatarsal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_5"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5")))
                                .addChild(new Transform().setTranslation(new float[] {0.1206f ,-0.0671f ,0.0124f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_5").setName(new SFString("SEGMENT_FOR_l_metatarsal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_5_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.1206f ,-0.0671f ,0.0124f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_5").setName(new SFString("l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_5")).setCenter(new float[] {0.1239f ,-0.0153f ,0.0051f }).setUlimit(new MFFloat58().getArray()).setLlimit(new MFFloat59().getArray())
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5")))
                                  .addChild(new Transform().setTranslation(new float[] {0.1239f ,-0.0153f ,0.0051f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.1239f ,-0.0153f ,0.0051f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_5").setName(new SFString("l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_5")).setCenter(new float[] {0.1262f ,-0.0077f ,0.0023f }).setUlimit(new MFFloat60().getArray()).setLlimit(new MFFloat61().getArray())
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5")))
                                    .addChild(new Transform().setTranslation(new float[] {0.1262f ,-0.0077f ,0.0023f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.1262f ,-0.0077f ,0.0023f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_5").setName(new SFString("l_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_5")).setCenter(new float[] {0.1271f ,0f ,0f }).setUlimit(new MFFloat62().getArray()).setLlimit(new MFFloat63().getArray())
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5")))
                                      .addChild(new Transform().setTranslation(new float[] {0.1271f ,0f ,0f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.1271f ,0f ,0f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName(new SFString("r_thigh")).setDEF(new SFString("hanim_r_thigh")).setCenter(new float[] {-0.0948f ,-0.1202f ,0.8181f }).setUlimit(new MFFloat64().getArray()).setLlimit(new MFFloat65().getArray())
                    .addChild(new HAnimSegment("hanim_r_thigh").setName(new SFString("SEGMENT_FOR_r_thigh")).setDEF(new SFString("hanim_SEGMENT_FOR_r_thigh"))
                      .addChild(new TouchSensor().setDescription(new SFString("joint r_thigh segment SEGMENT_FOR_r_thigh")))
                      .addChild(new Transform().setTranslation(new float[] {-0.0948f ,-0.1202f ,0.8181f })
                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_thigh").setName(new SFString("SEGMENT_FOR_r_thigh_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_thigh_tip"))
                        .addChild(new Transform().setTranslation(new float[] {-0.0948f ,-0.1202f ,0.8181f })
                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                    .addChild(new HAnimJoint("hanim_r_thigh").setName(new SFString("r_calf")).setDEF(new SFString("hanim_r_calf")).setCenter(new float[] {-0.0928f ,-0.1213f ,0.4003f }).setUlimit(new MFFloat66().getArray()).setLlimit(new MFFloat67().getArray())
                      .addChild(new HAnimSegment("hanim_r_calf").setName(new SFString("SEGMENT_FOR_r_calf")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calf"))
                        .addChild(new TouchSensor().setDescription(new SFString("joint r_calf segment SEGMENT_FOR_r_calf")))
                        .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.1213f ,0.4003f })
                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calf").setName(new SFString("SEGMENT_FOR_r_calf_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calf_tip"))
                          .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.1213f ,0.4003f })
                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                      .addChild(new HAnimJoint("hanim_r_calf").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus")).setCenter(new float[] {-0.0886f ,-0.1123f ,0.0869f }).setUlimit(new MFFloat68().getArray()).setLlimit(new MFFloat69().getArray())
                        .addChild(new HAnimSegment("hanim_r_talus").setName(new SFString("SEGMENT_FOR_r_talus")).setDEF(new SFString("hanim_SEGMENT_FOR_r_talus"))
                          .addChild(new TouchSensor().setDescription(new SFString("joint r_talus segment SEGMENT_FOR_r_talus")))
                          .addChild(new Transform().setTranslation(new float[] {-0.0886f ,-0.1123f ,0.0869f })
                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_talus").setName(new SFString("SEGMENT_FOR_r_talus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_talus_tip"))
                            .addChild(new Transform().setTranslation(new float[] {-0.0886f ,-0.1123f ,0.0869f })
                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName(new SFString("r_navicular")).setDEF(new SFString("hanim_r_navicular")).setCenter(new float[] {-0.0781f ,-0.097f ,0.0283f }).setUlimit(new MFFloat70().getArray()).setLlimit(new MFFloat71().getArray())
                          .addChild(new HAnimSegment("hanim_r_navicular").setName(new SFString("SEGMENT_FOR_r_navicular")).setDEF(new SFString("hanim_SEGMENT_FOR_r_navicular"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint r_navicular segment SEGMENT_FOR_r_navicular")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0781f ,-0.097f ,0.0283f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_navicular").setName(new SFString("SEGMENT_FOR_r_navicular_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_navicular_tip"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0781f ,-0.097f ,0.0283f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName(new SFString("r_cuneiform_1")).setDEF(new SFString("hanim_r_cuneiform_1")).setCenter(new float[] {-0.0672f ,-0.0835f ,0.0235f }).setUlimit(new MFFloat72().getArray()).setLlimit(new MFFloat73().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuneiform_1").setName(new SFString("SEGMENT_FOR_r_cuneiform_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_1"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0672f ,-0.0835f ,0.0235f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_1").setName(new SFString("SEGMENT_FOR_r_cuneiform_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_1_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0672f ,-0.0835f ,0.0235f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_1").setName(new SFString("r_metatarsal_1")).setDEF(new SFString("hanim_r_metatarsal_1")).setCenter(new float[] {-0.0644f ,-0.0577f ,0.0147f }).setUlimit(new MFFloat74().getArray()).setLlimit(new MFFloat75().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_1").setName(new SFString("SEGMENT_FOR_r_metatarsal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_1"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1")))
                                .addChild(new Transform().setTranslation(new float[] {-0.0644f ,-0.0577f ,0.0147f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_1").setName(new SFString("SEGMENT_FOR_r_metatarsal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_1_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0644f ,-0.0577f ,0.0147f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_1").setName(new SFString("r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_1")).setCenter(new float[] {-0.0619f ,-0.0083f ,0.0059f }).setUlimit(new MFFloat76().getArray()).setLlimit(new MFFloat77().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0619f ,-0.0083f ,0.0059f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0619f ,-0.0083f ,0.0059f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_1").setName(new SFString("r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_1")).setUlimit(new MFFloat78().getArray()).setLlimit(new MFFloat79().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1")))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"))
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName(new SFString("r_cuneiform_2")).setDEF(new SFString("hanim_r_cuneiform_2")).setCenter(new float[] {-0.0812f ,-0.0805f ,0.025f }).setUlimit(new MFFloat80().getArray()).setLlimit(new MFFloat81().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuneiform_2").setName(new SFString("SEGMENT_FOR_r_cuneiform_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_2"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0812f ,-0.0805f ,0.025f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_2").setName(new SFString("SEGMENT_FOR_r_cuneiform_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_2_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0812f ,-0.0805f ,0.025f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("hanim_r_metatarsal_2")).setCenter(new float[] {-0.08f ,-0.0608f ,0.0175f }).setUlimit(new MFFloat82().getArray()).setLlimit(new MFFloat83().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_2").setName(new SFString("SEGMENT_FOR_r_metatarsal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_2"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2")))
                                .addChild(new Transform().setTranslation(new float[] {-0.08f ,-0.0608f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_2").setName(new SFString("SEGMENT_FOR_r_metatarsal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_2_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.08f ,-0.0608f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2")).setCenter(new float[] {-0.0823f ,-0.004f ,0.0064f }).setUlimit(new MFFloat84().getArray()).setLlimit(new MFFloat85().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0823f ,-0.004f ,0.0064f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0823f ,-0.004f ,0.0064f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_2").setName(new SFString("r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_2")).setCenter(new float[] {-0.0841f ,0.0121f ,0.0041f }).setUlimit(new MFFloat86().getArray()).setLlimit(new MFFloat87().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0121f ,0.0041f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0121f ,0.0041f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_2").setName(new SFString("r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_2")).setCenter(new float[] {-0.0841f ,0.0216f ,0.0013f }).setUlimit(new MFFloat88().getArray()).setLlimit(new MFFloat89().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0216f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0216f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName(new SFString("r_cuneiform_3")).setDEF(new SFString("hanim_r_cuneiform_3")).setCenter(new float[] {-0.0928f ,-0.0821f ,0.0248f }).setUlimit(new MFFloat90().getArray()).setLlimit(new MFFloat91().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuneiform_3").setName(new SFString("SEGMENT_FOR_r_cuneiform_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_3"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.0821f ,0.0248f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_3").setName(new SFString("SEGMENT_FOR_r_cuneiform_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_3_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.0821f ,0.0248f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_3").setName(new SFString("r_metatarsal_3")).setDEF(new SFString("hanim_r_metatarsal_3")).setCenter(new float[] {-0.0944f ,-0.0625f ,0.0175f }).setUlimit(new MFFloat92().getArray()).setLlimit(new MFFloat93().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_3").setName(new SFString("SEGMENT_FOR_r_metatarsal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_3"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3")))
                                .addChild(new Transform().setTranslation(new float[] {-0.0944f ,-0.0625f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_3").setName(new SFString("SEGMENT_FOR_r_metatarsal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_3_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0944f ,-0.0625f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_3").setName(new SFString("r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_3")).setCenter(new float[] {-0.0963f ,-0.0065f ,0.0065f }).setUlimit(new MFFloat94().getArray()).setLlimit(new MFFloat95().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0963f ,-0.0065f ,0.0065f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0963f ,-0.0065f ,0.0065f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_3").setName(new SFString("r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_3")).setCenter(new float[] {-0.0987f ,0.0086f ,0.0034f }).setUlimit(new MFFloat96().getArray()).setLlimit(new MFFloat97().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0987f ,0.0086f ,0.0034f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0987f ,0.0086f ,0.0034f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_3").setName(new SFString("r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_3")).setCenter(new float[] {-0.1002f ,0.0178f ,0.0013f }).setUlimit(new MFFloat98().getArray()).setLlimit(new MFFloat99().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1002f ,0.0178f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.1002f ,0.0178f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName(new SFString("r_calcaneus")).setDEF(new SFString("hanim_r_calcaneus")).setCenter(new float[] {-0.0889f ,-0.1278f ,0.0494f }).setUlimit(new MFFloat100().getArray()).setLlimit(new MFFloat101().getArray())
                          .addChild(new HAnimSegment("hanim_r_calcaneus").setName(new SFString("SEGMENT_FOR_r_calcaneus")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calcaneus"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0889f ,-0.1278f ,0.0494f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calcaneus").setName(new SFString("SEGMENT_FOR_r_calcaneus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calcaneus_tip"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0889f ,-0.1278f ,0.0494f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_r_calcaneus").setName(new SFString("r_cuboid")).setDEF(new SFString("hanim_r_cuboid")).setCenter(new float[] {-0.1105f ,-0.0998f ,0.0267f }).setUlimit(new MFFloat102().getArray()).setLlimit(new MFFloat103().getArray())
                            .addChild(new HAnimSegment("hanim_r_cuboid").setName(new SFString("SEGMENT_FOR_r_cuboid")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuboid"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuboid segment SEGMENT_FOR_r_cuboid")))
                              .addChild(new Transform().setTranslation(new float[] {-0.1105f ,-0.0998f ,0.0267f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuboid").setName(new SFString("SEGMENT_FOR_r_cuboid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuboid_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.1105f ,-0.0998f ,0.0267f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName(new SFString("r_metatarsal_4")).setDEF(new SFString("hanim_r_metatarsal_4")).setCenter(new float[] {-0.1063f ,-0.0634f ,0.016f }).setUlimit(new MFFloat104().getArray()).setLlimit(new MFFloat105().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_4").setName(new SFString("SEGMENT_FOR_r_metatarsal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_4"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4")))
                                .addChild(new Transform().setTranslation(new float[] {-0.1063f ,-0.0634f ,0.016f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_4").setName(new SFString("SEGMENT_FOR_r_metatarsal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_4_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1063f ,-0.0634f ,0.016f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_4").setName(new SFString("r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_4")).setCenter(new float[] {-0.1097f ,-0.0107f ,0.0058f }).setUlimit(new MFFloat106().getArray()).setLlimit(new MFFloat107().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1097f ,-0.0107f ,0.0058f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.1097f ,-0.0107f ,0.0058f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_4").setName(new SFString("r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_4")).setCenter(new float[] {-0.114f ,0.0044f ,0.0037f }).setUlimit(new MFFloat108().getArray()).setLlimit(new MFFloat109().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.114f ,0.0044f ,0.0037f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.114f ,0.0044f ,0.0037f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_4").setName(new SFString("r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_4")).setCenter(new float[] {-0.1155f ,0.0118f ,0.0008f }).setUlimit(new MFFloat110().getArray()).setLlimit(new MFFloat111().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1155f ,0.0118f ,0.0008f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.1155f ,0.0118f ,0.0008f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName(new SFString("r_metatarsal_5")).setDEF(new SFString("hanim_r_metatarsal_5")).setCenter(new float[] {-0.1206f ,-0.0671f ,0.0124f }).setUlimit(new MFFloat112().getArray()).setLlimit(new MFFloat113().getArray())
                              .addChild(new HAnimSegment("hanim_r_metatarsal_5").setName(new SFString("SEGMENT_FOR_r_metatarsal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_5"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5")))
                                .addChild(new Transform().setTranslation(new float[] {-0.1206f ,-0.0671f ,0.0124f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_5").setName(new SFString("SEGMENT_FOR_r_metatarsal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_5_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1206f ,-0.0671f ,0.0124f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_5").setName(new SFString("r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_5")).setCenter(new float[] {-0.1239f ,-0.0153f ,0.0051f }).setUlimit(new MFFloat114().getArray()).setLlimit(new MFFloat115().getArray())
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1239f ,-0.0153f ,0.0051f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.1239f ,-0.0153f ,0.0051f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_5").setName(new SFString("r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_5")).setCenter(new float[] {-0.1262f ,-0.0077f ,0.0023f }).setUlimit(new MFFloat116().getArray()).setLlimit(new MFFloat117().getArray())
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.1262f ,-0.0077f ,0.0023f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1262f ,-0.0077f ,0.0023f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_5").setName(new SFString("r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_5")).setCenter(new float[] {-0.1271f ,0f ,0f }).setUlimit(new MFFloat118().getArray()).setLlimit(new MFFloat119().getArray())
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1271f ,0f ,0f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.1271f ,0f ,0f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))))))
                .addChild(new HAnimJoint("hanim_sacrum").setName(new SFString("l5")).setDEF(new SFString("hanim_l5")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9169f }).setUlimit(new MFFloat120().getArray()).setLlimit(new MFFloat121().getArray())
                  .addChild(new HAnimSegment("hanim_l5").setName(new SFString("SEGMENT_FOR_l5")).setDEF(new SFString("hanim_SEGMENT_FOR_l5"))
                    .addChild(new TouchSensor().setDescription(new SFString("joint l5 segment SEGMENT_FOR_l5")))
                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9169f })
                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l5").setName(new SFString("SEGMENT_FOR_l5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l5_tip"))
                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9169f })
                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                  .addChild(new HAnimJoint("hanim_l5").setName(new SFString("l4")).setDEF(new SFString("hanim_l4")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9412f }).setUlimit(new MFFloat122().getArray()).setLlimit(new MFFloat123().getArray())
                    .addChild(new HAnimSegment("hanim_l4").setName(new SFString("SEGMENT_FOR_l4")).setDEF(new SFString("hanim_SEGMENT_FOR_l4"))
                      .addChild(new TouchSensor().setDescription(new SFString("joint l4 segment SEGMENT_FOR_l4")))
                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9412f })
                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l4").setName(new SFString("SEGMENT_FOR_l4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l4_tip"))
                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9412f })
                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                    .addChild(new HAnimJoint("hanim_l4").setName(new SFString("l3")).setDEF(new SFString("hanim_l3")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9574f }).setUlimit(new MFFloat124().getArray()).setLlimit(new MFFloat125().getArray())
                      .addChild(new HAnimSegment("hanim_l3").setName(new SFString("SEGMENT_FOR_l3")).setDEF(new SFString("hanim_SEGMENT_FOR_l3"))
                        .addChild(new TouchSensor().setDescription(new SFString("joint l3 segment SEGMENT_FOR_l3")))
                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9574f })
                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l3").setName(new SFString("SEGMENT_FOR_l3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l3_tip"))
                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9574f })
                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                      .addChild(new HAnimJoint("hanim_l3").setName(new SFString("l2")).setDEF(new SFString("hanim_l2")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9738f }).setUlimit(new MFFloat126().getArray()).setLlimit(new MFFloat127().getArray())
                        .addChild(new HAnimSegment("hanim_l2").setName(new SFString("SEGMENT_FOR_l2")).setDEF(new SFString("hanim_SEGMENT_FOR_l2"))
                          .addChild(new TouchSensor().setDescription(new SFString("joint l2 segment SEGMENT_FOR_l2")))
                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9738f })
                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l2").setName(new SFString("SEGMENT_FOR_l2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l2_tip"))
                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9738f })
                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                        .addChild(new HAnimJoint("hanim_l2").setName(new SFString("l1")).setDEF(new SFString("hanim_l1")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9911f }).setUlimit(new MFFloat128().getArray()).setLlimit(new MFFloat129().getArray())
                          .addChild(new HAnimSegment("hanim_l1").setName(new SFString("SEGMENT_FOR_l1")).setDEF(new SFString("hanim_SEGMENT_FOR_l1"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint l1 segment SEGMENT_FOR_l1")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9911f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l1").setName(new SFString("SEGMENT_FOR_l1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l1_tip"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9911f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_l1").setName(new SFString("t12")).setDEF(new SFString("hanim_t12")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0145f }).setUlimit(new MFFloat130().getArray()).setLlimit(new MFFloat131().getArray())
                            .addChild(new HAnimSegment("hanim_t12").setName(new SFString("SEGMENT_FOR_t12")).setDEF(new SFString("hanim_SEGMENT_FOR_t12"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint t12 segment SEGMENT_FOR_t12")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0145f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t12").setName(new SFString("SEGMENT_FOR_t12_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t12_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0145f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_t12").setName(new SFString("t11")).setDEF(new SFString("hanim_t11")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0381f }).setUlimit(new MFFloat132().getArray()).setLlimit(new MFFloat133().getArray())
                              .addChild(new HAnimSegment("hanim_t11").setName(new SFString("SEGMENT_FOR_t11")).setDEF(new SFString("hanim_SEGMENT_FOR_t11"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint t11 segment SEGMENT_FOR_t11")))
                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0381f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t11").setName(new SFString("SEGMENT_FOR_t11_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t11_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0381f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_t11").setName(new SFString("t10")).setDEF(new SFString("hanim_t10")).setCenter(new float[] {-0.0002f ,-0.1157f ,1.0552f }).setUlimit(new MFFloat134().getArray()).setLlimit(new MFFloat135().getArray())
                                .addChild(new HAnimSegment("hanim_t10").setName(new SFString("SEGMENT_FOR_t10")).setDEF(new SFString("hanim_SEGMENT_FOR_t10"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint t10 segment SEGMENT_FOR_t10")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.0552f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t10").setName(new SFString("SEGMENT_FOR_t10_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t10_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.0552f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_t10").setName(new SFString("t9")).setDEF(new SFString("hanim_t9")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0699f }).setUlimit(new MFFloat136().getArray()).setLlimit(new MFFloat137().getArray())
                                  .addChild(new HAnimSegment("hanim_t9").setName(new SFString("SEGMENT_FOR_t9")).setDEF(new SFString("hanim_SEGMENT_FOR_t9"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint t9 segment SEGMENT_FOR_t9")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0699f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t9").setName(new SFString("SEGMENT_FOR_t9_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t9_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0699f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_t9").setName(new SFString("t8")).setDEF(new SFString("hanim_t8")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0845f }).setUlimit(new MFFloat138().getArray()).setLlimit(new MFFloat139().getArray())
                                    .addChild(new HAnimSegment("hanim_t8").setName(new SFString("SEGMENT_FOR_t8")).setDEF(new SFString("hanim_SEGMENT_FOR_t8"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint t8 segment SEGMENT_FOR_t8")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0845f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_t8").setName(new SFString("SEGMENT_FOR_t8_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t8_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0845f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                    .addChild(new HAnimJoint("hanim_t8").setName(new SFString("t7")).setDEF(new SFString("hanim_t7")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1002f }).setUlimit(new MFFloat140().getArray()).setLlimit(new MFFloat141().getArray())
                                      .addChild(new HAnimSegment("hanim_t7").setName(new SFString("SEGMENT_FOR_t7")).setDEF(new SFString("hanim_SEGMENT_FOR_t7"))
                                        .addChild(new TouchSensor().setDescription(new SFString("joint t7 segment SEGMENT_FOR_t7")))
                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1002f })
                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_t7").setName(new SFString("SEGMENT_FOR_t7_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t7_tip"))
                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1002f })
                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                      .addChild(new HAnimJoint("hanim_t7").setName(new SFString("t6")).setDEF(new SFString("hanim_t6")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1131f }).setUlimit(new MFFloat142().getArray()).setLlimit(new MFFloat143().getArray())
                                        .addChild(new HAnimSegment("hanim_t6").setName(new SFString("SEGMENT_FOR_t6")).setDEF(new SFString("hanim_SEGMENT_FOR_t6"))
                                          .addChild(new TouchSensor().setDescription(new SFString("joint t6 segment SEGMENT_FOR_t6")))
                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1131f })
                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_t6").setName(new SFString("SEGMENT_FOR_t6_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t6_tip"))
                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1131f })
                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                        .addChild(new HAnimJoint("hanim_t6").setName(new SFString("t5")).setDEF(new SFString("hanim_t5")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1286f }).setUlimit(new MFFloat144().getArray()).setLlimit(new MFFloat145().getArray())
                                          .addChild(new HAnimSegment("hanim_t5").setName(new SFString("SEGMENT_FOR_t5")).setDEF(new SFString("hanim_SEGMENT_FOR_t5"))
                                            .addChild(new TouchSensor().setDescription(new SFString("joint t5 segment SEGMENT_FOR_t5")))
                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1286f })
                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_t5").setName(new SFString("SEGMENT_FOR_t5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t5_tip"))
                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1286f })
                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                          .addChild(new HAnimJoint("hanim_t5").setName(new SFString("t4")).setDEF(new SFString("hanim_t4")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1439f }).setUlimit(new MFFloat146().getArray()).setLlimit(new MFFloat147().getArray())
                                            .addChild(new HAnimSegment("hanim_t4").setName(new SFString("SEGMENT_FOR_t4")).setDEF(new SFString("hanim_SEGMENT_FOR_t4"))
                                              .addChild(new TouchSensor().setDescription(new SFString("joint t4 segment SEGMENT_FOR_t4")))
                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1439f })
                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t4").setName(new SFString("SEGMENT_FOR_t4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t4_tip"))
                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1439f })
                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                            .addChild(new HAnimJoint("hanim_t4").setName(new SFString("t3")).setDEF(new SFString("hanim_t3")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1623f }).setUlimit(new MFFloat148().getArray()).setLlimit(new MFFloat149().getArray())
                                              .addChild(new HAnimSegment("hanim_t3").setName(new SFString("SEGMENT_FOR_t3")).setDEF(new SFString("hanim_SEGMENT_FOR_t3"))
                                                .addChild(new TouchSensor().setDescription(new SFString("joint t3 segment SEGMENT_FOR_t3")))
                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1623f })
                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t3").setName(new SFString("SEGMENT_FOR_t3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t3_tip"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1623f })
                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                              .addChild(new HAnimJoint("hanim_t3").setName(new SFString("t2")).setDEF(new SFString("hanim_t2")).setCenter(new float[] {-0.0002f ,-0.1157f ,1.1871f }).setUlimit(new MFFloat150().getArray()).setLlimit(new MFFloat151().getArray())
                                                .addChild(new HAnimSegment("hanim_t2").setName(new SFString("SEGMENT_FOR_t2")).setDEF(new SFString("hanim_SEGMENT_FOR_t2"))
                                                  .addChild(new TouchSensor().setDescription(new SFString("joint t2 segment SEGMENT_FOR_t2")))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.1871f })
                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t2").setName(new SFString("SEGMENT_FOR_t2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t2_tip"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.1871f })
                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                .addChild(new HAnimJoint("hanim_t2").setName(new SFString("t1")).setDEF(new SFString("hanim_t1")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.2109f }).setUlimit(new MFFloat152().getArray()).setLlimit(new MFFloat153().getArray())
                                                  .addChild(new HAnimSegment("hanim_t1").setName(new SFString("SEGMENT_FOR_t1")).setDEF(new SFString("hanim_SEGMENT_FOR_t1"))
                                                    .addChild(new TouchSensor().setDescription(new SFString("joint t1 segment SEGMENT_FOR_t1")))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.2109f })
                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t1").setName(new SFString("SEGMENT_FOR_t1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t1_tip"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.2109f })
                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName(new SFString("c7")).setDEF(new SFString("hanim_c7")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2368f }).setUlimit(new MFFloat154().getArray()).setLlimit(new MFFloat155().getArray())
                                                    .addChild(new HAnimSegment("hanim_c7").setName(new SFString("SEGMENT_FOR_c7")).setDEF(new SFString("hanim_SEGMENT_FOR_c7"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("joint c7 segment SEGMENT_FOR_c7")))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2368f })
                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_c7").setName(new SFString("SEGMENT_FOR_c7_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c7_tip"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2368f })
                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                    .addChild(new HAnimJoint("hanim_c7").setName(new SFString("c6")).setDEF(new SFString("hanim_c6")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.249f }).setUlimit(new MFFloat156().getArray()).setLlimit(new MFFloat157().getArray())
                                                      .addChild(new HAnimSegment("hanim_c6").setName(new SFString("SEGMENT_FOR_c6")).setDEF(new SFString("hanim_SEGMENT_FOR_c6"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("joint c6 segment SEGMENT_FOR_c6")))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.249f })
                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_c6").setName(new SFString("SEGMENT_FOR_c6_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c6_tip"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.249f })
                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                      .addChild(new HAnimJoint("hanim_c6").setName(new SFString("c5")).setDEF(new SFString("hanim_c5")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2613f }).setUlimit(new MFFloat158().getArray()).setLlimit(new MFFloat159().getArray())
                                                        .addChild(new HAnimSegment("hanim_c5").setName(new SFString("SEGMENT_FOR_c5")).setDEF(new SFString("hanim_SEGMENT_FOR_c5"))
                                                          .addChild(new TouchSensor().setDescription(new SFString("joint c5 segment SEGMENT_FOR_c5")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2613f })
                                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_c5").setName(new SFString("SEGMENT_FOR_c5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c5_tip"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2613f })
                                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                        .addChild(new HAnimJoint("hanim_c5").setName(new SFString("c4")).setDEF(new SFString("hanim_c4")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2737f }).setUlimit(new MFFloat160().getArray()).setLlimit(new MFFloat161().getArray())
                                                          .addChild(new HAnimSegment("hanim_c4").setName(new SFString("SEGMENT_FOR_c4")).setDEF(new SFString("hanim_SEGMENT_FOR_c4"))
                                                            .addChild(new TouchSensor().setDescription(new SFString("joint c4 segment SEGMENT_FOR_c4")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2737f })
                                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_c4").setName(new SFString("SEGMENT_FOR_c4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c4_tip"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2737f })
                                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                          .addChild(new HAnimJoint("hanim_c4").setName(new SFString("c3")).setDEF(new SFString("hanim_c3")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2865f }).setUlimit(new MFFloat162().getArray()).setLlimit(new MFFloat163().getArray())
                                                            .addChild(new HAnimSegment("hanim_c3").setName(new SFString("SEGMENT_FOR_c3")).setDEF(new SFString("hanim_SEGMENT_FOR_c3"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("joint c3 segment SEGMENT_FOR_c3")))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2865f })
                                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_c3").setName(new SFString("SEGMENT_FOR_c3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c3_tip"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2865f })
                                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                            .addChild(new HAnimJoint("hanim_c3").setName(new SFString("c2")).setDEF(new SFString("hanim_c2")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2982f }).setUlimit(new MFFloat164().getArray()).setLlimit(new MFFloat165().getArray())
                                                              .addChild(new HAnimSegment("hanim_c2").setName(new SFString("SEGMENT_FOR_c2")).setDEF(new SFString("hanim_SEGMENT_FOR_c2"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint c2 segment SEGMENT_FOR_c2")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2982f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_c2").setName(new SFString("SEGMENT_FOR_c2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c2_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2982f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_c2").setName(new SFString("c1")).setDEF(new SFString("hanim_c1")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.3099f }).setUlimit(new MFFloat166().getArray()).setLlimit(new MFFloat167().getArray())
                                                                .addChild(new HAnimSegment("hanim_c1").setName(new SFString("SEGMENT_FOR_c1")).setDEF(new SFString("hanim_SEGMENT_FOR_c1"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint c1 segment SEGMENT_FOR_c1")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.3099f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_c1").setName(new SFString("SEGMENT_FOR_c1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c1_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.3099f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_c1").setName(new SFString("skull")).setDEF(new SFString("hanim_skull")).setCenter(new float[] {-0.0002f ,-0.1173f ,1.3041f }).setUlimit(new MFFloat168().getArray()).setLlimit(new MFFloat169().getArray())
                                                                  .addChild(new HAnimSegment("hanim_skull").setName(new SFString("SEGMENT_FOR_skull")).setDEF(new SFString("hanim_SEGMENT_FOR_skull"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint skull segment SEGMENT_FOR_skull")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1173f ,1.3041f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_skull").setName(new SFString("SEGMENT_FOR_skull_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_skull_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1173f ,1.3041f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("l_eyelid")).setDEF(new SFString("hanim_l_eyelid")).setCenter(new float[] {0.0503f ,-0.0689f ,1.4157f }).setUlimit(new MFFloat170().getArray()).setLlimit(new MFFloat171().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_eyelid").setName(new SFString("SEGMENT_FOR_l_eyelid")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyelid"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_eyelid segment SEGMENT_FOR_l_eyelid")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.0503f ,-0.0689f ,1.4157f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyelid").setName(new SFString("SEGMENT_FOR_l_eyelid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyelid_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.0503f ,-0.0689f ,1.4157f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("r_eyelid")).setDEF(new SFString("hanim_r_eyelid")).setCenter(new float[] {-0.0507f ,-0.0689f ,1.4157f }).setUlimit(new MFFloat172().getArray()).setLlimit(new MFFloat173().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_eyelid").setName(new SFString("SEGMENT_FOR_r_eyelid")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyelid"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_eyelid segment SEGMENT_FOR_r_eyelid")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0507f ,-0.0689f ,1.4157f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyelid").setName(new SFString("SEGMENT_FOR_r_eyelid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyelid_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0507f ,-0.0689f ,1.4157f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("l_eyeball")).setDEF(new SFString("hanim_l_eyeball")).setCenter(new float[] {0.0479f ,-0.0188f ,1.3963f }).setUlimit(new MFFloat174().getArray()).setLlimit(new MFFloat175().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_eyeball").setName(new SFString("SEGMENT_FOR_l_eyeball")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyeball"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_eyeball segment SEGMENT_FOR_l_eyeball")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.0479f ,-0.0188f ,1.3963f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyeball").setName(new SFString("SEGMENT_FOR_l_eyeball_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyeball_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.0479f ,-0.0188f ,1.3963f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("r_eyeball")).setDEF(new SFString("hanim_r_eyeball")).setCenter(new float[] {-0.0483f ,-0.0188f ,1.3963f }).setUlimit(new MFFloat176().getArray()).setLlimit(new MFFloat177().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_eyeball").setName(new SFString("SEGMENT_FOR_r_eyeball")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyeball"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_eyeball segment SEGMENT_FOR_r_eyeball")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0483f ,-0.0188f ,1.3963f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyeball").setName(new SFString("SEGMENT_FOR_r_eyeball_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyeball_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0483f ,-0.0188f ,1.3963f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("l_eyebrow")).setDEF(new SFString("hanim_l_eyebrow")).setCenter(new float[] {0.0216f ,0.0051f ,1.4053f }).setUlimit(new MFFloat178().getArray()).setLlimit(new MFFloat179().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_eyebrow").setName(new SFString("SEGMENT_FOR_l_eyebrow")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyebrow"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.0216f ,0.0051f ,1.4053f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyebrow").setName(new SFString("SEGMENT_FOR_l_eyebrow_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyebrow_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.0216f ,0.0051f ,1.4053f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("r_eyebrow")).setDEF(new SFString("hanim_r_eyebrow")).setCenter(new float[] {-0.0219f ,0.0051f ,1.4053f }).setUlimit(new MFFloat180().getArray()).setLlimit(new MFFloat181().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_eyebrow").setName(new SFString("SEGMENT_FOR_r_eyebrow")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyebrow"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0219f ,0.0051f ,1.4053f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyebrow").setName(new SFString("SEGMENT_FOR_r_eyebrow_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyebrow_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0219f ,0.0051f ,1.4053f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("jaw")).setDEF(new SFString("hanim_jaw")).setCenter(new float[] {-0.0002f ,-0.0865f ,1.3043f }).setUlimit(new MFFloat182().getArray()).setLlimit(new MFFloat183().getArray())
                                                                    .addChild(new HAnimSegment("hanim_jaw").setName(new SFString("SEGMENT_FOR_jaw")).setDEF(new SFString("hanim_SEGMENT_FOR_jaw"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint jaw segment SEGMENT_FOR_jaw")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.0865f ,1.3043f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_jaw").setName(new SFString("SEGMENT_FOR_jaw_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_jaw_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.0865f ,1.3043f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName(new SFString("l_clavicle")).setDEF(new SFString("hanim_l_clavicle")).setCenter(new float[] {0.1228f ,-0.1148f ,1.1833f }).setUlimit(new MFFloat184().getArray()).setLlimit(new MFFloat185().getArray())
                                                    .addChild(new HAnimSegment("hanim_l_clavicle").setName(new SFString("SEGMENT_FOR_l_clavicle")).setDEF(new SFString("hanim_SEGMENT_FOR_l_clavicle"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_clavicle segment SEGMENT_FOR_l_clavicle")))
                                                      .addChild(new Transform().setTranslation(new float[] {0.1228f ,-0.1148f ,1.1833f })
                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_clavicle").setName(new SFString("SEGMENT_FOR_l_clavicle_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_clavicle_tip"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.1228f ,-0.1148f ,1.1833f })
                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                    .addChild(new HAnimJoint("hanim_l_clavicle").setName(new SFString("l_scapula")).setDEF(new SFString("hanim_l_scapula")).setCenter(new float[] {0.0383f ,-0.1157f ,1.2001f }).setUlimit(new MFFloat186().getArray()).setLlimit(new MFFloat187().getArray())
                                                      .addChild(new HAnimSegment("hanim_l_scapula").setName(new SFString("SEGMENT_FOR_l_scapula")).setDEF(new SFString("hanim_SEGMENT_FOR_l_scapula"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_scapula segment SEGMENT_FOR_l_scapula")))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0383f ,-0.1157f ,1.2001f })
                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_scapula").setName(new SFString("SEGMENT_FOR_l_scapula_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_scapula_tip"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0383f ,-0.1157f ,1.2001f })
                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                      .addChild(new HAnimJoint("hanim_l_scapula").setName(new SFString("l_upperarm")).setDEF(new SFString("hanim_l_upperarm")).setCenter(new float[] {0.1649f ,-0.1051f ,1.17f }).setUlimit(new MFFloat188().getArray()).setLlimit(new MFFloat189().getArray())
                                                        .addChild(new HAnimSegment("hanim_l_upperarm").setName(new SFString("SEGMENT_FOR_l_upperarm")).setDEF(new SFString("hanim_SEGMENT_FOR_l_upperarm"))
                                                          .addChild(new TouchSensor().setDescription(new SFString("joint l_upperarm segment SEGMENT_FOR_l_upperarm")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.1649f ,-0.1051f ,1.17f })
                                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_upperarm").setName(new SFString("SEGMENT_FOR_l_upperarm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_upperarm_tip"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1649f ,-0.1051f ,1.17f })
                                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                        .addChild(new HAnimJoint("hanim_l_upperarm").setName(new SFString("l_forearm")).setDEF(new SFString("hanim_l_forearm")).setCenter(new float[] {0.1819f ,-0.1075f ,0.9202f }).setUlimit(new MFFloat190().getArray()).setLlimit(new MFFloat191().getArray())
                                                          .addChild(new HAnimSegment("hanim_l_forearm").setName(new SFString("SEGMENT_FOR_l_forearm")).setDEF(new SFString("hanim_SEGMENT_FOR_l_forearm"))
                                                            .addChild(new TouchSensor().setDescription(new SFString("joint l_forearm segment SEGMENT_FOR_l_forearm")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1819f ,-0.1075f ,0.9202f })
                                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_forearm").setName(new SFString("SEGMENT_FOR_l_forearm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_forearm_tip"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1819f ,-0.1075f ,0.9202f })
                                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                          .addChild(new HAnimJoint("hanim_l_forearm").setName(new SFString("l_carpal")).setDEF(new SFString("hanim_l_carpal")).setCenter(new float[] {0.1818f ,-0.1069f ,0.7157f }).setUlimit(new MFFloat192().getArray()).setLlimit(new MFFloat193().getArray())
                                                            .addChild(new HAnimSegment("hanim_l_carpal").setName(new SFString("SEGMENT_FOR_l_carpal")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal segment SEGMENT_FOR_l_carpal")))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1818f ,-0.1069f ,0.7157f })
                                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal").setName(new SFString("SEGMENT_FOR_l_carpal_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_tip"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1818f ,-0.1069f ,0.7157f })
                                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_trapezium")).setDEF(new SFString("hanim_l_trapezium")).setCenter(new float[] {0.1811f ,-0.0826f ,0.6975f }).setUlimit(new MFFloat194().getArray()).setLlimit(new MFFloat195().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_trapezium").setName(new SFString("SEGMENT_FOR_l_trapezium")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezium"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_trapezium segment SEGMENT_FOR_l_trapezium")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0826f ,0.6975f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezium").setName(new SFString("SEGMENT_FOR_l_trapezium_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezium_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0826f ,0.6975f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezium").setName(new SFString("l_metacarpal_1")).setDEF(new SFString("hanim_l_metacarpal_1")).setCenter(new float[] {0.1803f ,-0.0759f ,0.684f }).setUlimit(new MFFloat196().getArray()).setLlimit(new MFFloat197().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_1").setName(new SFString("SEGMENT_FOR_l_metacarpal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_1"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1803f ,-0.0759f ,0.684f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_1").setName(new SFString("SEGMENT_FOR_l_metacarpal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_1_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1803f ,-0.0759f ,0.684f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_1").setName(new SFString("l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_1")).setCenter(new float[] {0.1809f ,-0.0661f ,0.6642f }).setUlimit(new MFFloat198().getArray()).setLlimit(new MFFloat199().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.0661f ,0.6642f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.0661f ,0.6642f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_1").setName(new SFString("l_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_1")).setCenter(new float[] {0.1825f ,-0.0522f ,0.6455f }).setUlimit(new MFFloat200().getArray()).setLlimit(new MFFloat201().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1825f ,-0.0522f ,0.6455f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1825f ,-0.0522f ,0.6455f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_trapezoid")).setDEF(new SFString("hanim_l_trapezoid")).setCenter(new float[] {0.1811f ,-0.0935f ,0.6984f }).setUlimit(new MFFloat202().getArray()).setLlimit(new MFFloat203().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_trapezoid").setName(new SFString("SEGMENT_FOR_l_trapezoid")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezoid"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0935f ,0.6984f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezoid").setName(new SFString("SEGMENT_FOR_l_trapezoid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezoid_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0935f ,0.6984f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezoid").setName(new SFString("l_metacarpal_2")).setDEF(new SFString("hanim_l_metacarpal_2")).setCenter(new float[] {0.1811f ,-0.0922f ,0.679f }).setUlimit(new MFFloat204().getArray()).setLlimit(new MFFloat205().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_2").setName(new SFString("SEGMENT_FOR_l_metacarpal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_2"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0922f ,0.679f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_2").setName(new SFString("SEGMENT_FOR_l_metacarpal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_2_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0922f ,0.679f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_2").setName(new SFString("l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_2")).setCenter(new float[] {0.1836f ,-0.0868f ,0.6286f }).setUlimit(new MFFloat206().getArray()).setLlimit(new MFFloat207().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1836f ,-0.0868f ,0.6286f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1836f ,-0.0868f ,0.6286f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_2").setName(new SFString("l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_2")).setCenter(new float[] {0.1815f ,-0.0877f ,0.5983f }).setUlimit(new MFFloat208().getArray()).setLlimit(new MFFloat209().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.0877f ,0.5983f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.0877f ,0.5983f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_2").setName(new SFString("l_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_2")).setCenter(new float[] {0.1805f ,-0.0885f ,0.5731f }).setUlimit(new MFFloat210().getArray()).setLlimit(new MFFloat211().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.0885f ,0.5731f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.0885f ,0.5731f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_capitate")).setDEF(new SFString("hanim_l_capitate")).setCenter(new float[] {0.1809f ,-0.1067f ,0.7f }).setUlimit(new MFFloat212().getArray()).setLlimit(new MFFloat213().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_capitate").setName(new SFString("SEGMENT_FOR_l_capitate")).setDEF(new SFString("hanim_SEGMENT_FOR_l_capitate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_capitate segment SEGMENT_FOR_l_capitate")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1067f ,0.7f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_capitate").setName(new SFString("SEGMENT_FOR_l_capitate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_capitate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1067f ,0.7f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_capitate").setName(new SFString("l_metacarpal_3")).setDEF(new SFString("hanim_l_metacarpal_3")).setCenter(new float[] {0.1809f ,-0.1081f ,0.6772f }).setUlimit(new MFFloat214().getArray()).setLlimit(new MFFloat215().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_3").setName(new SFString("SEGMENT_FOR_l_metacarpal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_3"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1081f ,0.6772f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_3").setName(new SFString("SEGMENT_FOR_l_metacarpal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_3_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1081f ,0.6772f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_3").setName(new SFString("l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_3")).setCenter(new float[] {0.1835f ,-0.1058f ,0.6264f }).setUlimit(new MFFloat216().getArray()).setLlimit(new MFFloat217().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1058f ,0.6264f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1058f ,0.6264f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_3").setName(new SFString("l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_3")).setCenter(new float[] {0.1815f ,-0.1054f ,0.5947f }).setUlimit(new MFFloat218().getArray()).setLlimit(new MFFloat219().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1054f ,0.5947f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1054f ,0.5947f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_3").setName(new SFString("l_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_3")).setCenter(new float[] {0.1805f ,-0.1056f ,0.5668f }).setUlimit(new MFFloat220().getArray()).setLlimit(new MFFloat221().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1056f ,0.5668f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1056f ,0.5668f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_hamate")).setDEF(new SFString("hanim_l_hamate")).setCenter(new float[] {0.1809f ,-0.1276f ,0.6973f }).setUlimit(new MFFloat222().getArray()).setLlimit(new MFFloat223().getArray())
                                                              .addChild(new HAnimSegment("hanim_l_hamate").setName(new SFString("SEGMENT_FOR_l_hamate")).setDEF(new SFString("hanim_SEGMENT_FOR_l_hamate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_hamate segment SEGMENT_FOR_l_hamate")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1276f ,0.6973f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_hamate").setName(new SFString("SEGMENT_FOR_l_hamate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_hamate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1276f ,0.6973f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName(new SFString("l_metacarpal_4")).setDEF(new SFString("hanim_l_metacarpal_4")).setCenter(new float[] {0.1809f ,-0.1218f ,0.6777f }).setUlimit(new MFFloat224().getArray()).setLlimit(new MFFloat225().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_4").setName(new SFString("SEGMENT_FOR_l_metacarpal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_4"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1218f ,0.6777f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_4").setName(new SFString("SEGMENT_FOR_l_metacarpal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_4_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1218f ,0.6777f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_4").setName(new SFString("l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_4")).setCenter(new float[] {0.1835f ,-0.1233f ,0.6255f }).setUlimit(new MFFloat226().getArray()).setLlimit(new MFFloat227().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1233f ,0.6255f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1233f ,0.6255f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_4").setName(new SFString("l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_4")).setCenter(new float[] {0.1815f ,-0.1225f ,0.598f }).setUlimit(new MFFloat228().getArray()).setLlimit(new MFFloat229().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1225f ,0.598f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1225f ,0.598f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_4").setName(new SFString("l_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_4")).setCenter(new float[] {0.1805f ,-0.1217f ,0.5722f }).setUlimit(new MFFloat230().getArray()).setLlimit(new MFFloat231().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1217f ,0.5722f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1217f ,0.5722f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName(new SFString("l_metacarpal_5")).setDEF(new SFString("hanim_l_metacarpal_5")).setCenter(new float[] {0.1815f ,-0.1347f ,0.6797f }).setUlimit(new MFFloat232().getArray()).setLlimit(new MFFloat233().getArray())
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_5").setName(new SFString("SEGMENT_FOR_l_metacarpal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_5"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1347f ,0.6797f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_5").setName(new SFString("SEGMENT_FOR_l_metacarpal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_5_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1347f ,0.6797f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_5").setName(new SFString("l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_5")).setCenter(new float[] {0.1832f ,-0.1389f ,0.6295f }).setUlimit(new MFFloat234().getArray()).setLlimit(new MFFloat235().getArray())
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1832f ,-0.1389f ,0.6295f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1832f ,-0.1389f ,0.6295f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_5").setName(new SFString("l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_5")).setCenter(new float[] {0.1815f ,-0.139f ,0.6124f }).setUlimit(new MFFloat236().getArray()).setLlimit(new MFFloat237().getArray())
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.139f ,0.6124f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.139f ,0.6124f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_5").setName(new SFString("l_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_5")).setCenter(new float[] {0.1806f ,-0.1388f ,0.5938f }).setUlimit(new MFFloat238().getArray()).setLlimit(new MFFloat239().getArray())
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1806f ,-0.1388f ,0.5938f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1806f ,-0.1388f ,0.5938f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName(new SFString("r_clavicle")).setDEF(new SFString("hanim_r_clavicle")).setCenter(new float[] {-0.1231f ,-0.1148f ,1.1833f }).setUlimit(new MFFloat240().getArray()).setLlimit(new MFFloat241().getArray())
                                                    .addChild(new HAnimSegment("hanim_r_clavicle").setName(new SFString("SEGMENT_FOR_r_clavicle")).setDEF(new SFString("hanim_SEGMENT_FOR_r_clavicle"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_clavicle segment SEGMENT_FOR_r_clavicle")))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1231f ,-0.1148f ,1.1833f })
                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_clavicle").setName(new SFString("SEGMENT_FOR_r_clavicle_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_clavicle_tip"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1231f ,-0.1148f ,1.1833f })
                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                    .addChild(new HAnimJoint("hanim_r_clavicle").setName(new SFString("r_scapula")).setDEF(new SFString("hanim_r_scapula")).setCenter(new float[] {-0.0387f ,-0.1157f ,1.2001f }).setUlimit(new MFFloat242().getArray()).setLlimit(new MFFloat243().getArray())
                                                      .addChild(new HAnimSegment("hanim_r_scapula").setName(new SFString("SEGMENT_FOR_r_scapula")).setDEF(new SFString("hanim_SEGMENT_FOR_r_scapula"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_scapula segment SEGMENT_FOR_r_scapula")))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.0387f ,-0.1157f ,1.2001f })
                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_scapula").setName(new SFString("SEGMENT_FOR_r_scapula_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_scapula_tip"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.0387f ,-0.1157f ,1.2001f })
                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                      .addChild(new HAnimJoint("hanim_r_scapula").setName(new SFString("r_upperarm")).setDEF(new SFString("hanim_r_upperarm")).setCenter(new float[] {-0.1649f ,-0.1051f ,1.17f }).setUlimit(new MFFloat244().getArray()).setLlimit(new MFFloat245().getArray())
                                                        .addChild(new HAnimSegment("hanim_r_upperarm").setName(new SFString("SEGMENT_FOR_r_upperarm")).setDEF(new SFString("hanim_SEGMENT_FOR_r_upperarm"))
                                                          .addChild(new TouchSensor().setDescription(new SFString("joint r_upperarm segment SEGMENT_FOR_r_upperarm")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1649f ,-0.1051f ,1.17f })
                                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_upperarm").setName(new SFString("SEGMENT_FOR_r_upperarm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_upperarm_tip"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1649f ,-0.1051f ,1.17f })
                                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                        .addChild(new HAnimJoint("hanim_r_upperarm").setName(new SFString("r_forearm")).setDEF(new SFString("hanim_r_forearm")).setCenter(new float[] {-0.1819f ,-0.1075f ,0.9202f }).setUlimit(new MFFloat246().getArray()).setLlimit(new MFFloat247().getArray())
                                                          .addChild(new HAnimSegment("hanim_r_forearm").setName(new SFString("SEGMENT_FOR_r_forearm")).setDEF(new SFString("hanim_SEGMENT_FOR_r_forearm"))
                                                            .addChild(new TouchSensor().setDescription(new SFString("joint r_forearm segment SEGMENT_FOR_r_forearm")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1819f ,-0.1075f ,0.9202f })
                                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_forearm").setName(new SFString("SEGMENT_FOR_r_forearm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_forearm_tip"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1819f ,-0.1075f ,0.9202f })
                                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                          .addChild(new HAnimJoint("hanim_r_forearm").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal")).setCenter(new float[] {-0.1818f ,-0.1069f ,0.7157f }).setUlimit(new MFFloat248().getArray()).setLlimit(new MFFloat249().getArray())
                                                            .addChild(new HAnimSegment("hanim_r_carpal").setName(new SFString("SEGMENT_FOR_r_carpal")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal segment SEGMENT_FOR_r_carpal")))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1818f ,-0.1069f ,0.7157f })
                                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal").setName(new SFString("SEGMENT_FOR_r_carpal_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_tip"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1818f ,-0.1069f ,0.7157f })
                                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_trapezium")).setDEF(new SFString("hanim_r_trapezium")).setCenter(new float[] {-0.1811f ,-0.0826f ,0.6975f }).setUlimit(new MFFloat250().getArray()).setLlimit(new MFFloat251().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_trapezium").setName(new SFString("SEGMENT_FOR_r_trapezium")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezium"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_trapezium segment SEGMENT_FOR_r_trapezium")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0826f ,0.6975f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezium").setName(new SFString("SEGMENT_FOR_r_trapezium_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezium_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0826f ,0.6975f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezium").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("hanim_r_metacarpal_1")).setCenter(new float[] {-0.1803f ,-0.0759f ,0.684f }).setUlimit(new MFFloat252().getArray()).setLlimit(new MFFloat253().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_1").setName(new SFString("SEGMENT_FOR_r_metacarpal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_1"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1803f ,-0.0759f ,0.684f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_1").setName(new SFString("SEGMENT_FOR_r_metacarpal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_1_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1803f ,-0.0759f ,0.684f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_1")).setCenter(new float[] {-0.1808f ,-0.0661f ,0.6642f }).setUlimit(new MFFloat254().getArray()).setLlimit(new MFFloat255().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1808f ,-0.0661f ,0.6642f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1808f ,-0.0661f ,0.6642f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_1").setName(new SFString("r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_1")).setCenter(new float[] {-0.1825f ,-0.0522f ,0.6455f }).setUlimit(new MFFloat256().getArray()).setLlimit(new MFFloat257().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1825f ,-0.0522f ,0.6455f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1825f ,-0.0522f ,0.6455f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_trapezoid")).setDEF(new SFString("hanim_r_trapezoid")).setCenter(new float[] {-0.1811f ,-0.0935f ,0.6984f }).setUlimit(new MFFloat258().getArray()).setLlimit(new MFFloat259().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_trapezoid").setName(new SFString("SEGMENT_FOR_r_trapezoid")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezoid"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0935f ,0.6984f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezoid").setName(new SFString("SEGMENT_FOR_r_trapezoid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezoid_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0935f ,0.6984f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezoid").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("hanim_r_metacarpal_2")).setCenter(new float[] {-0.1811f ,-0.0922f ,0.679f }).setUlimit(new MFFloat260().getArray()).setLlimit(new MFFloat261().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_2").setName(new SFString("SEGMENT_FOR_r_metacarpal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_2"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0922f ,0.679f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_2").setName(new SFString("SEGMENT_FOR_r_metacarpal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_2_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0922f ,0.679f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_2")).setCenter(new float[] {-0.1835f ,-0.0868f ,0.6286f }).setUlimit(new MFFloat262().getArray()).setLlimit(new MFFloat263().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.0868f ,0.6286f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.0868f ,0.6286f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_2")).setCenter(new float[] {-0.1815f ,-0.0877f ,0.5983f }).setUlimit(new MFFloat264().getArray()).setLlimit(new MFFloat265().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.0877f ,0.5983f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.0877f ,0.5983f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_2").setName(new SFString("r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_2")).setCenter(new float[] {-0.1805f ,-0.0885f ,0.5731f }).setUlimit(new MFFloat266().getArray()).setLlimit(new MFFloat267().getArray())
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2")))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.0885f ,0.5731f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.0885f ,0.5731f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_capitate")).setDEF(new SFString("hanim_r_capitate")).setCenter(new float[] {-0.1809f ,-0.1067f ,0.7f }).setUlimit(new MFFloat268().getArray()).setLlimit(new MFFloat269().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_capitate").setName(new SFString("SEGMENT_FOR_r_capitate")).setDEF(new SFString("hanim_SEGMENT_FOR_r_capitate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_capitate segment SEGMENT_FOR_r_capitate")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1067f ,0.7f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_capitate").setName(new SFString("SEGMENT_FOR_r_capitate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_capitate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1067f ,0.7f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_capitate").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("hanim_r_metacarpal_3")).setCenter(new float[] {-0.1809f ,-0.1081f ,0.6772f }).setUlimit(new MFFloat270().getArray()).setLlimit(new MFFloat271().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_3").setName(new SFString("SEGMENT_FOR_r_metacarpal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_3"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1081f ,0.6772f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_3").setName(new SFString("SEGMENT_FOR_r_metacarpal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_3_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1081f ,0.6772f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_3")).setCenter(new float[] {-0.1835f ,-0.1058f ,0.6264f }).setUlimit(new MFFloat272().getArray()).setLlimit(new MFFloat273().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1058f ,0.6264f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1058f ,0.6264f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_3")).setCenter(new float[] {-0.1815f ,-0.1054f ,0.5947f }).setUlimit(new MFFloat274().getArray()).setLlimit(new MFFloat275().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1054f ,0.5947f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1054f ,0.5947f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_3").setName(new SFString("r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_3")).setCenter(new float[] {-0.1805f ,-0.1056f ,0.5668f }).setUlimit(new MFFloat276().getArray()).setLlimit(new MFFloat277().getArray())
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3")))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1056f ,0.5668f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1056f ,0.5668f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_hamate")).setDEF(new SFString("hanim_r_hamate")).setCenter(new float[] {-0.1809f ,-0.1276f ,0.6973f }).setUlimit(new MFFloat278().getArray()).setLlimit(new MFFloat279().getArray())
                                                              .addChild(new HAnimSegment("hanim_r_hamate").setName(new SFString("SEGMENT_FOR_r_hamate")).setDEF(new SFString("hanim_SEGMENT_FOR_r_hamate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_hamate segment SEGMENT_FOR_r_hamate")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1276f ,0.6973f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_hamate").setName(new SFString("SEGMENT_FOR_r_hamate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_hamate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1276f ,0.6973f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("hanim_r_metacarpal_4")).setCenter(new float[] {-0.1809f ,-0.1218f ,0.6777f }).setUlimit(new MFFloat280().getArray()).setLlimit(new MFFloat281().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_4").setName(new SFString("SEGMENT_FOR_r_metacarpal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_4"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1218f ,0.6777f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_4").setName(new SFString("SEGMENT_FOR_r_metacarpal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_4_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1218f ,0.6777f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_4")).setCenter(new float[] {-0.1835f ,-0.1233f ,0.6255f }).setUlimit(new MFFloat282().getArray()).setLlimit(new MFFloat283().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1233f ,0.6255f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1233f ,0.6255f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_4")).setCenter(new float[] {-0.1815f ,-0.1225f ,0.598f }).setUlimit(new MFFloat284().getArray()).setLlimit(new MFFloat285().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1225f ,0.598f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1225f ,0.598f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_4").setName(new SFString("r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_4")).setCenter(new float[] {-0.1805f ,-0.1217f ,0.5722f }).setUlimit(new MFFloat286().getArray()).setLlimit(new MFFloat287().getArray())
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4")))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1217f ,0.5722f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1217f ,0.5722f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("hanim_r_metacarpal_5")).setCenter(new float[] {-0.1814f ,-0.1347f ,0.6797f }).setUlimit(new MFFloat288().getArray()).setLlimit(new MFFloat289().getArray())
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_5").setName(new SFString("SEGMENT_FOR_r_metacarpal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_5"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1814f ,-0.1347f ,0.6797f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_5").setName(new SFString("SEGMENT_FOR_r_metacarpal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_5_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1814f ,-0.1347f ,0.6797f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_5")).setCenter(new float[] {-0.1832f ,-0.1389f ,0.6295f }).setUlimit(new MFFloat290().getArray()).setLlimit(new MFFloat291().getArray())
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1832f ,-0.1389f ,0.6295f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1832f ,-0.1389f ,0.6295f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_5")).setCenter(new float[] {-0.1815f ,-0.139f ,0.6124f }).setUlimit(new MFFloat292().getArray()).setLlimit(new MFFloat293().getArray())
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.139f ,0.6124f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.139f ,0.6124f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_5").setName(new SFString("r_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_5")).setCenter(new float[] {-0.1806f ,-0.1388f ,0.5938f }).setUlimit(new MFFloat294().getArray()).setLlimit(new MFFloat295().getArray())
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5")))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1806f ,-0.1388f ,0.5938f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {-0.1806f ,-0.1388f ,0.5938f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))))))))))))))))))))))))))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_sacrum")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_pelvis")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_thigh")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_calf")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_talus")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_navicular")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_cuneiform_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metatarsal_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_proximal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_distal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_cuneiform_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metatarsal_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_proximal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_middle_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_distal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_cuneiform_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metatarsal_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_proximal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_middle_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_distal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_calcaneus")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_cuboid")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metatarsal_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_proximal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_middle_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_distal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metatarsal_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_proximal_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_middle_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_tarsal_distal_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_thigh")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_calf")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_talus")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_navicular")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_cuneiform_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metatarsal_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_proximal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_distal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_cuneiform_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metatarsal_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_proximal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_middle_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_distal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_cuneiform_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metatarsal_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_proximal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_middle_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_distal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_calcaneus")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_cuboid")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metatarsal_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_proximal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_middle_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_distal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metatarsal_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_proximal_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_middle_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_tarsal_distal_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t12")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t11")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t10")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t9")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t8")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t7")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t6")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_t1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_c7")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_c6")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_c5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_c4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_c3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_c2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_c1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_skull")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_eyelid")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_eyelid")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_eyeball")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_eyeball")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_eyebrow")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_eyebrow")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_jaw")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_clavicle")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_scapula")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_upperarm")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_forearm")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_trapezium")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metacarpal_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_proximal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_distal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_trapezoid")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metacarpal_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_proximal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_middle_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_distal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_capitate")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metacarpal_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_proximal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_middle_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_distal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_hamate")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metacarpal_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_proximal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_middle_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_distal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_metacarpal_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_proximal_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_middle_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_l_carpal_distal_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_clavicle")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_scapula")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_upperarm")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_forearm")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_trapezium")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metacarpal_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_proximal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_distal_phalanx_1")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_trapezoid")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metacarpal_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_proximal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_middle_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_distal_phalanx_2")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_capitate")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metacarpal_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_proximal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_middle_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_distal_phalanx_3")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_hamate")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metacarpal_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_proximal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_middle_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_distal_phalanx_4")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_metacarpal_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_proximal_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_middle_phalanx_5")))
            .addJoints(new HAnimJoint("hanim_humanoid").setUSE(new SFString("hanim_r_carpal_distal_phalanx_5")))))
        .addChild(new TimeSensor().setDEF(new SFString("Armature_Clock")).setCycleInterval(10.416666666666666d).setLoop(true))
        .addChild(new ProximitySensor().setDEF(new SFString("Armature_Close")).setSize(new float[] {1000000f ,1000000f ,1000000f }))
        .addChild(new ROUTE().setFromField(new SFString("enterTime")).setFromNode(new SFString("Armature_Close")).setToField(new SFString("startTime")).setToNode(new SFString("Armature_Clock")))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_sacrum")).setKey(new MFFloat296().getArray()).setKeyValue(new MFRotation297().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_pelvis")).setKey(new MFFloat298().getArray()).setKeyValue(new MFRotation299().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_thigh")).setKey(new MFFloat300().getArray()).setKeyValue(new MFRotation301().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_calf")).setKey(new MFFloat302().getArray()).setKeyValue(new MFRotation303().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_talus")).setKey(new MFFloat304().getArray()).setKeyValue(new MFRotation305().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_navicular")).setKey(new MFFloat306().getArray()).setKeyValue(new MFRotation307().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuneiform_1")).setKey(new MFFloat308().getArray()).setKeyValue(new MFRotation309().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_1")).setKey(new MFFloat310().getArray()).setKeyValue(new MFRotation311().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_1")).setKey(new MFFloat312().getArray()).setKeyValue(new MFRotation313().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_1")).setKey(new MFFloat314().getArray()).setKeyValue(new MFRotation315().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuneiform_2")).setKey(new MFFloat316().getArray()).setKeyValue(new MFRotation317().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_2")).setKey(new MFFloat318().getArray()).setKeyValue(new MFRotation319().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_2")).setKey(new MFFloat320().getArray()).setKeyValue(new MFRotation321().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_2")).setKey(new MFFloat322().getArray()).setKeyValue(new MFRotation323().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_2")).setKey(new MFFloat324().getArray()).setKeyValue(new MFRotation325().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuneiform_3")).setKey(new MFFloat326().getArray()).setKeyValue(new MFRotation327().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_3")).setKey(new MFFloat328().getArray()).setKeyValue(new MFRotation329().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_3")).setKey(new MFFloat330().getArray()).setKeyValue(new MFRotation331().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_3")).setKey(new MFFloat332().getArray()).setKeyValue(new MFRotation333().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_3")).setKey(new MFFloat334().getArray()).setKeyValue(new MFRotation335().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_calcaneus")).setKey(new MFFloat336().getArray()).setKeyValue(new MFRotation337().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuboid")).setKey(new MFFloat338().getArray()).setKeyValue(new MFRotation339().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_4")).setKey(new MFFloat340().getArray()).setKeyValue(new MFRotation341().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_4")).setKey(new MFFloat342().getArray()).setKeyValue(new MFRotation343().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_4")).setKey(new MFFloat344().getArray()).setKeyValue(new MFRotation345().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_4")).setKey(new MFFloat346().getArray()).setKeyValue(new MFRotation347().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_5")).setKey(new MFFloat348().getArray()).setKeyValue(new MFRotation349().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_5")).setKey(new MFFloat350().getArray()).setKeyValue(new MFRotation351().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_5")).setKey(new MFFloat352().getArray()).setKeyValue(new MFRotation353().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_5")).setKey(new MFFloat354().getArray()).setKeyValue(new MFRotation355().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_thigh")).setKey(new MFFloat356().getArray()).setKeyValue(new MFRotation357().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_calf")).setKey(new MFFloat358().getArray()).setKeyValue(new MFRotation359().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_talus")).setKey(new MFFloat360().getArray()).setKeyValue(new MFRotation361().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_navicular")).setKey(new MFFloat362().getArray()).setKeyValue(new MFRotation363().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuneiform_1")).setKey(new MFFloat364().getArray()).setKeyValue(new MFRotation365().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_1")).setKey(new MFFloat366().getArray()).setKeyValue(new MFRotation367().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_1")).setKey(new MFFloat368().getArray()).setKeyValue(new MFRotation369().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_1")).setKey(new MFFloat370().getArray()).setKeyValue(new MFRotation371().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuneiform_2")).setKey(new MFFloat372().getArray()).setKeyValue(new MFRotation373().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_2")).setKey(new MFFloat374().getArray()).setKeyValue(new MFRotation375().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_2")).setKey(new MFFloat376().getArray()).setKeyValue(new MFRotation377().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_2")).setKey(new MFFloat378().getArray()).setKeyValue(new MFRotation379().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_2")).setKey(new MFFloat380().getArray()).setKeyValue(new MFRotation381().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuneiform_3")).setKey(new MFFloat382().getArray()).setKeyValue(new MFRotation383().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_3")).setKey(new MFFloat384().getArray()).setKeyValue(new MFRotation385().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_3")).setKey(new MFFloat386().getArray()).setKeyValue(new MFRotation387().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_3")).setKey(new MFFloat388().getArray()).setKeyValue(new MFRotation389().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_3")).setKey(new MFFloat390().getArray()).setKeyValue(new MFRotation391().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_calcaneus")).setKey(new MFFloat392().getArray()).setKeyValue(new MFRotation393().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuboid")).setKey(new MFFloat394().getArray()).setKeyValue(new MFRotation395().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_4")).setKey(new MFFloat396().getArray()).setKeyValue(new MFRotation397().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_4")).setKey(new MFFloat398().getArray()).setKeyValue(new MFRotation399().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_4")).setKey(new MFFloat400().getArray()).setKeyValue(new MFRotation401().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_4")).setKey(new MFFloat402().getArray()).setKeyValue(new MFRotation403().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_5")).setKey(new MFFloat404().getArray()).setKeyValue(new MFRotation405().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_5")).setKey(new MFFloat406().getArray()).setKeyValue(new MFRotation407().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_5")).setKey(new MFFloat408().getArray()).setKeyValue(new MFRotation409().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_5")).setKey(new MFFloat410().getArray()).setKeyValue(new MFRotation411().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l5")).setKey(new MFFloat412().getArray()).setKeyValue(new MFRotation413().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l4")).setKey(new MFFloat414().getArray()).setKeyValue(new MFRotation415().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l3")).setKey(new MFFloat416().getArray()).setKeyValue(new MFRotation417().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l2")).setKey(new MFFloat418().getArray()).setKeyValue(new MFRotation419().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l1")).setKey(new MFFloat420().getArray()).setKeyValue(new MFRotation421().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t12")).setKey(new MFFloat422().getArray()).setKeyValue(new MFRotation423().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t11")).setKey(new MFFloat424().getArray()).setKeyValue(new MFRotation425().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t10")).setKey(new MFFloat426().getArray()).setKeyValue(new MFRotation427().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t9")).setKey(new MFFloat428().getArray()).setKeyValue(new MFRotation429().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t8")).setKey(new MFFloat430().getArray()).setKeyValue(new MFRotation431().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t7")).setKey(new MFFloat432().getArray()).setKeyValue(new MFRotation433().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t6")).setKey(new MFFloat434().getArray()).setKeyValue(new MFRotation435().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t5")).setKey(new MFFloat436().getArray()).setKeyValue(new MFRotation437().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t4")).setKey(new MFFloat438().getArray()).setKeyValue(new MFRotation439().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t3")).setKey(new MFFloat440().getArray()).setKeyValue(new MFRotation441().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t2")).setKey(new MFFloat442().getArray()).setKeyValue(new MFRotation443().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t1")).setKey(new MFFloat444().getArray()).setKeyValue(new MFRotation445().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c7")).setKey(new MFFloat446().getArray()).setKeyValue(new MFRotation447().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c6")).setKey(new MFFloat448().getArray()).setKeyValue(new MFRotation449().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c5")).setKey(new MFFloat450().getArray()).setKeyValue(new MFRotation451().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c4")).setKey(new MFFloat452().getArray()).setKeyValue(new MFRotation453().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c3")).setKey(new MFFloat454().getArray()).setKeyValue(new MFRotation455().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c2")).setKey(new MFFloat456().getArray()).setKeyValue(new MFRotation457().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c1")).setKey(new MFFloat458().getArray()).setKeyValue(new MFRotation459().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_skull")).setKey(new MFFloat460().getArray()).setKeyValue(new MFRotation461().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_eyelid")).setKey(new MFFloat462().getArray()).setKeyValue(new MFRotation463().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_eyelid")).setKey(new MFFloat464().getArray()).setKeyValue(new MFRotation465().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_eyeball")).setKey(new MFFloat466().getArray()).setKeyValue(new MFRotation467().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_eyeball")).setKey(new MFFloat468().getArray()).setKeyValue(new MFRotation469().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_eyebrow")).setKey(new MFFloat470().getArray()).setKeyValue(new MFRotation471().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_eyebrow")).setKey(new MFFloat472().getArray()).setKeyValue(new MFRotation473().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_jaw")).setKey(new MFFloat474().getArray()).setKeyValue(new MFRotation475().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_clavicle")).setKey(new MFFloat476().getArray()).setKeyValue(new MFRotation477().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_scapula")).setKey(new MFFloat478().getArray()).setKeyValue(new MFRotation479().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_upperarm")).setKey(new MFFloat480().getArray()).setKeyValue(new MFRotation481().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_forearm")).setKey(new MFFloat482().getArray()).setKeyValue(new MFRotation483().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal")).setKey(new MFFloat484().getArray()).setKeyValue(new MFRotation485().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_trapezium")).setKey(new MFFloat486().getArray()).setKeyValue(new MFRotation487().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_1")).setKey(new MFFloat488().getArray()).setKeyValue(new MFRotation489().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_1")).setKey(new MFFloat490().getArray()).setKeyValue(new MFRotation491().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_1")).setKey(new MFFloat492().getArray()).setKeyValue(new MFRotation493().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_trapezoid")).setKey(new MFFloat494().getArray()).setKeyValue(new MFRotation495().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_2")).setKey(new MFFloat496().getArray()).setKeyValue(new MFRotation497().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_2")).setKey(new MFFloat498().getArray()).setKeyValue(new MFRotation499().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_2")).setKey(new MFFloat500().getArray()).setKeyValue(new MFRotation501().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_2")).setKey(new MFFloat502().getArray()).setKeyValue(new MFRotation503().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_capitate")).setKey(new MFFloat504().getArray()).setKeyValue(new MFRotation505().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_3")).setKey(new MFFloat506().getArray()).setKeyValue(new MFRotation507().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_3")).setKey(new MFFloat508().getArray()).setKeyValue(new MFRotation509().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_3")).setKey(new MFFloat510().getArray()).setKeyValue(new MFRotation511().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_3")).setKey(new MFFloat512().getArray()).setKeyValue(new MFRotation513().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_hamate")).setKey(new MFFloat514().getArray()).setKeyValue(new MFRotation515().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_4")).setKey(new MFFloat516().getArray()).setKeyValue(new MFRotation517().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_4")).setKey(new MFFloat518().getArray()).setKeyValue(new MFRotation519().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_4")).setKey(new MFFloat520().getArray()).setKeyValue(new MFRotation521().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_4")).setKey(new MFFloat522().getArray()).setKeyValue(new MFRotation523().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_5")).setKey(new MFFloat524().getArray()).setKeyValue(new MFRotation525().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_5")).setKey(new MFFloat526().getArray()).setKeyValue(new MFRotation527().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_5")).setKey(new MFFloat528().getArray()).setKeyValue(new MFRotation529().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_5")).setKey(new MFFloat530().getArray()).setKeyValue(new MFRotation531().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_clavicle")).setKey(new MFFloat532().getArray()).setKeyValue(new MFRotation533().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_scapula")).setKey(new MFFloat534().getArray()).setKeyValue(new MFRotation535().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_upperarm")).setKey(new MFFloat536().getArray()).setKeyValue(new MFRotation537().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_forearm")).setKey(new MFFloat538().getArray()).setKeyValue(new MFRotation539().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal")).setKey(new MFFloat540().getArray()).setKeyValue(new MFRotation541().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_trapezium")).setKey(new MFFloat542().getArray()).setKeyValue(new MFRotation543().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_1")).setKey(new MFFloat544().getArray()).setKeyValue(new MFRotation545().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_1")).setKey(new MFFloat546().getArray()).setKeyValue(new MFRotation547().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_1")).setKey(new MFFloat548().getArray()).setKeyValue(new MFRotation549().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_trapezoid")).setKey(new MFFloat550().getArray()).setKeyValue(new MFRotation551().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_2")).setKey(new MFFloat552().getArray()).setKeyValue(new MFRotation553().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_2")).setKey(new MFFloat554().getArray()).setKeyValue(new MFRotation555().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_2")).setKey(new MFFloat556().getArray()).setKeyValue(new MFRotation557().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_2")).setKey(new MFFloat558().getArray()).setKeyValue(new MFRotation559().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_capitate")).setKey(new MFFloat560().getArray()).setKeyValue(new MFRotation561().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_3")).setKey(new MFFloat562().getArray()).setKeyValue(new MFRotation563().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_3")).setKey(new MFFloat564().getArray()).setKeyValue(new MFRotation565().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_3")).setKey(new MFFloat566().getArray()).setKeyValue(new MFRotation567().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_3")).setKey(new MFFloat568().getArray()).setKeyValue(new MFRotation569().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_hamate")).setKey(new MFFloat570().getArray()).setKeyValue(new MFRotation571().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_4")).setKey(new MFFloat572().getArray()).setKeyValue(new MFRotation573().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_4")).setKey(new MFFloat574().getArray()).setKeyValue(new MFRotation575().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_4")).setKey(new MFFloat576().getArray()).setKeyValue(new MFRotation577().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_4")).setKey(new MFFloat578().getArray()).setKeyValue(new MFRotation579().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_5")).setKey(new MFFloat580().getArray()).setKeyValue(new MFRotation581().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_5")).setKey(new MFFloat582().getArray()).setKeyValue(new MFRotation583().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_5")).setKey(new MFFloat584().getArray()).setKeyValue(new MFRotation585().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_5")).setKey(new MFFloat586().getArray()).setKeyValue(new MFRotation587().getArray()))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_sacrum")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_sacrum")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_sacrum")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_pelvis")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_pelvis")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_pelvis")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_thigh")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_thigh")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_thigh")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_calf")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_calf")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_calf")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_talus")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_talus")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_talus")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_navicular")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_navicular")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_navicular")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_cuneiform_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_cuneiform_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_cuneiform_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metatarsal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metatarsal_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metatarsal_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_cuneiform_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_cuneiform_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_cuneiform_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metatarsal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metatarsal_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metatarsal_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_cuneiform_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_cuneiform_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_cuneiform_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metatarsal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metatarsal_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metatarsal_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_calcaneus")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_calcaneus")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_calcaneus")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_cuboid")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_cuboid")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_cuboid")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metatarsal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metatarsal_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metatarsal_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metatarsal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metatarsal_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metatarsal_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_proximal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_middle_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_tarsal_distal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_tarsal_distal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_thigh")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_thigh")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_thigh")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_calf")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_calf")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_calf")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_talus")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_talus")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_talus")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_navicular")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_navicular")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_navicular")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_cuneiform_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_cuneiform_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_cuneiform_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metatarsal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metatarsal_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metatarsal_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_cuneiform_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_cuneiform_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_cuneiform_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metatarsal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metatarsal_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metatarsal_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_cuneiform_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_cuneiform_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_cuneiform_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metatarsal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metatarsal_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metatarsal_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_calcaneus")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_calcaneus")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_calcaneus")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_cuboid")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_cuboid")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_cuboid")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metatarsal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metatarsal_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metatarsal_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metatarsal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metatarsal_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metatarsal_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_proximal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_middle_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_tarsal_distal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_tarsal_distal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t12")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t12")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t12")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t11")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t11")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t11")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t10")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t10")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t10")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t9")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t9")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t9")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t8")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t8")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t8")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t7")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t7")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t7")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t6")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t6")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t6")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_t1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_t1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_t1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_c7")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_c7")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_c7")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_c6")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_c6")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_c6")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_c5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_c5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_c5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_c4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_c4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_c4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_c3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_c3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_c3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_c2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_c2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_c2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_c1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_c1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_c1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_skull")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_skull")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_skull")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_eyelid")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_eyelid")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_eyelid")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_eyelid")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_eyelid")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_eyelid")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_eyeball")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_eyeball")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_eyeball")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_eyeball")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_eyeball")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_eyeball")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_eyebrow")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_eyebrow")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_eyebrow")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_eyebrow")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_eyebrow")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_eyebrow")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_jaw")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_jaw")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_jaw")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_clavicle")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_clavicle")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_clavicle")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_scapula")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_scapula")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_scapula")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_upperarm")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_upperarm")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_upperarm")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_forearm")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_forearm")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_forearm")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_trapezium")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_trapezium")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_trapezium")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metacarpal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metacarpal_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metacarpal_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_distal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_trapezoid")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_trapezoid")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_trapezoid")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metacarpal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metacarpal_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metacarpal_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_middle_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_distal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_capitate")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_capitate")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_capitate")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metacarpal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metacarpal_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metacarpal_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_middle_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_distal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_hamate")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_hamate")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_hamate")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metacarpal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metacarpal_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metacarpal_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_middle_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_distal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_metacarpal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_metacarpal_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_metacarpal_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_proximal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_middle_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_l_carpal_distal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_l_carpal_distal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_l_carpal_distal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_clavicle")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_clavicle")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_clavicle")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_scapula")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_scapula")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_scapula")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_upperarm")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_upperarm")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_upperarm")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_forearm")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_forearm")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_forearm")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_trapezium")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_trapezium")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_trapezium")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metacarpal_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metacarpal_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metacarpal_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_proximal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_distal_phalanx_1")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_distal_phalanx_1")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_trapezoid")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_trapezoid")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_trapezoid")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metacarpal_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metacarpal_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metacarpal_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_proximal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_middle_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_middle_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_distal_phalanx_2")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_distal_phalanx_2")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_capitate")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_capitate")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_capitate")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metacarpal_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metacarpal_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metacarpal_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_proximal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_middle_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_middle_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_distal_phalanx_3")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_distal_phalanx_3")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_hamate")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_hamate")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_hamate")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metacarpal_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metacarpal_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metacarpal_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_proximal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_middle_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_middle_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_distal_phalanx_4")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_distal_phalanx_4")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_metacarpal_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_metacarpal_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_metacarpal_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_proximal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_proximal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_middle_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_middle_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Armature_Clock")).setToField(new SFString("set_fraction")).setToNode(new SFString("Armature_OI_r_carpal_distal_phalanx_5")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Armature_OI_r_carpal_distal_phalanx_5")).setToField(new SFString("rotation")).setToNode(new SFString("hanim_r_carpal_distal_phalanx_5"))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.05087608844041824f ,0.05087608844041824f ,0.05087608844041824f });
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.05087608844041824f ,0.05087608844041824f ,0.05087608844041824f });
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat23 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat27 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat29 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat31 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat33 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat37 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat39 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat41 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat48 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat53 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat54 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat55 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat57 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat59 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat61 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat63 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat65 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat67 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat69 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat70 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat71 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat72 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat73 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat75 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat76 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat77 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat79 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat80 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat81 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat83 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat85 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat87 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat89 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat91 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat93 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat95 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat97 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat99 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat101 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat103 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat105 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat106 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat107 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat109 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat111 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat113 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat114 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat115 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat117 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat119 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat120 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat121 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat122 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat123 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat124 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat125 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat126 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat127 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat128 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat129 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat130 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat131 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat132 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat133 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat134 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat135 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat136 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat137 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat138 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat139 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat141 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat142 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat143 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat145 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat146 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat147 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat148 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat149 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat150 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat151 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat152 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat153 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat154 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat155 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat157 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat159 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat160 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat161 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat163 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat165 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat166 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat167 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat168 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat169 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat171 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat173 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat174 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat175 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat177 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat178 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat179 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat181 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat182 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat183 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat185 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat186 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat187 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat189 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat190 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat191 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat192 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat193 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat195 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat197 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat198 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat199 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat201 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat202 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat203 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat205 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat206 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat207 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat209 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat210 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat211 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat213 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat215 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat216 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat217 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat219 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat220 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat221 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat222 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat223 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat225 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat226 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat227 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat229 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat230 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat231 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat233 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat234 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat235 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat237 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat238 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat239 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat241 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat242 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat243 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat245 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat247 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat249 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat250 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat251 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat252 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat253 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat254 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat255 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat257 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat258 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat259 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat261 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat262 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat263 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat265 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat266 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat267 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat269 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat270 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat271 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat273 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat274 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat275 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat277 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat278 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat279 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat281 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat282 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat283 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat285 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat286 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat287 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat288 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat289 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat290 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat291 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat293 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat294 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat295 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat296 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation297 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat298 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation299 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat300 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation301 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat302 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation303 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat304 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation305 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat306 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation307 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat308 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation309 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat310 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation311 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat312 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation313 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat314 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation315 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat316 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation317 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat318 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation319 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat320 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation321 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat322 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation323 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat324 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation325 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat326 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation327 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat328 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation329 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat330 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation331 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat332 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation333 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat334 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation335 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat336 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation337 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat338 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation339 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat340 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation341 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat342 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation343 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat344 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation345 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat346 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation347 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat348 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation349 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat350 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation351 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat352 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation353 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat354 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation355 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat356 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation357 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat358 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation359 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat360 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation361 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat362 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation363 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat364 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation365 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat366 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation367 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat368 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation369 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat370 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation371 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat372 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation373 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat374 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation375 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat376 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation377 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat378 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation379 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat380 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation381 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat382 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation383 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat384 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation385 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat386 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation387 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat388 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation389 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat390 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation391 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat392 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation393 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat394 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation395 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat396 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation397 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat398 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation399 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat400 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation401 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat402 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation403 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat404 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation405 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat406 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation407 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat408 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation409 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat410 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation411 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat412 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation413 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat414 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation415 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat416 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation417 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat418 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation419 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat420 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation421 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat422 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation423 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat424 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation425 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat426 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation427 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat428 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation429 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat430 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation431 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat432 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation433 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat434 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation435 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat436 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation437 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat438 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation439 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat440 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation441 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat442 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation443 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat444 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation445 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat446 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation447 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat448 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation449 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat450 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation451 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat452 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation453 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat454 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation455 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat456 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation457 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat458 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation459 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat460 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation461 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat462 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation463 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat464 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation465 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat466 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation467 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat468 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation469 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat470 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation471 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat472 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation473 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat474 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation475 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat476 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation477 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat478 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation479 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat480 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation481 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat482 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation483 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat484 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation485 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat486 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation487 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat488 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation489 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat490 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation491 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat492 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation493 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat494 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation495 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat496 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation497 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat498 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation499 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat500 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation501 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat502 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation503 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat504 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation505 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat506 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation507 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat508 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation509 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat510 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation511 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat512 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation513 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat514 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation515 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat516 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation517 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat518 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation519 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat520 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation521 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat522 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation523 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat524 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation525 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat526 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation527 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat528 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation529 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat530 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation531 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat532 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation533 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat534 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation535 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat536 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation537 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat538 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation539 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat540 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation541 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat542 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation543 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat544 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation545 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat546 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation547 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat548 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation549 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat550 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation551 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat552 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation553 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat554 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation555 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat556 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation557 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat558 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation559 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat560 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation561 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat562 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation563 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat564 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation565 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat566 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation567 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat568 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation569 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat570 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation571 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat572 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation573 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat574 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation575 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat576 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation577 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat578 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation579 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat580 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation581 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat582 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation583 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat584 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation585 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat586 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation587 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
}
