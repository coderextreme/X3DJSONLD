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
import org.web3d.x3d.jsail.Interpolation.OrientationInterpolator;
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
            .addSkeleton(new HAnimJoint("hanim_humanoid").setName(new SFString("Armature")).setDEF(new SFString("hanim_Armature"))
              .addChild(new HAnimSegment("hanim_Armature").setName(new SFString("SEGMENT_FOR_Armature")).setDEF(new SFString("hanim_SEGMENT_FOR_Armature"))
                .addChild(new TouchSensor().setDescription(new SFString("joint Armature segment SEGMENT_FOR_Armature")))
                .addChild(new Transform()
                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                .addChild(new HAnimSite("hanim_SEGMENT_FOR_Armature").setName(new SFString("SEGMENT_FOR_Armature_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_Armature_tip"))
                  .addChild(new Transform()
                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
              .addChild(new HAnimJoint("hanim_Armature").setName(new SFString("sacrum")).setDEF(new SFString("hanim_sacrum")).setCenter(new float[] {-0.0002f ,-0.1178f ,0.8174f })
                .addChild(new HAnimSegment("hanim_sacrum").setName(new SFString("SEGMENT_FOR_sacrum")).setDEF(new SFString("hanim_SEGMENT_FOR_sacrum"))
                  .addChild(new TouchSensor().setDescription(new SFString("joint sacrum segment SEGMENT_FOR_sacrum")))
                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.8174f })
                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_sacrum").setName(new SFString("SEGMENT_FOR_sacrum_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_sacrum_tip"))
                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.8174f })
                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                .addChild(new HAnimJoint("hanim_sacrum").setName(new SFString("pelvis")).setDEF(new SFString("hanim_pelvis")).setCenter(new float[] {-0.0002f ,-0.1178f ,0.6986f })
                  .addChild(new HAnimSegment("hanim_pelvis").setName(new SFString("SEGMENT_FOR_pelvis")).setDEF(new SFString("hanim_SEGMENT_FOR_pelvis"))
                    .addChild(new TouchSensor().setDescription(new SFString("joint pelvis segment SEGMENT_FOR_pelvis")))
                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.6986f })
                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_pelvis").setName(new SFString("SEGMENT_FOR_pelvis_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_pelvis_tip"))
                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1178f ,0.6986f })
                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName(new SFString("l_thigh")).setDEF(new SFString("hanim_l_thigh")).setCenter(new float[] {0.0945f ,-0.1202f ,0.8181f })
                    .addChild(new HAnimSegment("hanim_l_thigh").setName(new SFString("SEGMENT_FOR_l_thigh")).setDEF(new SFString("hanim_SEGMENT_FOR_l_thigh"))
                      .addChild(new TouchSensor().setDescription(new SFString("joint l_thigh segment SEGMENT_FOR_l_thigh")))
                      .addChild(new Transform().setTranslation(new float[] {0.0945f ,-0.1202f ,0.8181f })
                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_thigh").setName(new SFString("SEGMENT_FOR_l_thigh_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_thigh_tip"))
                        .addChild(new Transform().setTranslation(new float[] {0.0945f ,-0.1202f ,0.8181f })
                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                    .addChild(new HAnimJoint("hanim_l_thigh").setName(new SFString("l_calf")).setDEF(new SFString("hanim_l_calf")).setCenter(new float[] {0.0924f ,-0.1213f ,0.4003f })
                      .addChild(new HAnimSegment("hanim_l_calf").setName(new SFString("SEGMENT_FOR_l_calf")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calf"))
                        .addChild(new TouchSensor().setDescription(new SFString("joint l_calf segment SEGMENT_FOR_l_calf")))
                        .addChild(new Transform().setTranslation(new float[] {0.0924f ,-0.1213f ,0.4003f })
                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calf").setName(new SFString("SEGMENT_FOR_l_calf_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calf_tip"))
                          .addChild(new Transform().setTranslation(new float[] {0.0924f ,-0.1213f ,0.4003f })
                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                      .addChild(new HAnimJoint("hanim_l_calf").setName(new SFString("l_talus")).setDEF(new SFString("hanim_l_talus")).setCenter(new float[] {0.0886f ,-0.1123f ,0.0869f })
                        .addChild(new HAnimSegment("hanim_l_talus").setName(new SFString("SEGMENT_FOR_l_talus")).setDEF(new SFString("hanim_SEGMENT_FOR_l_talus"))
                          .addChild(new TouchSensor().setDescription(new SFString("joint l_talus segment SEGMENT_FOR_l_talus")))
                          .addChild(new Transform().setTranslation(new float[] {0.0886f ,-0.1123f ,0.0869f })
                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_talus").setName(new SFString("SEGMENT_FOR_l_talus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_talus_tip"))
                            .addChild(new Transform().setTranslation(new float[] {0.0886f ,-0.1123f ,0.0869f })
                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName(new SFString("l_navicular")).setDEF(new SFString("hanim_l_navicular")).setCenter(new float[] {0.0781f ,-0.097f ,0.0283f })
                          .addChild(new HAnimSegment("hanim_l_navicular").setName(new SFString("SEGMENT_FOR_l_navicular")).setDEF(new SFString("hanim_SEGMENT_FOR_l_navicular"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint l_navicular segment SEGMENT_FOR_l_navicular")))
                            .addChild(new Transform().setTranslation(new float[] {0.0781f ,-0.097f ,0.0283f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_navicular").setName(new SFString("SEGMENT_FOR_l_navicular_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_navicular_tip"))
                              .addChild(new Transform().setTranslation(new float[] {0.0781f ,-0.097f ,0.0283f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName(new SFString("l_cuneiform_1")).setDEF(new SFString("hanim_l_cuneiform_1")).setCenter(new float[] {0.0672f ,-0.0835f ,0.0235f })
                            .addChild(new HAnimSegment("hanim_l_cuneiform_1").setName(new SFString("SEGMENT_FOR_l_cuneiform_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_1"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1")))
                              .addChild(new Transform().setTranslation(new float[] {0.0672f ,-0.0835f ,0.0235f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_1").setName(new SFString("SEGMENT_FOR_l_cuneiform_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_1_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.0672f ,-0.0835f ,0.0235f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_1").setName(new SFString("l_metatarsal_1")).setDEF(new SFString("hanim_l_metatarsal_1")).setCenter(new float[] {0.0644f ,-0.0577f ,0.0147f })
                              .addChild(new HAnimSegment("hanim_l_metatarsal_1").setName(new SFString("SEGMENT_FOR_l_metatarsal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_1"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1")))
                                .addChild(new Transform().setTranslation(new float[] {0.0644f ,-0.0577f ,0.0147f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_1").setName(new SFString("SEGMENT_FOR_l_metatarsal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_1_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0644f ,-0.0577f ,0.0147f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_1").setName(new SFString("l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_1")).setCenter(new float[] {0.0619f ,-0.0083f ,0.0059f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1")))
                                  .addChild(new Transform().setTranslation(new float[] {0.0619f ,-0.0083f ,0.0059f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0619f ,-0.0083f ,0.0059f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_1").setName(new SFString("l_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_1"))
                                  .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1")))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"))
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName(new SFString("l_cuneiform_2")).setDEF(new SFString("hanim_l_cuneiform_2")).setCenter(new float[] {0.0812f ,-0.0805f ,0.025f })
                            .addChild(new HAnimSegment("hanim_l_cuneiform_2").setName(new SFString("SEGMENT_FOR_l_cuneiform_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_2"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2")))
                              .addChild(new Transform().setTranslation(new float[] {0.0812f ,-0.0805f ,0.025f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_2").setName(new SFString("SEGMENT_FOR_l_cuneiform_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_2_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.0812f ,-0.0805f ,0.025f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_2").setName(new SFString("l_metatarsal_2")).setDEF(new SFString("hanim_l_metatarsal_2")).setCenter(new float[] {0.08f ,-0.0608f ,0.0175f })
                              .addChild(new HAnimSegment("hanim_l_metatarsal_2").setName(new SFString("SEGMENT_FOR_l_metatarsal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_2"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2")))
                                .addChild(new Transform().setTranslation(new float[] {0.08f ,-0.0608f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_2").setName(new SFString("SEGMENT_FOR_l_metatarsal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_2_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.08f ,-0.0608f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_2").setName(new SFString("l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_2")).setCenter(new float[] {0.0824f ,-0.004f ,0.0064f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2")))
                                  .addChild(new Transform().setTranslation(new float[] {0.0824f ,-0.004f ,0.0064f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0824f ,-0.004f ,0.0064f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_2").setName(new SFString("l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_2")).setCenter(new float[] {0.0841f ,0.0121f ,0.0041f })
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2")))
                                    .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0121f ,0.0041f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0121f ,0.0041f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_2").setName(new SFString("l_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_2")).setCenter(new float[] {0.0841f ,0.0216f ,0.0013f })
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2")))
                                      .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0216f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.0841f ,0.0216f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName(new SFString("l_cuneiform_3")).setDEF(new SFString("hanim_l_cuneiform_3")).setCenter(new float[] {0.0928f ,-0.0821f ,0.0248f })
                            .addChild(new HAnimSegment("hanim_l_cuneiform_3").setName(new SFString("SEGMENT_FOR_l_cuneiform_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_3"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3")))
                              .addChild(new Transform().setTranslation(new float[] {0.0928f ,-0.0821f ,0.0248f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_3").setName(new SFString("SEGMENT_FOR_l_cuneiform_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuneiform_3_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.0928f ,-0.0821f ,0.0248f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_3").setName(new SFString("l_metatarsal_3")).setDEF(new SFString("hanim_l_metatarsal_3")).setCenter(new float[] {0.0944f ,-0.0625f ,0.0175f })
                              .addChild(new HAnimSegment("hanim_l_metatarsal_3").setName(new SFString("SEGMENT_FOR_l_metatarsal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_3"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3")))
                                .addChild(new Transform().setTranslation(new float[] {0.0944f ,-0.0625f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_3").setName(new SFString("SEGMENT_FOR_l_metatarsal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_3_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.0944f ,-0.0625f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_3").setName(new SFString("l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_3")).setCenter(new float[] {0.0963f ,-0.0065f ,0.0065f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3")))
                                  .addChild(new Transform().setTranslation(new float[] {0.0963f ,-0.0065f ,0.0065f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.0963f ,-0.0065f ,0.0065f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_3").setName(new SFString("l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_3")).setCenter(new float[] {0.0987f ,0.0086f ,0.0034f })
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3")))
                                    .addChild(new Transform().setTranslation(new float[] {0.0987f ,0.0086f ,0.0034f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.0987f ,0.0086f ,0.0034f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_3").setName(new SFString("l_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_3")).setCenter(new float[] {0.1002f ,0.0178f ,0.0013f })
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3")))
                                      .addChild(new Transform().setTranslation(new float[] {0.1002f ,0.0178f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.1002f ,0.0178f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName(new SFString("l_calcaneus")).setDEF(new SFString("hanim_l_calcaneus")).setCenter(new float[] {0.0889f ,-0.1278f ,0.0494f })
                          .addChild(new HAnimSegment("hanim_l_calcaneus").setName(new SFString("SEGMENT_FOR_l_calcaneus")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calcaneus"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus")))
                            .addChild(new Transform().setTranslation(new float[] {0.0889f ,-0.1278f ,0.0494f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calcaneus").setName(new SFString("SEGMENT_FOR_l_calcaneus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_calcaneus_tip"))
                              .addChild(new Transform().setTranslation(new float[] {0.0889f ,-0.1278f ,0.0494f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_l_calcaneus").setName(new SFString("l_cuboid")).setDEF(new SFString("hanim_l_cuboid")).setCenter(new float[] {0.1105f ,-0.0998f ,0.0267f })
                            .addChild(new HAnimSegment("hanim_l_cuboid").setName(new SFString("SEGMENT_FOR_l_cuboid")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuboid"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint l_cuboid segment SEGMENT_FOR_l_cuboid")))
                              .addChild(new Transform().setTranslation(new float[] {0.1105f ,-0.0998f ,0.0267f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuboid").setName(new SFString("SEGMENT_FOR_l_cuboid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_cuboid_tip"))
                                .addChild(new Transform().setTranslation(new float[] {0.1105f ,-0.0998f ,0.0267f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName(new SFString("l_metatarsal_4")).setDEF(new SFString("hanim_l_metatarsal_4")).setCenter(new float[] {0.1063f ,-0.0634f ,0.016f })
                              .addChild(new HAnimSegment("hanim_l_metatarsal_4").setName(new SFString("SEGMENT_FOR_l_metatarsal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_4"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4")))
                                .addChild(new Transform().setTranslation(new float[] {0.1063f ,-0.0634f ,0.016f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_4").setName(new SFString("SEGMENT_FOR_l_metatarsal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_4_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.1063f ,-0.0634f ,0.016f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_4").setName(new SFString("l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_4")).setCenter(new float[] {0.1097f ,-0.0107f ,0.0058f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4")))
                                  .addChild(new Transform().setTranslation(new float[] {0.1097f ,-0.0107f ,0.0058f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.1097f ,-0.0107f ,0.0058f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_4").setName(new SFString("l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_4")).setCenter(new float[] {0.114f ,0.0044f ,0.0037f })
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4")))
                                    .addChild(new Transform().setTranslation(new float[] {0.114f ,0.0044f ,0.0037f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.114f ,0.0044f ,0.0037f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_4").setName(new SFString("l_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_4")).setCenter(new float[] {0.1155f ,0.0118f ,0.0008f })
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4")))
                                      .addChild(new Transform().setTranslation(new float[] {0.1155f ,0.0118f ,0.0008f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.1155f ,0.0118f ,0.0008f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName(new SFString("l_metatarsal_5")).setDEF(new SFString("hanim_l_metatarsal_5")).setCenter(new float[] {0.1206f ,-0.0671f ,0.0124f })
                              .addChild(new HAnimSegment("hanim_l_metatarsal_5").setName(new SFString("SEGMENT_FOR_l_metatarsal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_5"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5")))
                                .addChild(new Transform().setTranslation(new float[] {0.1206f ,-0.0671f ,0.0124f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_5").setName(new SFString("SEGMENT_FOR_l_metatarsal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metatarsal_5_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {0.1206f ,-0.0671f ,0.0124f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_5").setName(new SFString("l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_proximal_phalanx_5")).setCenter(new float[] {0.1239f ,-0.0153f ,0.0051f })
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5")))
                                  .addChild(new Transform().setTranslation(new float[] {0.1239f ,-0.0153f ,0.0051f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {0.1239f ,-0.0153f ,0.0051f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_5").setName(new SFString("l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_middle_phalanx_5")).setCenter(new float[] {0.1262f ,-0.0077f ,0.0023f })
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5")))
                                    .addChild(new Transform().setTranslation(new float[] {0.1262f ,-0.0077f ,0.0023f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {0.1262f ,-0.0077f ,0.0023f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_5").setName(new SFString("l_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_l_tarsal_distal_phalanx_5")).setCenter(new float[] {0.1271f ,0f ,0f })
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5")))
                                      .addChild(new Transform().setTranslation(new float[] {0.1271f ,0f ,0f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {0.1271f ,0f ,0f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName(new SFString("r_thigh")).setDEF(new SFString("hanim_r_thigh")).setCenter(new float[] {-0.0948f ,-0.1202f ,0.8181f })
                    .addChild(new HAnimSegment("hanim_r_thigh").setName(new SFString("SEGMENT_FOR_r_thigh")).setDEF(new SFString("hanim_SEGMENT_FOR_r_thigh"))
                      .addChild(new TouchSensor().setDescription(new SFString("joint r_thigh segment SEGMENT_FOR_r_thigh")))
                      .addChild(new Transform().setTranslation(new float[] {-0.0948f ,-0.1202f ,0.8181f })
                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_thigh").setName(new SFString("SEGMENT_FOR_r_thigh_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_thigh_tip"))
                        .addChild(new Transform().setTranslation(new float[] {-0.0948f ,-0.1202f ,0.8181f })
                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                    .addChild(new HAnimJoint("hanim_r_thigh").setName(new SFString("r_calf")).setDEF(new SFString("hanim_r_calf")).setCenter(new float[] {-0.0928f ,-0.1213f ,0.4003f })
                      .addChild(new HAnimSegment("hanim_r_calf").setName(new SFString("SEGMENT_FOR_r_calf")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calf"))
                        .addChild(new TouchSensor().setDescription(new SFString("joint r_calf segment SEGMENT_FOR_r_calf")))
                        .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.1213f ,0.4003f })
                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calf").setName(new SFString("SEGMENT_FOR_r_calf_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calf_tip"))
                          .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.1213f ,0.4003f })
                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                      .addChild(new HAnimJoint("hanim_r_calf").setName(new SFString("r_talus")).setDEF(new SFString("hanim_r_talus")).setCenter(new float[] {-0.0886f ,-0.1123f ,0.0869f })
                        .addChild(new HAnimSegment("hanim_r_talus").setName(new SFString("SEGMENT_FOR_r_talus")).setDEF(new SFString("hanim_SEGMENT_FOR_r_talus"))
                          .addChild(new TouchSensor().setDescription(new SFString("joint r_talus segment SEGMENT_FOR_r_talus")))
                          .addChild(new Transform().setTranslation(new float[] {-0.0886f ,-0.1123f ,0.0869f })
                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_talus").setName(new SFString("SEGMENT_FOR_r_talus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_talus_tip"))
                            .addChild(new Transform().setTranslation(new float[] {-0.0886f ,-0.1123f ,0.0869f })
                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName(new SFString("r_navicular")).setDEF(new SFString("hanim_r_navicular")).setCenter(new float[] {-0.0781f ,-0.097f ,0.0283f })
                          .addChild(new HAnimSegment("hanim_r_navicular").setName(new SFString("SEGMENT_FOR_r_navicular")).setDEF(new SFString("hanim_SEGMENT_FOR_r_navicular"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint r_navicular segment SEGMENT_FOR_r_navicular")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0781f ,-0.097f ,0.0283f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_navicular").setName(new SFString("SEGMENT_FOR_r_navicular_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_navicular_tip"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0781f ,-0.097f ,0.0283f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName(new SFString("r_cuneiform_1")).setDEF(new SFString("hanim_r_cuneiform_1")).setCenter(new float[] {-0.0672f ,-0.0835f ,0.0235f })
                            .addChild(new HAnimSegment("hanim_r_cuneiform_1").setName(new SFString("SEGMENT_FOR_r_cuneiform_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_1"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0672f ,-0.0835f ,0.0235f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_1").setName(new SFString("SEGMENT_FOR_r_cuneiform_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_1_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0672f ,-0.0835f ,0.0235f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_1").setName(new SFString("r_metatarsal_1")).setDEF(new SFString("hanim_r_metatarsal_1")).setCenter(new float[] {-0.0644f ,-0.0577f ,0.0147f })
                              .addChild(new HAnimSegment("hanim_r_metatarsal_1").setName(new SFString("SEGMENT_FOR_r_metatarsal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_1"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1")))
                                .addChild(new Transform().setTranslation(new float[] {-0.0644f ,-0.0577f ,0.0147f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_1").setName(new SFString("SEGMENT_FOR_r_metatarsal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_1_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0644f ,-0.0577f ,0.0147f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_1").setName(new SFString("r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_1")).setCenter(new float[] {-0.0619f ,-0.0083f ,0.0059f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0619f ,-0.0083f ,0.0059f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0619f ,-0.0083f ,0.0059f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_1").setName(new SFString("r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_1"))
                                  .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1")))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"))
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName(new SFString("r_cuneiform_2")).setDEF(new SFString("hanim_r_cuneiform_2")).setCenter(new float[] {-0.0812f ,-0.0805f ,0.025f })
                            .addChild(new HAnimSegment("hanim_r_cuneiform_2").setName(new SFString("SEGMENT_FOR_r_cuneiform_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_2"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0812f ,-0.0805f ,0.025f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_2").setName(new SFString("SEGMENT_FOR_r_cuneiform_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_2_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0812f ,-0.0805f ,0.025f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_2").setName(new SFString("r_metatarsal_2")).setDEF(new SFString("hanim_r_metatarsal_2")).setCenter(new float[] {-0.08f ,-0.0608f ,0.0175f })
                              .addChild(new HAnimSegment("hanim_r_metatarsal_2").setName(new SFString("SEGMENT_FOR_r_metatarsal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_2"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2")))
                                .addChild(new Transform().setTranslation(new float[] {-0.08f ,-0.0608f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_2").setName(new SFString("SEGMENT_FOR_r_metatarsal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_2_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.08f ,-0.0608f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_2").setName(new SFString("r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_2")).setCenter(new float[] {-0.0823f ,-0.004f ,0.0064f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0823f ,-0.004f ,0.0064f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0823f ,-0.004f ,0.0064f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_2").setName(new SFString("r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_2")).setCenter(new float[] {-0.0841f ,0.0121f ,0.0041f })
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0121f ,0.0041f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0121f ,0.0041f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_2").setName(new SFString("r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_2")).setCenter(new float[] {-0.0841f ,0.0216f ,0.0013f })
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0216f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.0841f ,0.0216f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName(new SFString("r_cuneiform_3")).setDEF(new SFString("hanim_r_cuneiform_3")).setCenter(new float[] {-0.0928f ,-0.0821f ,0.0248f })
                            .addChild(new HAnimSegment("hanim_r_cuneiform_3").setName(new SFString("SEGMENT_FOR_r_cuneiform_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_3"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.0821f ,0.0248f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_3").setName(new SFString("SEGMENT_FOR_r_cuneiform_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuneiform_3_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0928f ,-0.0821f ,0.0248f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_3").setName(new SFString("r_metatarsal_3")).setDEF(new SFString("hanim_r_metatarsal_3")).setCenter(new float[] {-0.0944f ,-0.0625f ,0.0175f })
                              .addChild(new HAnimSegment("hanim_r_metatarsal_3").setName(new SFString("SEGMENT_FOR_r_metatarsal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_3"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3")))
                                .addChild(new Transform().setTranslation(new float[] {-0.0944f ,-0.0625f ,0.0175f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_3").setName(new SFString("SEGMENT_FOR_r_metatarsal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_3_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0944f ,-0.0625f ,0.0175f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_3").setName(new SFString("r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_3")).setCenter(new float[] {-0.0963f ,-0.0065f ,0.0065f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0963f ,-0.0065f ,0.0065f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0963f ,-0.0065f ,0.0065f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_3").setName(new SFString("r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_3")).setCenter(new float[] {-0.0987f ,0.0086f ,0.0034f })
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0987f ,0.0086f ,0.0034f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0987f ,0.0086f ,0.0034f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_3").setName(new SFString("r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_3")).setCenter(new float[] {-0.1002f ,0.0178f ,0.0013f })
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1002f ,0.0178f ,0.0013f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.1002f ,0.0178f ,0.0013f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName(new SFString("r_calcaneus")).setDEF(new SFString("hanim_r_calcaneus")).setCenter(new float[] {-0.0889f ,-0.1278f ,0.0494f })
                          .addChild(new HAnimSegment("hanim_r_calcaneus").setName(new SFString("SEGMENT_FOR_r_calcaneus")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calcaneus"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0889f ,-0.1278f ,0.0494f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calcaneus").setName(new SFString("SEGMENT_FOR_r_calcaneus_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_calcaneus_tip"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0889f ,-0.1278f ,0.0494f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_r_calcaneus").setName(new SFString("r_cuboid")).setDEF(new SFString("hanim_r_cuboid")).setCenter(new float[] {-0.1105f ,-0.0998f ,0.0267f })
                            .addChild(new HAnimSegment("hanim_r_cuboid").setName(new SFString("SEGMENT_FOR_r_cuboid")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuboid"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint r_cuboid segment SEGMENT_FOR_r_cuboid")))
                              .addChild(new Transform().setTranslation(new float[] {-0.1105f ,-0.0998f ,0.0267f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuboid").setName(new SFString("SEGMENT_FOR_r_cuboid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_cuboid_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.1105f ,-0.0998f ,0.0267f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName(new SFString("r_metatarsal_4")).setDEF(new SFString("hanim_r_metatarsal_4")).setCenter(new float[] {-0.1063f ,-0.0634f ,0.016f })
                              .addChild(new HAnimSegment("hanim_r_metatarsal_4").setName(new SFString("SEGMENT_FOR_r_metatarsal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_4"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4")))
                                .addChild(new Transform().setTranslation(new float[] {-0.1063f ,-0.0634f ,0.016f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_4").setName(new SFString("SEGMENT_FOR_r_metatarsal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_4_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1063f ,-0.0634f ,0.016f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_4").setName(new SFString("r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_4")).setCenter(new float[] {-0.1097f ,-0.0107f ,0.0058f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1097f ,-0.0107f ,0.0058f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.1097f ,-0.0107f ,0.0058f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_4").setName(new SFString("r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_4")).setCenter(new float[] {-0.114f ,0.0044f ,0.0037f })
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.114f ,0.0044f ,0.0037f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.114f ,0.0044f ,0.0037f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_4").setName(new SFString("r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_4")).setCenter(new float[] {-0.1155f ,0.0118f ,0.0008f })
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1155f ,0.0118f ,0.0008f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.1155f ,0.0118f ,0.0008f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName(new SFString("r_metatarsal_5")).setDEF(new SFString("hanim_r_metatarsal_5")).setCenter(new float[] {-0.1206f ,-0.0671f ,0.0124f })
                              .addChild(new HAnimSegment("hanim_r_metatarsal_5").setName(new SFString("SEGMENT_FOR_r_metatarsal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_5"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5")))
                                .addChild(new Transform().setTranslation(new float[] {-0.1206f ,-0.0671f ,0.0124f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_5").setName(new SFString("SEGMENT_FOR_r_metatarsal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metatarsal_5_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1206f ,-0.0671f ,0.0124f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_5").setName(new SFString("r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_proximal_phalanx_5")).setCenter(new float[] {-0.1239f ,-0.0153f ,0.0051f })
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.1239f ,-0.0153f ,0.0051f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.1239f ,-0.0153f ,0.0051f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_5").setName(new SFString("r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_middle_phalanx_5")).setCenter(new float[] {-0.1262f ,-0.0077f ,0.0023f })
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.1262f ,-0.0077f ,0.0023f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1262f ,-0.0077f ,0.0023f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_5").setName(new SFString("r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_r_tarsal_distal_phalanx_5")).setCenter(new float[] {-0.1271f ,0f ,0f })
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.1271f ,0f ,0f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.1271f ,0f ,0f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))))))
                .addChild(new HAnimJoint("hanim_sacrum").setName(new SFString("l5")).setDEF(new SFString("hanim_l5")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9169f })
                  .addChild(new HAnimSegment("hanim_l5").setName(new SFString("SEGMENT_FOR_l5")).setDEF(new SFString("hanim_SEGMENT_FOR_l5"))
                    .addChild(new TouchSensor().setDescription(new SFString("joint l5 segment SEGMENT_FOR_l5")))
                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9169f })
                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l5").setName(new SFString("SEGMENT_FOR_l5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l5_tip"))
                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9169f })
                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                  .addChild(new HAnimJoint("hanim_l5").setName(new SFString("l4")).setDEF(new SFString("hanim_l4")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9412f })
                    .addChild(new HAnimSegment("hanim_l4").setName(new SFString("SEGMENT_FOR_l4")).setDEF(new SFString("hanim_SEGMENT_FOR_l4"))
                      .addChild(new TouchSensor().setDescription(new SFString("joint l4 segment SEGMENT_FOR_l4")))
                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9412f })
                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l4").setName(new SFString("SEGMENT_FOR_l4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l4_tip"))
                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9412f })
                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                    .addChild(new HAnimJoint("hanim_l4").setName(new SFString("l3")).setDEF(new SFString("hanim_l3")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9574f })
                      .addChild(new HAnimSegment("hanim_l3").setName(new SFString("SEGMENT_FOR_l3")).setDEF(new SFString("hanim_SEGMENT_FOR_l3"))
                        .addChild(new TouchSensor().setDescription(new SFString("joint l3 segment SEGMENT_FOR_l3")))
                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9574f })
                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l3").setName(new SFString("SEGMENT_FOR_l3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l3_tip"))
                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9574f })
                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                      .addChild(new HAnimJoint("hanim_l3").setName(new SFString("l2")).setDEF(new SFString("hanim_l2")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9738f })
                        .addChild(new HAnimSegment("hanim_l2").setName(new SFString("SEGMENT_FOR_l2")).setDEF(new SFString("hanim_SEGMENT_FOR_l2"))
                          .addChild(new TouchSensor().setDescription(new SFString("joint l2 segment SEGMENT_FOR_l2")))
                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9738f })
                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l2").setName(new SFString("SEGMENT_FOR_l2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l2_tip"))
                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9738f })
                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                        .addChild(new HAnimJoint("hanim_l2").setName(new SFString("l1")).setDEF(new SFString("hanim_l1")).setCenter(new float[] {-0.0002f ,-0.1156f ,0.9911f })
                          .addChild(new HAnimSegment("hanim_l1").setName(new SFString("SEGMENT_FOR_l1")).setDEF(new SFString("hanim_SEGMENT_FOR_l1"))
                            .addChild(new TouchSensor().setDescription(new SFString("joint l1 segment SEGMENT_FOR_l1")))
                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9911f })
                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l1").setName(new SFString("SEGMENT_FOR_l1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l1_tip"))
                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,0.9911f })
                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                          .addChild(new HAnimJoint("hanim_l1").setName(new SFString("t12")).setDEF(new SFString("hanim_t12")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0145f })
                            .addChild(new HAnimSegment("hanim_t12").setName(new SFString("SEGMENT_FOR_t12")).setDEF(new SFString("hanim_SEGMENT_FOR_t12"))
                              .addChild(new TouchSensor().setDescription(new SFString("joint t12 segment SEGMENT_FOR_t12")))
                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0145f })
                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t12").setName(new SFString("SEGMENT_FOR_t12_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t12_tip"))
                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0145f })
                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                            .addChild(new HAnimJoint("hanim_t12").setName(new SFString("t11")).setDEF(new SFString("hanim_t11")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0381f })
                              .addChild(new HAnimSegment("hanim_t11").setName(new SFString("SEGMENT_FOR_t11")).setDEF(new SFString("hanim_SEGMENT_FOR_t11"))
                                .addChild(new TouchSensor().setDescription(new SFString("joint t11 segment SEGMENT_FOR_t11")))
                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0381f })
                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t11").setName(new SFString("SEGMENT_FOR_t11_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t11_tip"))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0381f })
                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                              .addChild(new HAnimJoint("hanim_t11").setName(new SFString("t10")).setDEF(new SFString("hanim_t10")).setCenter(new float[] {-0.0002f ,-0.1157f ,1.0552f })
                                .addChild(new HAnimSegment("hanim_t10").setName(new SFString("SEGMENT_FOR_t10")).setDEF(new SFString("hanim_SEGMENT_FOR_t10"))
                                  .addChild(new TouchSensor().setDescription(new SFString("joint t10 segment SEGMENT_FOR_t10")))
                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.0552f })
                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t10").setName(new SFString("SEGMENT_FOR_t10_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t10_tip"))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.0552f })
                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                .addChild(new HAnimJoint("hanim_t10").setName(new SFString("t9")).setDEF(new SFString("hanim_t9")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0699f })
                                  .addChild(new HAnimSegment("hanim_t9").setName(new SFString("SEGMENT_FOR_t9")).setDEF(new SFString("hanim_SEGMENT_FOR_t9"))
                                    .addChild(new TouchSensor().setDescription(new SFString("joint t9 segment SEGMENT_FOR_t9")))
                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0699f })
                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t9").setName(new SFString("SEGMENT_FOR_t9_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t9_tip"))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0699f })
                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                  .addChild(new HAnimJoint("hanim_t9").setName(new SFString("t8")).setDEF(new SFString("hanim_t8")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.0845f })
                                    .addChild(new HAnimSegment("hanim_t8").setName(new SFString("SEGMENT_FOR_t8")).setDEF(new SFString("hanim_SEGMENT_FOR_t8"))
                                      .addChild(new TouchSensor().setDescription(new SFString("joint t8 segment SEGMENT_FOR_t8")))
                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0845f })
                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_t8").setName(new SFString("SEGMENT_FOR_t8_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t8_tip"))
                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.0845f })
                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                    .addChild(new HAnimJoint("hanim_t8").setName(new SFString("t7")).setDEF(new SFString("hanim_t7")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1002f })
                                      .addChild(new HAnimSegment("hanim_t7").setName(new SFString("SEGMENT_FOR_t7")).setDEF(new SFString("hanim_SEGMENT_FOR_t7"))
                                        .addChild(new TouchSensor().setDescription(new SFString("joint t7 segment SEGMENT_FOR_t7")))
                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1002f })
                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_t7").setName(new SFString("SEGMENT_FOR_t7_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t7_tip"))
                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1002f })
                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                      .addChild(new HAnimJoint("hanim_t7").setName(new SFString("t6")).setDEF(new SFString("hanim_t6")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1131f })
                                        .addChild(new HAnimSegment("hanim_t6").setName(new SFString("SEGMENT_FOR_t6")).setDEF(new SFString("hanim_SEGMENT_FOR_t6"))
                                          .addChild(new TouchSensor().setDescription(new SFString("joint t6 segment SEGMENT_FOR_t6")))
                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1131f })
                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_t6").setName(new SFString("SEGMENT_FOR_t6_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t6_tip"))
                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1131f })
                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                        .addChild(new HAnimJoint("hanim_t6").setName(new SFString("t5")).setDEF(new SFString("hanim_t5")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1286f })
                                          .addChild(new HAnimSegment("hanim_t5").setName(new SFString("SEGMENT_FOR_t5")).setDEF(new SFString("hanim_SEGMENT_FOR_t5"))
                                            .addChild(new TouchSensor().setDescription(new SFString("joint t5 segment SEGMENT_FOR_t5")))
                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1286f })
                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_t5").setName(new SFString("SEGMENT_FOR_t5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t5_tip"))
                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1286f })
                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                          .addChild(new HAnimJoint("hanim_t5").setName(new SFString("t4")).setDEF(new SFString("hanim_t4")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1439f })
                                            .addChild(new HAnimSegment("hanim_t4").setName(new SFString("SEGMENT_FOR_t4")).setDEF(new SFString("hanim_SEGMENT_FOR_t4"))
                                              .addChild(new TouchSensor().setDescription(new SFString("joint t4 segment SEGMENT_FOR_t4")))
                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1439f })
                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t4").setName(new SFString("SEGMENT_FOR_t4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t4_tip"))
                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1439f })
                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                            .addChild(new HAnimJoint("hanim_t4").setName(new SFString("t3")).setDEF(new SFString("hanim_t3")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.1623f })
                                              .addChild(new HAnimSegment("hanim_t3").setName(new SFString("SEGMENT_FOR_t3")).setDEF(new SFString("hanim_SEGMENT_FOR_t3"))
                                                .addChild(new TouchSensor().setDescription(new SFString("joint t3 segment SEGMENT_FOR_t3")))
                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1623f })
                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t3").setName(new SFString("SEGMENT_FOR_t3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t3_tip"))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.1623f })
                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                              .addChild(new HAnimJoint("hanim_t3").setName(new SFString("t2")).setDEF(new SFString("hanim_t2")).setCenter(new float[] {-0.0002f ,-0.1157f ,1.1871f })
                                                .addChild(new HAnimSegment("hanim_t2").setName(new SFString("SEGMENT_FOR_t2")).setDEF(new SFString("hanim_SEGMENT_FOR_t2"))
                                                  .addChild(new TouchSensor().setDescription(new SFString("joint t2 segment SEGMENT_FOR_t2")))
                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.1871f })
                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t2").setName(new SFString("SEGMENT_FOR_t2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t2_tip"))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1157f ,1.1871f })
                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                .addChild(new HAnimJoint("hanim_t2").setName(new SFString("t1")).setDEF(new SFString("hanim_t1")).setCenter(new float[] {-0.0002f ,-0.1156f ,1.2109f })
                                                  .addChild(new HAnimSegment("hanim_t1").setName(new SFString("SEGMENT_FOR_t1")).setDEF(new SFString("hanim_SEGMENT_FOR_t1"))
                                                    .addChild(new TouchSensor().setDescription(new SFString("joint t1 segment SEGMENT_FOR_t1")))
                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.2109f })
                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t1").setName(new SFString("SEGMENT_FOR_t1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_t1_tip"))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1156f ,1.2109f })
                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName(new SFString("c7")).setDEF(new SFString("hanim_c7")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2368f })
                                                    .addChild(new HAnimSegment("hanim_c7").setName(new SFString("SEGMENT_FOR_c7")).setDEF(new SFString("hanim_SEGMENT_FOR_c7"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("joint c7 segment SEGMENT_FOR_c7")))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2368f })
                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_c7").setName(new SFString("SEGMENT_FOR_c7_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c7_tip"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2368f })
                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                    .addChild(new HAnimJoint("hanim_c7").setName(new SFString("c6")).setDEF(new SFString("hanim_c6")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.249f })
                                                      .addChild(new HAnimSegment("hanim_c6").setName(new SFString("SEGMENT_FOR_c6")).setDEF(new SFString("hanim_SEGMENT_FOR_c6"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("joint c6 segment SEGMENT_FOR_c6")))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.249f })
                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_c6").setName(new SFString("SEGMENT_FOR_c6_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c6_tip"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.249f })
                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                      .addChild(new HAnimJoint("hanim_c6").setName(new SFString("c5")).setDEF(new SFString("hanim_c5")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2613f })
                                                        .addChild(new HAnimSegment("hanim_c5").setName(new SFString("SEGMENT_FOR_c5")).setDEF(new SFString("hanim_SEGMENT_FOR_c5"))
                                                          .addChild(new TouchSensor().setDescription(new SFString("joint c5 segment SEGMENT_FOR_c5")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2613f })
                                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_c5").setName(new SFString("SEGMENT_FOR_c5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c5_tip"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2613f })
                                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                        .addChild(new HAnimJoint("hanim_c5").setName(new SFString("c4")).setDEF(new SFString("hanim_c4")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2737f })
                                                          .addChild(new HAnimSegment("hanim_c4").setName(new SFString("SEGMENT_FOR_c4")).setDEF(new SFString("hanim_SEGMENT_FOR_c4"))
                                                            .addChild(new TouchSensor().setDescription(new SFString("joint c4 segment SEGMENT_FOR_c4")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2737f })
                                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_c4").setName(new SFString("SEGMENT_FOR_c4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c4_tip"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2737f })
                                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                          .addChild(new HAnimJoint("hanim_c4").setName(new SFString("c3")).setDEF(new SFString("hanim_c3")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2865f })
                                                            .addChild(new HAnimSegment("hanim_c3").setName(new SFString("SEGMENT_FOR_c3")).setDEF(new SFString("hanim_SEGMENT_FOR_c3"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("joint c3 segment SEGMENT_FOR_c3")))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2865f })
                                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_c3").setName(new SFString("SEGMENT_FOR_c3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c3_tip"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2865f })
                                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                            .addChild(new HAnimJoint("hanim_c3").setName(new SFString("c2")).setDEF(new SFString("hanim_c2")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.2982f })
                                                              .addChild(new HAnimSegment("hanim_c2").setName(new SFString("SEGMENT_FOR_c2")).setDEF(new SFString("hanim_SEGMENT_FOR_c2"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint c2 segment SEGMENT_FOR_c2")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2982f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_c2").setName(new SFString("SEGMENT_FOR_c2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c2_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.2982f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_c2").setName(new SFString("c1")).setDEF(new SFString("hanim_c1")).setCenter(new float[] {-0.0002f ,-0.1169f ,1.3099f })
                                                                .addChild(new HAnimSegment("hanim_c1").setName(new SFString("SEGMENT_FOR_c1")).setDEF(new SFString("hanim_SEGMENT_FOR_c1"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint c1 segment SEGMENT_FOR_c1")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.3099f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_c1").setName(new SFString("SEGMENT_FOR_c1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_c1_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1169f ,1.3099f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_c1").setName(new SFString("skull")).setDEF(new SFString("hanim_skull")).setCenter(new float[] {-0.0002f ,-0.1173f ,1.3041f })
                                                                  .addChild(new HAnimSegment("hanim_skull").setName(new SFString("SEGMENT_FOR_skull")).setDEF(new SFString("hanim_SEGMENT_FOR_skull"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint skull segment SEGMENT_FOR_skull")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1173f ,1.3041f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_skull").setName(new SFString("SEGMENT_FOR_skull_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_skull_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.1173f ,1.3041f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("l_eyelid")).setDEF(new SFString("hanim_l_eyelid")).setCenter(new float[] {0.0503f ,-0.0689f ,1.4157f })
                                                                    .addChild(new HAnimSegment("hanim_l_eyelid").setName(new SFString("SEGMENT_FOR_l_eyelid")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyelid"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_eyelid segment SEGMENT_FOR_l_eyelid")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.0503f ,-0.0689f ,1.4157f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyelid").setName(new SFString("SEGMENT_FOR_l_eyelid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyelid_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.0503f ,-0.0689f ,1.4157f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("r_eyelid")).setDEF(new SFString("hanim_r_eyelid")).setCenter(new float[] {-0.0507f ,-0.0689f ,1.4157f })
                                                                    .addChild(new HAnimSegment("hanim_r_eyelid").setName(new SFString("SEGMENT_FOR_r_eyelid")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyelid"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_eyelid segment SEGMENT_FOR_r_eyelid")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0507f ,-0.0689f ,1.4157f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyelid").setName(new SFString("SEGMENT_FOR_r_eyelid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyelid_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0507f ,-0.0689f ,1.4157f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("l_eyeball")).setDEF(new SFString("hanim_l_eyeball")).setCenter(new float[] {0.0479f ,-0.0188f ,1.3963f })
                                                                    .addChild(new HAnimSegment("hanim_l_eyeball").setName(new SFString("SEGMENT_FOR_l_eyeball")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyeball"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_eyeball segment SEGMENT_FOR_l_eyeball")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.0479f ,-0.0188f ,1.3963f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyeball").setName(new SFString("SEGMENT_FOR_l_eyeball_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyeball_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.0479f ,-0.0188f ,1.3963f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("r_eyeball")).setDEF(new SFString("hanim_r_eyeball")).setCenter(new float[] {-0.0483f ,-0.0188f ,1.3963f })
                                                                    .addChild(new HAnimSegment("hanim_r_eyeball").setName(new SFString("SEGMENT_FOR_r_eyeball")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyeball"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_eyeball segment SEGMENT_FOR_r_eyeball")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0483f ,-0.0188f ,1.3963f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyeball").setName(new SFString("SEGMENT_FOR_r_eyeball_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyeball_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0483f ,-0.0188f ,1.3963f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("l_eyebrow")).setDEF(new SFString("hanim_l_eyebrow")).setCenter(new float[] {0.0216f ,0.0051f ,1.4053f })
                                                                    .addChild(new HAnimSegment("hanim_l_eyebrow").setName(new SFString("SEGMENT_FOR_l_eyebrow")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyebrow"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.0216f ,0.0051f ,1.4053f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyebrow").setName(new SFString("SEGMENT_FOR_l_eyebrow_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_eyebrow_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.0216f ,0.0051f ,1.4053f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("r_eyebrow")).setDEF(new SFString("hanim_r_eyebrow")).setCenter(new float[] {-0.0219f ,0.0051f ,1.4053f })
                                                                    .addChild(new HAnimSegment("hanim_r_eyebrow").setName(new SFString("SEGMENT_FOR_r_eyebrow")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyebrow"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0219f ,0.0051f ,1.4053f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyebrow").setName(new SFString("SEGMENT_FOR_r_eyebrow_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_eyebrow_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0219f ,0.0051f ,1.4053f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName(new SFString("jaw")).setDEF(new SFString("hanim_jaw")).setCenter(new float[] {-0.0002f ,-0.0865f ,1.3043f })
                                                                    .addChild(new HAnimSegment("hanim_jaw").setName(new SFString("SEGMENT_FOR_jaw")).setDEF(new SFString("hanim_SEGMENT_FOR_jaw"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint jaw segment SEGMENT_FOR_jaw")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.0865f ,1.3043f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_jaw").setName(new SFString("SEGMENT_FOR_jaw_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_jaw_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.0002f ,-0.0865f ,1.3043f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName(new SFString("l_clavicle")).setDEF(new SFString("hanim_l_clavicle")).setCenter(new float[] {0.1228f ,-0.1148f ,1.1833f })
                                                    .addChild(new HAnimSegment("hanim_l_clavicle").setName(new SFString("SEGMENT_FOR_l_clavicle")).setDEF(new SFString("hanim_SEGMENT_FOR_l_clavicle"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_clavicle segment SEGMENT_FOR_l_clavicle")))
                                                      .addChild(new Transform().setTranslation(new float[] {0.1228f ,-0.1148f ,1.1833f })
                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_clavicle").setName(new SFString("SEGMENT_FOR_l_clavicle_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_clavicle_tip"))
                                                        .addChild(new Transform().setTranslation(new float[] {0.1228f ,-0.1148f ,1.1833f })
                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                    .addChild(new HAnimJoint("hanim_l_clavicle").setName(new SFString("l_scapula")).setDEF(new SFString("hanim_l_scapula")).setCenter(new float[] {0.0383f ,-0.1157f ,1.2001f })
                                                      .addChild(new HAnimSegment("hanim_l_scapula").setName(new SFString("SEGMENT_FOR_l_scapula")).setDEF(new SFString("hanim_SEGMENT_FOR_l_scapula"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_scapula segment SEGMENT_FOR_l_scapula")))
                                                        .addChild(new Transform().setTranslation(new float[] {0.0383f ,-0.1157f ,1.2001f })
                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_scapula").setName(new SFString("SEGMENT_FOR_l_scapula_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_scapula_tip"))
                                                          .addChild(new Transform().setTranslation(new float[] {0.0383f ,-0.1157f ,1.2001f })
                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                      .addChild(new HAnimJoint("hanim_l_scapula").setName(new SFString("l_upperarm")).setDEF(new SFString("hanim_l_upperarm")).setCenter(new float[] {0.1649f ,-0.1051f ,1.17f })
                                                        .addChild(new HAnimSegment("hanim_l_upperarm").setName(new SFString("SEGMENT_FOR_l_upperarm")).setDEF(new SFString("hanim_SEGMENT_FOR_l_upperarm"))
                                                          .addChild(new TouchSensor().setDescription(new SFString("joint l_upperarm segment SEGMENT_FOR_l_upperarm")))
                                                          .addChild(new Transform().setTranslation(new float[] {0.1649f ,-0.1051f ,1.17f })
                                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_upperarm").setName(new SFString("SEGMENT_FOR_l_upperarm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_upperarm_tip"))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1649f ,-0.1051f ,1.17f })
                                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                        .addChild(new HAnimJoint("hanim_l_upperarm").setName(new SFString("l_forearm")).setDEF(new SFString("hanim_l_forearm")).setCenter(new float[] {0.1819f ,-0.1075f ,0.9202f })
                                                          .addChild(new HAnimSegment("hanim_l_forearm").setName(new SFString("SEGMENT_FOR_l_forearm")).setDEF(new SFString("hanim_SEGMENT_FOR_l_forearm"))
                                                            .addChild(new TouchSensor().setDescription(new SFString("joint l_forearm segment SEGMENT_FOR_l_forearm")))
                                                            .addChild(new Transform().setTranslation(new float[] {0.1819f ,-0.1075f ,0.9202f })
                                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_forearm").setName(new SFString("SEGMENT_FOR_l_forearm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_forearm_tip"))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1819f ,-0.1075f ,0.9202f })
                                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                          .addChild(new HAnimJoint("hanim_l_forearm").setName(new SFString("l_carpal")).setDEF(new SFString("hanim_l_carpal")).setCenter(new float[] {0.1818f ,-0.1069f ,0.7157f })
                                                            .addChild(new HAnimSegment("hanim_l_carpal").setName(new SFString("SEGMENT_FOR_l_carpal")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal segment SEGMENT_FOR_l_carpal")))
                                                              .addChild(new Transform().setTranslation(new float[] {0.1818f ,-0.1069f ,0.7157f })
                                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal").setName(new SFString("SEGMENT_FOR_l_carpal_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_tip"))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1818f ,-0.1069f ,0.7157f })
                                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_trapezium")).setDEF(new SFString("hanim_l_trapezium")).setCenter(new float[] {0.1811f ,-0.0826f ,0.6975f })
                                                              .addChild(new HAnimSegment("hanim_l_trapezium").setName(new SFString("SEGMENT_FOR_l_trapezium")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezium"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_trapezium segment SEGMENT_FOR_l_trapezium")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0826f ,0.6975f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezium").setName(new SFString("SEGMENT_FOR_l_trapezium_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezium_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0826f ,0.6975f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezium").setName(new SFString("l_metacarpal_1")).setDEF(new SFString("hanim_l_metacarpal_1")).setCenter(new float[] {0.1803f ,-0.0759f ,0.684f })
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_1").setName(new SFString("SEGMENT_FOR_l_metacarpal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_1"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1803f ,-0.0759f ,0.684f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_1").setName(new SFString("SEGMENT_FOR_l_metacarpal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_1_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1803f ,-0.0759f ,0.684f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_1").setName(new SFString("l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_1")).setCenter(new float[] {0.1809f ,-0.0661f ,0.6642f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.0661f ,0.6642f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.0661f ,0.6642f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_1").setName(new SFString("l_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_1")).setCenter(new float[] {0.1825f ,-0.0522f ,0.6455f })
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1825f ,-0.0522f ,0.6455f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1825f ,-0.0522f ,0.6455f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_trapezoid")).setDEF(new SFString("hanim_l_trapezoid")).setCenter(new float[] {0.1811f ,-0.0935f ,0.6984f })
                                                              .addChild(new HAnimSegment("hanim_l_trapezoid").setName(new SFString("SEGMENT_FOR_l_trapezoid")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezoid"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0935f ,0.6984f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezoid").setName(new SFString("SEGMENT_FOR_l_trapezoid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_trapezoid_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0935f ,0.6984f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezoid").setName(new SFString("l_metacarpal_2")).setDEF(new SFString("hanim_l_metacarpal_2")).setCenter(new float[] {0.1811f ,-0.0922f ,0.679f })
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_2").setName(new SFString("SEGMENT_FOR_l_metacarpal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_2"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0922f ,0.679f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_2").setName(new SFString("SEGMENT_FOR_l_metacarpal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_2_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1811f ,-0.0922f ,0.679f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_2").setName(new SFString("l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_2")).setCenter(new float[] {0.1836f ,-0.0868f ,0.6286f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1836f ,-0.0868f ,0.6286f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1836f ,-0.0868f ,0.6286f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_2").setName(new SFString("l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_2")).setCenter(new float[] {0.1815f ,-0.0877f ,0.5983f })
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.0877f ,0.5983f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.0877f ,0.5983f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_2").setName(new SFString("l_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_2")).setCenter(new float[] {0.1805f ,-0.0885f ,0.5731f })
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.0885f ,0.5731f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.0885f ,0.5731f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_capitate")).setDEF(new SFString("hanim_l_capitate")).setCenter(new float[] {0.1809f ,-0.1067f ,0.7f })
                                                              .addChild(new HAnimSegment("hanim_l_capitate").setName(new SFString("SEGMENT_FOR_l_capitate")).setDEF(new SFString("hanim_SEGMENT_FOR_l_capitate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_capitate segment SEGMENT_FOR_l_capitate")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1067f ,0.7f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_capitate").setName(new SFString("SEGMENT_FOR_l_capitate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_capitate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1067f ,0.7f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_capitate").setName(new SFString("l_metacarpal_3")).setDEF(new SFString("hanim_l_metacarpal_3")).setCenter(new float[] {0.1809f ,-0.1081f ,0.6772f })
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_3").setName(new SFString("SEGMENT_FOR_l_metacarpal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_3"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1081f ,0.6772f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_3").setName(new SFString("SEGMENT_FOR_l_metacarpal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_3_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1081f ,0.6772f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_3").setName(new SFString("l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_3")).setCenter(new float[] {0.1835f ,-0.1058f ,0.6264f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1058f ,0.6264f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1058f ,0.6264f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_3").setName(new SFString("l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_3")).setCenter(new float[] {0.1815f ,-0.1054f ,0.5947f })
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1054f ,0.5947f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1054f ,0.5947f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_3").setName(new SFString("l_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_3")).setCenter(new float[] {0.1805f ,-0.1056f ,0.5668f })
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1056f ,0.5668f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1056f ,0.5668f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName(new SFString("l_hamate")).setDEF(new SFString("hanim_l_hamate")).setCenter(new float[] {0.1809f ,-0.1276f ,0.6973f })
                                                              .addChild(new HAnimSegment("hanim_l_hamate").setName(new SFString("SEGMENT_FOR_l_hamate")).setDEF(new SFString("hanim_SEGMENT_FOR_l_hamate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint l_hamate segment SEGMENT_FOR_l_hamate")))
                                                                .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1276f ,0.6973f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_hamate").setName(new SFString("SEGMENT_FOR_l_hamate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_hamate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1276f ,0.6973f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName(new SFString("l_metacarpal_4")).setDEF(new SFString("hanim_l_metacarpal_4")).setCenter(new float[] {0.1809f ,-0.1218f ,0.6777f })
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_4").setName(new SFString("SEGMENT_FOR_l_metacarpal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_4"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1218f ,0.6777f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_4").setName(new SFString("SEGMENT_FOR_l_metacarpal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_4_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1809f ,-0.1218f ,0.6777f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_4").setName(new SFString("l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_4")).setCenter(new float[] {0.1835f ,-0.1233f ,0.6255f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1233f ,0.6255f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1835f ,-0.1233f ,0.6255f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_4").setName(new SFString("l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_4")).setCenter(new float[] {0.1815f ,-0.1225f ,0.598f })
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1225f ,0.598f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1225f ,0.598f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_4").setName(new SFString("l_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_4")).setCenter(new float[] {0.1805f ,-0.1217f ,0.5722f })
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1217f ,0.5722f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1805f ,-0.1217f ,0.5722f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName(new SFString("l_metacarpal_5")).setDEF(new SFString("hanim_l_metacarpal_5")).setCenter(new float[] {0.1815f ,-0.1347f ,0.6797f })
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_5").setName(new SFString("SEGMENT_FOR_l_metacarpal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_5"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5")))
                                                                  .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1347f ,0.6797f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_5").setName(new SFString("SEGMENT_FOR_l_metacarpal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_metacarpal_5_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.1347f ,0.6797f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_5").setName(new SFString("l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_proximal_phalanx_5")).setCenter(new float[] {0.1832f ,-0.1389f ,0.6295f })
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5")))
                                                                    .addChild(new Transform().setTranslation(new float[] {0.1832f ,-0.1389f ,0.6295f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1832f ,-0.1389f ,0.6295f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_5").setName(new SFString("l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_l_carpal_middle_phalanx_5")).setCenter(new float[] {0.1815f ,-0.139f ,0.6124f })
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5")))
                                                                      .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.139f ,0.6124f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1815f ,-0.139f ,0.6124f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_5").setName(new SFString("l_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_l_carpal_distal_phalanx_5")).setCenter(new float[] {0.1806f ,-0.1388f ,0.5938f })
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5")))
                                                                        .addChild(new Transform().setTranslation(new float[] {0.1806f ,-0.1388f ,0.5938f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5").setName(new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {0.1806f ,-0.1388f ,0.5938f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName(new SFString("r_clavicle")).setDEF(new SFString("hanim_r_clavicle")).setCenter(new float[] {-0.1231f ,-0.1148f ,1.1833f })
                                                    .addChild(new HAnimSegment("hanim_r_clavicle").setName(new SFString("SEGMENT_FOR_r_clavicle")).setDEF(new SFString("hanim_SEGMENT_FOR_r_clavicle"))
                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_clavicle segment SEGMENT_FOR_r_clavicle")))
                                                      .addChild(new Transform().setTranslation(new float[] {-0.1231f ,-0.1148f ,1.1833f })
                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_clavicle").setName(new SFString("SEGMENT_FOR_r_clavicle_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_clavicle_tip"))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.1231f ,-0.1148f ,1.1833f })
                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                    .addChild(new HAnimJoint("hanim_r_clavicle").setName(new SFString("r_scapula")).setDEF(new SFString("hanim_r_scapula")).setCenter(new float[] {-0.0387f ,-0.1157f ,1.2001f })
                                                      .addChild(new HAnimSegment("hanim_r_scapula").setName(new SFString("SEGMENT_FOR_r_scapula")).setDEF(new SFString("hanim_SEGMENT_FOR_r_scapula"))
                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_scapula segment SEGMENT_FOR_r_scapula")))
                                                        .addChild(new Transform().setTranslation(new float[] {-0.0387f ,-0.1157f ,1.2001f })
                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_scapula").setName(new SFString("SEGMENT_FOR_r_scapula_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_scapula_tip"))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.0387f ,-0.1157f ,1.2001f })
                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                      .addChild(new HAnimJoint("hanim_r_scapula").setName(new SFString("r_upperarm")).setDEF(new SFString("hanim_r_upperarm")).setCenter(new float[] {-0.1649f ,-0.1051f ,1.17f })
                                                        .addChild(new HAnimSegment("hanim_r_upperarm").setName(new SFString("SEGMENT_FOR_r_upperarm")).setDEF(new SFString("hanim_SEGMENT_FOR_r_upperarm"))
                                                          .addChild(new TouchSensor().setDescription(new SFString("joint r_upperarm segment SEGMENT_FOR_r_upperarm")))
                                                          .addChild(new Transform().setTranslation(new float[] {-0.1649f ,-0.1051f ,1.17f })
                                                            .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_upperarm").setName(new SFString("SEGMENT_FOR_r_upperarm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_upperarm_tip"))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1649f ,-0.1051f ,1.17f })
                                                              .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                        .addChild(new HAnimJoint("hanim_r_upperarm").setName(new SFString("r_forearm")).setDEF(new SFString("hanim_r_forearm")).setCenter(new float[] {-0.1819f ,-0.1075f ,0.9202f })
                                                          .addChild(new HAnimSegment("hanim_r_forearm").setName(new SFString("SEGMENT_FOR_r_forearm")).setDEF(new SFString("hanim_SEGMENT_FOR_r_forearm"))
                                                            .addChild(new TouchSensor().setDescription(new SFString("joint r_forearm segment SEGMENT_FOR_r_forearm")))
                                                            .addChild(new Transform().setTranslation(new float[] {-0.1819f ,-0.1075f ,0.9202f })
                                                              .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_forearm").setName(new SFString("SEGMENT_FOR_r_forearm_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_forearm_tip"))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1819f ,-0.1075f ,0.9202f })
                                                                .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                          .addChild(new HAnimJoint("hanim_r_forearm").setName(new SFString("r_carpal")).setDEF(new SFString("hanim_r_carpal")).setCenter(new float[] {-0.1818f ,-0.1069f ,0.7157f })
                                                            .addChild(new HAnimSegment("hanim_r_carpal").setName(new SFString("SEGMENT_FOR_r_carpal")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal"))
                                                              .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal segment SEGMENT_FOR_r_carpal")))
                                                              .addChild(new Transform().setTranslation(new float[] {-0.1818f ,-0.1069f ,0.7157f })
                                                                .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal").setName(new SFString("SEGMENT_FOR_r_carpal_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_tip"))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1818f ,-0.1069f ,0.7157f })
                                                                  .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_trapezium")).setDEF(new SFString("hanim_r_trapezium")).setCenter(new float[] {-0.1811f ,-0.0826f ,0.6975f })
                                                              .addChild(new HAnimSegment("hanim_r_trapezium").setName(new SFString("SEGMENT_FOR_r_trapezium")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezium"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_trapezium segment SEGMENT_FOR_r_trapezium")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0826f ,0.6975f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezium").setName(new SFString("SEGMENT_FOR_r_trapezium_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezium_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0826f ,0.6975f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezium").setName(new SFString("r_metacarpal_1")).setDEF(new SFString("hanim_r_metacarpal_1")).setCenter(new float[] {-0.1803f ,-0.0759f ,0.684f })
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_1").setName(new SFString("SEGMENT_FOR_r_metacarpal_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_1"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1803f ,-0.0759f ,0.684f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_1").setName(new SFString("SEGMENT_FOR_r_metacarpal_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_1_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1803f ,-0.0759f ,0.684f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_1").setName(new SFString("r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_1")).setCenter(new float[] {-0.1808f ,-0.0661f ,0.6642f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1808f ,-0.0661f ,0.6642f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1808f ,-0.0661f ,0.6642f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_1").setName(new SFString("r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_1")).setCenter(new float[] {-0.1825f ,-0.0522f ,0.6455f })
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_1")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1825f ,-0.0522f ,0.6455f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1825f ,-0.0522f ,0.6455f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_trapezoid")).setDEF(new SFString("hanim_r_trapezoid")).setCenter(new float[] {-0.1811f ,-0.0935f ,0.6984f })
                                                              .addChild(new HAnimSegment("hanim_r_trapezoid").setName(new SFString("SEGMENT_FOR_r_trapezoid")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezoid"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0935f ,0.6984f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezoid").setName(new SFString("SEGMENT_FOR_r_trapezoid_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_trapezoid_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0935f ,0.6984f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezoid").setName(new SFString("r_metacarpal_2")).setDEF(new SFString("hanim_r_metacarpal_2")).setCenter(new float[] {-0.1811f ,-0.0922f ,0.679f })
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_2").setName(new SFString("SEGMENT_FOR_r_metacarpal_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_2"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0922f ,0.679f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_2").setName(new SFString("SEGMENT_FOR_r_metacarpal_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_2_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1811f ,-0.0922f ,0.679f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_2").setName(new SFString("r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_2")).setCenter(new float[] {-0.1835f ,-0.0868f ,0.6286f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.0868f ,0.6286f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.0868f ,0.6286f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_2").setName(new SFString("r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_2")).setCenter(new float[] {-0.1815f ,-0.0877f ,0.5983f })
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.0877f ,0.5983f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.0877f ,0.5983f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_2").setName(new SFString("r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_2")).setCenter(new float[] {-0.1805f ,-0.0885f ,0.5731f })
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_2")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2")))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.0885f ,0.5731f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.0885f ,0.5731f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_capitate")).setDEF(new SFString("hanim_r_capitate")).setCenter(new float[] {-0.1809f ,-0.1067f ,0.7f })
                                                              .addChild(new HAnimSegment("hanim_r_capitate").setName(new SFString("SEGMENT_FOR_r_capitate")).setDEF(new SFString("hanim_SEGMENT_FOR_r_capitate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_capitate segment SEGMENT_FOR_r_capitate")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1067f ,0.7f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_capitate").setName(new SFString("SEGMENT_FOR_r_capitate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_capitate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1067f ,0.7f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_capitate").setName(new SFString("r_metacarpal_3")).setDEF(new SFString("hanim_r_metacarpal_3")).setCenter(new float[] {-0.1809f ,-0.1081f ,0.6772f })
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_3").setName(new SFString("SEGMENT_FOR_r_metacarpal_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_3"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1081f ,0.6772f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_3").setName(new SFString("SEGMENT_FOR_r_metacarpal_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_3_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1081f ,0.6772f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_3").setName(new SFString("r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_3")).setCenter(new float[] {-0.1835f ,-0.1058f ,0.6264f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1058f ,0.6264f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1058f ,0.6264f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_3").setName(new SFString("r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_3")).setCenter(new float[] {-0.1815f ,-0.1054f ,0.5947f })
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1054f ,0.5947f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1054f ,0.5947f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_3").setName(new SFString("r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_3")).setCenter(new float[] {-0.1805f ,-0.1056f ,0.5668f })
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_3")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3")))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1056f ,0.5668f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1056f ,0.5668f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape")))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName(new SFString("r_hamate")).setDEF(new SFString("hanim_r_hamate")).setCenter(new float[] {-0.1809f ,-0.1276f ,0.6973f })
                                                              .addChild(new HAnimSegment("hanim_r_hamate").setName(new SFString("SEGMENT_FOR_r_hamate")).setDEF(new SFString("hanim_SEGMENT_FOR_r_hamate"))
                                                                .addChild(new TouchSensor().setDescription(new SFString("joint r_hamate segment SEGMENT_FOR_r_hamate")))
                                                                .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1276f ,0.6973f })
                                                                  .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_hamate").setName(new SFString("SEGMENT_FOR_r_hamate_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_hamate_tip"))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1276f ,0.6973f })
                                                                    .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName(new SFString("r_metacarpal_4")).setDEF(new SFString("hanim_r_metacarpal_4")).setCenter(new float[] {-0.1809f ,-0.1218f ,0.6777f })
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_4").setName(new SFString("SEGMENT_FOR_r_metacarpal_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_4"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1218f ,0.6777f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_4").setName(new SFString("SEGMENT_FOR_r_metacarpal_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_4_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1809f ,-0.1218f ,0.6777f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_4").setName(new SFString("r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_4")).setCenter(new float[] {-0.1835f ,-0.1233f ,0.6255f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1233f ,0.6255f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1835f ,-0.1233f ,0.6255f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_4").setName(new SFString("r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_4")).setCenter(new float[] {-0.1815f ,-0.1225f ,0.598f })
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1225f ,0.598f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.1225f ,0.598f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_4").setName(new SFString("r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_4")).setCenter(new float[] {-0.1805f ,-0.1217f ,0.5722f })
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_4")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4"))
                                                                        .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4")))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1217f ,0.5722f })
                                                                          .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4").setName(new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"))
                                                                          .addChild(new Transform().setTranslation(new float[] {-0.1805f ,-0.1217f ,0.5722f })
                                                                            .addChild(new Shape().setUSE(new SFString("SiteShape"))))))))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName(new SFString("r_metacarpal_5")).setDEF(new SFString("hanim_r_metacarpal_5")).setCenter(new float[] {-0.1814f ,-0.1347f ,0.6797f })
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_5").setName(new SFString("SEGMENT_FOR_r_metacarpal_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_5"))
                                                                  .addChild(new TouchSensor().setDescription(new SFString("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5")))
                                                                  .addChild(new Transform().setTranslation(new float[] {-0.1814f ,-0.1347f ,0.6797f })
                                                                    .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_5").setName(new SFString("SEGMENT_FOR_r_metacarpal_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_metacarpal_5_tip"))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1814f ,-0.1347f ,0.6797f })
                                                                      .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_5").setName(new SFString("r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_proximal_phalanx_5")).setCenter(new float[] {-0.1832f ,-0.1389f ,0.6295f })
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5"))
                                                                    .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5")))
                                                                    .addChild(new Transform().setTranslation(new float[] {-0.1832f ,-0.1389f ,0.6295f })
                                                                      .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1832f ,-0.1389f ,0.6295f })
                                                                        .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_5").setName(new SFString("r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_r_carpal_middle_phalanx_5")).setCenter(new float[] {-0.1815f ,-0.139f ,0.6124f })
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_5")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5"))
                                                                      .addChild(new TouchSensor().setDescription(new SFString("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5")))
                                                                      .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.139f ,0.6124f })
                                                                        .addChild(new Shape().setUSE(new SFString("JointShape"))))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5").setName(new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip")).setDEF(new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"))
                                                                        .addChild(new Transform().setTranslation(new float[] {-0.1815f ,-0.139f ,0.6124f })
                                                                          .addChild(new Shape().setUSE(new SFString("SiteShape"))))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_5").setName(new SFString("r_carpal_distal_phalanx_5")).setDEF(new SFString("hanim_r_carpal_distal_phalanx_5")).setCenter(new float[] {-0.1806f ,-0.1388f ,0.5938f })
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
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_sacrum")).setKey(new MFFloat2().getArray()).setKeyValue(new MFRotation3().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_pelvis")).setKey(new MFFloat4().getArray()).setKeyValue(new MFRotation5().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_thigh")).setKey(new MFFloat6().getArray()).setKeyValue(new MFRotation7().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_calf")).setKey(new MFFloat8().getArray()).setKeyValue(new MFRotation9().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_talus")).setKey(new MFFloat10().getArray()).setKeyValue(new MFRotation11().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_navicular")).setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuneiform_1")).setKey(new MFFloat14().getArray()).setKeyValue(new MFRotation15().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_1")).setKey(new MFFloat16().getArray()).setKeyValue(new MFRotation17().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_1")).setKey(new MFFloat18().getArray()).setKeyValue(new MFRotation19().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_1")).setKey(new MFFloat20().getArray()).setKeyValue(new MFRotation21().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuneiform_2")).setKey(new MFFloat22().getArray()).setKeyValue(new MFRotation23().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_2")).setKey(new MFFloat24().getArray()).setKeyValue(new MFRotation25().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_2")).setKey(new MFFloat26().getArray()).setKeyValue(new MFRotation27().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_2")).setKey(new MFFloat28().getArray()).setKeyValue(new MFRotation29().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_2")).setKey(new MFFloat30().getArray()).setKeyValue(new MFRotation31().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuneiform_3")).setKey(new MFFloat32().getArray()).setKeyValue(new MFRotation33().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_3")).setKey(new MFFloat34().getArray()).setKeyValue(new MFRotation35().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_3")).setKey(new MFFloat36().getArray()).setKeyValue(new MFRotation37().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_3")).setKey(new MFFloat38().getArray()).setKeyValue(new MFRotation39().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_3")).setKey(new MFFloat40().getArray()).setKeyValue(new MFRotation41().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_calcaneus")).setKey(new MFFloat42().getArray()).setKeyValue(new MFRotation43().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_cuboid")).setKey(new MFFloat44().getArray()).setKeyValue(new MFRotation45().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_4")).setKey(new MFFloat46().getArray()).setKeyValue(new MFRotation47().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_4")).setKey(new MFFloat48().getArray()).setKeyValue(new MFRotation49().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_4")).setKey(new MFFloat50().getArray()).setKeyValue(new MFRotation51().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_4")).setKey(new MFFloat52().getArray()).setKeyValue(new MFRotation53().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metatarsal_5")).setKey(new MFFloat54().getArray()).setKeyValue(new MFRotation55().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_proximal_phalanx_5")).setKey(new MFFloat56().getArray()).setKeyValue(new MFRotation57().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_middle_phalanx_5")).setKey(new MFFloat58().getArray()).setKeyValue(new MFRotation59().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_tarsal_distal_phalanx_5")).setKey(new MFFloat60().getArray()).setKeyValue(new MFRotation61().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_thigh")).setKey(new MFFloat62().getArray()).setKeyValue(new MFRotation63().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_calf")).setKey(new MFFloat64().getArray()).setKeyValue(new MFRotation65().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_talus")).setKey(new MFFloat66().getArray()).setKeyValue(new MFRotation67().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_navicular")).setKey(new MFFloat68().getArray()).setKeyValue(new MFRotation69().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuneiform_1")).setKey(new MFFloat70().getArray()).setKeyValue(new MFRotation71().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_1")).setKey(new MFFloat72().getArray()).setKeyValue(new MFRotation73().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_1")).setKey(new MFFloat74().getArray()).setKeyValue(new MFRotation75().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_1")).setKey(new MFFloat76().getArray()).setKeyValue(new MFRotation77().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuneiform_2")).setKey(new MFFloat78().getArray()).setKeyValue(new MFRotation79().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_2")).setKey(new MFFloat80().getArray()).setKeyValue(new MFRotation81().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_2")).setKey(new MFFloat82().getArray()).setKeyValue(new MFRotation83().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_2")).setKey(new MFFloat84().getArray()).setKeyValue(new MFRotation85().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_2")).setKey(new MFFloat86().getArray()).setKeyValue(new MFRotation87().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuneiform_3")).setKey(new MFFloat88().getArray()).setKeyValue(new MFRotation89().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_3")).setKey(new MFFloat90().getArray()).setKeyValue(new MFRotation91().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_3")).setKey(new MFFloat92().getArray()).setKeyValue(new MFRotation93().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_3")).setKey(new MFFloat94().getArray()).setKeyValue(new MFRotation95().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_3")).setKey(new MFFloat96().getArray()).setKeyValue(new MFRotation97().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_calcaneus")).setKey(new MFFloat98().getArray()).setKeyValue(new MFRotation99().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_cuboid")).setKey(new MFFloat100().getArray()).setKeyValue(new MFRotation101().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_4")).setKey(new MFFloat102().getArray()).setKeyValue(new MFRotation103().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_4")).setKey(new MFFloat104().getArray()).setKeyValue(new MFRotation105().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_4")).setKey(new MFFloat106().getArray()).setKeyValue(new MFRotation107().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_4")).setKey(new MFFloat108().getArray()).setKeyValue(new MFRotation109().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metatarsal_5")).setKey(new MFFloat110().getArray()).setKeyValue(new MFRotation111().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_proximal_phalanx_5")).setKey(new MFFloat112().getArray()).setKeyValue(new MFRotation113().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_middle_phalanx_5")).setKey(new MFFloat114().getArray()).setKeyValue(new MFRotation115().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_tarsal_distal_phalanx_5")).setKey(new MFFloat116().getArray()).setKeyValue(new MFRotation117().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l5")).setKey(new MFFloat118().getArray()).setKeyValue(new MFRotation119().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l4")).setKey(new MFFloat120().getArray()).setKeyValue(new MFRotation121().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l3")).setKey(new MFFloat122().getArray()).setKeyValue(new MFRotation123().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l2")).setKey(new MFFloat124().getArray()).setKeyValue(new MFRotation125().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l1")).setKey(new MFFloat126().getArray()).setKeyValue(new MFRotation127().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t12")).setKey(new MFFloat128().getArray()).setKeyValue(new MFRotation129().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t11")).setKey(new MFFloat130().getArray()).setKeyValue(new MFRotation131().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t10")).setKey(new MFFloat132().getArray()).setKeyValue(new MFRotation133().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t9")).setKey(new MFFloat134().getArray()).setKeyValue(new MFRotation135().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t8")).setKey(new MFFloat136().getArray()).setKeyValue(new MFRotation137().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t7")).setKey(new MFFloat138().getArray()).setKeyValue(new MFRotation139().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t6")).setKey(new MFFloat140().getArray()).setKeyValue(new MFRotation141().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t5")).setKey(new MFFloat142().getArray()).setKeyValue(new MFRotation143().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t4")).setKey(new MFFloat144().getArray()).setKeyValue(new MFRotation145().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t3")).setKey(new MFFloat146().getArray()).setKeyValue(new MFRotation147().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t2")).setKey(new MFFloat148().getArray()).setKeyValue(new MFRotation149().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_t1")).setKey(new MFFloat150().getArray()).setKeyValue(new MFRotation151().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c7")).setKey(new MFFloat152().getArray()).setKeyValue(new MFRotation153().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c6")).setKey(new MFFloat154().getArray()).setKeyValue(new MFRotation155().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c5")).setKey(new MFFloat156().getArray()).setKeyValue(new MFRotation157().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c4")).setKey(new MFFloat158().getArray()).setKeyValue(new MFRotation159().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c3")).setKey(new MFFloat160().getArray()).setKeyValue(new MFRotation161().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c2")).setKey(new MFFloat162().getArray()).setKeyValue(new MFRotation163().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_c1")).setKey(new MFFloat164().getArray()).setKeyValue(new MFRotation165().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_skull")).setKey(new MFFloat166().getArray()).setKeyValue(new MFRotation167().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_eyelid")).setKey(new MFFloat168().getArray()).setKeyValue(new MFRotation169().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_eyelid")).setKey(new MFFloat170().getArray()).setKeyValue(new MFRotation171().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_eyeball")).setKey(new MFFloat172().getArray()).setKeyValue(new MFRotation173().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_eyeball")).setKey(new MFFloat174().getArray()).setKeyValue(new MFRotation175().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_eyebrow")).setKey(new MFFloat176().getArray()).setKeyValue(new MFRotation177().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_eyebrow")).setKey(new MFFloat178().getArray()).setKeyValue(new MFRotation179().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_jaw")).setKey(new MFFloat180().getArray()).setKeyValue(new MFRotation181().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_clavicle")).setKey(new MFFloat182().getArray()).setKeyValue(new MFRotation183().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_scapula")).setKey(new MFFloat184().getArray()).setKeyValue(new MFRotation185().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_upperarm")).setKey(new MFFloat186().getArray()).setKeyValue(new MFRotation187().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_forearm")).setKey(new MFFloat188().getArray()).setKeyValue(new MFRotation189().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal")).setKey(new MFFloat190().getArray()).setKeyValue(new MFRotation191().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_trapezium")).setKey(new MFFloat192().getArray()).setKeyValue(new MFRotation193().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_1")).setKey(new MFFloat194().getArray()).setKeyValue(new MFRotation195().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_1")).setKey(new MFFloat196().getArray()).setKeyValue(new MFRotation197().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_1")).setKey(new MFFloat198().getArray()).setKeyValue(new MFRotation199().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_trapezoid")).setKey(new MFFloat200().getArray()).setKeyValue(new MFRotation201().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_2")).setKey(new MFFloat202().getArray()).setKeyValue(new MFRotation203().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_2")).setKey(new MFFloat204().getArray()).setKeyValue(new MFRotation205().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_2")).setKey(new MFFloat206().getArray()).setKeyValue(new MFRotation207().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_2")).setKey(new MFFloat208().getArray()).setKeyValue(new MFRotation209().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_capitate")).setKey(new MFFloat210().getArray()).setKeyValue(new MFRotation211().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_3")).setKey(new MFFloat212().getArray()).setKeyValue(new MFRotation213().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_3")).setKey(new MFFloat214().getArray()).setKeyValue(new MFRotation215().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_3")).setKey(new MFFloat216().getArray()).setKeyValue(new MFRotation217().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_3")).setKey(new MFFloat218().getArray()).setKeyValue(new MFRotation219().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_hamate")).setKey(new MFFloat220().getArray()).setKeyValue(new MFRotation221().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_4")).setKey(new MFFloat222().getArray()).setKeyValue(new MFRotation223().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_4")).setKey(new MFFloat224().getArray()).setKeyValue(new MFRotation225().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_4")).setKey(new MFFloat226().getArray()).setKeyValue(new MFRotation227().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_4")).setKey(new MFFloat228().getArray()).setKeyValue(new MFRotation229().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_metacarpal_5")).setKey(new MFFloat230().getArray()).setKeyValue(new MFRotation231().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_proximal_phalanx_5")).setKey(new MFFloat232().getArray()).setKeyValue(new MFRotation233().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_middle_phalanx_5")).setKey(new MFFloat234().getArray()).setKeyValue(new MFRotation235().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_l_carpal_distal_phalanx_5")).setKey(new MFFloat236().getArray()).setKeyValue(new MFRotation237().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_clavicle")).setKey(new MFFloat238().getArray()).setKeyValue(new MFRotation239().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_scapula")).setKey(new MFFloat240().getArray()).setKeyValue(new MFRotation241().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_upperarm")).setKey(new MFFloat242().getArray()).setKeyValue(new MFRotation243().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_forearm")).setKey(new MFFloat244().getArray()).setKeyValue(new MFRotation245().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal")).setKey(new MFFloat246().getArray()).setKeyValue(new MFRotation247().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_trapezium")).setKey(new MFFloat248().getArray()).setKeyValue(new MFRotation249().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_1")).setKey(new MFFloat250().getArray()).setKeyValue(new MFRotation251().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_1")).setKey(new MFFloat252().getArray()).setKeyValue(new MFRotation253().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_1")).setKey(new MFFloat254().getArray()).setKeyValue(new MFRotation255().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_trapezoid")).setKey(new MFFloat256().getArray()).setKeyValue(new MFRotation257().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_2")).setKey(new MFFloat258().getArray()).setKeyValue(new MFRotation259().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_2")).setKey(new MFFloat260().getArray()).setKeyValue(new MFRotation261().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_2")).setKey(new MFFloat262().getArray()).setKeyValue(new MFRotation263().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_2")).setKey(new MFFloat264().getArray()).setKeyValue(new MFRotation265().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_capitate")).setKey(new MFFloat266().getArray()).setKeyValue(new MFRotation267().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_3")).setKey(new MFFloat268().getArray()).setKeyValue(new MFRotation269().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_3")).setKey(new MFFloat270().getArray()).setKeyValue(new MFRotation271().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_3")).setKey(new MFFloat272().getArray()).setKeyValue(new MFRotation273().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_3")).setKey(new MFFloat274().getArray()).setKeyValue(new MFRotation275().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_hamate")).setKey(new MFFloat276().getArray()).setKeyValue(new MFRotation277().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_4")).setKey(new MFFloat278().getArray()).setKeyValue(new MFRotation279().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_4")).setKey(new MFFloat280().getArray()).setKeyValue(new MFRotation281().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_4")).setKey(new MFFloat282().getArray()).setKeyValue(new MFRotation283().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_4")).setKey(new MFFloat284().getArray()).setKeyValue(new MFRotation285().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_metacarpal_5")).setKey(new MFFloat286().getArray()).setKeyValue(new MFRotation287().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_proximal_phalanx_5")).setKey(new MFFloat288().getArray()).setKeyValue(new MFRotation289().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_middle_phalanx_5")).setKey(new MFFloat290().getArray()).setKeyValue(new MFRotation291().getArray()))
        .addChild(new OrientationInterpolator().setDEF(new SFString("Armature_OI_r_carpal_distal_phalanx_5")).setKey(new MFFloat292().getArray()).setKeyValue(new MFRotation293().getArray()))
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation3 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation5 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation7 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation9 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation11 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation13 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation15 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation17 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation19 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation21 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation23 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation25 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation27 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation29 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation31 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation33 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation35 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation37 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation39 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation41 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation43 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation45 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation47 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat48 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation49 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation51 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation53 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat54 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation55 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation57 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation59 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation61 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation63 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation65 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation67 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation69 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat70 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation71 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat72 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation73 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation75 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat76 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation77 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation79 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat80 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation81 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation83 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation85 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation87 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation89 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation91 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation93 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation95 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation97 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation99 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation101 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation103 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation105 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat106 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation107 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation109 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation111 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation113 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat114 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation115 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation117 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation119 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat120 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation121 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat122 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation123 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat124 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation125 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat126 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation127 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat128 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation129 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat130 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation131 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat132 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation133 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat134 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation135 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat136 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation137 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat138 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation139 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation141 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat142 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation143 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation145 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat146 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation147 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat148 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation149 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat150 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation151 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat152 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation153 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat154 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation155 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation157 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation159 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat160 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation161 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation163 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation165 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat166 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation167 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat168 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation169 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation171 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation173 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat174 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation175 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation177 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat178 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation179 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation181 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat182 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation183 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation185 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat186 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation187 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation189 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat190 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation191 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat192 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation193 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation195 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation197 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat198 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation199 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation201 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat202 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation203 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation205 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat206 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation207 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation209 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat210 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation211 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation213 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation215 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat216 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation217 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation219 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat220 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation221 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat222 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation223 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation225 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat226 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation227 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation229 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat230 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation231 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation233 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat234 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation235 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation237 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat238 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation239 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation241 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat242 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation243 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation245 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation247 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation249 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat250 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation251 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat252 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation253 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat254 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation255 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation257 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat258 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation259 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation261 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat262 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation263 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation265 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat266 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation267 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation269 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat270 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation271 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation273 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat274 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation275 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation277 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat278 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation279 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation281 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat282 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation283 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation285 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat286 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation287 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat288 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation289 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat290 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation291 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFRotation293 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
  }
}
}
