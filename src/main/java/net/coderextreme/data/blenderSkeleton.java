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
    model.toFileJSON("../data/blenderSkeleton.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(3))
        .addMeta(new meta().setName("title").setContent("blenderSkeleton.x3d"))
        .addMeta(new meta().setName("copyright").setContent("2023"))
        .addMeta(new meta().setName("reference").setContent("http://www.web3D.org"))
        .addMeta(new meta().setName("generator").setContent("Blender 4.0.1")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addChild(new Background().setDEF("WO_World").setGroundColor(new MFColor0().getArray()).setSkyColor(new MFColor1().getArray()))
        .addChild(new Transform()
          .addChild(new Shape().setDEF("SiteShape")
            .setGeometry(new Box().setSize(new double[] {0.05,0.05,0.05}))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0,0,1})))))
        .addChild(new Transform()
          .addChild(new Shape().setDEF("JointShape")
            .setGeometry(new Sphere().setRadius(0.06))
            .setAppearance(new Appearance().setDEF("JointAppearance")
              .setMaterial(new Material().setDiffuseColor(new double[] {1,0.5,0}).setTransparency(0.5)))))
        .addChild(new Transform().setDEF("Light_TRANSFORM").setRotation(new double[] {0.20594,0.33152,0.9207,1.92627}).setTranslation(new double[] {4.07625,1.00545,5.90386})
          .addChild(new PointLight().setDEF("LA_Light").setLocation(new double[] {-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7}).setRadius(40)))
        .addChild(new Transform().setDEF("Camera_TRANSFORM").setRotation(new double[] {0.77344,0.33383,0.53884,1.35072}).setTranslation(new double[] {7.35889,-6.92579,4.95831})
          .addChild(new Viewpoint().setDEF("CA_Camera").setFieldOfView(0.6911112070083618).setOrientation(new double[] {-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0}).setPosition(new double[] {-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7})))
        .addChild(new Transform().setDEF("Armature_TRANSFORM")
          .addChild(new HAnimHumanoid("Armature_TRANSFORM").setName("humanoid").setDEF("hanim_humanoid").setVersion("2.0")
            .addSkeleton(((HAnimJoint)new HAnimJoint("hanim_humanoid").setName("Armature").setDEF("hanim_Armature").setContainerFieldOverride("skeleton"))
              .addChild(new HAnimSegment("hanim_Armature").setName("SEGMENT_FOR_Armature").setDEF("hanim_SEGMENT_FOR_Armature")
                .addChild(new TouchSensor().setDescription("joint Armature segment SEGMENT_FOR_Armature"))
                .addChild(new Transform()
                  .addChild(new Shape().setUSE("JointShape")))
                .addChild(new HAnimSite("hanim_SEGMENT_FOR_Armature").setName("SEGMENT_FOR_Armature_tip").setDEF("hanim_SEGMENT_FOR_Armature_tip")
                  .addChild(new Transform()
                    .addChild(new Shape().setUSE("SiteShape")))))
              .addChild(new HAnimJoint("hanim_Armature").setName("sacrum").setDEF("hanim_sacrum").setCenter(new double[] {-0.0002,-0.1178,0.8174})
                .addChild(new HAnimSegment("hanim_sacrum").setName("SEGMENT_FOR_sacrum").setDEF("hanim_SEGMENT_FOR_sacrum")
                  .addChild(new TouchSensor().setDescription("joint sacrum segment SEGMENT_FOR_sacrum"))
                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.8174})
                    .addChild(new Shape().setUSE("JointShape")))
                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_sacrum").setName("SEGMENT_FOR_sacrum_tip").setDEF("hanim_SEGMENT_FOR_sacrum_tip")
                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.8174})
                      .addChild(new Shape().setUSE("SiteShape")))))
                .addChild(new HAnimJoint("hanim_sacrum").setName("pelvis").setDEF("hanim_pelvis").setCenter(new double[] {-0.0002,-0.1178,0.6986})
                  .addChild(new HAnimSegment("hanim_pelvis").setName("SEGMENT_FOR_pelvis").setDEF("hanim_SEGMENT_FOR_pelvis")
                    .addChild(new TouchSensor().setDescription("joint pelvis segment SEGMENT_FOR_pelvis"))
                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.6986})
                      .addChild(new Shape().setUSE("JointShape")))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_pelvis").setName("SEGMENT_FOR_pelvis_tip").setDEF("hanim_SEGMENT_FOR_pelvis_tip")
                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1178,0.6986})
                        .addChild(new Shape().setUSE("SiteShape")))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName("l_thigh").setDEF("hanim_l_thigh").setCenter(new double[] {0.0945,-0.1202,0.8181})
                    .addChild(new HAnimSegment("hanim_l_thigh").setName("SEGMENT_FOR_l_thigh").setDEF("hanim_SEGMENT_FOR_l_thigh")
                      .addChild(new TouchSensor().setDescription("joint l_thigh segment SEGMENT_FOR_l_thigh"))
                      .addChild(new Transform().setTranslation(new double[] {0.0945,-0.1202,0.8181})
                        .addChild(new Shape().setUSE("JointShape")))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_thigh").setName("SEGMENT_FOR_l_thigh_tip").setDEF("hanim_SEGMENT_FOR_l_thigh_tip")
                        .addChild(new Transform().setTranslation(new double[] {0.0945,-0.1202,0.8181})
                          .addChild(new Shape().setUSE("SiteShape")))))
                    .addChild(new HAnimJoint("hanim_l_thigh").setName("l_calf").setDEF("hanim_l_calf").setCenter(new double[] {0.0924,-0.1213,0.4003})
                      .addChild(new HAnimSegment("hanim_l_calf").setName("SEGMENT_FOR_l_calf").setDEF("hanim_SEGMENT_FOR_l_calf")
                        .addChild(new TouchSensor().setDescription("joint l_calf segment SEGMENT_FOR_l_calf"))
                        .addChild(new Transform().setTranslation(new double[] {0.0924,-0.1213,0.4003})
                          .addChild(new Shape().setUSE("JointShape")))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calf").setName("SEGMENT_FOR_l_calf_tip").setDEF("hanim_SEGMENT_FOR_l_calf_tip")
                          .addChild(new Transform().setTranslation(new double[] {0.0924,-0.1213,0.4003})
                            .addChild(new Shape().setUSE("SiteShape")))))
                      .addChild(new HAnimJoint("hanim_l_calf").setName("l_talus").setDEF("hanim_l_talus").setCenter(new double[] {0.0886,-0.1123,0.0869})
                        .addChild(new HAnimSegment("hanim_l_talus").setName("SEGMENT_FOR_l_talus").setDEF("hanim_SEGMENT_FOR_l_talus")
                          .addChild(new TouchSensor().setDescription("joint l_talus segment SEGMENT_FOR_l_talus"))
                          .addChild(new Transform().setTranslation(new double[] {0.0886,-0.1123,0.0869})
                            .addChild(new Shape().setUSE("JointShape")))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_talus").setName("SEGMENT_FOR_l_talus_tip").setDEF("hanim_SEGMENT_FOR_l_talus_tip")
                            .addChild(new Transform().setTranslation(new double[] {0.0886,-0.1123,0.0869})
                              .addChild(new Shape().setUSE("SiteShape")))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName("l_navicular").setDEF("hanim_l_navicular").setCenter(new double[] {0.0781,-0.097,0.0283})
                          .addChild(new HAnimSegment("hanim_l_navicular").setName("SEGMENT_FOR_l_navicular").setDEF("hanim_SEGMENT_FOR_l_navicular")
                            .addChild(new TouchSensor().setDescription("joint l_navicular segment SEGMENT_FOR_l_navicular"))
                            .addChild(new Transform().setTranslation(new double[] {0.0781,-0.097,0.0283})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_navicular").setName("SEGMENT_FOR_l_navicular_tip").setDEF("hanim_SEGMENT_FOR_l_navicular_tip")
                              .addChild(new Transform().setTranslation(new double[] {0.0781,-0.097,0.0283})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName("l_cuneiform_1").setDEF("hanim_l_cuneiform_1").setCenter(new double[] {0.0672,-0.0835,0.0235})
                            .addChild(new HAnimSegment("hanim_l_cuneiform_1").setName("SEGMENT_FOR_l_cuneiform_1").setDEF("hanim_SEGMENT_FOR_l_cuneiform_1")
                              .addChild(new TouchSensor().setDescription("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1"))
                              .addChild(new Transform().setTranslation(new double[] {0.0672,-0.0835,0.0235})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_1").setName("SEGMENT_FOR_l_cuneiform_1_tip").setDEF("hanim_SEGMENT_FOR_l_cuneiform_1_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.0672,-0.0835,0.0235})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_1").setName("l_metatarsal_1").setDEF("hanim_l_metatarsal_1").setCenter(new double[] {0.0644,-0.0577,0.0147})
                              .addChild(new HAnimSegment("hanim_l_metatarsal_1").setName("SEGMENT_FOR_l_metatarsal_1").setDEF("hanim_SEGMENT_FOR_l_metatarsal_1")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1"))
                                .addChild(new Transform().setTranslation(new double[] {0.0644,-0.0577,0.0147})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_1").setName("SEGMENT_FOR_l_metatarsal_1_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_1_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.0644,-0.0577,0.0147})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_1").setName("l_tarsal_proximal_phalanx_1").setDEF("hanim_l_tarsal_proximal_phalanx_1").setCenter(new double[] {0.0619,-0.0083,0.0059})
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1"))
                                  .addChild(new Transform().setTranslation(new double[] {0.0619,-0.0083,0.0059})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.0619,-0.0083,0.0059})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_1").setName("l_tarsal_distal_phalanx_1").setDEF("hanim_l_tarsal_distal_phalanx_1")
                                  .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1"))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip")
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE("SiteShape")))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName("l_cuneiform_2").setDEF("hanim_l_cuneiform_2").setCenter(new double[] {0.0812,-0.0805,0.025})
                            .addChild(new HAnimSegment("hanim_l_cuneiform_2").setName("SEGMENT_FOR_l_cuneiform_2").setDEF("hanim_SEGMENT_FOR_l_cuneiform_2")
                              .addChild(new TouchSensor().setDescription("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2"))
                              .addChild(new Transform().setTranslation(new double[] {0.0812,-0.0805,0.025})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_2").setName("SEGMENT_FOR_l_cuneiform_2_tip").setDEF("hanim_SEGMENT_FOR_l_cuneiform_2_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.0812,-0.0805,0.025})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_2").setName("l_metatarsal_2").setDEF("hanim_l_metatarsal_2").setCenter(new double[] {0.08,-0.0608,0.0175})
                              .addChild(new HAnimSegment("hanim_l_metatarsal_2").setName("SEGMENT_FOR_l_metatarsal_2").setDEF("hanim_SEGMENT_FOR_l_metatarsal_2")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2"))
                                .addChild(new Transform().setTranslation(new double[] {0.08,-0.0608,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_2").setName("SEGMENT_FOR_l_metatarsal_2_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_2_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.08,-0.0608,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_2").setName("l_tarsal_proximal_phalanx_2").setDEF("hanim_l_tarsal_proximal_phalanx_2").setCenter(new double[] {0.0824,-0.004,0.0064})
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2"))
                                  .addChild(new Transform().setTranslation(new double[] {0.0824,-0.004,0.0064})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.0824,-0.004,0.0064})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_2").setName("l_tarsal_middle_phalanx_2").setDEF("hanim_l_tarsal_middle_phalanx_2").setCenter(new double[] {0.0841,0.0121,0.0041})
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2"))
                                    .addChild(new Transform().setTranslation(new double[] {0.0841,0.0121,0.0041})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.0841,0.0121,0.0041})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_2").setName("l_tarsal_distal_phalanx_2").setDEF("hanim_l_tarsal_distal_phalanx_2").setCenter(new double[] {0.0841,0.0216,0.0013})
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2"))
                                      .addChild(new Transform().setTranslation(new double[] {0.0841,0.0216,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.0841,0.0216,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_l_navicular").setName("l_cuneiform_3").setDEF("hanim_l_cuneiform_3").setCenter(new double[] {0.0928,-0.0821,0.0248})
                            .addChild(new HAnimSegment("hanim_l_cuneiform_3").setName("SEGMENT_FOR_l_cuneiform_3").setDEF("hanim_SEGMENT_FOR_l_cuneiform_3")
                              .addChild(new TouchSensor().setDescription("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3"))
                              .addChild(new Transform().setTranslation(new double[] {0.0928,-0.0821,0.0248})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuneiform_3").setName("SEGMENT_FOR_l_cuneiform_3_tip").setDEF("hanim_SEGMENT_FOR_l_cuneiform_3_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.0928,-0.0821,0.0248})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuneiform_3").setName("l_metatarsal_3").setDEF("hanim_l_metatarsal_3").setCenter(new double[] {0.0944,-0.0625,0.0175})
                              .addChild(new HAnimSegment("hanim_l_metatarsal_3").setName("SEGMENT_FOR_l_metatarsal_3").setDEF("hanim_SEGMENT_FOR_l_metatarsal_3")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3"))
                                .addChild(new Transform().setTranslation(new double[] {0.0944,-0.0625,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_3").setName("SEGMENT_FOR_l_metatarsal_3_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_3_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.0944,-0.0625,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_3").setName("l_tarsal_proximal_phalanx_3").setDEF("hanim_l_tarsal_proximal_phalanx_3").setCenter(new double[] {0.0963,-0.0065,0.0065})
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3"))
                                  .addChild(new Transform().setTranslation(new double[] {0.0963,-0.0065,0.0065})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.0963,-0.0065,0.0065})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_3").setName("l_tarsal_middle_phalanx_3").setDEF("hanim_l_tarsal_middle_phalanx_3").setCenter(new double[] {0.0987,0.0086,0.0034})
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3"))
                                    .addChild(new Transform().setTranslation(new double[] {0.0987,0.0086,0.0034})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.0987,0.0086,0.0034})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_3").setName("l_tarsal_distal_phalanx_3").setDEF("hanim_l_tarsal_distal_phalanx_3").setCenter(new double[] {0.1002,0.0178,0.0013})
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3"))
                                      .addChild(new Transform().setTranslation(new double[] {0.1002,0.0178,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.1002,0.0178,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))))
                        .addChild(new HAnimJoint("hanim_l_talus").setName("l_calcaneus").setDEF("hanim_l_calcaneus").setCenter(new double[] {0.0889,-0.1278,0.0494})
                          .addChild(new HAnimSegment("hanim_l_calcaneus").setName("SEGMENT_FOR_l_calcaneus").setDEF("hanim_SEGMENT_FOR_l_calcaneus")
                            .addChild(new TouchSensor().setDescription("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus"))
                            .addChild(new Transform().setTranslation(new double[] {0.0889,-0.1278,0.0494})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_calcaneus").setName("SEGMENT_FOR_l_calcaneus_tip").setDEF("hanim_SEGMENT_FOR_l_calcaneus_tip")
                              .addChild(new Transform().setTranslation(new double[] {0.0889,-0.1278,0.0494})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_l_calcaneus").setName("l_cuboid").setDEF("hanim_l_cuboid").setCenter(new double[] {0.1105,-0.0998,0.0267})
                            .addChild(new HAnimSegment("hanim_l_cuboid").setName("SEGMENT_FOR_l_cuboid").setDEF("hanim_SEGMENT_FOR_l_cuboid")
                              .addChild(new TouchSensor().setDescription("joint l_cuboid segment SEGMENT_FOR_l_cuboid"))
                              .addChild(new Transform().setTranslation(new double[] {0.1105,-0.0998,0.0267})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_cuboid").setName("SEGMENT_FOR_l_cuboid_tip").setDEF("hanim_SEGMENT_FOR_l_cuboid_tip")
                                .addChild(new Transform().setTranslation(new double[] {0.1105,-0.0998,0.0267})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName("l_metatarsal_4").setDEF("hanim_l_metatarsal_4").setCenter(new double[] {0.1063,-0.0634,0.016})
                              .addChild(new HAnimSegment("hanim_l_metatarsal_4").setName("SEGMENT_FOR_l_metatarsal_4").setDEF("hanim_SEGMENT_FOR_l_metatarsal_4")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4"))
                                .addChild(new Transform().setTranslation(new double[] {0.1063,-0.0634,0.016})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_4").setName("SEGMENT_FOR_l_metatarsal_4_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_4_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.1063,-0.0634,0.016})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_4").setName("l_tarsal_proximal_phalanx_4").setDEF("hanim_l_tarsal_proximal_phalanx_4").setCenter(new double[] {0.1097,-0.0107,0.0058})
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4"))
                                  .addChild(new Transform().setTranslation(new double[] {0.1097,-0.0107,0.0058})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.1097,-0.0107,0.0058})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_4").setName("l_tarsal_middle_phalanx_4").setDEF("hanim_l_tarsal_middle_phalanx_4").setCenter(new double[] {0.114,0.0044,0.0037})
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4"))
                                    .addChild(new Transform().setTranslation(new double[] {0.114,0.0044,0.0037})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.114,0.0044,0.0037})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_4").setName("l_tarsal_distal_phalanx_4").setDEF("hanim_l_tarsal_distal_phalanx_4").setCenter(new double[] {0.1155,0.0118,0.0008})
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4"))
                                      .addChild(new Transform().setTranslation(new double[] {0.1155,0.0118,0.0008})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.1155,0.0118,0.0008})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                            .addChild(new HAnimJoint("hanim_l_cuboid").setName("l_metatarsal_5").setDEF("hanim_l_metatarsal_5").setCenter(new double[] {0.1206,-0.0671,0.0124})
                              .addChild(new HAnimSegment("hanim_l_metatarsal_5").setName("SEGMENT_FOR_l_metatarsal_5").setDEF("hanim_SEGMENT_FOR_l_metatarsal_5")
                                .addChild(new TouchSensor().setDescription("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5"))
                                .addChild(new Transform().setTranslation(new double[] {0.1206,-0.0671,0.0124})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metatarsal_5").setName("SEGMENT_FOR_l_metatarsal_5_tip").setDEF("hanim_SEGMENT_FOR_l_metatarsal_5_tip")
                                  .addChild(new Transform().setTranslation(new double[] {0.1206,-0.0671,0.0124})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_l_metatarsal_5").setName("l_tarsal_proximal_phalanx_5").setDEF("hanim_l_tarsal_proximal_phalanx_5").setCenter(new double[] {0.1239,-0.0153,0.0051})
                                .addChild(new HAnimSegment("hanim_l_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5")
                                  .addChild(new TouchSensor().setDescription("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5"))
                                  .addChild(new Transform().setTranslation(new double[] {0.1239,-0.0153,0.0051})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip")
                                    .addChild(new Transform().setTranslation(new double[] {0.1239,-0.0153,0.0051})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_l_tarsal_proximal_phalanx_5").setName("l_tarsal_middle_phalanx_5").setDEF("hanim_l_tarsal_middle_phalanx_5").setCenter(new double[] {0.1262,-0.0077,0.0023})
                                  .addChild(new HAnimSegment("hanim_l_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5")
                                    .addChild(new TouchSensor().setDescription("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5"))
                                    .addChild(new Transform().setTranslation(new double[] {0.1262,-0.0077,0.0023})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip")
                                      .addChild(new Transform().setTranslation(new double[] {0.1262,-0.0077,0.0023})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_l_tarsal_middle_phalanx_5").setName("l_tarsal_distal_phalanx_5").setDEF("hanim_l_tarsal_distal_phalanx_5").setCenter(new double[] {0.1271,0,0})
                                    .addChild(new HAnimSegment("hanim_l_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5")
                                      .addChild(new TouchSensor().setDescription("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5"))
                                      .addChild(new Transform().setTranslation(new double[] {0.1271,0,0})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip")
                                        .addChild(new Transform().setTranslation(new double[] {0.1271,0,0})
                                          .addChild(new Shape().setUSE("SiteShape"))))))))))))))
                  .addChild(new HAnimJoint("hanim_pelvis").setName("r_thigh").setDEF("hanim_r_thigh").setCenter(new double[] {-0.0948,-0.1202,0.8181})
                    .addChild(new HAnimSegment("hanim_r_thigh").setName("SEGMENT_FOR_r_thigh").setDEF("hanim_SEGMENT_FOR_r_thigh")
                      .addChild(new TouchSensor().setDescription("joint r_thigh segment SEGMENT_FOR_r_thigh"))
                      .addChild(new Transform().setTranslation(new double[] {-0.0948,-0.1202,0.8181})
                        .addChild(new Shape().setUSE("JointShape")))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_thigh").setName("SEGMENT_FOR_r_thigh_tip").setDEF("hanim_SEGMENT_FOR_r_thigh_tip")
                        .addChild(new Transform().setTranslation(new double[] {-0.0948,-0.1202,0.8181})
                          .addChild(new Shape().setUSE("SiteShape")))))
                    .addChild(new HAnimJoint("hanim_r_thigh").setName("r_calf").setDEF("hanim_r_calf").setCenter(new double[] {-0.0928,-0.1213,0.4003})
                      .addChild(new HAnimSegment("hanim_r_calf").setName("SEGMENT_FOR_r_calf").setDEF("hanim_SEGMENT_FOR_r_calf")
                        .addChild(new TouchSensor().setDescription("joint r_calf segment SEGMENT_FOR_r_calf"))
                        .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.1213,0.4003})
                          .addChild(new Shape().setUSE("JointShape")))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calf").setName("SEGMENT_FOR_r_calf_tip").setDEF("hanim_SEGMENT_FOR_r_calf_tip")
                          .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.1213,0.4003})
                            .addChild(new Shape().setUSE("SiteShape")))))
                      .addChild(new HAnimJoint("hanim_r_calf").setName("r_talus").setDEF("hanim_r_talus").setCenter(new double[] {-0.0886,-0.1123,0.0869})
                        .addChild(new HAnimSegment("hanim_r_talus").setName("SEGMENT_FOR_r_talus").setDEF("hanim_SEGMENT_FOR_r_talus")
                          .addChild(new TouchSensor().setDescription("joint r_talus segment SEGMENT_FOR_r_talus"))
                          .addChild(new Transform().setTranslation(new double[] {-0.0886,-0.1123,0.0869})
                            .addChild(new Shape().setUSE("JointShape")))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_talus").setName("SEGMENT_FOR_r_talus_tip").setDEF("hanim_SEGMENT_FOR_r_talus_tip")
                            .addChild(new Transform().setTranslation(new double[] {-0.0886,-0.1123,0.0869})
                              .addChild(new Shape().setUSE("SiteShape")))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName("r_navicular").setDEF("hanim_r_navicular").setCenter(new double[] {-0.0781,-0.097,0.0283})
                          .addChild(new HAnimSegment("hanim_r_navicular").setName("SEGMENT_FOR_r_navicular").setDEF("hanim_SEGMENT_FOR_r_navicular")
                            .addChild(new TouchSensor().setDescription("joint r_navicular segment SEGMENT_FOR_r_navicular"))
                            .addChild(new Transform().setTranslation(new double[] {-0.0781,-0.097,0.0283})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_navicular").setName("SEGMENT_FOR_r_navicular_tip").setDEF("hanim_SEGMENT_FOR_r_navicular_tip")
                              .addChild(new Transform().setTranslation(new double[] {-0.0781,-0.097,0.0283})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName("r_cuneiform_1").setDEF("hanim_r_cuneiform_1").setCenter(new double[] {-0.0672,-0.0835,0.0235})
                            .addChild(new HAnimSegment("hanim_r_cuneiform_1").setName("SEGMENT_FOR_r_cuneiform_1").setDEF("hanim_SEGMENT_FOR_r_cuneiform_1")
                              .addChild(new TouchSensor().setDescription("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0672,-0.0835,0.0235})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_1").setName("SEGMENT_FOR_r_cuneiform_1_tip").setDEF("hanim_SEGMENT_FOR_r_cuneiform_1_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0672,-0.0835,0.0235})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_1").setName("r_metatarsal_1").setDEF("hanim_r_metatarsal_1").setCenter(new double[] {-0.0644,-0.0577,0.0147})
                              .addChild(new HAnimSegment("hanim_r_metatarsal_1").setName("SEGMENT_FOR_r_metatarsal_1").setDEF("hanim_SEGMENT_FOR_r_metatarsal_1")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1"))
                                .addChild(new Transform().setTranslation(new double[] {-0.0644,-0.0577,0.0147})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_1").setName("SEGMENT_FOR_r_metatarsal_1_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_1_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.0644,-0.0577,0.0147})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_1").setName("r_tarsal_proximal_phalanx_1").setDEF("hanim_r_tarsal_proximal_phalanx_1").setCenter(new double[] {-0.0619,-0.0083,0.0059})
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0619,-0.0083,0.0059})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0619,-0.0083,0.0059})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_1").setName("r_tarsal_distal_phalanx_1").setDEF("hanim_r_tarsal_distal_phalanx_1")
                                  .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1"))
                                    .addChild(new Transform()
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip")
                                      .addChild(new Transform()
                                        .addChild(new Shape().setUSE("SiteShape")))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName("r_cuneiform_2").setDEF("hanim_r_cuneiform_2").setCenter(new double[] {-0.0812,-0.0805,0.025})
                            .addChild(new HAnimSegment("hanim_r_cuneiform_2").setName("SEGMENT_FOR_r_cuneiform_2").setDEF("hanim_SEGMENT_FOR_r_cuneiform_2")
                              .addChild(new TouchSensor().setDescription("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0812,-0.0805,0.025})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_2").setName("SEGMENT_FOR_r_cuneiform_2_tip").setDEF("hanim_SEGMENT_FOR_r_cuneiform_2_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0812,-0.0805,0.025})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_2").setName("r_metatarsal_2").setDEF("hanim_r_metatarsal_2").setCenter(new double[] {-0.08,-0.0608,0.0175})
                              .addChild(new HAnimSegment("hanim_r_metatarsal_2").setName("SEGMENT_FOR_r_metatarsal_2").setDEF("hanim_SEGMENT_FOR_r_metatarsal_2")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2"))
                                .addChild(new Transform().setTranslation(new double[] {-0.08,-0.0608,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_2").setName("SEGMENT_FOR_r_metatarsal_2_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_2_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.08,-0.0608,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_2").setName("r_tarsal_proximal_phalanx_2").setDEF("hanim_r_tarsal_proximal_phalanx_2").setCenter(new double[] {-0.0823,-0.004,0.0064})
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0823,-0.004,0.0064})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0823,-0.004,0.0064})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_middle_phalanx_2").setDEF("hanim_r_tarsal_middle_phalanx_2").setCenter(new double[] {-0.0841,0.0121,0.0041})
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0121,0.0041})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0121,0.0041})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_2").setName("r_tarsal_distal_phalanx_2").setDEF("hanim_r_tarsal_distal_phalanx_2").setCenter(new double[] {-0.0841,0.0216,0.0013})
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0216,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.0841,0.0216,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape"))))))))))
                          .addChild(new HAnimJoint("hanim_r_navicular").setName("r_cuneiform_3").setDEF("hanim_r_cuneiform_3").setCenter(new double[] {-0.0928,-0.0821,0.0248})
                            .addChild(new HAnimSegment("hanim_r_cuneiform_3").setName("SEGMENT_FOR_r_cuneiform_3").setDEF("hanim_SEGMENT_FOR_r_cuneiform_3")
                              .addChild(new TouchSensor().setDescription("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.0821,0.0248})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuneiform_3").setName("SEGMENT_FOR_r_cuneiform_3_tip").setDEF("hanim_SEGMENT_FOR_r_cuneiform_3_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0928,-0.0821,0.0248})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuneiform_3").setName("r_metatarsal_3").setDEF("hanim_r_metatarsal_3").setCenter(new double[] {-0.0944,-0.0625,0.0175})
                              .addChild(new HAnimSegment("hanim_r_metatarsal_3").setName("SEGMENT_FOR_r_metatarsal_3").setDEF("hanim_SEGMENT_FOR_r_metatarsal_3")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3"))
                                .addChild(new Transform().setTranslation(new double[] {-0.0944,-0.0625,0.0175})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_3").setName("SEGMENT_FOR_r_metatarsal_3_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_3_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.0944,-0.0625,0.0175})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_3").setName("r_tarsal_proximal_phalanx_3").setDEF("hanim_r_tarsal_proximal_phalanx_3").setCenter(new double[] {-0.0963,-0.0065,0.0065})
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0963,-0.0065,0.0065})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0963,-0.0065,0.0065})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_3").setName("r_tarsal_middle_phalanx_3").setDEF("hanim_r_tarsal_middle_phalanx_3").setCenter(new double[] {-0.0987,0.0086,0.0034})
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.0987,0.0086,0.0034})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.0987,0.0086,0.0034})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_3").setName("r_tarsal_distal_phalanx_3").setDEF("hanim_r_tarsal_distal_phalanx_3").setCenter(new double[] {-0.1002,0.0178,0.0013})
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.1002,0.0178,0.0013})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.1002,0.0178,0.0013})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))))
                        .addChild(new HAnimJoint("hanim_r_talus").setName("r_calcaneus").setDEF("hanim_r_calcaneus").setCenter(new double[] {-0.0889,-0.1278,0.0494})
                          .addChild(new HAnimSegment("hanim_r_calcaneus").setName("SEGMENT_FOR_r_calcaneus").setDEF("hanim_SEGMENT_FOR_r_calcaneus")
                            .addChild(new TouchSensor().setDescription("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus"))
                            .addChild(new Transform().setTranslation(new double[] {-0.0889,-0.1278,0.0494})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_calcaneus").setName("SEGMENT_FOR_r_calcaneus_tip").setDEF("hanim_SEGMENT_FOR_r_calcaneus_tip")
                              .addChild(new Transform().setTranslation(new double[] {-0.0889,-0.1278,0.0494})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_r_calcaneus").setName("r_cuboid").setDEF("hanim_r_cuboid").setCenter(new double[] {-0.1105,-0.0998,0.0267})
                            .addChild(new HAnimSegment("hanim_r_cuboid").setName("SEGMENT_FOR_r_cuboid").setDEF("hanim_SEGMENT_FOR_r_cuboid")
                              .addChild(new TouchSensor().setDescription("joint r_cuboid segment SEGMENT_FOR_r_cuboid"))
                              .addChild(new Transform().setTranslation(new double[] {-0.1105,-0.0998,0.0267})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_cuboid").setName("SEGMENT_FOR_r_cuboid_tip").setDEF("hanim_SEGMENT_FOR_r_cuboid_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.1105,-0.0998,0.0267})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName("r_metatarsal_4").setDEF("hanim_r_metatarsal_4").setCenter(new double[] {-0.1063,-0.0634,0.016})
                              .addChild(new HAnimSegment("hanim_r_metatarsal_4").setName("SEGMENT_FOR_r_metatarsal_4").setDEF("hanim_SEGMENT_FOR_r_metatarsal_4")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4"))
                                .addChild(new Transform().setTranslation(new double[] {-0.1063,-0.0634,0.016})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_4").setName("SEGMENT_FOR_r_metatarsal_4_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_4_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.1063,-0.0634,0.016})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_4").setName("r_tarsal_proximal_phalanx_4").setDEF("hanim_r_tarsal_proximal_phalanx_4").setCenter(new double[] {-0.1097,-0.0107,0.0058})
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.1097,-0.0107,0.0058})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.1097,-0.0107,0.0058})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_4").setName("r_tarsal_middle_phalanx_4").setDEF("hanim_r_tarsal_middle_phalanx_4").setCenter(new double[] {-0.114,0.0044,0.0037})
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.114,0.0044,0.0037})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.114,0.0044,0.0037})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_4").setName("r_tarsal_distal_phalanx_4").setDEF("hanim_r_tarsal_distal_phalanx_4").setCenter(new double[] {-0.1155,0.0118,0.0008})
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.1155,0.0118,0.0008})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.1155,0.0118,0.0008})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                            .addChild(new HAnimJoint("hanim_r_cuboid").setName("r_metatarsal_5").setDEF("hanim_r_metatarsal_5").setCenter(new double[] {-0.1206,-0.0671,0.0124})
                              .addChild(new HAnimSegment("hanim_r_metatarsal_5").setName("SEGMENT_FOR_r_metatarsal_5").setDEF("hanim_SEGMENT_FOR_r_metatarsal_5")
                                .addChild(new TouchSensor().setDescription("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5"))
                                .addChild(new Transform().setTranslation(new double[] {-0.1206,-0.0671,0.0124})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metatarsal_5").setName("SEGMENT_FOR_r_metatarsal_5_tip").setDEF("hanim_SEGMENT_FOR_r_metatarsal_5_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.1206,-0.0671,0.0124})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_r_metatarsal_5").setName("r_tarsal_proximal_phalanx_5").setDEF("hanim_r_tarsal_proximal_phalanx_5").setCenter(new double[] {-0.1239,-0.0153,0.0051})
                                .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5")
                                  .addChild(new TouchSensor().setDescription("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.1239,-0.0153,0.0051})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.1239,-0.0153,0.0051})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_r_tarsal_proximal_phalanx_5").setName("r_tarsal_middle_phalanx_5").setDEF("hanim_r_tarsal_middle_phalanx_5").setCenter(new double[] {-0.1262,-0.0077,0.0023})
                                  .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5")
                                    .addChild(new TouchSensor().setDescription("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.1262,-0.0077,0.0023})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5").setName("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.1262,-0.0077,0.0023})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_r_tarsal_middle_phalanx_5").setName("r_tarsal_distal_phalanx_5").setDEF("hanim_r_tarsal_distal_phalanx_5").setCenter(new double[] {-0.1271,0,0})
                                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5")
                                      .addChild(new TouchSensor().setDescription("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.1271,0,0})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5").setName("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.1271,0,0})
                                          .addChild(new Shape().setUSE("SiteShape")))))))))))))))
                .addChild(new HAnimJoint("hanim_sacrum").setName("l5").setDEF("hanim_l5").setCenter(new double[] {-0.0002,-0.1156,0.9169})
                  .addChild(new HAnimSegment("hanim_l5").setName("SEGMENT_FOR_l5").setDEF("hanim_SEGMENT_FOR_l5")
                    .addChild(new TouchSensor().setDescription("joint l5 segment SEGMENT_FOR_l5"))
                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9169})
                      .addChild(new Shape().setUSE("JointShape")))
                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l5").setName("SEGMENT_FOR_l5_tip").setDEF("hanim_SEGMENT_FOR_l5_tip")
                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9169})
                        .addChild(new Shape().setUSE("SiteShape")))))
                  .addChild(new HAnimJoint("hanim_l5").setName("l4").setDEF("hanim_l4").setCenter(new double[] {-0.0002,-0.1156,0.9412})
                    .addChild(new HAnimSegment("hanim_l4").setName("SEGMENT_FOR_l4").setDEF("hanim_SEGMENT_FOR_l4")
                      .addChild(new TouchSensor().setDescription("joint l4 segment SEGMENT_FOR_l4"))
                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9412})
                        .addChild(new Shape().setUSE("JointShape")))
                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l4").setName("SEGMENT_FOR_l4_tip").setDEF("hanim_SEGMENT_FOR_l4_tip")
                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9412})
                          .addChild(new Shape().setUSE("SiteShape")))))
                    .addChild(new HAnimJoint("hanim_l4").setName("l3").setDEF("hanim_l3").setCenter(new double[] {-0.0002,-0.1156,0.9574})
                      .addChild(new HAnimSegment("hanim_l3").setName("SEGMENT_FOR_l3").setDEF("hanim_SEGMENT_FOR_l3")
                        .addChild(new TouchSensor().setDescription("joint l3 segment SEGMENT_FOR_l3"))
                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9574})
                          .addChild(new Shape().setUSE("JointShape")))
                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l3").setName("SEGMENT_FOR_l3_tip").setDEF("hanim_SEGMENT_FOR_l3_tip")
                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9574})
                            .addChild(new Shape().setUSE("SiteShape")))))
                      .addChild(new HAnimJoint("hanim_l3").setName("l2").setDEF("hanim_l2").setCenter(new double[] {-0.0002,-0.1156,0.9738})
                        .addChild(new HAnimSegment("hanim_l2").setName("SEGMENT_FOR_l2").setDEF("hanim_SEGMENT_FOR_l2")
                          .addChild(new TouchSensor().setDescription("joint l2 segment SEGMENT_FOR_l2"))
                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9738})
                            .addChild(new Shape().setUSE("JointShape")))
                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l2").setName("SEGMENT_FOR_l2_tip").setDEF("hanim_SEGMENT_FOR_l2_tip")
                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9738})
                              .addChild(new Shape().setUSE("SiteShape")))))
                        .addChild(new HAnimJoint("hanim_l2").setName("l1").setDEF("hanim_l1").setCenter(new double[] {-0.0002,-0.1156,0.9911})
                          .addChild(new HAnimSegment("hanim_l1").setName("SEGMENT_FOR_l1").setDEF("hanim_SEGMENT_FOR_l1")
                            .addChild(new TouchSensor().setDescription("joint l1 segment SEGMENT_FOR_l1"))
                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9911})
                              .addChild(new Shape().setUSE("JointShape")))
                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l1").setName("SEGMENT_FOR_l1_tip").setDEF("hanim_SEGMENT_FOR_l1_tip")
                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,0.9911})
                                .addChild(new Shape().setUSE("SiteShape")))))
                          .addChild(new HAnimJoint("hanim_l1").setName("t12").setDEF("hanim_t12").setCenter(new double[] {-0.0002,-0.1156,1.0145})
                            .addChild(new HAnimSegment("hanim_t12").setName("SEGMENT_FOR_t12").setDEF("hanim_SEGMENT_FOR_t12")
                              .addChild(new TouchSensor().setDescription("joint t12 segment SEGMENT_FOR_t12"))
                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0145})
                                .addChild(new Shape().setUSE("JointShape")))
                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t12").setName("SEGMENT_FOR_t12_tip").setDEF("hanim_SEGMENT_FOR_t12_tip")
                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0145})
                                  .addChild(new Shape().setUSE("SiteShape")))))
                            .addChild(new HAnimJoint("hanim_t12").setName("t11").setDEF("hanim_t11").setCenter(new double[] {-0.0002,-0.1156,1.0381})
                              .addChild(new HAnimSegment("hanim_t11").setName("SEGMENT_FOR_t11").setDEF("hanim_SEGMENT_FOR_t11")
                                .addChild(new TouchSensor().setDescription("joint t11 segment SEGMENT_FOR_t11"))
                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0381})
                                  .addChild(new Shape().setUSE("JointShape")))
                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t11").setName("SEGMENT_FOR_t11_tip").setDEF("hanim_SEGMENT_FOR_t11_tip")
                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0381})
                                    .addChild(new Shape().setUSE("SiteShape")))))
                              .addChild(new HAnimJoint("hanim_t11").setName("t10").setDEF("hanim_t10").setCenter(new double[] {-0.0002,-0.1157,1.0552})
                                .addChild(new HAnimSegment("hanim_t10").setName("SEGMENT_FOR_t10").setDEF("hanim_SEGMENT_FOR_t10")
                                  .addChild(new TouchSensor().setDescription("joint t10 segment SEGMENT_FOR_t10"))
                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.0552})
                                    .addChild(new Shape().setUSE("JointShape")))
                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t10").setName("SEGMENT_FOR_t10_tip").setDEF("hanim_SEGMENT_FOR_t10_tip")
                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.0552})
                                      .addChild(new Shape().setUSE("SiteShape")))))
                                .addChild(new HAnimJoint("hanim_t10").setName("t9").setDEF("hanim_t9").setCenter(new double[] {-0.0002,-0.1156,1.0699})
                                  .addChild(new HAnimSegment("hanim_t9").setName("SEGMENT_FOR_t9").setDEF("hanim_SEGMENT_FOR_t9")
                                    .addChild(new TouchSensor().setDescription("joint t9 segment SEGMENT_FOR_t9"))
                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0699})
                                      .addChild(new Shape().setUSE("JointShape")))
                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t9").setName("SEGMENT_FOR_t9_tip").setDEF("hanim_SEGMENT_FOR_t9_tip")
                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0699})
                                        .addChild(new Shape().setUSE("SiteShape")))))
                                  .addChild(new HAnimJoint("hanim_t9").setName("t8").setDEF("hanim_t8").setCenter(new double[] {-0.0002,-0.1156,1.0845})
                                    .addChild(new HAnimSegment("hanim_t8").setName("SEGMENT_FOR_t8").setDEF("hanim_SEGMENT_FOR_t8")
                                      .addChild(new TouchSensor().setDescription("joint t8 segment SEGMENT_FOR_t8"))
                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0845})
                                        .addChild(new Shape().setUSE("JointShape")))
                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_t8").setName("SEGMENT_FOR_t8_tip").setDEF("hanim_SEGMENT_FOR_t8_tip")
                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.0845})
                                          .addChild(new Shape().setUSE("SiteShape")))))
                                    .addChild(new HAnimJoint("hanim_t8").setName("t7").setDEF("hanim_t7").setCenter(new double[] {-0.0002,-0.1156,1.1002})
                                      .addChild(new HAnimSegment("hanim_t7").setName("SEGMENT_FOR_t7").setDEF("hanim_SEGMENT_FOR_t7")
                                        .addChild(new TouchSensor().setDescription("joint t7 segment SEGMENT_FOR_t7"))
                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1002})
                                          .addChild(new Shape().setUSE("JointShape")))
                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_t7").setName("SEGMENT_FOR_t7_tip").setDEF("hanim_SEGMENT_FOR_t7_tip")
                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1002})
                                            .addChild(new Shape().setUSE("SiteShape")))))
                                      .addChild(new HAnimJoint("hanim_t7").setName("t6").setDEF("hanim_t6").setCenter(new double[] {-0.0002,-0.1156,1.1131})
                                        .addChild(new HAnimSegment("hanim_t6").setName("SEGMENT_FOR_t6").setDEF("hanim_SEGMENT_FOR_t6")
                                          .addChild(new TouchSensor().setDescription("joint t6 segment SEGMENT_FOR_t6"))
                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1131})
                                            .addChild(new Shape().setUSE("JointShape")))
                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_t6").setName("SEGMENT_FOR_t6_tip").setDEF("hanim_SEGMENT_FOR_t6_tip")
                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1131})
                                              .addChild(new Shape().setUSE("SiteShape")))))
                                        .addChild(new HAnimJoint("hanim_t6").setName("t5").setDEF("hanim_t5").setCenter(new double[] {-0.0002,-0.1156,1.1286})
                                          .addChild(new HAnimSegment("hanim_t5").setName("SEGMENT_FOR_t5").setDEF("hanim_SEGMENT_FOR_t5")
                                            .addChild(new TouchSensor().setDescription("joint t5 segment SEGMENT_FOR_t5"))
                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1286})
                                              .addChild(new Shape().setUSE("JointShape")))
                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_t5").setName("SEGMENT_FOR_t5_tip").setDEF("hanim_SEGMENT_FOR_t5_tip")
                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1286})
                                                .addChild(new Shape().setUSE("SiteShape")))))
                                          .addChild(new HAnimJoint("hanim_t5").setName("t4").setDEF("hanim_t4").setCenter(new double[] {-0.0002,-0.1156,1.1439})
                                            .addChild(new HAnimSegment("hanim_t4").setName("SEGMENT_FOR_t4").setDEF("hanim_SEGMENT_FOR_t4")
                                              .addChild(new TouchSensor().setDescription("joint t4 segment SEGMENT_FOR_t4"))
                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1439})
                                                .addChild(new Shape().setUSE("JointShape")))
                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_t4").setName("SEGMENT_FOR_t4_tip").setDEF("hanim_SEGMENT_FOR_t4_tip")
                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1439})
                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                            .addChild(new HAnimJoint("hanim_t4").setName("t3").setDEF("hanim_t3").setCenter(new double[] {-0.0002,-0.1156,1.1623})
                                              .addChild(new HAnimSegment("hanim_t3").setName("SEGMENT_FOR_t3").setDEF("hanim_SEGMENT_FOR_t3")
                                                .addChild(new TouchSensor().setDescription("joint t3 segment SEGMENT_FOR_t3"))
                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1623})
                                                  .addChild(new Shape().setUSE("JointShape")))
                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_t3").setName("SEGMENT_FOR_t3_tip").setDEF("hanim_SEGMENT_FOR_t3_tip")
                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.1623})
                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                              .addChild(new HAnimJoint("hanim_t3").setName("t2").setDEF("hanim_t2").setCenter(new double[] {-0.0002,-0.1157,1.1871})
                                                .addChild(new HAnimSegment("hanim_t2").setName("SEGMENT_FOR_t2").setDEF("hanim_SEGMENT_FOR_t2")
                                                  .addChild(new TouchSensor().setDescription("joint t2 segment SEGMENT_FOR_t2"))
                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.1871})
                                                    .addChild(new Shape().setUSE("JointShape")))
                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_t2").setName("SEGMENT_FOR_t2_tip").setDEF("hanim_SEGMENT_FOR_t2_tip")
                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1157,1.1871})
                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                .addChild(new HAnimJoint("hanim_t2").setName("t1").setDEF("hanim_t1").setCenter(new double[] {-0.0002,-0.1156,1.2109})
                                                  .addChild(new HAnimSegment("hanim_t1").setName("SEGMENT_FOR_t1").setDEF("hanim_SEGMENT_FOR_t1")
                                                    .addChild(new TouchSensor().setDescription("joint t1 segment SEGMENT_FOR_t1"))
                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.2109})
                                                      .addChild(new Shape().setUSE("JointShape")))
                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_t1").setName("SEGMENT_FOR_t1_tip").setDEF("hanim_SEGMENT_FOR_t1_tip")
                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1156,1.2109})
                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName("c7").setDEF("hanim_c7").setCenter(new double[] {-0.0002,-0.1169,1.2368})
                                                    .addChild(new HAnimSegment("hanim_c7").setName("SEGMENT_FOR_c7").setDEF("hanim_SEGMENT_FOR_c7")
                                                      .addChild(new TouchSensor().setDescription("joint c7 segment SEGMENT_FOR_c7"))
                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2368})
                                                        .addChild(new Shape().setUSE("JointShape")))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_c7").setName("SEGMENT_FOR_c7_tip").setDEF("hanim_SEGMENT_FOR_c7_tip")
                                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2368})
                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_c7").setName("c6").setDEF("hanim_c6").setCenter(new double[] {-0.0002,-0.1169,1.249})
                                                      .addChild(new HAnimSegment("hanim_c6").setName("SEGMENT_FOR_c6").setDEF("hanim_SEGMENT_FOR_c6")
                                                        .addChild(new TouchSensor().setDescription("joint c6 segment SEGMENT_FOR_c6"))
                                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.249})
                                                          .addChild(new Shape().setUSE("JointShape")))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_c6").setName("SEGMENT_FOR_c6_tip").setDEF("hanim_SEGMENT_FOR_c6_tip")
                                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.249})
                                                            .addChild(new Shape().setUSE("SiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_c6").setName("c5").setDEF("hanim_c5").setCenter(new double[] {-0.0002,-0.1169,1.2613})
                                                        .addChild(new HAnimSegment("hanim_c5").setName("SEGMENT_FOR_c5").setDEF("hanim_SEGMENT_FOR_c5")
                                                          .addChild(new TouchSensor().setDescription("joint c5 segment SEGMENT_FOR_c5"))
                                                          .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2613})
                                                            .addChild(new Shape().setUSE("JointShape")))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_c5").setName("SEGMENT_FOR_c5_tip").setDEF("hanim_SEGMENT_FOR_c5_tip")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2613})
                                                              .addChild(new Shape().setUSE("SiteShape")))))
                                                        .addChild(new HAnimJoint("hanim_c5").setName("c4").setDEF("hanim_c4").setCenter(new double[] {-0.0002,-0.1169,1.2737})
                                                          .addChild(new HAnimSegment("hanim_c4").setName("SEGMENT_FOR_c4").setDEF("hanim_SEGMENT_FOR_c4")
                                                            .addChild(new TouchSensor().setDescription("joint c4 segment SEGMENT_FOR_c4"))
                                                            .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2737})
                                                              .addChild(new Shape().setUSE("JointShape")))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_c4").setName("SEGMENT_FOR_c4_tip").setDEF("hanim_SEGMENT_FOR_c4_tip")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2737})
                                                                .addChild(new Shape().setUSE("SiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_c4").setName("c3").setDEF("hanim_c3").setCenter(new double[] {-0.0002,-0.1169,1.2865})
                                                            .addChild(new HAnimSegment("hanim_c3").setName("SEGMENT_FOR_c3").setDEF("hanim_SEGMENT_FOR_c3")
                                                              .addChild(new TouchSensor().setDescription("joint c3 segment SEGMENT_FOR_c3"))
                                                              .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2865})
                                                                .addChild(new Shape().setUSE("JointShape")))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_c3").setName("SEGMENT_FOR_c3_tip").setDEF("hanim_SEGMENT_FOR_c3_tip")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2865})
                                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                                            .addChild(new HAnimJoint("hanim_c3").setName("c2").setDEF("hanim_c2").setCenter(new double[] {-0.0002,-0.1169,1.2982})
                                                              .addChild(new HAnimSegment("hanim_c2").setName("SEGMENT_FOR_c2").setDEF("hanim_SEGMENT_FOR_c2")
                                                                .addChild(new TouchSensor().setDescription("joint c2 segment SEGMENT_FOR_c2"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2982})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_c2").setName("SEGMENT_FOR_c2_tip").setDEF("hanim_SEGMENT_FOR_c2_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.2982})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_c2").setName("c1").setDEF("hanim_c1").setCenter(new double[] {-0.0002,-0.1169,1.3099})
                                                                .addChild(new HAnimSegment("hanim_c1").setName("SEGMENT_FOR_c1").setDEF("hanim_SEGMENT_FOR_c1")
                                                                  .addChild(new TouchSensor().setDescription("joint c1 segment SEGMENT_FOR_c1"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.3099})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_c1").setName("SEGMENT_FOR_c1_tip").setDEF("hanim_SEGMENT_FOR_c1_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1169,1.3099})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_c1").setName("skull").setDEF("hanim_skull").setCenter(new double[] {-0.0002,-0.1173,1.3041})
                                                                  .addChild(new HAnimSegment("hanim_skull").setName("SEGMENT_FOR_skull").setDEF("hanim_SEGMENT_FOR_skull")
                                                                    .addChild(new TouchSensor().setDescription("joint skull segment SEGMENT_FOR_skull"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1173,1.3041})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_skull").setName("SEGMENT_FOR_skull_tip").setDEF("hanim_SEGMENT_FOR_skull_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.1173,1.3041})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("l_eyelid").setDEF("hanim_l_eyelid").setCenter(new double[] {0.0503,-0.0689,1.4157})
                                                                    .addChild(new HAnimSegment("hanim_l_eyelid").setName("SEGMENT_FOR_l_eyelid").setDEF("hanim_SEGMENT_FOR_l_eyelid")
                                                                      .addChild(new TouchSensor().setDescription("joint l_eyelid segment SEGMENT_FOR_l_eyelid"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.0503,-0.0689,1.4157})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyelid").setName("SEGMENT_FOR_l_eyelid_tip").setDEF("hanim_SEGMENT_FOR_l_eyelid_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.0503,-0.0689,1.4157})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("r_eyelid").setDEF("hanim_r_eyelid").setCenter(new double[] {-0.0507,-0.0689,1.4157})
                                                                    .addChild(new HAnimSegment("hanim_r_eyelid").setName("SEGMENT_FOR_r_eyelid").setDEF("hanim_SEGMENT_FOR_r_eyelid")
                                                                      .addChild(new TouchSensor().setDescription("joint r_eyelid segment SEGMENT_FOR_r_eyelid"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0507,-0.0689,1.4157})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyelid").setName("SEGMENT_FOR_r_eyelid_tip").setDEF("hanim_SEGMENT_FOR_r_eyelid_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0507,-0.0689,1.4157})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("l_eyeball").setDEF("hanim_l_eyeball").setCenter(new double[] {0.0479,-0.0188,1.3963})
                                                                    .addChild(new HAnimSegment("hanim_l_eyeball").setName("SEGMENT_FOR_l_eyeball").setDEF("hanim_SEGMENT_FOR_l_eyeball")
                                                                      .addChild(new TouchSensor().setDescription("joint l_eyeball segment SEGMENT_FOR_l_eyeball"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.0479,-0.0188,1.3963})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyeball").setName("SEGMENT_FOR_l_eyeball_tip").setDEF("hanim_SEGMENT_FOR_l_eyeball_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.0479,-0.0188,1.3963})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("r_eyeball").setDEF("hanim_r_eyeball").setCenter(new double[] {-0.0483,-0.0188,1.3963})
                                                                    .addChild(new HAnimSegment("hanim_r_eyeball").setName("SEGMENT_FOR_r_eyeball").setDEF("hanim_SEGMENT_FOR_r_eyeball")
                                                                      .addChild(new TouchSensor().setDescription("joint r_eyeball segment SEGMENT_FOR_r_eyeball"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0483,-0.0188,1.3963})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyeball").setName("SEGMENT_FOR_r_eyeball_tip").setDEF("hanim_SEGMENT_FOR_r_eyeball_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0483,-0.0188,1.3963})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("l_eyebrow").setDEF("hanim_l_eyebrow").setCenter(new double[] {0.0216,0.0051,1.4053})
                                                                    .addChild(new HAnimSegment("hanim_l_eyebrow").setName("SEGMENT_FOR_l_eyebrow").setDEF("hanim_SEGMENT_FOR_l_eyebrow")
                                                                      .addChild(new TouchSensor().setDescription("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.0216,0.0051,1.4053})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_eyebrow").setName("SEGMENT_FOR_l_eyebrow_tip").setDEF("hanim_SEGMENT_FOR_l_eyebrow_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.0216,0.0051,1.4053})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("r_eyebrow").setDEF("hanim_r_eyebrow").setCenter(new double[] {-0.0219,0.0051,1.4053})
                                                                    .addChild(new HAnimSegment("hanim_r_eyebrow").setName("SEGMENT_FOR_r_eyebrow").setDEF("hanim_SEGMENT_FOR_r_eyebrow")
                                                                      .addChild(new TouchSensor().setDescription("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0219,0.0051,1.4053})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_eyebrow").setName("SEGMENT_FOR_r_eyebrow_tip").setDEF("hanim_SEGMENT_FOR_r_eyebrow_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0219,0.0051,1.4053})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))
                                                                  .addChild(new HAnimJoint("hanim_skull").setName("jaw").setDEF("hanim_jaw").setCenter(new double[] {-0.0002,-0.0865,1.3043})
                                                                    .addChild(new HAnimSegment("hanim_jaw").setName("SEGMENT_FOR_jaw").setDEF("hanim_SEGMENT_FOR_jaw")
                                                                      .addChild(new TouchSensor().setDescription("joint jaw segment SEGMENT_FOR_jaw"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.0865,1.3043})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_jaw").setName("SEGMENT_FOR_jaw_tip").setDEF("hanim_SEGMENT_FOR_jaw_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.0002,-0.0865,1.3043})
                                                                          .addChild(new Shape().setUSE("SiteShape"))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName("l_clavicle").setDEF("hanim_l_clavicle").setCenter(new double[] {0.1228,-0.1148,1.1833})
                                                    .addChild(new HAnimSegment("hanim_l_clavicle").setName("SEGMENT_FOR_l_clavicle").setDEF("hanim_SEGMENT_FOR_l_clavicle")
                                                      .addChild(new TouchSensor().setDescription("joint l_clavicle segment SEGMENT_FOR_l_clavicle"))
                                                      .addChild(new Transform().setTranslation(new double[] {0.1228,-0.1148,1.1833})
                                                        .addChild(new Shape().setUSE("JointShape")))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_clavicle").setName("SEGMENT_FOR_l_clavicle_tip").setDEF("hanim_SEGMENT_FOR_l_clavicle_tip")
                                                        .addChild(new Transform().setTranslation(new double[] {0.1228,-0.1148,1.1833})
                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_l_clavicle").setName("l_scapula").setDEF("hanim_l_scapula").setCenter(new double[] {0.0383,-0.1157,1.2001})
                                                      .addChild(new HAnimSegment("hanim_l_scapula").setName("SEGMENT_FOR_l_scapula").setDEF("hanim_SEGMENT_FOR_l_scapula")
                                                        .addChild(new TouchSensor().setDescription("joint l_scapula segment SEGMENT_FOR_l_scapula"))
                                                        .addChild(new Transform().setTranslation(new double[] {0.0383,-0.1157,1.2001})
                                                          .addChild(new Shape().setUSE("JointShape")))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_scapula").setName("SEGMENT_FOR_l_scapula_tip").setDEF("hanim_SEGMENT_FOR_l_scapula_tip")
                                                          .addChild(new Transform().setTranslation(new double[] {0.0383,-0.1157,1.2001})
                                                            .addChild(new Shape().setUSE("SiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_l_scapula").setName("l_upperarm").setDEF("hanim_l_upperarm").setCenter(new double[] {0.1649,-0.1051,1.17})
                                                        .addChild(new HAnimSegment("hanim_l_upperarm").setName("SEGMENT_FOR_l_upperarm").setDEF("hanim_SEGMENT_FOR_l_upperarm")
                                                          .addChild(new TouchSensor().setDescription("joint l_upperarm segment SEGMENT_FOR_l_upperarm"))
                                                          .addChild(new Transform().setTranslation(new double[] {0.1649,-0.1051,1.17})
                                                            .addChild(new Shape().setUSE("JointShape")))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_upperarm").setName("SEGMENT_FOR_l_upperarm_tip").setDEF("hanim_SEGMENT_FOR_l_upperarm_tip")
                                                            .addChild(new Transform().setTranslation(new double[] {0.1649,-0.1051,1.17})
                                                              .addChild(new Shape().setUSE("SiteShape")))))
                                                        .addChild(new HAnimJoint("hanim_l_upperarm").setName("l_forearm").setDEF("hanim_l_forearm").setCenter(new double[] {0.1819,-0.1075,0.9202})
                                                          .addChild(new HAnimSegment("hanim_l_forearm").setName("SEGMENT_FOR_l_forearm").setDEF("hanim_SEGMENT_FOR_l_forearm")
                                                            .addChild(new TouchSensor().setDescription("joint l_forearm segment SEGMENT_FOR_l_forearm"))
                                                            .addChild(new Transform().setTranslation(new double[] {0.1819,-0.1075,0.9202})
                                                              .addChild(new Shape().setUSE("JointShape")))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_forearm").setName("SEGMENT_FOR_l_forearm_tip").setDEF("hanim_SEGMENT_FOR_l_forearm_tip")
                                                              .addChild(new Transform().setTranslation(new double[] {0.1819,-0.1075,0.9202})
                                                                .addChild(new Shape().setUSE("SiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_l_forearm").setName("l_carpal").setDEF("hanim_l_carpal").setCenter(new double[] {0.1818,-0.1069,0.7157})
                                                            .addChild(new HAnimSegment("hanim_l_carpal").setName("SEGMENT_FOR_l_carpal").setDEF("hanim_SEGMENT_FOR_l_carpal")
                                                              .addChild(new TouchSensor().setDescription("joint l_carpal segment SEGMENT_FOR_l_carpal"))
                                                              .addChild(new Transform().setTranslation(new double[] {0.1818,-0.1069,0.7157})
                                                                .addChild(new Shape().setUSE("JointShape")))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal").setName("SEGMENT_FOR_l_carpal_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_tip")
                                                                .addChild(new Transform().setTranslation(new double[] {0.1818,-0.1069,0.7157})
                                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_trapezium").setDEF("hanim_l_trapezium").setCenter(new double[] {0.1811,-0.0826,0.6975})
                                                              .addChild(new HAnimSegment("hanim_l_trapezium").setName("SEGMENT_FOR_l_trapezium").setDEF("hanim_SEGMENT_FOR_l_trapezium")
                                                                .addChild(new TouchSensor().setDescription("joint l_trapezium segment SEGMENT_FOR_l_trapezium"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0826,0.6975})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezium").setName("SEGMENT_FOR_l_trapezium_tip").setDEF("hanim_SEGMENT_FOR_l_trapezium_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0826,0.6975})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezium").setName("l_metacarpal_1").setDEF("hanim_l_metacarpal_1").setCenter(new double[] {0.1803,-0.0759,0.684})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_1").setName("SEGMENT_FOR_l_metacarpal_1").setDEF("hanim_SEGMENT_FOR_l_metacarpal_1")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1803,-0.0759,0.684})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_1").setName("SEGMENT_FOR_l_metacarpal_1_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_1_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1803,-0.0759,0.684})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_1").setName("l_carpal_proximal_phalanx_1").setDEF("hanim_l_carpal_proximal_phalanx_1").setCenter(new double[] {0.1809,-0.0661,0.6642})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1809,-0.0661,0.6642})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1809,-0.0661,0.6642})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_distal_phalanx_1").setDEF("hanim_l_carpal_distal_phalanx_1").setCenter(new double[] {0.1825,-0.0522,0.6455})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_1").setName("SEGMENT_FOR_l_carpal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1825,-0.0522,0.6455})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1").setName("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1825,-0.0522,0.6455})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_trapezoid").setDEF("hanim_l_trapezoid").setCenter(new double[] {0.1811,-0.0935,0.6984})
                                                              .addChild(new HAnimSegment("hanim_l_trapezoid").setName("SEGMENT_FOR_l_trapezoid").setDEF("hanim_SEGMENT_FOR_l_trapezoid")
                                                                .addChild(new TouchSensor().setDescription("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0935,0.6984})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_trapezoid").setName("SEGMENT_FOR_l_trapezoid_tip").setDEF("hanim_SEGMENT_FOR_l_trapezoid_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0935,0.6984})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_trapezoid").setName("l_metacarpal_2").setDEF("hanim_l_metacarpal_2").setCenter(new double[] {0.1811,-0.0922,0.679})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_2").setName("SEGMENT_FOR_l_metacarpal_2").setDEF("hanim_SEGMENT_FOR_l_metacarpal_2")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0922,0.679})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_2").setName("SEGMENT_FOR_l_metacarpal_2_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_2_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1811,-0.0922,0.679})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_2").setName("l_carpal_proximal_phalanx_2").setDEF("hanim_l_carpal_proximal_phalanx_2").setCenter(new double[] {0.1836,-0.0868,0.6286})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1836,-0.0868,0.6286})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1836,-0.0868,0.6286})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_middle_phalanx_2").setDEF("hanim_l_carpal_middle_phalanx_2").setCenter(new double[] {0.1815,-0.0877,0.5983})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_2").setName("SEGMENT_FOR_l_carpal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.0877,0.5983})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2").setName("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.0877,0.5983})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_distal_phalanx_2").setDEF("hanim_l_carpal_distal_phalanx_2").setCenter(new double[] {0.1805,-0.0885,0.5731})
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_2").setName("SEGMENT_FOR_l_carpal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1805,-0.0885,0.5731})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2").setName("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1805,-0.0885,0.5731})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_capitate").setDEF("hanim_l_capitate").setCenter(new double[] {0.1809,-0.1067,0.7})
                                                              .addChild(new HAnimSegment("hanim_l_capitate").setName("SEGMENT_FOR_l_capitate").setDEF("hanim_SEGMENT_FOR_l_capitate")
                                                                .addChild(new TouchSensor().setDescription("joint l_capitate segment SEGMENT_FOR_l_capitate"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1067,0.7})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_capitate").setName("SEGMENT_FOR_l_capitate_tip").setDEF("hanim_SEGMENT_FOR_l_capitate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1067,0.7})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_capitate").setName("l_metacarpal_3").setDEF("hanim_l_metacarpal_3").setCenter(new double[] {0.1809,-0.1081,0.6772})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_3").setName("SEGMENT_FOR_l_metacarpal_3").setDEF("hanim_SEGMENT_FOR_l_metacarpal_3")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1081,0.6772})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_3").setName("SEGMENT_FOR_l_metacarpal_3_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_3_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1081,0.6772})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_3").setName("l_carpal_proximal_phalanx_3").setDEF("hanim_l_carpal_proximal_phalanx_3").setCenter(new double[] {0.1835,-0.1058,0.6264})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1058,0.6264})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1058,0.6264})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_middle_phalanx_3").setDEF("hanim_l_carpal_middle_phalanx_3").setCenter(new double[] {0.1815,-0.1054,0.5947})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_3").setName("SEGMENT_FOR_l_carpal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1054,0.5947})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3").setName("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1054,0.5947})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_distal_phalanx_3").setDEF("hanim_l_carpal_distal_phalanx_3").setCenter(new double[] {0.1805,-0.1056,0.5668})
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_3").setName("SEGMENT_FOR_l_carpal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1056,0.5668})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3").setName("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1056,0.5668})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_l_carpal").setName("l_hamate").setDEF("hanim_l_hamate").setCenter(new double[] {0.1809,-0.1276,0.6973})
                                                              .addChild(new HAnimSegment("hanim_l_hamate").setName("SEGMENT_FOR_l_hamate").setDEF("hanim_SEGMENT_FOR_l_hamate")
                                                                .addChild(new TouchSensor().setDescription("joint l_hamate segment SEGMENT_FOR_l_hamate"))
                                                                .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1276,0.6973})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_hamate").setName("SEGMENT_FOR_l_hamate_tip").setDEF("hanim_SEGMENT_FOR_l_hamate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1276,0.6973})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName("l_metacarpal_4").setDEF("hanim_l_metacarpal_4").setCenter(new double[] {0.1809,-0.1218,0.6777})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_4").setName("SEGMENT_FOR_l_metacarpal_4").setDEF("hanim_SEGMENT_FOR_l_metacarpal_4")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1218,0.6777})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_4").setName("SEGMENT_FOR_l_metacarpal_4_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_4_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1809,-0.1218,0.6777})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_4").setName("l_carpal_proximal_phalanx_4").setDEF("hanim_l_carpal_proximal_phalanx_4").setCenter(new double[] {0.1835,-0.1233,0.6255})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1233,0.6255})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1835,-0.1233,0.6255})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_middle_phalanx_4").setDEF("hanim_l_carpal_middle_phalanx_4").setCenter(new double[] {0.1815,-0.1225,0.598})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_4").setName("SEGMENT_FOR_l_carpal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1225,0.598})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4").setName("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1225,0.598})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_distal_phalanx_4").setDEF("hanim_l_carpal_distal_phalanx_4").setCenter(new double[] {0.1805,-0.1217,0.5722})
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_4").setName("SEGMENT_FOR_l_carpal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1217,0.5722})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4").setName("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1805,-0.1217,0.5722})
                                                                            .addChild(new Shape().setUSE("SiteShape")))))))))
                                                              .addChild(new HAnimJoint("hanim_l_hamate").setName("l_metacarpal_5").setDEF("hanim_l_metacarpal_5").setCenter(new double[] {0.1815,-0.1347,0.6797})
                                                                .addChild(new HAnimSegment("hanim_l_metacarpal_5").setName("SEGMENT_FOR_l_metacarpal_5").setDEF("hanim_SEGMENT_FOR_l_metacarpal_5")
                                                                  .addChild(new TouchSensor().setDescription("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5"))
                                                                  .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1347,0.6797})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_metacarpal_5").setName("SEGMENT_FOR_l_metacarpal_5_tip").setDEF("hanim_SEGMENT_FOR_l_metacarpal_5_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1815,-0.1347,0.6797})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_l_metacarpal_5").setName("l_carpal_proximal_phalanx_5").setDEF("hanim_l_carpal_proximal_phalanx_5").setCenter(new double[] {0.1832,-0.1389,0.6295})
                                                                  .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5")
                                                                    .addChild(new TouchSensor().setDescription("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5"))
                                                                    .addChild(new Transform().setTranslation(new double[] {0.1832,-0.1389,0.6295})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1832,-0.1389,0.6295})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_l_carpal_proximal_phalanx_5").setName("l_carpal_middle_phalanx_5").setDEF("hanim_l_carpal_middle_phalanx_5").setCenter(new double[] {0.1815,-0.139,0.6124})
                                                                    .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_5").setName("SEGMENT_FOR_l_carpal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5")
                                                                      .addChild(new TouchSensor().setDescription("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5"))
                                                                      .addChild(new Transform().setTranslation(new double[] {0.1815,-0.139,0.6124})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5").setName("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1815,-0.139,0.6124})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_distal_phalanx_5").setDEF("hanim_l_carpal_distal_phalanx_5").setCenter(new double[] {0.1806,-0.1388,0.5938})
                                                                      .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_5").setName("SEGMENT_FOR_l_carpal_distal_phalanx_5").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5")
                                                                        .addChild(new TouchSensor().setDescription("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5"))
                                                                        .addChild(new Transform().setTranslation(new double[] {0.1806,-0.1388,0.5938})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5").setName("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {0.1806,-0.1388,0.5938})
                                                                            .addChild(new Shape().setUSE("SiteShape")))))))))))))))
                                                  .addChild(new HAnimJoint("hanim_t1").setName("r_clavicle").setDEF("hanim_r_clavicle").setCenter(new double[] {-0.1231,-0.1148,1.1833})
                                                    .addChild(new HAnimSegment("hanim_r_clavicle").setName("SEGMENT_FOR_r_clavicle").setDEF("hanim_SEGMENT_FOR_r_clavicle")
                                                      .addChild(new TouchSensor().setDescription("joint r_clavicle segment SEGMENT_FOR_r_clavicle"))
                                                      .addChild(new Transform().setTranslation(new double[] {-0.1231,-0.1148,1.1833})
                                                        .addChild(new Shape().setUSE("JointShape")))
                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_clavicle").setName("SEGMENT_FOR_r_clavicle_tip").setDEF("hanim_SEGMENT_FOR_r_clavicle_tip")
                                                        .addChild(new Transform().setTranslation(new double[] {-0.1231,-0.1148,1.1833})
                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                    .addChild(new HAnimJoint("hanim_r_clavicle").setName("r_scapula").setDEF("hanim_r_scapula").setCenter(new double[] {-0.0387,-0.1157,1.2001})
                                                      .addChild(new HAnimSegment("hanim_r_scapula").setName("SEGMENT_FOR_r_scapula").setDEF("hanim_SEGMENT_FOR_r_scapula")
                                                        .addChild(new TouchSensor().setDescription("joint r_scapula segment SEGMENT_FOR_r_scapula"))
                                                        .addChild(new Transform().setTranslation(new double[] {-0.0387,-0.1157,1.2001})
                                                          .addChild(new Shape().setUSE("JointShape")))
                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_scapula").setName("SEGMENT_FOR_r_scapula_tip").setDEF("hanim_SEGMENT_FOR_r_scapula_tip")
                                                          .addChild(new Transform().setTranslation(new double[] {-0.0387,-0.1157,1.2001})
                                                            .addChild(new Shape().setUSE("SiteShape")))))
                                                      .addChild(new HAnimJoint("hanim_r_scapula").setName("r_upperarm").setDEF("hanim_r_upperarm").setCenter(new double[] {-0.1649,-0.1051,1.17})
                                                        .addChild(new HAnimSegment("hanim_r_upperarm").setName("SEGMENT_FOR_r_upperarm").setDEF("hanim_SEGMENT_FOR_r_upperarm")
                                                          .addChild(new TouchSensor().setDescription("joint r_upperarm segment SEGMENT_FOR_r_upperarm"))
                                                          .addChild(new Transform().setTranslation(new double[] {-0.1649,-0.1051,1.17})
                                                            .addChild(new Shape().setUSE("JointShape")))
                                                          .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_upperarm").setName("SEGMENT_FOR_r_upperarm_tip").setDEF("hanim_SEGMENT_FOR_r_upperarm_tip")
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1649,-0.1051,1.17})
                                                              .addChild(new Shape().setUSE("SiteShape")))))
                                                        .addChild(new HAnimJoint("hanim_r_upperarm").setName("r_forearm").setDEF("hanim_r_forearm").setCenter(new double[] {-0.1819,-0.1075,0.9202})
                                                          .addChild(new HAnimSegment("hanim_r_forearm").setName("SEGMENT_FOR_r_forearm").setDEF("hanim_SEGMENT_FOR_r_forearm")
                                                            .addChild(new TouchSensor().setDescription("joint r_forearm segment SEGMENT_FOR_r_forearm"))
                                                            .addChild(new Transform().setTranslation(new double[] {-0.1819,-0.1075,0.9202})
                                                              .addChild(new Shape().setUSE("JointShape")))
                                                            .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_forearm").setName("SEGMENT_FOR_r_forearm_tip").setDEF("hanim_SEGMENT_FOR_r_forearm_tip")
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1819,-0.1075,0.9202})
                                                                .addChild(new Shape().setUSE("SiteShape")))))
                                                          .addChild(new HAnimJoint("hanim_r_forearm").setName("r_carpal").setDEF("hanim_r_carpal").setCenter(new double[] {-0.1818,-0.1069,0.7157})
                                                            .addChild(new HAnimSegment("hanim_r_carpal").setName("SEGMENT_FOR_r_carpal").setDEF("hanim_SEGMENT_FOR_r_carpal")
                                                              .addChild(new TouchSensor().setDescription("joint r_carpal segment SEGMENT_FOR_r_carpal"))
                                                              .addChild(new Transform().setTranslation(new double[] {-0.1818,-0.1069,0.7157})
                                                                .addChild(new Shape().setUSE("JointShape")))
                                                              .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal").setName("SEGMENT_FOR_r_carpal_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_tip")
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1818,-0.1069,0.7157})
                                                                  .addChild(new Shape().setUSE("SiteShape")))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_trapezium").setDEF("hanim_r_trapezium").setCenter(new double[] {-0.1811,-0.0826,0.6975})
                                                              .addChild(new HAnimSegment("hanim_r_trapezium").setName("SEGMENT_FOR_r_trapezium").setDEF("hanim_SEGMENT_FOR_r_trapezium")
                                                                .addChild(new TouchSensor().setDescription("joint r_trapezium segment SEGMENT_FOR_r_trapezium"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0826,0.6975})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezium").setName("SEGMENT_FOR_r_trapezium_tip").setDEF("hanim_SEGMENT_FOR_r_trapezium_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0826,0.6975})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezium").setName("r_metacarpal_1").setDEF("hanim_r_metacarpal_1").setCenter(new double[] {-0.1803,-0.0759,0.684})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_1").setName("SEGMENT_FOR_r_metacarpal_1").setDEF("hanim_SEGMENT_FOR_r_metacarpal_1")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1803,-0.0759,0.684})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_1").setName("SEGMENT_FOR_r_metacarpal_1_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_1_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1803,-0.0759,0.684})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_1").setName("r_carpal_proximal_phalanx_1").setDEF("hanim_r_carpal_proximal_phalanx_1").setCenter(new double[] {-0.1808,-0.0661,0.6642})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1808,-0.0661,0.6642})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1808,-0.0661,0.6642})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_1").setName("r_carpal_distal_phalanx_1").setDEF("hanim_r_carpal_distal_phalanx_1").setCenter(new double[] {-0.1825,-0.0522,0.6455})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_1").setName("SEGMENT_FOR_r_carpal_distal_phalanx_1").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1825,-0.0522,0.6455})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1").setName("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1825,-0.0522,0.6455})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_trapezoid").setDEF("hanim_r_trapezoid").setCenter(new double[] {-0.1811,-0.0935,0.6984})
                                                              .addChild(new HAnimSegment("hanim_r_trapezoid").setName("SEGMENT_FOR_r_trapezoid").setDEF("hanim_SEGMENT_FOR_r_trapezoid")
                                                                .addChild(new TouchSensor().setDescription("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0935,0.6984})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_trapezoid").setName("SEGMENT_FOR_r_trapezoid_tip").setDEF("hanim_SEGMENT_FOR_r_trapezoid_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0935,0.6984})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_trapezoid").setName("r_metacarpal_2").setDEF("hanim_r_metacarpal_2").setCenter(new double[] {-0.1811,-0.0922,0.679})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_2").setName("SEGMENT_FOR_r_metacarpal_2").setDEF("hanim_SEGMENT_FOR_r_metacarpal_2")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0922,0.679})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_2").setName("SEGMENT_FOR_r_metacarpal_2_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_2_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1811,-0.0922,0.679})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_2").setName("r_carpal_proximal_phalanx_2").setDEF("hanim_r_carpal_proximal_phalanx_2").setCenter(new double[] {-0.1835,-0.0868,0.6286})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.0868,0.6286})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.0868,0.6286})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_2").setName("r_carpal_middle_phalanx_2").setDEF("hanim_r_carpal_middle_phalanx_2").setCenter(new double[] {-0.1815,-0.0877,0.5983})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_2").setName("SEGMENT_FOR_r_carpal_middle_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.0877,0.5983})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2").setName("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.0877,0.5983})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_2").setName("r_carpal_distal_phalanx_2").setDEF("hanim_r_carpal_distal_phalanx_2").setCenter(new double[] {-0.1805,-0.0885,0.5731})
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_2").setName("SEGMENT_FOR_r_carpal_distal_phalanx_2").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2")
                                                                        .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2"))
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.0885,0.5731})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2").setName("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.0885,0.5731})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_capitate").setDEF("hanim_r_capitate").setCenter(new double[] {-0.1809,-0.1067,0.7})
                                                              .addChild(new HAnimSegment("hanim_r_capitate").setName("SEGMENT_FOR_r_capitate").setDEF("hanim_SEGMENT_FOR_r_capitate")
                                                                .addChild(new TouchSensor().setDescription("joint r_capitate segment SEGMENT_FOR_r_capitate"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1067,0.7})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_capitate").setName("SEGMENT_FOR_r_capitate_tip").setDEF("hanim_SEGMENT_FOR_r_capitate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1067,0.7})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_capitate").setName("r_metacarpal_3").setDEF("hanim_r_metacarpal_3").setCenter(new double[] {-0.1809,-0.1081,0.6772})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_3").setName("SEGMENT_FOR_r_metacarpal_3").setDEF("hanim_SEGMENT_FOR_r_metacarpal_3")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1081,0.6772})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_3").setName("SEGMENT_FOR_r_metacarpal_3_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_3_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1081,0.6772})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_3").setName("r_carpal_proximal_phalanx_3").setDEF("hanim_r_carpal_proximal_phalanx_3").setCenter(new double[] {-0.1835,-0.1058,0.6264})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1058,0.6264})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1058,0.6264})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_3").setName("r_carpal_middle_phalanx_3").setDEF("hanim_r_carpal_middle_phalanx_3").setCenter(new double[] {-0.1815,-0.1054,0.5947})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_3").setName("SEGMENT_FOR_r_carpal_middle_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1054,0.5947})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3").setName("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1054,0.5947})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_3").setName("r_carpal_distal_phalanx_3").setDEF("hanim_r_carpal_distal_phalanx_3").setCenter(new double[] {-0.1805,-0.1056,0.5668})
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_3").setName("SEGMENT_FOR_r_carpal_distal_phalanx_3").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3")
                                                                        .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3"))
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1056,0.5668})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3").setName("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1056,0.5668})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))
                                                            .addChild(new HAnimJoint("hanim_r_carpal").setName("r_hamate").setDEF("hanim_r_hamate").setCenter(new double[] {-0.1809,-0.1276,0.6973})
                                                              .addChild(new HAnimSegment("hanim_r_hamate").setName("SEGMENT_FOR_r_hamate").setDEF("hanim_SEGMENT_FOR_r_hamate")
                                                                .addChild(new TouchSensor().setDescription("joint r_hamate segment SEGMENT_FOR_r_hamate"))
                                                                .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1276,0.6973})
                                                                  .addChild(new Shape().setUSE("JointShape")))
                                                                .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_hamate").setName("SEGMENT_FOR_r_hamate_tip").setDEF("hanim_SEGMENT_FOR_r_hamate_tip")
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1276,0.6973})
                                                                    .addChild(new Shape().setUSE("SiteShape")))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName("r_metacarpal_4").setDEF("hanim_r_metacarpal_4").setCenter(new double[] {-0.1809,-0.1218,0.6777})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_4").setName("SEGMENT_FOR_r_metacarpal_4").setDEF("hanim_SEGMENT_FOR_r_metacarpal_4")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1218,0.6777})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_4").setName("SEGMENT_FOR_r_metacarpal_4_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_4_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1809,-0.1218,0.6777})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_4").setName("r_carpal_proximal_phalanx_4").setDEF("hanim_r_carpal_proximal_phalanx_4").setCenter(new double[] {-0.1835,-0.1233,0.6255})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1233,0.6255})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1835,-0.1233,0.6255})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_4").setName("r_carpal_middle_phalanx_4").setDEF("hanim_r_carpal_middle_phalanx_4").setCenter(new double[] {-0.1815,-0.1225,0.598})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_4").setName("SEGMENT_FOR_r_carpal_middle_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1225,0.598})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4").setName("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.1225,0.598})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_4").setName("r_carpal_distal_phalanx_4").setDEF("hanim_r_carpal_distal_phalanx_4").setCenter(new double[] {-0.1805,-0.1217,0.5722})
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_4").setName("SEGMENT_FOR_r_carpal_distal_phalanx_4").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4")
                                                                        .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4"))
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1217,0.5722})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4").setName("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {-0.1805,-0.1217,0.5722})
                                                                            .addChild(new Shape().setUSE("SiteShape")))))))))
                                                              .addChild(new HAnimJoint("hanim_r_hamate").setName("r_metacarpal_5").setDEF("hanim_r_metacarpal_5").setCenter(new double[] {-0.1814,-0.1347,0.6797})
                                                                .addChild(new HAnimSegment("hanim_r_metacarpal_5").setName("SEGMENT_FOR_r_metacarpal_5").setDEF("hanim_SEGMENT_FOR_r_metacarpal_5")
                                                                  .addChild(new TouchSensor().setDescription("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5"))
                                                                  .addChild(new Transform().setTranslation(new double[] {-0.1814,-0.1347,0.6797})
                                                                    .addChild(new Shape().setUSE("JointShape")))
                                                                  .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_metacarpal_5").setName("SEGMENT_FOR_r_metacarpal_5_tip").setDEF("hanim_SEGMENT_FOR_r_metacarpal_5_tip")
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1814,-0.1347,0.6797})
                                                                      .addChild(new Shape().setUSE("SiteShape")))))
                                                                .addChild(new HAnimJoint("hanim_r_metacarpal_5").setName("r_carpal_proximal_phalanx_5").setDEF("hanim_r_carpal_proximal_phalanx_5").setCenter(new double[] {-0.1832,-0.1389,0.6295})
                                                                  .addChild(new HAnimSegment("hanim_r_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5")
                                                                    .addChild(new TouchSensor().setDescription("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5"))
                                                                    .addChild(new Transform().setTranslation(new double[] {-0.1832,-0.1389,0.6295})
                                                                      .addChild(new Shape().setUSE("JointShape")))
                                                                    .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5").setName("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip")
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1832,-0.1389,0.6295})
                                                                        .addChild(new Shape().setUSE("SiteShape")))))
                                                                  .addChild(new HAnimJoint("hanim_r_carpal_proximal_phalanx_5").setName("r_carpal_middle_phalanx_5").setDEF("hanim_r_carpal_middle_phalanx_5").setCenter(new double[] {-0.1815,-0.139,0.6124})
                                                                    .addChild(new HAnimSegment("hanim_r_carpal_middle_phalanx_5").setName("SEGMENT_FOR_r_carpal_middle_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5")
                                                                      .addChild(new TouchSensor().setDescription("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5"))
                                                                      .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.139,0.6124})
                                                                        .addChild(new Shape().setUSE("JointShape")))
                                                                      .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5").setName("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip")
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1815,-0.139,0.6124})
                                                                          .addChild(new Shape().setUSE("SiteShape")))))
                                                                    .addChild(new HAnimJoint("hanim_r_carpal_middle_phalanx_5").setName("r_carpal_distal_phalanx_5").setDEF("hanim_r_carpal_distal_phalanx_5").setCenter(new double[] {-0.1806,-0.1388,0.5938})
                                                                      .addChild(new HAnimSegment("hanim_r_carpal_distal_phalanx_5").setName("SEGMENT_FOR_r_carpal_distal_phalanx_5").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5")
                                                                        .addChild(new TouchSensor().setDescription("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5"))
                                                                        .addChild(new Transform().setTranslation(new double[] {-0.1806,-0.1388,0.5938})
                                                                          .addChild(new Shape().setUSE("JointShape")))
                                                                        .addChild(new HAnimSite("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5").setName("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip").setDEF("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip")
                                                                          .addChild(new Transform().setTranslation(new double[] {-0.1806,-0.1388,0.5938})
                                                                            .addChild(new Shape().setUSE("SiteShape"))))))))))))))))))))))))))))))))))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_sacrum"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_pelvis"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_thigh"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_calf"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_talus"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_navicular"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneiform_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsal_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneiform_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsal_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_middle_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_cuneiform_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsal_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_middle_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_calcaneus"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_cuboid"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsal_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_middle_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metatarsal_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_proximal_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_middle_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_tarsal_distal_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_thigh"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_calf"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_talus"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_navicular"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneiform_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsal_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneiform_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsal_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_middle_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_cuneiform_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsal_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_middle_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_calcaneus"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_cuboid"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsal_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_middle_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metatarsal_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_proximal_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_middle_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_tarsal_distal_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t12"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t11"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t10"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t9"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t8"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t7"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t6"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_t1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_c7"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_c6"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_c5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_c4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_c3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_c2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_c1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_skull"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_eyelid"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_eyelid"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_eyeball"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_eyeball"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_eyebrow"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_eyebrow"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_jaw"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_clavicle"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_scapula"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_upperarm"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_forearm"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_trapezium"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpal_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_trapezoid"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpal_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_middle_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_capitate"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpal_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_middle_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_hamate"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpal_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_middle_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_metacarpal_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_proximal_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_middle_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_l_carpal_distal_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_clavicle"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_scapula"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_upperarm"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_forearm"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_trapezium"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpal_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_phalanx_1"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_trapezoid"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpal_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_middle_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_phalanx_2"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_capitate"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpal_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_middle_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_phalanx_3"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_hamate"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpal_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_middle_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_phalanx_4"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_metacarpal_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_proximal_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_middle_phalanx_5"))
            .addJoints(((HAnimJoint)new HAnimJoint("hanim_humanoid").setContainerFieldOverride("joints")).setUSE("hanim_r_carpal_distal_phalanx_5"))))
        .addChild(new TimeSensor().setDEF("Armature_Clock").setCycleInterval(10.416666666666666).setLoop(true))
        .addChild(new ProximitySensor().setDEF("Armature_Close").setSize(new double[] {1000000,1000000,1000000}))
        .addChild(new ROUTE().setFromField("enterTime").setFromNode("Armature_Close").setToField("startTime").setToNode("Armature_Clock"))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_sacrum").setKey(new MFFloat2().getArray()).setKeyValue(new MFRotation3().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_pelvis").setKey(new MFFloat4().getArray()).setKeyValue(new MFRotation5().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_thigh").setKey(new MFFloat6().getArray()).setKeyValue(new MFRotation7().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_calf").setKey(new MFFloat8().getArray()).setKeyValue(new MFRotation9().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_talus").setKey(new MFFloat10().getArray()).setKeyValue(new MFRotation11().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_navicular").setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuneiform_1").setKey(new MFFloat14().getArray()).setKeyValue(new MFRotation15().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_1").setKey(new MFFloat16().getArray()).setKeyValue(new MFRotation17().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_1").setKey(new MFFloat18().getArray()).setKeyValue(new MFRotation19().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_1").setKey(new MFFloat20().getArray()).setKeyValue(new MFRotation21().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuneiform_2").setKey(new MFFloat22().getArray()).setKeyValue(new MFRotation23().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_2").setKey(new MFFloat24().getArray()).setKeyValue(new MFRotation25().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_2").setKey(new MFFloat26().getArray()).setKeyValue(new MFRotation27().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_2").setKey(new MFFloat28().getArray()).setKeyValue(new MFRotation29().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_2").setKey(new MFFloat30().getArray()).setKeyValue(new MFRotation31().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuneiform_3").setKey(new MFFloat32().getArray()).setKeyValue(new MFRotation33().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_3").setKey(new MFFloat34().getArray()).setKeyValue(new MFRotation35().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_3").setKey(new MFFloat36().getArray()).setKeyValue(new MFRotation37().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_3").setKey(new MFFloat38().getArray()).setKeyValue(new MFRotation39().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_3").setKey(new MFFloat40().getArray()).setKeyValue(new MFRotation41().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_calcaneus").setKey(new MFFloat42().getArray()).setKeyValue(new MFRotation43().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_cuboid").setKey(new MFFloat44().getArray()).setKeyValue(new MFRotation45().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_4").setKey(new MFFloat46().getArray()).setKeyValue(new MFRotation47().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_4").setKey(new MFFloat48().getArray()).setKeyValue(new MFRotation49().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_4").setKey(new MFFloat50().getArray()).setKeyValue(new MFRotation51().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_4").setKey(new MFFloat52().getArray()).setKeyValue(new MFRotation53().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metatarsal_5").setKey(new MFFloat54().getArray()).setKeyValue(new MFRotation55().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_proximal_phalanx_5").setKey(new MFFloat56().getArray()).setKeyValue(new MFRotation57().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_middle_phalanx_5").setKey(new MFFloat58().getArray()).setKeyValue(new MFRotation59().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_tarsal_distal_phalanx_5").setKey(new MFFloat60().getArray()).setKeyValue(new MFRotation61().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_thigh").setKey(new MFFloat62().getArray()).setKeyValue(new MFRotation63().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_calf").setKey(new MFFloat64().getArray()).setKeyValue(new MFRotation65().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_talus").setKey(new MFFloat66().getArray()).setKeyValue(new MFRotation67().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_navicular").setKey(new MFFloat68().getArray()).setKeyValue(new MFRotation69().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuneiform_1").setKey(new MFFloat70().getArray()).setKeyValue(new MFRotation71().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_1").setKey(new MFFloat72().getArray()).setKeyValue(new MFRotation73().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_1").setKey(new MFFloat74().getArray()).setKeyValue(new MFRotation75().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_1").setKey(new MFFloat76().getArray()).setKeyValue(new MFRotation77().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuneiform_2").setKey(new MFFloat78().getArray()).setKeyValue(new MFRotation79().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_2").setKey(new MFFloat80().getArray()).setKeyValue(new MFRotation81().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_2").setKey(new MFFloat82().getArray()).setKeyValue(new MFRotation83().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_2").setKey(new MFFloat84().getArray()).setKeyValue(new MFRotation85().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_2").setKey(new MFFloat86().getArray()).setKeyValue(new MFRotation87().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuneiform_3").setKey(new MFFloat88().getArray()).setKeyValue(new MFRotation89().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_3").setKey(new MFFloat90().getArray()).setKeyValue(new MFRotation91().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_3").setKey(new MFFloat92().getArray()).setKeyValue(new MFRotation93().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_3").setKey(new MFFloat94().getArray()).setKeyValue(new MFRotation95().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_3").setKey(new MFFloat96().getArray()).setKeyValue(new MFRotation97().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_calcaneus").setKey(new MFFloat98().getArray()).setKeyValue(new MFRotation99().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_cuboid").setKey(new MFFloat100().getArray()).setKeyValue(new MFRotation101().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_4").setKey(new MFFloat102().getArray()).setKeyValue(new MFRotation103().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_4").setKey(new MFFloat104().getArray()).setKeyValue(new MFRotation105().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_4").setKey(new MFFloat106().getArray()).setKeyValue(new MFRotation107().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_4").setKey(new MFFloat108().getArray()).setKeyValue(new MFRotation109().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metatarsal_5").setKey(new MFFloat110().getArray()).setKeyValue(new MFRotation111().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_proximal_phalanx_5").setKey(new MFFloat112().getArray()).setKeyValue(new MFRotation113().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_middle_phalanx_5").setKey(new MFFloat114().getArray()).setKeyValue(new MFRotation115().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_tarsal_distal_phalanx_5").setKey(new MFFloat116().getArray()).setKeyValue(new MFRotation117().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l5").setKey(new MFFloat118().getArray()).setKeyValue(new MFRotation119().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l4").setKey(new MFFloat120().getArray()).setKeyValue(new MFRotation121().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l3").setKey(new MFFloat122().getArray()).setKeyValue(new MFRotation123().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l2").setKey(new MFFloat124().getArray()).setKeyValue(new MFRotation125().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l1").setKey(new MFFloat126().getArray()).setKeyValue(new MFRotation127().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t12").setKey(new MFFloat128().getArray()).setKeyValue(new MFRotation129().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t11").setKey(new MFFloat130().getArray()).setKeyValue(new MFRotation131().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t10").setKey(new MFFloat132().getArray()).setKeyValue(new MFRotation133().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t9").setKey(new MFFloat134().getArray()).setKeyValue(new MFRotation135().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t8").setKey(new MFFloat136().getArray()).setKeyValue(new MFRotation137().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t7").setKey(new MFFloat138().getArray()).setKeyValue(new MFRotation139().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t6").setKey(new MFFloat140().getArray()).setKeyValue(new MFRotation141().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t5").setKey(new MFFloat142().getArray()).setKeyValue(new MFRotation143().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t4").setKey(new MFFloat144().getArray()).setKeyValue(new MFRotation145().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t3").setKey(new MFFloat146().getArray()).setKeyValue(new MFRotation147().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t2").setKey(new MFFloat148().getArray()).setKeyValue(new MFRotation149().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_t1").setKey(new MFFloat150().getArray()).setKeyValue(new MFRotation151().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c7").setKey(new MFFloat152().getArray()).setKeyValue(new MFRotation153().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c6").setKey(new MFFloat154().getArray()).setKeyValue(new MFRotation155().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c5").setKey(new MFFloat156().getArray()).setKeyValue(new MFRotation157().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c4").setKey(new MFFloat158().getArray()).setKeyValue(new MFRotation159().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c3").setKey(new MFFloat160().getArray()).setKeyValue(new MFRotation161().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c2").setKey(new MFFloat162().getArray()).setKeyValue(new MFRotation163().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_c1").setKey(new MFFloat164().getArray()).setKeyValue(new MFRotation165().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_skull").setKey(new MFFloat166().getArray()).setKeyValue(new MFRotation167().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_eyelid").setKey(new MFFloat168().getArray()).setKeyValue(new MFRotation169().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_eyelid").setKey(new MFFloat170().getArray()).setKeyValue(new MFRotation171().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_eyeball").setKey(new MFFloat172().getArray()).setKeyValue(new MFRotation173().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_eyeball").setKey(new MFFloat174().getArray()).setKeyValue(new MFRotation175().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_eyebrow").setKey(new MFFloat176().getArray()).setKeyValue(new MFRotation177().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_eyebrow").setKey(new MFFloat178().getArray()).setKeyValue(new MFRotation179().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_jaw").setKey(new MFFloat180().getArray()).setKeyValue(new MFRotation181().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_clavicle").setKey(new MFFloat182().getArray()).setKeyValue(new MFRotation183().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_scapula").setKey(new MFFloat184().getArray()).setKeyValue(new MFRotation185().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_upperarm").setKey(new MFFloat186().getArray()).setKeyValue(new MFRotation187().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_forearm").setKey(new MFFloat188().getArray()).setKeyValue(new MFRotation189().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal").setKey(new MFFloat190().getArray()).setKeyValue(new MFRotation191().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_trapezium").setKey(new MFFloat192().getArray()).setKeyValue(new MFRotation193().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_1").setKey(new MFFloat194().getArray()).setKeyValue(new MFRotation195().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_1").setKey(new MFFloat196().getArray()).setKeyValue(new MFRotation197().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_1").setKey(new MFFloat198().getArray()).setKeyValue(new MFRotation199().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_trapezoid").setKey(new MFFloat200().getArray()).setKeyValue(new MFRotation201().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_2").setKey(new MFFloat202().getArray()).setKeyValue(new MFRotation203().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_2").setKey(new MFFloat204().getArray()).setKeyValue(new MFRotation205().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_2").setKey(new MFFloat206().getArray()).setKeyValue(new MFRotation207().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_2").setKey(new MFFloat208().getArray()).setKeyValue(new MFRotation209().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_capitate").setKey(new MFFloat210().getArray()).setKeyValue(new MFRotation211().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_3").setKey(new MFFloat212().getArray()).setKeyValue(new MFRotation213().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_3").setKey(new MFFloat214().getArray()).setKeyValue(new MFRotation215().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_3").setKey(new MFFloat216().getArray()).setKeyValue(new MFRotation217().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_3").setKey(new MFFloat218().getArray()).setKeyValue(new MFRotation219().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_hamate").setKey(new MFFloat220().getArray()).setKeyValue(new MFRotation221().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_4").setKey(new MFFloat222().getArray()).setKeyValue(new MFRotation223().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_4").setKey(new MFFloat224().getArray()).setKeyValue(new MFRotation225().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_4").setKey(new MFFloat226().getArray()).setKeyValue(new MFRotation227().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_4").setKey(new MFFloat228().getArray()).setKeyValue(new MFRotation229().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_metacarpal_5").setKey(new MFFloat230().getArray()).setKeyValue(new MFRotation231().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_proximal_phalanx_5").setKey(new MFFloat232().getArray()).setKeyValue(new MFRotation233().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_middle_phalanx_5").setKey(new MFFloat234().getArray()).setKeyValue(new MFRotation235().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_l_carpal_distal_phalanx_5").setKey(new MFFloat236().getArray()).setKeyValue(new MFRotation237().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_clavicle").setKey(new MFFloat238().getArray()).setKeyValue(new MFRotation239().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_scapula").setKey(new MFFloat240().getArray()).setKeyValue(new MFRotation241().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_upperarm").setKey(new MFFloat242().getArray()).setKeyValue(new MFRotation243().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_forearm").setKey(new MFFloat244().getArray()).setKeyValue(new MFRotation245().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal").setKey(new MFFloat246().getArray()).setKeyValue(new MFRotation247().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_trapezium").setKey(new MFFloat248().getArray()).setKeyValue(new MFRotation249().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_1").setKey(new MFFloat250().getArray()).setKeyValue(new MFRotation251().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_1").setKey(new MFFloat252().getArray()).setKeyValue(new MFRotation253().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_1").setKey(new MFFloat254().getArray()).setKeyValue(new MFRotation255().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_trapezoid").setKey(new MFFloat256().getArray()).setKeyValue(new MFRotation257().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_2").setKey(new MFFloat258().getArray()).setKeyValue(new MFRotation259().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_2").setKey(new MFFloat260().getArray()).setKeyValue(new MFRotation261().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_2").setKey(new MFFloat262().getArray()).setKeyValue(new MFRotation263().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_2").setKey(new MFFloat264().getArray()).setKeyValue(new MFRotation265().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_capitate").setKey(new MFFloat266().getArray()).setKeyValue(new MFRotation267().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_3").setKey(new MFFloat268().getArray()).setKeyValue(new MFRotation269().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_3").setKey(new MFFloat270().getArray()).setKeyValue(new MFRotation271().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_3").setKey(new MFFloat272().getArray()).setKeyValue(new MFRotation273().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_3").setKey(new MFFloat274().getArray()).setKeyValue(new MFRotation275().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_hamate").setKey(new MFFloat276().getArray()).setKeyValue(new MFRotation277().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_4").setKey(new MFFloat278().getArray()).setKeyValue(new MFRotation279().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_4").setKey(new MFFloat280().getArray()).setKeyValue(new MFRotation281().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_4").setKey(new MFFloat282().getArray()).setKeyValue(new MFRotation283().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_4").setKey(new MFFloat284().getArray()).setKeyValue(new MFRotation285().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_metacarpal_5").setKey(new MFFloat286().getArray()).setKeyValue(new MFRotation287().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_proximal_phalanx_5").setKey(new MFFloat288().getArray()).setKeyValue(new MFRotation289().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_middle_phalanx_5").setKey(new MFFloat290().getArray()).setKeyValue(new MFRotation291().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Armature_OI_r_carpal_distal_phalanx_5").setKey(new MFFloat292().getArray()).setKeyValue(new MFRotation293().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_sacrum"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_sacrum").setToField("rotation").setToNode("hanim_sacrum"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_pelvis"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_pelvis").setToField("rotation").setToNode("hanim_pelvis"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_thigh"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_thigh").setToField("rotation").setToNode("hanim_l_thigh"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_calf"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_calf").setToField("rotation").setToNode("hanim_l_calf"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_talus"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_talus").setToField("rotation").setToNode("hanim_l_talus"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_navicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_navicular").setToField("rotation").setToNode("hanim_l_navicular"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_cuneiform_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_cuneiform_1").setToField("rotation").setToNode("hanim_l_cuneiform_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metatarsal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metatarsal_1").setToField("rotation").setToNode("hanim_l_metatarsal_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_proximal_phalanx_1").setToField("rotation").setToNode("hanim_l_tarsal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_distal_phalanx_1").setToField("rotation").setToNode("hanim_l_tarsal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_cuneiform_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_cuneiform_2").setToField("rotation").setToNode("hanim_l_cuneiform_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metatarsal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metatarsal_2").setToField("rotation").setToNode("hanim_l_metatarsal_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_proximal_phalanx_2").setToField("rotation").setToNode("hanim_l_tarsal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_middle_phalanx_2").setToField("rotation").setToNode("hanim_l_tarsal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_distal_phalanx_2").setToField("rotation").setToNode("hanim_l_tarsal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_cuneiform_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_cuneiform_3").setToField("rotation").setToNode("hanim_l_cuneiform_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metatarsal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metatarsal_3").setToField("rotation").setToNode("hanim_l_metatarsal_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_proximal_phalanx_3").setToField("rotation").setToNode("hanim_l_tarsal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_middle_phalanx_3").setToField("rotation").setToNode("hanim_l_tarsal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_distal_phalanx_3").setToField("rotation").setToNode("hanim_l_tarsal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_calcaneus"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_calcaneus").setToField("rotation").setToNode("hanim_l_calcaneus"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_cuboid"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_cuboid").setToField("rotation").setToNode("hanim_l_cuboid"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metatarsal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metatarsal_4").setToField("rotation").setToNode("hanim_l_metatarsal_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_proximal_phalanx_4").setToField("rotation").setToNode("hanim_l_tarsal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_middle_phalanx_4").setToField("rotation").setToNode("hanim_l_tarsal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_distal_phalanx_4").setToField("rotation").setToNode("hanim_l_tarsal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metatarsal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metatarsal_5").setToField("rotation").setToNode("hanim_l_metatarsal_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_proximal_phalanx_5").setToField("rotation").setToNode("hanim_l_tarsal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_middle_phalanx_5").setToField("rotation").setToNode("hanim_l_tarsal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_tarsal_distal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_tarsal_distal_phalanx_5").setToField("rotation").setToNode("hanim_l_tarsal_distal_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_thigh"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_thigh").setToField("rotation").setToNode("hanim_r_thigh"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_calf"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_calf").setToField("rotation").setToNode("hanim_r_calf"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_talus"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_talus").setToField("rotation").setToNode("hanim_r_talus"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_navicular"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_navicular").setToField("rotation").setToNode("hanim_r_navicular"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_cuneiform_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_cuneiform_1").setToField("rotation").setToNode("hanim_r_cuneiform_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metatarsal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metatarsal_1").setToField("rotation").setToNode("hanim_r_metatarsal_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_proximal_phalanx_1").setToField("rotation").setToNode("hanim_r_tarsal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_distal_phalanx_1").setToField("rotation").setToNode("hanim_r_tarsal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_cuneiform_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_cuneiform_2").setToField("rotation").setToNode("hanim_r_cuneiform_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metatarsal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metatarsal_2").setToField("rotation").setToNode("hanim_r_metatarsal_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_proximal_phalanx_2").setToField("rotation").setToNode("hanim_r_tarsal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_middle_phalanx_2").setToField("rotation").setToNode("hanim_r_tarsal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_distal_phalanx_2").setToField("rotation").setToNode("hanim_r_tarsal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_cuneiform_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_cuneiform_3").setToField("rotation").setToNode("hanim_r_cuneiform_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metatarsal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metatarsal_3").setToField("rotation").setToNode("hanim_r_metatarsal_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_proximal_phalanx_3").setToField("rotation").setToNode("hanim_r_tarsal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_middle_phalanx_3").setToField("rotation").setToNode("hanim_r_tarsal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_distal_phalanx_3").setToField("rotation").setToNode("hanim_r_tarsal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_calcaneus"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_calcaneus").setToField("rotation").setToNode("hanim_r_calcaneus"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_cuboid"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_cuboid").setToField("rotation").setToNode("hanim_r_cuboid"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metatarsal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metatarsal_4").setToField("rotation").setToNode("hanim_r_metatarsal_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_proximal_phalanx_4").setToField("rotation").setToNode("hanim_r_tarsal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_middle_phalanx_4").setToField("rotation").setToNode("hanim_r_tarsal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_distal_phalanx_4").setToField("rotation").setToNode("hanim_r_tarsal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metatarsal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metatarsal_5").setToField("rotation").setToNode("hanim_r_metatarsal_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_proximal_phalanx_5").setToField("rotation").setToNode("hanim_r_tarsal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_middle_phalanx_5").setToField("rotation").setToNode("hanim_r_tarsal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_tarsal_distal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_tarsal_distal_phalanx_5").setToField("rotation").setToNode("hanim_r_tarsal_distal_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l5").setToField("rotation").setToNode("hanim_l5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l4").setToField("rotation").setToNode("hanim_l4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l3").setToField("rotation").setToNode("hanim_l3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l2").setToField("rotation").setToNode("hanim_l2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l1").setToField("rotation").setToNode("hanim_l1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t12"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t12").setToField("rotation").setToNode("hanim_t12"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t11"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t11").setToField("rotation").setToNode("hanim_t11"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t10"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t10").setToField("rotation").setToNode("hanim_t10"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t9"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t9").setToField("rotation").setToNode("hanim_t9"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t8"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t8").setToField("rotation").setToNode("hanim_t8"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t7"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t7").setToField("rotation").setToNode("hanim_t7"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t6"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t6").setToField("rotation").setToNode("hanim_t6"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t5").setToField("rotation").setToNode("hanim_t5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t4").setToField("rotation").setToNode("hanim_t4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t3").setToField("rotation").setToNode("hanim_t3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t2").setToField("rotation").setToNode("hanim_t2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_t1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_t1").setToField("rotation").setToNode("hanim_t1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_c7"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_c7").setToField("rotation").setToNode("hanim_c7"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_c6"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_c6").setToField("rotation").setToNode("hanim_c6"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_c5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_c5").setToField("rotation").setToNode("hanim_c5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_c4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_c4").setToField("rotation").setToNode("hanim_c4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_c3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_c3").setToField("rotation").setToNode("hanim_c3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_c2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_c2").setToField("rotation").setToNode("hanim_c2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_c1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_c1").setToField("rotation").setToNode("hanim_c1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_skull"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_skull").setToField("rotation").setToNode("hanim_skull"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_eyelid"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_eyelid").setToField("rotation").setToNode("hanim_l_eyelid"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_eyelid"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_eyelid").setToField("rotation").setToNode("hanim_r_eyelid"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_eyeball"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_eyeball").setToField("rotation").setToNode("hanim_l_eyeball"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_eyeball"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_eyeball").setToField("rotation").setToNode("hanim_r_eyeball"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_eyebrow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_eyebrow").setToField("rotation").setToNode("hanim_l_eyebrow"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_eyebrow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_eyebrow").setToField("rotation").setToNode("hanim_r_eyebrow"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_jaw"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_jaw").setToField("rotation").setToNode("hanim_jaw"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_clavicle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_clavicle").setToField("rotation").setToNode("hanim_l_clavicle"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_scapula"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_scapula").setToField("rotation").setToNode("hanim_l_scapula"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_upperarm"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_upperarm").setToField("rotation").setToNode("hanim_l_upperarm"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_forearm"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_forearm").setToField("rotation").setToNode("hanim_l_forearm"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal").setToField("rotation").setToNode("hanim_l_carpal"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_trapezium"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_trapezium").setToField("rotation").setToNode("hanim_l_trapezium"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metacarpal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metacarpal_1").setToField("rotation").setToNode("hanim_l_metacarpal_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_proximal_phalanx_1").setToField("rotation").setToNode("hanim_l_carpal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_distal_phalanx_1").setToField("rotation").setToNode("hanim_l_carpal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_trapezoid"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_trapezoid").setToField("rotation").setToNode("hanim_l_trapezoid"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metacarpal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metacarpal_2").setToField("rotation").setToNode("hanim_l_metacarpal_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_proximal_phalanx_2").setToField("rotation").setToNode("hanim_l_carpal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_middle_phalanx_2").setToField("rotation").setToNode("hanim_l_carpal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_distal_phalanx_2").setToField("rotation").setToNode("hanim_l_carpal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_capitate"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_capitate").setToField("rotation").setToNode("hanim_l_capitate"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metacarpal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metacarpal_3").setToField("rotation").setToNode("hanim_l_metacarpal_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_proximal_phalanx_3").setToField("rotation").setToNode("hanim_l_carpal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_middle_phalanx_3").setToField("rotation").setToNode("hanim_l_carpal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_distal_phalanx_3").setToField("rotation").setToNode("hanim_l_carpal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_hamate"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_hamate").setToField("rotation").setToNode("hanim_l_hamate"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metacarpal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metacarpal_4").setToField("rotation").setToNode("hanim_l_metacarpal_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_proximal_phalanx_4").setToField("rotation").setToNode("hanim_l_carpal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_middle_phalanx_4").setToField("rotation").setToNode("hanim_l_carpal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_distal_phalanx_4").setToField("rotation").setToNode("hanim_l_carpal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_metacarpal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_metacarpal_5").setToField("rotation").setToNode("hanim_l_metacarpal_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_proximal_phalanx_5").setToField("rotation").setToNode("hanim_l_carpal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_middle_phalanx_5").setToField("rotation").setToNode("hanim_l_carpal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_l_carpal_distal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_l_carpal_distal_phalanx_5").setToField("rotation").setToNode("hanim_l_carpal_distal_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_clavicle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_clavicle").setToField("rotation").setToNode("hanim_r_clavicle"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_scapula"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_scapula").setToField("rotation").setToNode("hanim_r_scapula"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_upperarm"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_upperarm").setToField("rotation").setToNode("hanim_r_upperarm"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_forearm"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_forearm").setToField("rotation").setToNode("hanim_r_forearm"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal").setToField("rotation").setToNode("hanim_r_carpal"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_trapezium"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_trapezium").setToField("rotation").setToNode("hanim_r_trapezium"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metacarpal_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metacarpal_1").setToField("rotation").setToNode("hanim_r_metacarpal_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_proximal_phalanx_1").setToField("rotation").setToNode("hanim_r_carpal_proximal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_distal_phalanx_1").setToField("rotation").setToNode("hanim_r_carpal_distal_phalanx_1"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_trapezoid"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_trapezoid").setToField("rotation").setToNode("hanim_r_trapezoid"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metacarpal_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metacarpal_2").setToField("rotation").setToNode("hanim_r_metacarpal_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_proximal_phalanx_2").setToField("rotation").setToNode("hanim_r_carpal_proximal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_middle_phalanx_2").setToField("rotation").setToNode("hanim_r_carpal_middle_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_distal_phalanx_2").setToField("rotation").setToNode("hanim_r_carpal_distal_phalanx_2"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_capitate"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_capitate").setToField("rotation").setToNode("hanim_r_capitate"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metacarpal_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metacarpal_3").setToField("rotation").setToNode("hanim_r_metacarpal_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_proximal_phalanx_3").setToField("rotation").setToNode("hanim_r_carpal_proximal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_middle_phalanx_3").setToField("rotation").setToNode("hanim_r_carpal_middle_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_distal_phalanx_3").setToField("rotation").setToNode("hanim_r_carpal_distal_phalanx_3"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_hamate"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_hamate").setToField("rotation").setToNode("hanim_r_hamate"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metacarpal_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metacarpal_4").setToField("rotation").setToNode("hanim_r_metacarpal_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_proximal_phalanx_4").setToField("rotation").setToNode("hanim_r_carpal_proximal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_middle_phalanx_4").setToField("rotation").setToNode("hanim_r_carpal_middle_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_distal_phalanx_4").setToField("rotation").setToNode("hanim_r_carpal_distal_phalanx_4"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_metacarpal_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_metacarpal_5").setToField("rotation").setToNode("hanim_r_metacarpal_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_proximal_phalanx_5").setToField("rotation").setToNode("hanim_r_carpal_proximal_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_middle_phalanx_5").setToField("rotation").setToNode("hanim_r_carpal_middle_phalanx_5"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Armature_Clock").setToField("set_fraction").setToNode("Armature_OI_r_carpal_distal_phalanx_5"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Armature_OI_r_carpal_distal_phalanx_5").setToField("rotation").setToNode("hanim_r_carpal_distal_phalanx_5")))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.05087608844041824,0.05087608844041824,0.05087608844041824});
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.05087608844041824,0.05087608844041824,0.05087608844041824});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation3 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation5 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation7 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation9 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation11 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation13 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation15 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation17 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation19 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation21 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation23 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation25 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation27 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation29 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation31 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation33 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation35 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation37 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation39 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat40 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation41 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat42 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation43 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat44 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation45 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat46 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation47 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat48 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation49 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat50 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation51 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat52 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation53 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat54 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation55 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat56 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation57 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat58 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation59 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat60 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation61 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat62 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation63 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat64 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation65 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat66 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation67 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat68 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation69 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat70 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation71 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat72 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation73 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat74 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation75 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat76 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation77 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat78 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation79 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat80 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation81 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat82 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation83 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat84 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation85 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat86 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation87 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat88 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation89 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat90 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation91 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat92 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation93 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat94 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation95 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat96 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation97 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat98 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation99 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat100 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation101 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat102 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation103 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat104 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation105 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat106 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation107 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat108 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation109 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat110 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation111 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat112 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation113 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat114 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation115 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat116 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation117 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat118 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation119 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat120 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation121 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat122 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation123 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat124 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation125 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat126 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation127 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat128 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation129 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat130 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation131 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat132 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation133 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat134 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation135 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat136 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation137 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat138 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation139 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat140 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation141 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat142 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation143 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat144 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation145 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat146 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation147 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat148 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation149 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat150 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation151 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat152 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation153 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat154 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation155 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat156 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation157 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat158 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation159 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat160 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation161 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat162 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation163 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat164 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation165 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat166 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation167 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat168 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation169 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat170 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation171 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat172 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation173 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat174 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation175 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat176 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation177 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat178 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation179 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat180 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation181 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat182 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation183 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat184 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation185 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat186 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation187 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat188 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation189 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat190 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation191 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat192 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation193 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat194 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation195 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat196 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation197 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat198 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation199 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat200 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation201 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat202 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation203 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat204 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation205 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat206 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation207 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat208 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation209 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat210 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation211 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat212 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation213 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat214 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation215 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat216 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation217 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat218 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation219 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat220 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation221 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat222 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation223 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat224 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation225 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat226 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation227 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat228 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation229 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat230 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation231 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat232 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation233 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat234 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation235 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat236 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation237 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat238 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation239 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat240 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation241 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat242 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation243 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat244 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation245 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat246 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation247 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat248 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation249 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat250 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation251 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat252 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation253 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat254 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation255 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat256 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation257 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat258 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation259 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat260 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation261 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat262 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation263 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat264 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation265 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat266 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation267 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat268 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation269 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat270 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation271 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat272 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation273 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat274 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation275 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat276 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation277 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat278 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation279 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat280 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation281 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat282 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation283 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat284 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation285 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat286 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation287 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat288 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation289 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat290 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation291 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
private class MFFloat292 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFRotation293 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,0,0,0,0,0,0});
  }
}
}
